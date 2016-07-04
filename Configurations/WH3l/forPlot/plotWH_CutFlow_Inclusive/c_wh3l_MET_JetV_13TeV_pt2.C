void c_wh3l_MET_JetV_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_pt2/cc
//=========  (Sun Jul  3 16:18:58 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_pt2 = new TCanvas("ccwh3l_MET_JetV_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_pt2->Range(-12,-10.9183,156.75,73.0686);
   ccwh3l_MET_JetV_13TeV_pt2->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_pt2->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt2->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_pt2->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_pt2->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,15,150);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(68.86926);
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7","thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2",25,15,150);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->SetMinimum(-1.445298);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->SetMaximum(28.92509);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232","histo_Fake",25,15,150);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(1,-0.2248478);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(2,3.411626);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(3,5.453298);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(4,6.361027);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(5,2.307842);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(6,0.6139724);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(7,1.509985);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(8,0.2069659);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(9,-0.1722942);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(10,0.3443081);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(11,0.2975727);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(12,-0.162545);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(13,-0.08129472);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(14,0.4225186);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(15,-0.02118032);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(16,0.3612251);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(17,-0.0544572);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(18,-0.08818095);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(19,0.07132711);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(20,0.08073445);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(22,-0.01909467);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(23,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(24,0.4410789);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(25,-0.01727074);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinContent(26,0.1459152);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(1,1.220451);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(2,1.573795);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(3,2.199335);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(4,2.010002);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(5,1.451551);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(6,0.9243921);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(7,1.007435);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(8,0.6167816);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(9,0.2034218);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(10,0.3967051);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(11,0.281545);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(12,0.1410333);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(13,0.05964689);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(14,0.3624363);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(15,0.01577612);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(16,0.3214887);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(17,0.1037645);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(18,0.08818095);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(19,0.07132711);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(20,0.08066);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(22,0.01909467);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(23,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(24,0.4410789);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(25,0.01661729);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetBinError(26,0.1346127);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetEntries(453);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233","histo_WW",25,15,150);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinContent(4,0.04280537);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinContent(6,0.02852406);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinContent(7,0.03274813);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinContent(10,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinError(4,0.02513505);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinError(6,0.0201697);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinError(7,0.02329387);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetBinError(10,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt233->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234","histo_VVV",25,15,150);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(1,0.01751854);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(2,0.0554321);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(3,0.08162693);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(4,0.1116858);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(5,0.1059872);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(6,0.08180998);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(7,0.1106178);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(8,0.08304918);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(9,0.05320253);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(10,0.06122146);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(11,0.03402073);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(12,0.01260238);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(13,0.02401393);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(14,0.02882056);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(15,0.0186821);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(16,0.0214512);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(17,0.02467776);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(18,0.00859508);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(19,0.01060254);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(20,0.0085606);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(21,0.006504334);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(22,0.004169443);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(23,0.005408774);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(24,5.573235e-05);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(25,0.002908043);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinContent(26,0.03793461);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(1,0.005700772);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(2,0.01078205);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(3,0.01411291);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(4,0.01468642);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(5,0.01521542);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(6,0.01441006);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(7,0.01504293);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(8,0.01300212);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(9,0.009816866);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(10,0.0117863);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(11,0.008330969);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(12,0.007160343);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(13,0.008336858);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(14,0.007469685);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(15,0.00623285);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(16,0.006615762);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(17,0.006926304);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(18,0.003498853);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(19,0.005302605);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(20,0.005308301);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(21,0.003548435);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(22,0.00428368);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(23,0.00274433);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(24,0.003746851);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(25,0.00235876);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetBinError(26,0.008631445);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetEntries(806);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235","histo_Vg",25,15,150);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(1,0.5908771);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(2,3.060064);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(3,1.761348);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(4,1.106098);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(5,0.327111);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(6,0.4248018);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(7,0.1657011);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(8,0.09222501);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinContent(25,0.1076973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(1,0.2384545);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(2,0.5636801);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(3,0.4890273);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(4,0.4391072);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(5,0.2271397);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(6,0.2082414);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(7,0.1180144);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(8,0.1659667);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetBinError(25,0.1076973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236","histo_ZZ",25,15,150);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(1,0.4733034);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(2,0.5161068);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(3,0.726759);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(4,1.413159);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(5,0.927403);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(6,1.068748);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(7,0.5055559);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(8,0.4750636);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(9,0.3140746);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(10,0.4625703);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(11,0.09019703);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(13,0.09560184);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(14,0.03770488);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(16,0.04463009);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(17,0.03541288);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(18,0.04579876);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(19,0.04585245);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(21,0.04317268);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinContent(26,0.1077327);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(1,0.1365167);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(2,0.1448796);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(3,0.1861512);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(4,0.2449769);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(5,0.1980634);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(6,0.2087286);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(7,0.1412422);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(8,0.1353603);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(9,0.1161436);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(10,0.1407217);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(11,0.06392132);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(13,0.0550387);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(14,0.03770488);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(16,0.04463009);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(17,0.03541288);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(18,0.04579876);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(19,0.04585245);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(21,0.04317268);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetBinError(26,0.06528773);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetEntries(200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237","histo_WZ",25,15,150);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(1,3.231985);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(2,8.084296);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(3,14.03903);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(4,18.28793);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(5,19.7133);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(6,16.21846);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(7,10.37737);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(8,6.601942);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(9,4.828142);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(10,3.393646);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(11,2.644734);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(12,1.827051);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(13,1.344006);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(14,1.098653);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(15,1.014353);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(16,0.782781);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(17,0.6515465);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(18,0.5846586);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(19,0.4000723);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(20,0.4165674);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(21,0.3072606);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(22,0.2849205);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(23,0.2418649);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(24,0.1839664);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(25,0.1454957);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinContent(26,1.361879);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(1,0.1318268);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(2,0.2107231);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(3,0.2769634);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(4,0.314409);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(5,0.3266609);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(6,0.2971444);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(7,0.2380326);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(8,0.1895543);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(9,0.1623263);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(10,0.135559);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(11,0.1207035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(12,0.09959488);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(13,0.08550263);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(14,0.07591968);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(15,0.07485998);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(16,0.06480809);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(17,0.0586474);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(18,0.05639292);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(19,0.04620307);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(20,0.04746507);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(21,0.04099161);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(22,0.03950233);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(23,0.03641996);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(24,0.03116162);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(25,0.02791384);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetBinError(26,0.0857164);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetEntries(24086);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(1,0.09140909);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(2,0.1599075);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(3,0.2265505);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(4,0.2250016);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(5,0.1960567);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(6,0.1468788);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(7,0.1540465);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(8,0.1169287);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(9,0.07780458);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(10,0.05736076);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(11,0.04987144);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(12,0.04260527);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(13,0.03041983);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(14,0.02330796);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(15,0.02613747);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(16,0.01515352);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(17,0.01839581);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(18,0.01248689);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(19,0.005696341);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(20,0.004264241);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(21,0.003993793);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(22,0.002098651);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(23,0.0009266621);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(24,0.004240217);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(25,0.004031056);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinContent(26,0.01392813);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(1,0.01059581);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(2,0.01374644);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(3,0.01618989);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(4,0.01627791);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(5,0.01567356);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(6,0.01276646);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(7,0.01374978);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(8,0.01190292);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(9,0.009151727);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(10,0.007792997);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(11,0.007928268);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(12,0.007075757);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(13,0.005581714);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(14,0.005415327);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(15,0.005439316);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(16,0.003818179);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(17,0.004626221);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(18,0.004004617);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(19,0.00266327);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(20,0.00201304);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(21,0.001990953);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(22,0.001152931);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(23,0.0005843361);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(24,0.002117079);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(25,0.00215656);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetBinError(26,0.00370945);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8","thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2",25,15,150);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->SetMaximum(0.2548774);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(1,0.09140909);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(2,0.1599075);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(3,0.2265505);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(4,0.2250016);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(5,0.1960567);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(6,0.1468788);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(7,0.1540465);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(8,0.1169287);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(9,0.07780458);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(10,0.05736076);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(11,0.04987144);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(12,0.04260527);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(13,0.03041983);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(14,0.02330796);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(15,0.02613747);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(16,0.01515352);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(17,0.01839581);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(18,0.01248689);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(19,0.005696341);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(20,0.004264241);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(21,0.003993793);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(22,0.002098651);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(23,0.0009266621);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(24,0.004240217);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(25,0.004031056);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinContent(26,0.01392813);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(1,0.01059581);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(2,0.01374644);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(3,0.01618989);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(4,0.01627791);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(5,0.01567356);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(6,0.01276646);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(7,0.01374978);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(8,0.01190292);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(9,0.009151727);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(10,0.007792997);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(11,0.007928268);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(12,0.007075757);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(13,0.005581714);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(14,0.005415327);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(15,0.005439316);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(16,0.003818179);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(17,0.004626221);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(18,0.004004617);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(19,0.00266327);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(20,0.00201304);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(21,0.001990953);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(22,0.001152931);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(23,0.0005843361);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(24,0.002117079);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(25,0.00215656);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetBinError(26,0.00370945);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt239->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->Draw("hist same noclear");
   
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
   4.088836,
   15.14365,
   22.09065,
   27.3227,
   23.38165,
   18.43631,
   12.70198,
   7.459245,
   5.023125,
   4.27705,
   3.066524,
   1.677109,
   1.382327,
   1.587698,
   1.117704,
   1.210087,
   0.65718,
   0.5508715,
   0.5278544,
   0.5058625,
   0.3569376,
   0.2699953,
   0.2325715,
   0.6251011,
   0.2388303};
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
   1.760936,
   2.830525,
   3.747089,
   3.801258,
   2.391775,
   1.406813,
   1.643493,
   0.6570881,
   0.508733,
   0.6662788,
   0.4911578,
   0.2575537,
   0.2150424,
   0.5075091,
   0.2060131,
   0.4568717,
   0.2089952,
   0.1988347,
   0.1727366,
   0.1378248,
   0.0897292,
   0.06467667,
   0.05481086,
   0.496953,
   0.1549239};
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
   0.7990093,
   2.829052,
   3.745519,
   3.800636,
   2.389717,
   1.708272,
   1.642451,
   1.131784,
   0.4773595,
   0.7170238,
   0.4904418,
   0.2572546,
   0.2145147,
   0.507373,
   0.2056288,
   0.4566267,
   0.1601895,
   0.1980396,
   0.1718093,
   0.1375744,
   0.08929031,
   0.06460011,
   0.05469246,
   0.5004586,
   0.1548867};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,1.5,163.5);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(34.22728);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt2","Data","EPL");
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
   hframe_copy40->SetMaximum(68.86926);
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
   ccwh3l_MET_JetV_13TeV_pt2->Modified();
   ccwh3l_MET_JetV_13TeV_pt2->cd();
   ccwh3l_MET_JetV_13TeV_pt2->SetSelected(ccwh3l_MET_JetV_13TeV_pt2);
}
