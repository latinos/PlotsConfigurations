void c_wh3l_Pre_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt2/cc
//=========  (Sun Jul  3 16:19:09 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt2 = new TCanvas("ccwh3l_Pre_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt2->Range(-12,-60.56232,156.75,405.3017);
   ccwh3l_Pre_13TeV_pt2->SetFillColor(0);
   ccwh3l_Pre_13TeV_pt2->SetBorderMode(0);
   ccwh3l_Pre_13TeV_pt2->SetBorderSize(2);
   ccwh3l_Pre_13TeV_pt2->SetTickx(1);
   ccwh3l_Pre_13TeV_pt2->SetTicky(1);
   ccwh3l_Pre_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe231 = new TH1F("hframe231","",1000,15,150);
   hframe231->SetMinimum(0);
   hframe231->SetMaximum(382.0085);
   hframe231->SetDirectory(0);
   hframe231->SetStats(0);
   hframe231->SetLineStyle(0);
   hframe231->SetMarkerStyle(20);
   hframe231->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe231->GetXaxis()->SetNdivisions(506);
   hframe231->GetXaxis()->SetLabelFont(42);
   hframe231->GetXaxis()->SetLabelOffset(0.007);
   hframe231->GetXaxis()->SetLabelSize(0.05);
   hframe231->GetXaxis()->SetTitleSize(0.06);
   hframe231->GetXaxis()->SetTitleOffset(0.9);
   hframe231->GetXaxis()->SetTitleFont(42);
   hframe231->GetYaxis()->SetTitle("Events");
   hframe231->GetYaxis()->SetLabelFont(42);
   hframe231->GetYaxis()->SetLabelOffset(0.007);
   hframe231->GetYaxis()->SetLabelSize(0.05);
   hframe231->GetYaxis()->SetTitleSize(0.06);
   hframe231->GetYaxis()->SetTitleOffset(1.25);
   hframe231->GetYaxis()->SetTitleFont(42);
   hframe231->GetZaxis()->SetLabelFont(42);
   hframe231->GetZaxis()->SetLabelOffset(0.007);
   hframe231->GetZaxis()->SetLabelSize(0.05);
   hframe231->GetZaxis()->SetTitleSize(0.06);
   hframe231->GetZaxis()->SetTitleFont(42);
   hframe231->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt2");
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47","thsBackground_grouped_wh3l_Pre_13TeV_pt2",25,15,150);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->SetMinimum(-0.4463192);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->SetMaximum(160.4436);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_47);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt2232 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt2232","histo_Fake",25,15,150);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(1,29.31768);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(2,53.11183);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(3,53.94352);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(4,62.96555);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(5,42.60699);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(6,27.43358);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(7,13.34081);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(8,8.14077);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(9,5.415744);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(10,3.324572);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(11,4.008192);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(12,1.603942);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(13,1.417145);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(14,1.314736);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(15,0.7357695);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(16,1.534497);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(17,0.1151829);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(18,0.3844291);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(19,-0.1747404);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(20,0.1485867);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(21,0.07810802);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(22,-0.2372564);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(23,-0.1231036);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(24,0.394551);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(25,-0.0610055);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinContent(26,0.2770469);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(1,5.017414);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(2,6.106318);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(3,5.797454);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(4,6.190764);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(5,4.87433);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(6,3.778743);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(7,2.529896);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(8,1.925739);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(9,1.532362);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(10,1.380601);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(11,1.21635);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(12,0.8240679);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(13,0.7537796);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(14,0.6024094);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(15,0.5967898);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(16,0.6808846);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(17,0.1929937);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(18,0.3241329);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(19,0.1676373);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(20,0.1054038);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(21,0.159488);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(22,0.2090629);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(23,0.1141132);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(24,0.4423188);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(25,0.0467853);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetBinError(26,0.2975113);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetEntries(4042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt2233 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt2233","histo_WW",25,15,150);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(1,0.015892);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(2,0.06637614);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(3,0.0979677);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(4,0.06433886);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(5,0.03731328);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(6,0.05167435);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(7,0.07055291);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(8,0.03425258);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(9,0.01582978);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(10,0.08771377);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(14,0.02980615);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(15,0.01461809);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(18,0.03060151);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinContent(21,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(1,0.01321215);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(2,0.03324146);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(3,0.03984661);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(4,0.03071579);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(5,0.02224571);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(6,0.02670359);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(7,0.03547057);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(8,0.02422696);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(9,0.01582978);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(10,0.03641958);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(14,0.0210913);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(15,0.01461809);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(18,0.02185907);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetBinError(21,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetEntries(44);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2233->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt2234 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt2234","histo_VVV",25,15,150);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(1,0.07240385);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(2,0.2010519);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(3,0.3408359);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(4,0.4568276);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(5,0.4734);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(6,0.4661788);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(7,0.4831187);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(8,0.4182711);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(9,0.3787692);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(10,0.3229116);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(11,0.1978078);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(12,0.2220272);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(13,0.1770112);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(14,0.1607721);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(15,0.1454766);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(16,0.1265);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(17,0.1079464);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(18,0.09816338);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(19,0.0925781);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(20,0.07893028);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(21,0.04949573);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(22,0.05844443);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(23,0.04854826);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(24,0.03297028);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(25,0.04260342);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinContent(26,0.3248969);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(1,0.01144505);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(2,0.02075239);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(3,0.02686128);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(4,0.02954852);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(5,0.02946033);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(6,0.03034008);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(7,0.02947177);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(8,0.02722781);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(9,0.02641862);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(10,0.02577815);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(11,0.02087138);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(12,0.02079491);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(13,0.01901007);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(14,0.01742707);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(15,0.01629337);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(16,0.01590704);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(17,0.01386958);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(18,0.01385248);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(19,0.01371115);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(20,0.01313732);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(21,0.009835242);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(22,0.01113269);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(23,0.01021977);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(24,0.008652871);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(25,0.00941642);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetBinError(26,0.02474537);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetEntries(5218);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt2235 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt2235","histo_Vg",25,15,150);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(1,28.15401);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(2,53.39769);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(3,53.37684);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(4,36.54383);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(5,18.87519);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(6,10.76563);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(7,7.236803);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(8,4.43755);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(9,2.442504);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(10,2.922765);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(11,1.505917);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(12,1.227144);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(13,0.7627951);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(14,0.3624149);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(15,1.166001);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(16,0.3925019);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(17,0.5446119);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(18,0.4251842);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(19,0.4659196);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(20,0.348296);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(21,-0.06996994);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(22,0.09474634);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(23,0.3249352);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(24,0.1555295);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(25,0.06535574);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinContent(26,0.8136756);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(1,2.053659);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(2,2.740059);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(3,2.904777);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(4,2.416931);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(5,1.791837);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(6,1.362653);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(7,1.060914);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(8,0.8619608);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(9,0.7262517);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(10,0.6652769);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(11,0.5425179);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(12,0.4821522);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(13,0.533248);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(14,0.3752369);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(15,0.4907335);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(16,0.2418182);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(17,0.3353806);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(18,0.2760325);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(19,0.2701835);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(20,0.2015558);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(21,0.1801667);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(22,0.2253961);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(23,0.1932893);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(24,0.1956632);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(25,0.2152667);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetBinError(26,0.4060394);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetEntries(3347);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236","histo_ZZ",25,15,150);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(1,1.887065);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(2,4.057142);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(3,4.393779);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(4,7.623469);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(5,7.849903);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(6,6.895085);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(7,4.605374);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(8,3.255419);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(9,2.471998);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(10,2.197505);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(11,1.640461);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(12,1.342484);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(13,0.8509761);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(14,0.779316);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(15,0.3232598);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(16,0.6242615);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(17,0.2771588);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(18,0.4633634);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(19,0.2347879);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(20,0.1370875);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(21,0.4757958);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(22,0.0412371);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(23,0.07142666);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(24,0.06512556);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(25,0.1672447);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinContent(26,0.9523702);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(1,0.2746607);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(2,0.4132578);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(3,0.4279959);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(4,0.5595874);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(5,0.5669683);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(6,0.5360955);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(7,0.4297589);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(8,0.3660532);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(9,0.3194057);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(10,0.305906);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(11,0.2616299);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(12,0.2335433);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(13,0.1802994);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(14,0.1724084);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(15,0.1127179);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(16,0.1568632);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(17,0.107152);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(18,0.1431681);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(19,0.09873527);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(20,0.07061295);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(21,0.141036);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(22,0.0412371);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(23,0.05454528);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(24,0.04953004);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(25,0.08550098);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetBinError(26,0.1983274);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetEntries(1451);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt2237 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt2237","histo_WZ",25,15,150);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(1,9.424263);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(2,19.23132);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(3,32.21858);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(4,44.53904);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(5,52.16418);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(6,47.34194);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(7,35.35168);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(8,26.50824);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(9,20.41173);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(10,16.18281);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(11,12.29221);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(12,9.624366);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(13,7.609685);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(14,6.194544);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(15,4.818293);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(16,3.981512);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(17,3.549989);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(18,2.82619);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(19,2.230396);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(20,1.949488);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(21,1.446819);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(22,1.467261);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(23,1.034978);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(24,1.027497);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(25,0.8908491);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinContent(26,5.826553);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(1,0.2257132);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(2,0.3245712);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(3,0.4199653);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(4,0.4916139);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(5,0.5319996);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(6,0.5084115);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(7,0.4401981);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(8,0.3806672);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(9,0.3339863);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(10,0.2971341);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(11,0.2589625);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(12,0.2294919);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(13,0.2037952);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(14,0.1832328);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(15,0.1625162);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(16,0.146351);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(17,0.1385003);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(18,0.1230483);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(19,0.1099549);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(20,0.10229);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(21,0.08829308);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(22,0.08948521);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(23,0.07480325);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(24,0.07499858);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(25,0.0687377);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetBinError(26,0.1770931);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetEntries(75011);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(1,0.2183226);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(2,0.3996099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(3,0.5581154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(4,0.6103364);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(5,0.6059477);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(6,0.5457781);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(7,0.4847419);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(8,0.4285262);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(9,0.3073658);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(10,0.2197206);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(11,0.2056275);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(12,0.1758005);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(13,0.1412714);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(14,0.1208793);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(15,0.1031849);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(16,0.06932455);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(17,0.06456349);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(18,0.04889246);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(19,0.02578272);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(20,0.02981384);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(21,0.02332798);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(22,0.02048633);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(23,0.01713484);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(24,0.01283309);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(25,0.009623132);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinContent(26,0.06018396);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(1,0.01585788);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(2,0.02121012);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(3,0.02487802);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(4,0.02666123);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(5,0.02667155);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(6,0.0246213);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(7,0.02325272);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(8,0.02183602);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(9,0.01700836);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(10,0.0143025);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(11,0.01385335);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(12,0.0128956);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(13,0.01094028);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(14,0.01062337);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(15,0.009826409);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(16,0.007290177);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(17,0.007453299);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(18,0.00693678);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(19,0.004429082);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(20,0.004736503);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(21,0.004221688);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(22,0.004188351);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(23,0.003735478);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(24,0.003010858);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(25,0.002636006);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetBinError(26,0.007695015);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt2,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt2");
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48","thsSignal_grouped_wh3l_Pre_13TeV_pt2",25,15,150);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->SetMaximum(0.6688475);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_48);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(1,0.2183226);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(2,0.3996099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(3,0.5581154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(4,0.6103364);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(5,0.6059477);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(6,0.5457781);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(7,0.4847419);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(8,0.4285262);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(9,0.3073658);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(10,0.2197206);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(11,0.2056275);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(12,0.1758005);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(13,0.1412714);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(14,0.1208793);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(15,0.1031849);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(16,0.06932455);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(17,0.06456349);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(18,0.04889246);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(19,0.02578272);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(20,0.02981384);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(21,0.02332798);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(22,0.02048633);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(23,0.01713484);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(24,0.01283309);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(25,0.009623132);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinContent(26,0.06018396);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(1,0.01585788);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(2,0.02121012);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(3,0.02487802);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(4,0.02666123);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(5,0.02667155);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(6,0.0246213);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(7,0.02325272);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(8,0.02183602);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(9,0.01700836);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(10,0.0143025);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(11,0.01385335);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(12,0.0128956);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(13,0.01094028);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(14,0.01062337);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(15,0.009826409);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(16,0.007290177);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(17,0.007453299);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(18,0.00693678);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(19,0.004429082);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(20,0.004736503);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(21,0.004221688);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(22,0.004188351);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(23,0.003735478);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(24,0.003010858);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(25,0.002636006);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetBinError(26,0.007695015);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2239->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt2,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3047[25] = {
   17.7,
   23.1,
   28.5,
   33.9,
   39.3,
   44.7,
   50.1,
   55.5,
   60.9,
   66.3,
   71.7,
   77.1,
   82.5,
   87.9,
   93.3,
   98.7,
   104.1,
   109.5,
   114.9,
   120.3,
   125.7,
   131.1,
   136.5,
   141.9,
   147.3};
   Double_t _fy3047[25] = {
   68.87132,
   130.0654,
   144.3715,
   152.1931,
   122.007,
   92.95409,
   61.08834,
   42.7945,
   31.13657,
   25.03828,
   19.64459,
   14.01996,
   10.81761,
   8.841589,
   7.203418,
   6.659272,
   4.594889,
   4.227932,
   2.848941,
   2.662388,
   1.993301,
   1.424432,
   1.356784,
   1.675673,
   1.105047};
   Double_t _felx3047[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fely3047[25] = {
   13.02243,
   21.2321,
   21.42888,
   24.20724,
   16.92684,
   11.50509,
   6.560453,
   4.629871,
   3.560979,
   3.000018,
   2.721808,
   1.904658,
   1.784046,
   1.45426,
   1.43558,
   1.367884,
   0.7403781,
   0.9311381,
   0.6803167,
   0.5109146,
   0.521796,
   0.4601442,
   0.455347,
   0.7018189,
   0.2821527};
   Double_t _fehx3047[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fehy3047[25] = {
   13.01283,
   21.2191,
   21.41986,
   24.20435,
   16.92215,
   11.50373,
   6.556468,
   4.628789,
   3.557828,
   2.998672,
   2.71992,
   1.903572,
   1.779834,
   1.463868,
   1.433119,
   1.365295,
   0.8101434,
   0.9273452,
   0.6775748,
   0.509012,
   0.4895131,
   0.5868526,
   0.4545365,
   0.7863811,
   0.4293091};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,1.5,163.5);
   Graph_Graph3047->SetMinimum(0);
   Graph_Graph3047->SetMaximum(193.9549);
   Graph_Graph3047->SetDirectory(0);
   Graph_Graph3047->SetStats(0);
   Graph_Graph3047->SetLineStyle(0);
   Graph_Graph3047->SetMarkerStyle(20);
   Graph_Graph3047->GetXaxis()->SetLabelFont(42);
   Graph_Graph3047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3047->GetXaxis()->SetTitleFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3047->GetYaxis()->SetTitleFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3047);
   
   grae->Draw("2");
   
   Double_t _fx3048[25] = {
   17.7,
   23.1,
   28.5,
   33.9,
   39.3,
   44.7,
   50.1,
   55.5,
   60.9,
   66.3,
   71.7,
   77.1,
   82.5,
   87.9,
   93.3,
   98.7,
   104.1,
   109.5,
   114.9,
   120.3,
   125.7,
   131.1,
   136.5,
   141.9,
   147.3};
   Double_t _fy3048[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3048[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fely3048[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3048[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fehy3048[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,1.5,163.5);
   Graph_Graph3048->SetMinimum(0);
   Graph_Graph3048->SetMaximum(1.262698);
   Graph_Graph3048->SetDirectory(0);
   Graph_Graph3048->SetStats(0);
   Graph_Graph3048->SetLineStyle(0);
   Graph_Graph3048->SetMarkerStyle(20);
   Graph_Graph3048->GetXaxis()->SetLabelFont(42);
   Graph_Graph3048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3048->GetXaxis()->SetTitleFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3048->GetYaxis()->SetTitleFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3048);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy240 = new TH1F("hframe_copy240","",1000,15,150);
   hframe_copy240->SetMinimum(0);
   hframe_copy240->SetMaximum(382.0085);
   hframe_copy240->SetDirectory(0);
   hframe_copy240->SetStats(0);
   hframe_copy240->SetLineStyle(0);
   hframe_copy240->SetMarkerStyle(20);
   hframe_copy240->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy240->GetXaxis()->SetNdivisions(506);
   hframe_copy240->GetXaxis()->SetLabelFont(42);
   hframe_copy240->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetXaxis()->SetLabelSize(0.05);
   hframe_copy240->GetXaxis()->SetTitleSize(0.06);
   hframe_copy240->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy240->GetXaxis()->SetTitleFont(42);
   hframe_copy240->GetYaxis()->SetTitle("Events");
   hframe_copy240->GetYaxis()->SetLabelFont(42);
   hframe_copy240->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetYaxis()->SetLabelSize(0.05);
   hframe_copy240->GetYaxis()->SetTitleSize(0.06);
   hframe_copy240->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy240->GetYaxis()->SetTitleFont(42);
   hframe_copy240->GetZaxis()->SetLabelFont(42);
   hframe_copy240->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetZaxis()->SetLabelSize(0.05);
   hframe_copy240->GetZaxis()->SetTitleSize(0.06);
   hframe_copy240->GetZaxis()->SetTitleFont(42);
   hframe_copy240->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt2->Modified();
   ccwh3l_Pre_13TeV_pt2->cd();
   ccwh3l_Pre_13TeV_pt2->SetSelected(ccwh3l_Pre_13TeV_pt2);
}
