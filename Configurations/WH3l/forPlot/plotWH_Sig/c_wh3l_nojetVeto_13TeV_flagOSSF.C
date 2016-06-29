void c_wh3l_nojetVeto_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_nojetVeto_13TeV_flagOSSF/cc
//=========  (Wed Jun 29 01:34:00 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_nojetVeto_13TeV_flagOSSF = new TCanvas("ccwh3l_nojetVeto_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_nojetVeto_13TeV_flagOSSF->Range(-0.4,-21.5222,2.1,144.0332);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe211 = new TH1F("hframe211","",1000,0,2);
   hframe211->SetMinimum(0);
   hframe211->SetMaximum(135.7554);
   hframe211->SetDirectory(0);
   hframe211->SetStats(0);
   hframe211->SetLineStyle(0);
   hframe211->SetMarkerStyle(20);
   hframe211->GetXaxis()->SetTitle("flag OSSF");
   hframe211->GetXaxis()->SetNdivisions(506);
   hframe211->GetXaxis()->SetLabelFont(42);
   hframe211->GetXaxis()->SetLabelOffset(0.007);
   hframe211->GetXaxis()->SetLabelSize(0.05);
   hframe211->GetXaxis()->SetTitleSize(0.06);
   hframe211->GetXaxis()->SetTitleOffset(0.9);
   hframe211->GetXaxis()->SetTitleFont(42);
   hframe211->GetYaxis()->SetTitle("Events");
   hframe211->GetYaxis()->SetLabelFont(42);
   hframe211->GetYaxis()->SetLabelOffset(0.007);
   hframe211->GetYaxis()->SetLabelSize(0.05);
   hframe211->GetYaxis()->SetTitleSize(0.06);
   hframe211->GetYaxis()->SetTitleOffset(1.25);
   hframe211->GetYaxis()->SetTitleFont(42);
   hframe211->GetZaxis()->SetLabelFont(42);
   hframe211->GetZaxis()->SetLabelOffset(0.007);
   hframe211->GetZaxis()->SetLabelSize(0.05);
   hframe211->GetZaxis()->SetTitleSize(0.06);
   hframe211->GetZaxis()->SetTitleFont(42);
   hframe211->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43 = new TH1F("thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43","thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->SetMinimum(-0.1456336);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->SetMaximum(57.01727);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->SetDirectory(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->SetStats(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->SetLineStyle(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_43);
   
   
   TH1D *new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212 = new TH1D("new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->SetBinContent(1,18.13965);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->SetBinContent(2,30.14873);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->SetBinError(1,2.898827);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->SetBinError(2,4.287216);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->SetEntries(435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->SetFillColor(ci);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->SetLineColor(ci);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF212->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213 = new TH1D("new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->SetBinContent(1,0.08360289);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->SetBinContent(2,0.1731608);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->SetBinError(1,0.03568819);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->SetBinError(2,0.05291423);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->SetEntries(17);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->SetFillColor(ci);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->SetLineColor(ci);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF213->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214 = new TH1D("new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->SetBinContent(1,0.009826636);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->SetBinContent(2,0.03367909);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->SetBinError(1,0.002546235);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->SetBinError(2,0.004512644);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->SetEntries(83);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->SetFillColor(ci);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->SetLineColor(ci);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF214->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215 = new TH1D("new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->SetBinContent(1,0.01661978);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->SetBinContent(2,4.252065);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->SetBinError(1,0.1622534);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->SetBinError(2,0.7280449);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->SetEntries(69);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->SetFillColor(ci);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->SetLineColor(ci);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF215->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216 = new TH1D("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->SetBinContent(1,0.1715012);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->SetBinContent(2,1.416789);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->SetBinError(1,0.08628887);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->SetBinError(2,0.2382252);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->SetEntries(44);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF216->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217 = new TH1D("new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->SetBinContent(1,0.9960115);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->SetBinContent(2,17.36673);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->SetBinError(1,0.07365172);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->SetBinError(2,0.3070568);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->SetEntries(3754);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->SetFillColor(ci);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->SetLineColor(ci);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF217->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218 = new TH1D("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->SetBinContent(1,0.363817);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->SetBinContent(2,0.9110067);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->SetBinError(1,0.01988066);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->SetBinError(2,0.03206204);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF218->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44 = new TH1F("thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44","thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->SetMinimum(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->SetMaximum(0.9902221);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->SetDirectory(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->SetStats(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->SetLineStyle(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF_stack_44);
   
   
   TH1D *new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219 = new TH1D("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->SetBinContent(1,0.363817);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->SetBinContent(2,0.9110067);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->SetBinError(1,0.01988066);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->SetBinError(2,0.03206204);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF219->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_nojetVeto_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3043[2] = {
   0.5,
   1.5};
   Double_t _fy3043[2] = {
   19.41722,
   53.39116};
   Double_t _felx3043[2] = {
   0.5,
   0.5};
   Double_t _fely3043[2] = {
   7.07139,
   11.98811};
   Double_t _fehx3043[2] = {
   0.5,
   0.5};
   Double_t _fehy3043[2] = {
   7.136702,
   11.98555};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3043,_fy3043,_felx3043,_fehx3043,_fely3043,_fehy3043);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3043 = new TH1F("Graph_Graph3043","",100,0,2.2);
   Graph_Graph3043->SetMinimum(7.042739);
   Graph_Graph3043->SetMaximum(70.67979);
   Graph_Graph3043->SetDirectory(0);
   Graph_Graph3043->SetStats(0);
   Graph_Graph3043->SetLineStyle(0);
   Graph_Graph3043->SetMarkerStyle(20);
   Graph_Graph3043->GetXaxis()->SetLabelFont(42);
   Graph_Graph3043->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3043->GetXaxis()->SetTitleFont(42);
   Graph_Graph3043->GetYaxis()->SetLabelFont(42);
   Graph_Graph3043->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3043->GetYaxis()->SetTitleFont(42);
   Graph_Graph3043->GetZaxis()->SetLabelFont(42);
   Graph_Graph3043->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3043);
   
   grae->Draw("2");
   
   Double_t _fx3044[2] = {
   0.5,
   1.5};
   Double_t _fy3044[2] = {
   0,
   0};
   Double_t _felx3044[2] = {
   0.5,
   0.5};
   Double_t _fely3044[2] = {
   0,
   0};
   Double_t _fehx3044[2] = {
   0.5,
   0.5};
   Double_t _fehy3044[2] = {
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3044,_fy3044,_felx3044,_fehx3044,_fely3044,_fehy3044);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3044 = new TH1F("Graph_Graph3044","",100,0,2.2);
   Graph_Graph3044->SetMinimum(0);
   Graph_Graph3044->SetMaximum(1.262698);
   Graph_Graph3044->SetDirectory(0);
   Graph_Graph3044->SetStats(0);
   Graph_Graph3044->SetLineStyle(0);
   Graph_Graph3044->SetMarkerStyle(20);
   Graph_Graph3044->GetXaxis()->SetLabelFont(42);
   Graph_Graph3044->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3044->GetXaxis()->SetTitleFont(42);
   Graph_Graph3044->GetYaxis()->SetLabelFont(42);
   Graph_Graph3044->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3044->GetYaxis()->SetTitleFont(42);
   Graph_Graph3044->GetZaxis()->SetLabelFont(42);
   Graph_Graph3044->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3044);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nojetVeto_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_nojetVeto_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nojetVeto_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nojetVeto_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nojetVeto_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nojetVeto_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nojetVeto_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy220 = new TH1F("hframe_copy220","",1000,0,2);
   hframe_copy220->SetMinimum(0);
   hframe_copy220->SetMaximum(135.7554);
   hframe_copy220->SetDirectory(0);
   hframe_copy220->SetStats(0);
   hframe_copy220->SetLineStyle(0);
   hframe_copy220->SetMarkerStyle(20);
   hframe_copy220->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy220->GetXaxis()->SetNdivisions(506);
   hframe_copy220->GetXaxis()->SetLabelFont(42);
   hframe_copy220->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy220->GetXaxis()->SetLabelSize(0.05);
   hframe_copy220->GetXaxis()->SetTitleSize(0.06);
   hframe_copy220->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy220->GetXaxis()->SetTitleFont(42);
   hframe_copy220->GetYaxis()->SetTitle("Events");
   hframe_copy220->GetYaxis()->SetLabelFont(42);
   hframe_copy220->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy220->GetYaxis()->SetLabelSize(0.05);
   hframe_copy220->GetYaxis()->SetTitleSize(0.06);
   hframe_copy220->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy220->GetYaxis()->SetTitleFont(42);
   hframe_copy220->GetZaxis()->SetLabelFont(42);
   hframe_copy220->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy220->GetZaxis()->SetLabelSize(0.05);
   hframe_copy220->GetZaxis()->SetTitleSize(0.06);
   hframe_copy220->GetZaxis()->SetTitleFont(42);
   hframe_copy220->Draw("sameaxis");
   ccwh3l_nojetVeto_13TeV_flagOSSF->Modified();
   ccwh3l_nojetVeto_13TeV_flagOSSF->cd();
   ccwh3l_nojetVeto_13TeV_flagOSSF->SetSelected(ccwh3l_nojetVeto_13TeV_flagOSSF);
}
