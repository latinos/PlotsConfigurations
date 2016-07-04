void c_wh3l_top_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt3/cc
//=========  (Sat Jul  2 20:39:43 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt3 = new TCanvas("ccwh3l_top_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt3->Range(-28,-7.798283,209.5,52.18851);
   ccwh3l_top_13TeV_pt3->SetFillColor(0);
   ccwh3l_top_13TeV_pt3->SetBorderMode(0);
   ccwh3l_top_13TeV_pt3->SetBorderSize(2);
   ccwh3l_top_13TeV_pt3->SetTickx(1);
   ccwh3l_top_13TeV_pt3->SetTicky(1);
   ccwh3l_top_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_top_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_top_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe136 = new TH1F("hframe136","",1000,10,200);
   hframe136->SetMinimum(0);
   hframe136->SetMaximum(49.18917);
   hframe136->SetDirectory(0);
   hframe136->SetStats(0);
   hframe136->SetLineStyle(0);
   hframe136->SetMarkerStyle(20);
   hframe136->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe136->GetXaxis()->SetNdivisions(506);
   hframe136->GetXaxis()->SetLabelFont(42);
   hframe136->GetXaxis()->SetLabelOffset(0.007);
   hframe136->GetXaxis()->SetLabelSize(0.05);
   hframe136->GetXaxis()->SetTitleSize(0.06);
   hframe136->GetXaxis()->SetTitleOffset(0.9);
   hframe136->GetXaxis()->SetTitleFont(42);
   hframe136->GetYaxis()->SetTitle("Events");
   hframe136->GetYaxis()->SetLabelFont(42);
   hframe136->GetYaxis()->SetLabelOffset(0.007);
   hframe136->GetYaxis()->SetLabelSize(0.05);
   hframe136->GetYaxis()->SetTitleSize(0.06);
   hframe136->GetYaxis()->SetTitleOffset(1.25);
   hframe136->GetYaxis()->SetTitleFont(42);
   hframe136->GetZaxis()->SetLabelFont(42);
   hframe136->GetZaxis()->SetLabelOffset(0.007);
   hframe136->GetZaxis()->SetLabelSize(0.05);
   hframe136->GetZaxis()->SetTitleSize(0.06);
   hframe136->GetZaxis()->SetTitleFont(42);
   hframe136->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetName("thsBackground_grouped_wh3l_top_13TeV_pt3");
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31","thsBackground_grouped_wh3l_top_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->SetMinimum(-0.001125552);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->SetMaximum(20.65945);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt3137 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt3137","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(1,15.95121);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(2,10.34355);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(3,5.806077);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(4,2.489194);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(5,2.158827);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(6,0.2524378);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(7,0.4327143);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(8,0.1398843);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(9,0.1204989);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinContent(11,-0.0005627758);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(1,3.338492);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(2,2.19865);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(3,1.444153);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(4,0.9053486);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(5,0.9112522);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(6,0.1703183);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(7,0.3302037);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(8,0.09891325);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(9,0.1116071);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetBinError(11,0.0005627758);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Fake_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt3138 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt3138","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinContent(1,0.04837169);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinContent(2,0.04225316);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinContent(3,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinContent(4,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinContent(6,0.03094249);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinContent(10,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinError(1,0.02798749);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinError(2,0.02711724);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinError(3,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinError(4,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinError(6,0.02191288);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetBinError(10,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt3138->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_WW_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt3139 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt3139","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetBinContent(1,0.4194991);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetBinContent(2,0.513647);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetBinContent(3,0.2704035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetBinContent(4,0.1890666);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetBinError(1,0.2731996);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetBinError(2,0.2924339);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetBinError(3,0.1603084);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetBinError(4,0.1395142);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3139->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Vg_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt3140 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt3140","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinContent(1,0.2363288);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinContent(2,0.1989121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinContent(3,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinContent(4,0.06811262);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinContent(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinContent(6,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinContent(7,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinError(1,0.1010908);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinError(2,0.08829485);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinError(3,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinError(4,0.0518654);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinError(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinError(6,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetBinError(7,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3140->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt3141 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt3141","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(1,2.894309);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(2,2.244203);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(3,1.173787);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(4,0.7524463);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(5,0.533813);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(6,0.3810766);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(7,0.2439615);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(8,0.1559586);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(9,0.1622816);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(10,0.1031013);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(11,0.0325759);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(12,0.02302998);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(13,0.01823155);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(14,0.02692964);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(15,0.01672299);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(16,0.005440074);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(17,0.01840165);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(18,0.02188066);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(20,0.01206978);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(21,0.01275589);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(22,0.01616409);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(23,0.002622175);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(24,0.01094147);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinContent(26,0.005160205);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(1,0.1249508);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(2,0.1113093);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(3,0.07976509);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(4,0.06412046);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(5,0.05398213);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(6,0.04512803);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(7,0.03647647);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(8,0.02877692);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(9,0.03024472);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(10,0.0235505);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(11,0.01284786);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(12,0.0104282);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(13,0.009400622);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(14,0.01175727);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(15,0.009691197);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(16,0.005440074);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(17,0.01066006);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(18,0.01102857);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(20,0.007282232);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(21,0.008338528);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(22,0.009373455);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(23,0.002622175);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(24,0.007033752);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetBinError(26,0.005160205);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3141->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_WZ_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt3142 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt3142","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(1,0.1259512);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(2,0.1230801);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(3,0.06024414);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(4,0.03433782);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(5,0.03023529);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(6,0.01051078);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(7,0.007262442);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(8,0.00300884);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(9,0.006393814);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(10,0.002244693);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(11,0.000372382);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(12,0.002323116);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinContent(15,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(1,0.01154878);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(2,0.01123488);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(3,0.007510885);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(4,0.00546075);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(5,0.005687157);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(6,0.002966632);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(7,0.002424546);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(8,0.001831377);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(9,0.002584768);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(10,0.000974354);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(11,0.000372382);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(12,0.001755245);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetBinError(15,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3142->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt3,"");
   thsBackground_grouped_wh3l_top_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_pt3->SetName("thsSignal_grouped_wh3l_top_13TeV_pt3");
   thsSignal_grouped_wh3l_top_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_top_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32","thsSignal_grouped_wh3l_top_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->SetMaximum(0.144375);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt3143 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt3143","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(1,0.1259512);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(2,0.1230801);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(3,0.06024414);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(4,0.03433782);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(5,0.03023529);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(6,0.01051078);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(7,0.007262442);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(8,0.00300884);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(9,0.006393814);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(10,0.002244693);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(11,0.000372382);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(12,0.002323116);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinContent(15,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(1,0.01154878);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(2,0.01123488);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(3,0.007510885);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(4,0.00546075);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(5,0.005687157);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(6,0.002966632);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(7,0.002424546);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(8,0.001831377);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(9,0.002584768);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(10,0.000974354);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(11,0.000372382);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(12,0.001755245);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetBinError(15,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3143->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt3,"");
   thsSignal_grouped_wh3l_top_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
   19.54972,
   13.34257,
   7.313216,
   3.514771,
   2.735967,
   0.7107036,
   0.7187201,
   0.2958429,
   0.2827805,
   0.1161539,
   0.03201313,
   0.02302998,
   0.01823155,
   0.02692964,
   0.01672298,
   0.005440074,
   0.01840165,
   0.02188066,
   0,
   0.01206979,
   0.01275589,
   0.01616409,
   0.002622175,
   0.01094147,
   0};
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   6.794693,
   4.527758,
   2.680095,
   1.464321,
   1.260254,
   0.2971847,
   0.4359715,
   0.1368208,
   0.1480642,
   0.03680981,
   0.01343071,
   0.01052477,
   0.009459893,
   0.0118625,
   0.009694977,
   0.00544767,
   0.01068268,
   0.01109594,
   0,
   0.007287676,
   0.008379256,
   0.009378167,
   0.002631922,
   0.007042187,
   0};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   6.794433,
   4.52769,
   2.680088,
   1.464319,
   1.260247,
   0.297178,
   0.4359275,
   0.1368056,
   0.1480647,
   0.0367832,
   0.01343144,
   0.01046219,
   0.009456947,
   0.01185182,
   0.009695485,
   0.005448558,
   0.01067723,
   0.01109863,
   0,
   0.007285866,
   0.00837221,
   0.009378855,
   0.002632007,
   0.007040171,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,219);
   Graph_Graph3031->SetMinimum(-2.634426);
   Graph_Graph3031->SetMaximum(28.97857);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineStyle(0);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetLabelFont(42);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3031->GetXaxis()->SetTitleFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3031->GetYaxis()->SetTitleFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2");
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   14,
   11,
   5,
   2,
   4,
   3,
   1,
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
   0,
   0,
   0};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   3.696567,
   3.265636,
   2.159724,
   1.29183,
   1.914367,
   1.632727,
   0.8272524,
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
   0,
   0,
   0};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   4.830479,
   4.416609,
   3.382539,
   2.63791,
   3.162815,
   2.918242,
   2.29957,
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
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,219);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(20.71353);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineStyle(0);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetLabelFont(42);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3032->GetXaxis()->SetTitleFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3032->GetYaxis()->SetTitleFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy144 = new TH1F("hframe_copy144","",1000,10,200);
   hframe_copy144->SetMinimum(0);
   hframe_copy144->SetMaximum(49.18917);
   hframe_copy144->SetDirectory(0);
   hframe_copy144->SetStats(0);
   hframe_copy144->SetLineStyle(0);
   hframe_copy144->SetMarkerStyle(20);
   hframe_copy144->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy144->GetXaxis()->SetNdivisions(506);
   hframe_copy144->GetXaxis()->SetLabelFont(42);
   hframe_copy144->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetXaxis()->SetLabelSize(0.05);
   hframe_copy144->GetXaxis()->SetTitleSize(0.06);
   hframe_copy144->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy144->GetXaxis()->SetTitleFont(42);
   hframe_copy144->GetYaxis()->SetTitle("Events");
   hframe_copy144->GetYaxis()->SetLabelFont(42);
   hframe_copy144->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetYaxis()->SetLabelSize(0.05);
   hframe_copy144->GetYaxis()->SetTitleSize(0.06);
   hframe_copy144->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy144->GetYaxis()->SetTitleFont(42);
   hframe_copy144->GetZaxis()->SetLabelFont(42);
   hframe_copy144->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetZaxis()->SetLabelSize(0.05);
   hframe_copy144->GetZaxis()->SetTitleSize(0.06);
   hframe_copy144->GetZaxis()->SetTitleFont(42);
   hframe_copy144->Draw("sameaxis");
   ccwh3l_top_13TeV_pt3->Modified();
   ccwh3l_top_13TeV_pt3->cd();
   ccwh3l_top_13TeV_pt3->SetSelected(ccwh3l_top_13TeV_pt3);
}
