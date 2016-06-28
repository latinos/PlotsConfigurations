void c_wh3l_top_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt3/cc
//=========  (Tue Jun 28 02:22:52 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt3 = new TCanvas("ccwh3l_top_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt3->Range(-88,-11.35147,524.5,75.96754);
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
   
   TH1F *hframe151 = new TH1F("hframe151","",1000,10,500);
   hframe151->SetMinimum(0);
   hframe151->SetMaximum(71.60159);
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
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetName("thsBackground_grouped_wh3l_top_13TeV_pt3");
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31","thsBackground_grouped_wh3l_top_13TeV_pt3",50,10,500);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->SetMinimum(-0.2297009);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_31->SetMaximum(27.88245);
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
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt3152 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt3152","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinContent(1,22.72573);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinContent(2,9.902033);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinContent(3,4.772357);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinContent(4,2.258478);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinContent(5,0.6346732);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinContent(6,0.4512015);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinContent(7,0.1905622);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinContent(9,-0.0005627758);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinError(1,3.828984);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinError(2,2.079577);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinError(3,1.310279);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinError(4,0.9167452);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinError(5,0.363117);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinError(6,0.3288532);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinError(7,0.1317764);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetBinError(9,0.0005627758);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetEntries(340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3152->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Fake_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt3153 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt3153","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinContent(1,0.08617647);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinContent(2,0.02193918);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinContent(3,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinContent(5,0.03094249);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinContent(8,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinError(1,0.03871506);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinError(2,0.01804761);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinError(3,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinError(5,0.02191288);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetBinError(8,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt3153->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3153->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_WW_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_pt3154 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_pt3154","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinContent(1,0.00863912);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinContent(2,0.006883703);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinContent(3,0.004553119);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinContent(4,0.00290661);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinContent(5,0.003684694);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinContent(6,0.002602762);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinContent(7,0.002226889);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinContent(10,0.0004409207);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinError(1,0.002293951);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinError(2,0.002113124);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinError(3,0.001686582);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinError(4,0.001591557);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinError(5,0.001368882);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinError(6,0.001309945);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinError(7,0.001122375);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetBinError(10,0.0004409207);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetEntries(61);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3154->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_VVV_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt3155 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt3155","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinContent(1,1.179815);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinContent(2,0.9941446);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinContent(3,0.3032481);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinContent(4,-0.1148504);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinContent(5,0.0209472);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinError(1,0.4651718);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinError(2,0.3669198);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinError(3,0.1802821);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinError(4,0.1148504);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetBinError(5,0.0209472);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetEntries(44);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3155->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Vg_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt3156 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt3156","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinContent(1,0.3807695);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinContent(2,0.2768073);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinContent(3,0.06811262);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinContent(4,0.1303699);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinContent(5,0.1094444);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinContent(6,0.01994686);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinContent(8,0.045406);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinContent(9,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinError(1,0.1270002);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinError(2,0.1091131);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinError(3,0.0518654);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinError(4,0.07536783);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinError(5,0.06620597);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinError(6,0.01994686);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinError(8,0.045406);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetBinError(9,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetEntries(28);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3156->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt3157 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt3157","histo_ZZ",50,10,500);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinContent(1,0.3807695);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinContent(2,0.2768073);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinContent(3,0.06811262);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinContent(4,0.1303699);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinContent(5,0.1094444);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinContent(6,0.01994686);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinContent(8,0.045406);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinContent(9,0.04314121);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinError(1,0.1270002);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinError(2,0.1091131);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinError(3,0.0518654);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinError(4,0.07536783);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinError(5,0.06620597);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinError(6,0.01994686);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinError(8,0.045406);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetBinError(9,0.04314121);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetEntries(28);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3157->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_WZ_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt3158 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt3158","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(1,0.1801168);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(2,0.1454018);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(3,0.05446101);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(4,0.04288343);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(5,0.01509024);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(6,0.007999898);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(7,0.007955364);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(8,0.002646346);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(9,0.002062446);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(10,0.0006330517);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(11,0.0004631217);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(12,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinContent(13,0.0004820496);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(1,0.013683);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(2,0.01228713);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(3,0.006841395);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(4,0.006639012);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(5,0.00348275);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(6,0.002898673);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(7,0.002710367);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(8,0.001050277);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(9,0.001730603);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(10,0.0004738843);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(11,0.0004631217);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(12,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetBinError(13,0.0004820496);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3158->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt3,"");
   thsBackground_grouped_wh3l_top_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_pt3->SetName("thsSignal_grouped_wh3l_top_13TeV_pt3");
   thsSignal_grouped_wh3l_top_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_top_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32","thsSignal_grouped_wh3l_top_13TeV_pt3",50,10,500);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_32->SetMaximum(0.2034897);
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
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt3159 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt3159","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(1,0.1801168);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(2,0.1454018);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(3,0.05446101);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(4,0.04288343);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(5,0.01509024);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(6,0.007999898);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(7,0.007955364);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(8,0.002646346);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(9,0.002062446);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(10,0.0006330517);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(11,0.0004631217);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(12,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinContent(13,0.0004820496);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(1,0.013683);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(2,0.01228713);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(3,0.006841395);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(4,0.006639012);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(5,0.00348275);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(6,0.002898673);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(7,0.002710367);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(8,0.001050277);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(9,0.001730603);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(10,0.0004738843);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(11,0.0004631217);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(12,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetBinError(13,0.0004820496);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3159->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt3,"");
   thsSignal_grouped_wh3l_top_13TeV_pt3->Draw("hist same noclear");
   
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
   28.46052,
   13.57581,
   6.310498,
   3.012398,
   1.284789,
   0.7605041,
   0.4013201,
   0.1814238,
   0.07441797,
   0.02724095,
   0.03124767,
   0.02216306,
   0.02285996,
   0.02544757,
   0.01078107,
   0.01540804,
   0.01725651,
   0.002622175,
   0.01094147,
   0,
   0.005160206,
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
   8.230536,
   4.008005,
   2.175786,
   1.354071,
   0.5578906,
   0.4123091,
   0.176497,
   0.08420459,
   0.05600951,
   0.01169925,
   0.01252515,
   0.01111368,
   0.01155481,
   0.01159106,
   0.006713746,
   0.009075213,
   0.009436899,
   0.002622175,
   0.007033752,
   0,
   0.005160206,
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
   8.230536,
   4.008004,
   2.175786,
   1.35407,
   0.5578905,
   0.4123091,
   0.176497,
   0.08420459,
   0.05600952,
   0.01169926,
   0.01252516,
   0.01111367,
   0.01155481,
   0.01159105,
   0.006713718,
   0.009075212,
   0.009436899,
   0.002622175,
   0.007033752,
   0,
   0.005160206,
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
   Graph_Graph3031->SetMinimum(-3.669106);
   Graph_Graph3031->SetMaximum(40.36016);
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
   20,
   13,
   4,
   4,
   4,
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
   4.43453,
   3.558726,
   1.914367,
   1.914367,
   1.914367,
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
   5.546633,
   4.697669,
   3.162815,
   3.162815,
   3.162815,
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
   Graph_Graph3032->SetMaximum(28.1013);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt3","VVV","F");

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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt3","VVV","F");

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
   
   TH1F *hframe_copy160 = new TH1F("hframe_copy160","",1000,10,500);
   hframe_copy160->SetMinimum(0);
   hframe_copy160->SetMaximum(71.60159);
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
   ccwh3l_top_13TeV_pt3->Modified();
   ccwh3l_top_13TeV_pt3->cd();
   ccwh3l_top_13TeV_pt3->SetSelected(ccwh3l_top_13TeV_pt3);
}
