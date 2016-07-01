void c_wh3l_13TeV_sssf_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_pt3/cc
//=========  (Thu Jun 30 22:29:48 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_pt3 = new TCanvas("ccwh3l_13TeV_sssf_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_pt3->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_pt3->Range(-88,-1.257249,524.5,8.413896);
   ccwh3l_13TeV_sssf_pt3->SetFillColor(0);
   ccwh3l_13TeV_sssf_pt3->SetBorderMode(0);
   ccwh3l_13TeV_sssf_pt3->SetBorderSize(2);
   ccwh3l_13TeV_sssf_pt3->SetTickx(1);
   ccwh3l_13TeV_sssf_pt3->SetTicky(1);
   ccwh3l_13TeV_sssf_pt3->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_pt3->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_pt3->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_pt3->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt3->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe151 = new TH1F("hframe151","",1000,10,500);
   hframe151->SetMinimum(0);
   hframe151->SetMaximum(7.930339);
   hframe151->SetDirectory(0);
   hframe151->SetStats(0);
   hframe151->SetLineStyle(0);
   hframe151->SetMarkerStyle(20);
   hframe151->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe151->GetXaxis()->SetNdivisions(506);
   hframe151->GetXaxis()->SetLabelFont(42);
   hframe151->GetXaxis()->SetLabelOffset(0.007);
   hframe151->GetXaxis()->SetLabelSize(0.05);
   hframe151->GetXaxis()->SetTitleSize(0.06);
   hframe151->GetXaxis()->SetTitleOffset(0.9);
   hframe151->GetXaxis()->SetTitleFont(42);
   hframe151->GetYaxis()->SetTitle("Events");
   hframe151->GetYaxis()->SetLabelFont(42);
   hframe151->GetYaxis()->SetLabelOffset(0.007);
   hframe151->GetYaxis()->SetLabelSize(0.05);
   hframe151->GetYaxis()->SetTitleSize(0.06);
   hframe151->GetYaxis()->SetTitleOffset(1.25);
   hframe151->GetYaxis()->SetTitleFont(42);
   hframe151->GetZaxis()->SetLabelFont(42);
   hframe151->GetZaxis()->SetLabelOffset(0.007);
   hframe151->GetZaxis()->SetLabelSize(0.05);
   hframe151->GetZaxis()->SetTitleSize(0.06);
   hframe151->GetZaxis()->SetTitleFont(42);
   hframe151->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->SetName("thsBackground_grouped_wh3l_13TeV_sssf_pt3");
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31","thsBackground_grouped_wh3l_13TeV_sssf_pt3",50,10,500);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->SetMinimum(-0.3638758);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->SetMaximum(4.047191);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_31);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_pt3152 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_pt3152","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetBinContent(1,2.5534);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetBinContent(2,0.2959545);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetBinContent(3,-0.2228516);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetBinContent(4,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetBinError(1,1.301067);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetBinError(2,0.2358716);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetBinError(3,0.1410242);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetBinError(4,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3152->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_Fake_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_pt3153 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_pt3153","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->SetBinContent(1,0.02651546);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->SetBinError(1,0.01918247);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3153->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_WW_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_pt3154 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_pt3154","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinContent(1,0.03244024);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinContent(2,0.02921756);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinContent(3,0.02219744);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinContent(4,0.01530787);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinContent(5,0.001623122);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinContent(6,0.002006893);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinError(1,0.009237902);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinError(2,0.009690356);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinError(3,0.006725736);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinError(4,0.006282134);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinError(5,0.004336817);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetBinError(6,0.002006893);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3154->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_VVV_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_pt3155 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_pt3155","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3155->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_Vg_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->SetBinContent(1,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->SetBinContent(4,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->SetBinError(1,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->SetBinError(4,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3156->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_pt3157 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_pt3157","histo_WZ",50,10,500);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinContent(1,0.3309876);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinContent(2,0.2024565);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinContent(3,0.07548631);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinContent(4,0.01085764);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinContent(5,0.002874792);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinError(1,0.04276044);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinError(2,0.03257928);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinError(3,0.01945435);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinError(4,0.007678589);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetBinError(5,0.002874792);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3157->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_WZ_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(1,0.1338055);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(2,0.08632851);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(3,0.03690921);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(4,0.0145891);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(5,0.003521837);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(6,0.006373589);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(7,0.00123716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(8,0.0003741078);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(9,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinContent(13,0.0001992739);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(1,0.01176009);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(2,0.01012951);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(3,0.006409941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(4,0.00396394);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(5,0.001772319);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(6,0.002817846);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(7,0.000950357);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(8,0.0002656812);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(9,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetBinError(13,0.0001992739);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3158->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt3,"");
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->SetName("thsSignal_grouped_wh3l_13TeV_sssf_pt3");
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32","thsSignal_grouped_wh3l_13TeV_sssf_pt3",50,10,500);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->SetMaximum(0.1528439);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_32);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(1,0.1338055);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(2,0.08632851);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(3,0.03690921);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(4,0.0145891);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(5,0.003521837);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(6,0.006373589);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(7,0.00123716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(8,0.0003741078);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(9,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinContent(13,0.0001992739);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(1,0.01176009);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(2,0.01012951);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(3,0.006409941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(4,0.00396394);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(5,0.001772319);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(6,0.002817846);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(7,0.000950357);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(8,0.0002656812);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(9,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetBinError(13,0.0001992739);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3159->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt3,"");
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->Draw("hist same noclear");
   
   Double_t _fx3031[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3031[50] = {
   3.03833,
   0.5276286,
   -0.1251678,
   0.3374249,
   0.004497915,
   0.002006893,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3031[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3031[50] = {
   1.718463,
   0.298261,
   0.1858387,
   0.339626,
   0.004782244,
   0.002838821,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3031[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3031[50] = {
   1.718427,
   0.2982549,
   0.185837,
   0.3396253,
   0.007392292,
   0.002838823,
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
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,549);
   Graph_Graph3031->SetMinimum(-0.8177829);
   Graph_Graph3031->SetMaximum(5.263534);
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
   
   Double_t _fx3032[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3032[50] = {
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
   Double_t _felx3032[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3032[50] = {
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
   Double_t _fehx3032[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3032[50] = {
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
   grae = new TGraphAsymmErrors(50,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,549);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt3","Data","EPL");
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
   
   TH1F *hframe_copy160 = new TH1F("hframe_copy160","",1000,10,500);
   hframe_copy160->SetMinimum(0);
   hframe_copy160->SetMaximum(7.930339);
   hframe_copy160->SetDirectory(0);
   hframe_copy160->SetStats(0);
   hframe_copy160->SetLineStyle(0);
   hframe_copy160->SetMarkerStyle(20);
   hframe_copy160->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy160->GetXaxis()->SetNdivisions(506);
   hframe_copy160->GetXaxis()->SetLabelFont(42);
   hframe_copy160->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetXaxis()->SetLabelSize(0.05);
   hframe_copy160->GetXaxis()->SetTitleSize(0.06);
   hframe_copy160->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy160->GetXaxis()->SetTitleFont(42);
   hframe_copy160->GetYaxis()->SetTitle("Events");
   hframe_copy160->GetYaxis()->SetLabelFont(42);
   hframe_copy160->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetYaxis()->SetLabelSize(0.05);
   hframe_copy160->GetYaxis()->SetTitleSize(0.06);
   hframe_copy160->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy160->GetYaxis()->SetTitleFont(42);
   hframe_copy160->GetZaxis()->SetLabelFont(42);
   hframe_copy160->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetZaxis()->SetLabelSize(0.05);
   hframe_copy160->GetZaxis()->SetTitleSize(0.06);
   hframe_copy160->GetZaxis()->SetTitleFont(42);
   hframe_copy160->Draw("sameaxis");
   ccwh3l_13TeV_sssf_pt3->Modified();
   ccwh3l_13TeV_sssf_pt3->cd();
   ccwh3l_13TeV_sssf_pt3->SetSelected(ccwh3l_13TeV_sssf_pt3);
}
