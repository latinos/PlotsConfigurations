void c_wh3l_Pre_OSSF_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_Pre_OSSF_13TeV_pt2/cc
//=========  (Sun Jul  3 16:48:25 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_OSSF_13TeV_pt2 = new TCanvas("ccwh3l_Pre_OSSF_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_Pre_OSSF_13TeV_pt2->Range(-12,-59.78601,156.75,400.1064);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetFillColor(0);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetBorderSize(2);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetTickx(1);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetTicky(1);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,15,150);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(377.1118);
   hframe31->SetDirectory(0);
   hframe31->SetStats(0);
   hframe31->SetLineStyle(0);
   hframe31->SetMarkerStyle(20);
   hframe31->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe31->GetXaxis()->SetNdivisions(506);
   hframe31->GetXaxis()->SetLabelFont(42);
   hframe31->GetXaxis()->SetLabelOffset(0.007);
   hframe31->GetXaxis()->SetLabelSize(0.05);
   hframe31->GetXaxis()->SetTitleSize(0.06);
   hframe31->GetXaxis()->SetTitleOffset(0.9);
   hframe31->GetXaxis()->SetTitleFont(42);
   hframe31->GetYaxis()->SetTitle("Events");
   hframe31->GetYaxis()->SetLabelFont(42);
   hframe31->GetYaxis()->SetLabelOffset(0.007);
   hframe31->GetYaxis()->SetLabelSize(0.05);
   hframe31->GetYaxis()->SetTitleSize(0.06);
   hframe31->GetYaxis()->SetTitleOffset(1.25);
   hframe31->GetYaxis()->SetTitleFont(42);
   hframe31->GetZaxis()->SetLabelFont(42);
   hframe31->GetZaxis()->SetLabelOffset(0.007);
   hframe31->GetZaxis()->SetLabelSize(0.05);
   hframe31->GetZaxis()->SetTitleSize(0.06);
   hframe31->GetZaxis()->SetTitleFont(42);
   hframe31->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->SetName("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7 = new TH1F("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7","thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2",25,15,150);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->SetMinimum(-0.4463192);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->SetMaximum(158.3869);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232 = new TH1D("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232","histo_Fake",25,15,150);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(1,28.60438);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(2,49.53088);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(3,51.38453);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(4,61.28425);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(5,37.24681);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(6,25.80201);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(7,11.29578);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(8,7.021954);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(9,4.527739);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(10,2.359346);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(11,3.564125);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(12,1.185031);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(13,0.6957658);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(14,1.314736);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(15,0.7363298);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(16,1.534497);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(17,0.1157441);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(18,0.3844291);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(19,-0.1747404);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(20,0.1485867);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(21,0.07810802);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(22,-0.2372564);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(23,-0.1084014);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(24,0.394551);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(25,-0.0610055);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinContent(26,0.2290537);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(1,4.994056);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(2,5.943467);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(3,5.666013);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(4,6.136779);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(5,4.575077);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(6,3.704648);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(7,2.363743);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(8,1.828688);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(9,1.396049);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(10,1.176965);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(11,1.175584);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(12,0.7925819);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(13,0.621978);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(14,0.6024094);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(15,0.5967896);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(16,0.6808846);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(17,0.1929929);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(18,0.3241329);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(19,0.1676373);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(20,0.1054038);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(21,0.159488);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(22,0.2090629);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(23,0.1131622);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(24,0.4423188);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(25,0.0467853);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetBinError(26,0.294922);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->Add(new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233 = new TH1D("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233","histo_WW",25,15,150);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(1,0.01285941);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(2,0.03496564);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(3,0.0979677);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(4,0.04280537);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(5,0.009961222);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(6,0.03572331);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(7,0.07055291);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(10,0.07138938);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(15,0.01461809);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(18,0.03060151);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinContent(21,0.01305253);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(1,0.01285941);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(2,0.02472516);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(3,0.03984661);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(4,0.02513505);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(5,0.009961222);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(6,0.02141602);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(7,0.03547057);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(10,0.0325561);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(15,0.01461809);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(18,0.02185907);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetBinError(21,0.01305253);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt233->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->Add(new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234 = new TH1D("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234","histo_VVV",25,15,150);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(1,0.06496442);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(2,0.188018);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(3,0.3039192);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(4,0.4133284);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(5,0.4423629);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(6,0.4455282);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(7,0.4565);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(8,0.3936345);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(9,0.3550846);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(10,0.3008168);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(11,0.1888229);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(12,0.2165472);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(13,0.1649263);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(14,0.1506333);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(15,0.1407081);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(16,0.1120708);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(17,0.1037458);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(18,0.09355477);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(19,0.0786279);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(20,0.07765877);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(21,0.0475073);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(22,0.05332413);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(23,0.04310115);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(24,0.03030941);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(25,0.0397212);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinContent(26,0.3044486);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(1,0.01057542);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(2,0.01964352);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(3,0.0243445);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(4,0.02768868);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(5,0.02834144);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(6,0.02879839);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(7,0.0285314);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(8,0.02618941);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(9,0.02515832);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(10,0.02466072);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(11,0.02037786);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(12,0.02014528);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(13,0.01789947);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(14,0.01683364);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(15,0.01597963);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(16,0.01484706);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(17,0.0135455);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(18,0.01346288);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(19,0.01245464);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(20,0.01256817);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(21,0.009632185);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(22,0.01052748);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(23,0.009695813);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(24,0.008233586);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(25,0.008979325);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetBinError(26,0.02387225);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->Add(new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235 = new TH1D("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235","histo_Vg",25,15,150);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(1,28.04148);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(2,53.26988);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(3,53.48621);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(4,36.59768);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(5,18.87519);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(6,10.76563);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(7,7.114064);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(8,4.43755);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(9,2.442504);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(10,2.922765);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(11,1.505917);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(12,1.227144);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(13,0.7627951);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(14,0.3624149);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(15,1.166001);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(16,0.3925019);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(17,0.5446119);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(18,0.4251842);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(19,0.4659196);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(20,0.348296);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(21,-0.06996994);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(22,0.09474634);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(23,0.3249352);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(24,0.1555295);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(25,0.06535574);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinContent(26,0.8136756);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(1,2.043356);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(2,2.73853);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(3,2.902718);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(4,2.414035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(5,1.791837);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(6,1.362653);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(7,1.05379);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(8,0.8619608);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(9,0.7262517);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(10,0.6652769);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(11,0.5425179);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(12,0.4821522);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(13,0.533248);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(14,0.3752369);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(15,0.4907335);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(16,0.2418182);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(17,0.3353806);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(18,0.2760325);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(19,0.2701835);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(20,0.2015558);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(21,0.1801667);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(22,0.2253961);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(23,0.1932893);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(24,0.1956632);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(25,0.2152667);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetBinError(26,0.4060394);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->Add(new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236 = new TH1D("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236","histo_ZZ",25,15,150);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(1,1.844352);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(2,4.017299);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(3,4.346091);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(4,7.623469);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(5,7.849903);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(6,6.895085);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(7,4.605374);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(8,3.220283);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(9,2.471998);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(10,2.197505);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(11,1.640461);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(12,1.342484);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(13,0.8509761);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(14,0.779316);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(15,0.3232598);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(16,0.6242615);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(17,0.2771588);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(18,0.4633634);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(19,0.2347879);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(20,0.1370875);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(21,0.4757958);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(22,0.0412371);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(23,0.07142666);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(24,0.06512556);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(25,0.1672447);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinContent(26,0.9523702);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(1,0.2713191);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(2,0.4113326);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(3,0.4253309);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(4,0.5595874);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(5,0.5669683);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(6,0.5360955);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(7,0.4297589);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(8,0.3643629);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(9,0.3194057);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(10,0.305906);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(11,0.2616299);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(12,0.2335433);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(13,0.1802994);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(14,0.1724084);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(15,0.1127179);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(16,0.1568632);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(17,0.107152);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(18,0.1431681);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(19,0.09873527);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(20,0.07061295);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(21,0.141036);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(22,0.0412371);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(23,0.05454528);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(24,0.04953004);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(25,0.08550098);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetBinError(26,0.1983274);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237 = new TH1D("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237","histo_WZ",25,15,150);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(1,9.244983);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(2,19.00674);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(3,32.00962);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(4,44.33667);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(5,52.0232);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(6,47.2086);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(7,35.28812);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(8,26.4107);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(9,20.36345);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(10,16.15027);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(11,12.26826);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(12,9.618126);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(13,7.569863);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(14,6.183366);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(15,4.818293);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(16,3.963827);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(17,3.549989);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(18,2.820702);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(19,2.218105);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(20,1.933936);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(21,1.442043);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(22,1.461392);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(23,1.02915);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(24,1.027497);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(25,0.8908491);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinContent(26,5.811646);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(1,0.2234378);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(2,0.3226768);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(3,0.4185543);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(4,0.4905498);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(5,0.5312702);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(6,0.5077189);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(7,0.4397985);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(8,0.379969);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(9,0.3336104);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(10,0.2968293);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(11,0.2586844);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(12,0.2294342);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(13,0.2032218);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(14,0.1830621);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(15,0.1625162);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(16,0.1460378);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(17,0.1385003);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(18,0.1229259);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(19,0.1096085);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(20,0.1018866);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(21,0.08816382);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(22,0.08929256);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(23,0.07457587);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(24,0.07499858);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(25,0.0687377);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetBinError(26,0.1768781);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->Add(new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(1,0.1821986);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(2,0.3280099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(3,0.4971554);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(4,0.5464987);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(5,0.5585332);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(6,0.4958287);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(7,0.4521733);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(8,0.4008196);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(9,0.2837058);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(10,0.2009137);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(11,0.1928309);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(12,0.1693989);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(13,0.1303213);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(14,0.1108166);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(15,0.09886059);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(16,0.06500777);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(17,0.05908047);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(18,0.04733295);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(19,0.02578272);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(20,0.02870508);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(21,0.02206144);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(22,0.01928675);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(23,0.01659117);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(24,0.01283309);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(25,0.008299948);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinContent(26,0.05410789);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(1,0.0146071);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(2,0.01943186);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(3,0.02361277);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(4,0.02524691);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(5,0.02570158);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(6,0.02359475);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(7,0.02244498);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(8,0.02115898);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(9,0.01625054);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(10,0.01354493);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(11,0.01338478);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(12,0.01260107);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(13,0.01034242);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(14,0.009955578);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(15,0.009598829);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(16,0.006975441);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(17,0.006898283);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(18,0.006711651);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(19,0.004429082);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(20,0.004705443);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(21,0.004178166);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(22,0.004061312);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(23,0.003714761);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(24,0.003010858);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(25,0.002279849);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetBinError(26,0.007407462);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt2,"");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2->SetName("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8 = new TH1F("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8","thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2",25,15,150);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->SetMaximum(0.6134465);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(1,0.1821986);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(2,0.3280099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(3,0.4971554);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(4,0.5464987);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(5,0.5585332);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(6,0.4958287);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(7,0.4521733);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(8,0.4008196);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(9,0.2837058);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(10,0.2009137);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(11,0.1928309);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(12,0.1693989);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(13,0.1303213);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(14,0.1108166);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(15,0.09886059);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(16,0.06500777);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(17,0.05908047);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(18,0.04733295);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(19,0.02578272);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(20,0.02870508);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(21,0.02206144);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(22,0.01928675);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(23,0.01659117);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(24,0.01283309);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(25,0.008299948);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinContent(26,0.05410789);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(1,0.0146071);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(2,0.01943186);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(3,0.02361277);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(4,0.02524691);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(5,0.02570158);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(6,0.02359475);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(7,0.02244498);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(8,0.02115898);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(9,0.01625054);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(10,0.01354493);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(11,0.01338478);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(12,0.01260107);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(13,0.01034242);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(14,0.009955578);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(15,0.009598829);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(16,0.006975441);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(17,0.006898283);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(18,0.006711651);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(19,0.004429082);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(20,0.004705443);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(21,0.004178166);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(22,0.004061312);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(23,0.003714761);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(24,0.003010858);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(25,0.002279849);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetBinError(26,0.007407462);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt239->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt2,"");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3007[25] = {
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
   Double_t _fy3007[25] = {
   67.81301,
   126.0478,
   141.6283,
   150.2982,
   116.4474,
   91.15258,
   58.83039,
   41.48412,
   30.16078,
   24.00209,
   19.16759,
   13.58933,
   10.04433,
   8.790466,
   7.19921,
   6.627158,
   4.591249,
   4.217835,
   2.822701,
   2.645565,
   1.986537,
   1.413443,
   1.360211,
   1.673012,
   1.102165};
   Double_t _felx3007[25] = {
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
   Double_t _fely3007[25] = {
   12.79839,
   20.05679,
   20.57766,
   23.6447,
   15.14084,
   10.98618,
   5.940785,
   4.296308,
   3.270893,
   2.688226,
   2.608441,
   1.835326,
   1.599714,
   1.432463,
   1.434932,
   1.365503,
   0.7401183,
   0.9301674,
   0.677286,
   0.509831,
   0.5212811,
   0.4588303,
   0.4527144,
   0.7012873,
   0.2813787};
   Double_t _fehx3007[25] = {
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
   Double_t _fehy3007[25] = {
   12.78869,
   20.04315,
   20.56826,
   23.64191,
   15.13564,
   10.98475,
   5.936465,
   4.295077,
   3.267555,
   2.686663,
   2.606489,
   1.834172,
   1.595156,
   1.442142,
   1.432473,
   1.363017,
   0.8094051,
   0.9264371,
   0.6744235,
   0.5079464,
   0.4890075,
   0.5856594,
   0.4472006,
   0.7858662,
   0.4286583};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,1.5,163.5);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(191.252);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t _fx3008[25] = {
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
   Double_t _fy3008[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,1.5,163.5);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.262698);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy40 = new TH1F("hframe_copy40","",1000,15,150);
   hframe_copy40->SetMinimum(0);
   hframe_copy40->SetMaximum(377.1118);
   hframe_copy40->SetDirectory(0);
   hframe_copy40->SetStats(0);
   hframe_copy40->SetLineStyle(0);
   hframe_copy40->SetMarkerStyle(20);
   hframe_copy40->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy40->GetXaxis()->SetNdivisions(506);
   hframe_copy40->GetXaxis()->SetLabelFont(42);
   hframe_copy40->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetXaxis()->SetLabelSize(0.05);
   hframe_copy40->GetXaxis()->SetTitleSize(0.06);
   hframe_copy40->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy40->GetXaxis()->SetTitleFont(42);
   hframe_copy40->GetYaxis()->SetTitle("Events");
   hframe_copy40->GetYaxis()->SetLabelFont(42);
   hframe_copy40->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetYaxis()->SetLabelSize(0.05);
   hframe_copy40->GetYaxis()->SetTitleSize(0.06);
   hframe_copy40->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy40->GetYaxis()->SetTitleFont(42);
   hframe_copy40->GetZaxis()->SetLabelFont(42);
   hframe_copy40->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetZaxis()->SetLabelSize(0.05);
   hframe_copy40->GetZaxis()->SetTitleSize(0.06);
   hframe_copy40->GetZaxis()->SetTitleFont(42);
   hframe_copy40->Draw("sameaxis");
   ccwh3l_Pre_OSSF_13TeV_pt2->Modified();
   ccwh3l_Pre_OSSF_13TeV_pt2->cd();
   ccwh3l_Pre_OSSF_13TeV_pt2->SetSelected(ccwh3l_Pre_OSSF_13TeV_pt2);
}
