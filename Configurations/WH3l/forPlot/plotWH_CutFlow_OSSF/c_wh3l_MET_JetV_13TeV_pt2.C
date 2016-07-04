void c_wh3l_MET_JetV_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_pt2/cc
//=========  (Sat Jul  2 21:43:28 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_pt2 = new TCanvas("ccwh3l_MET_JetV_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_pt2->Range(-28,-19.21493,209.5,128.5922);
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
   
   TH1F *hframe51 = new TH1F("hframe51","",1000,10,200);
   hframe51->SetMinimum(0);
   hframe51->SetMaximum(121.2019);
   hframe51->SetDirectory(0);
   hframe51->SetStats(0);
   hframe51->SetLineStyle(0);
   hframe51->SetMarkerStyle(20);
   hframe51->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe51->GetXaxis()->SetNdivisions(506);
   hframe51->GetXaxis()->SetLabelFont(42);
   hframe51->GetXaxis()->SetLabelOffset(0.007);
   hframe51->GetXaxis()->SetLabelSize(0.05);
   hframe51->GetXaxis()->SetTitleSize(0.06);
   hframe51->GetXaxis()->SetTitleOffset(0.9);
   hframe51->GetXaxis()->SetTitleFont(42);
   hframe51->GetYaxis()->SetTitle("Events");
   hframe51->GetYaxis()->SetLabelFont(42);
   hframe51->GetYaxis()->SetLabelOffset(0.007);
   hframe51->GetYaxis()->SetLabelSize(0.05);
   hframe51->GetYaxis()->SetTitleSize(0.06);
   hframe51->GetYaxis()->SetTitleOffset(1.25);
   hframe51->GetYaxis()->SetTitleFont(42);
   hframe51->GetZaxis()->SetLabelFont(42);
   hframe51->GetZaxis()->SetLabelOffset(0.007);
   hframe51->GetZaxis()->SetLabelSize(0.05);
   hframe51->GetZaxis()->SetTitleSize(0.06);
   hframe51->GetZaxis()->SetTitleFont(42);
   hframe51->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11","thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->SetMinimum(-0.6731071);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->SetMaximum(37.14569);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(1,0.5152099);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(2,2.783276);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(3,6.380405);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(4,5.136998);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(5,1.27509);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(6,0.7788997);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(7,-0.04716827);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(8,0.3005936);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(9,-0.2412287);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(10,-0.02643965);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(11,0.4084226);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(12,0.3541409);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(13,-0.0544572);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(14,-0.08818095);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(15,0.1520616);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(16,-0.01909467);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(18,0.4410789);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(19,-0.01737082);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(20,-0.02338661);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(21,0.1013218);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(22,-0.0197091);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(23,-0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinContent(26,0.0924228);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(1,0.9385746);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(2,1.678559);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(3,2.440082);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(4,1.927403);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(5,1.152243);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(6,0.7242128);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(7,0.6259388);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(8,0.3207218);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(9,0.1234555);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(10,0.09315229);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(11,0.3627104);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(12,0.3215668);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(13,0.1037645);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(14,0.08818095);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(15,0.1076735);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(16,0.01909467);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(18,0.4410789);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(19,0.01661759);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(20,0.02338661);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(21,0.1013218);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(22,0.0197091);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(23,0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetBinError(26,0.08305176);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetEntries(425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinContent(4,0.04280537);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinContent(5,0.04311147);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinContent(6,0.01816071);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinError(4,0.02513505);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinError(5,0.02489195);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinError(6,0.01816071);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetEntries(10);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(1,0.003899961);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(2,0.05400208);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(3,0.1119742);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(4,0.1296238);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(5,0.1147846);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(6,0.1192175);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(7,0.07782494);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(8,0.07773248);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(9,0.02335516);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(10,0.0361631);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(11,0.0287033);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(12,0.02444765);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(13,0.02218794);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(14,0.01182491);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(15,0.01215833);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(16,0.006473533);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(17,0.00544965);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(18,0.0006926271);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(19,0.00482579);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(21,0.004712693);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(22,0.002557024);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(23,0.00275177);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(24,0.001995156);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(25,0.002297577);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinContent(26,0.01805617);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(1,0.002363449);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(2,0.01043329);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(3,0.01585283);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(4,0.01637898);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(5,0.01584101);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(6,0.01548508);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(7,0.01207123);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(8,0.01314272);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(9,0.007756236);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(10,0.009384898);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(11,0.007560569);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(12,0.007036248);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(13,0.006338823);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(14,0.005156015);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(15,0.004555578);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(16,0.00465618);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(17,0.002768214);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(18,0.003800595);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(19,0.003610244);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(21,0.00308116);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(22,0.002145588);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(23,0.00229956);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(24,0.001995156);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(25,0.002297577);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetBinError(26,0.005603954);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetEntries(739);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(1,0.05942902);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(2,3.007629);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(3,2.760195);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(4,0.8131255);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(5,0.6299228);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(6,0.1435628);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(7,0.1143634);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(12,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinContent(19,0.1076973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(1,0.04232062);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(2,0.5684383);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(3,0.6169316);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(4,0.3624969);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(5,0.2541529);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(6,0.1685033);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(7,0.1143634);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(12,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetBinError(19,0.1076973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(1,0.06194558);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(2,0.7621608);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(3,1.300972);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(4,1.552509);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(5,1.492113);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(6,0.7286606);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(7,0.3965775);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(8,0.5580682);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(9,0.04208331);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(10,0.09560184);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(11,0.03770488);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(12,0.04463009);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(13,0.03541288);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(14,0.04579876);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(15,0.04585245);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(16,0.04317268);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(19,0.04495105);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(20,0.01974776);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinContent(21,0.04303389);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(1,0.0387746);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(2,0.176779);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(3,0.2438073);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(4,0.2569501);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(5,0.2466387);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(6,0.1699959);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(7,0.1248897);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(8,0.1560858);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(9,0.04208331);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(10,0.0550387);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(11,0.03770488);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(12,0.04463009);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(13,0.03541288);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(14,0.04579876);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(15,0.04585245);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(16,0.04317268);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(19,0.04495105);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(20,0.01974776);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetBinError(21,0.04303389);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetEntries(198);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(1,1.134496);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(2,8.839417);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(3,20.01941);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(4,27.44031);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(5,23.19286);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(6,12.48596);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(7,7.576986);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(8,4.716666);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(9,2.984462);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(10,1.919285);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(11,1.481865);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(12,1.194251);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(13,0.8761855);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(14,0.6976669);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(15,0.571428);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(16,0.4103824);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(17,0.3418382);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(18,0.2533613);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(19,0.1819367);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(20,0.1960726);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(21,0.1634778);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(22,0.1309782);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(23,0.08953585);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(24,0.09217615);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(25,0.08113015);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinContent(26,0.5026728);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(1,0.07696005);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(2,0.2201602);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(3,0.3303192);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(4,0.3852092);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(5,0.3552539);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(6,0.2609094);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(7,0.2034982);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(8,0.1605177);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(9,0.1273368);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(10,0.1019334);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(11,0.08902861);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(12,0.08049418);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(13,0.06809746);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(14,0.06156179);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(15,0.05543453);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(16,0.04740254);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(17,0.04336106);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(18,0.03668508);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(19,0.03101591);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(20,0.03250749);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(21,0.03007931);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(22,0.02584116);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(23,0.02208607);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(24,0.02146183);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(25,0.02163749);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetBinError(26,0.05238221);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetEntries(23985);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(1,0.0211717);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(2,0.1578479);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(3,0.2681471);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(4,0.2614793);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(5,0.187938);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(6,0.1937029);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(7,0.1123534);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(8,0.06490497);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(9,0.05606501);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(10,0.04094301);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(11,0.02784637);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(12,0.02696758);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(13,0.01812678);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(14,0.01296923);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(15,0.003659548);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(16,0.003299592);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(17,0.001233317);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(18,0.004603903);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(19,0.003299885);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(20,0.002625575);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(21,0.0006708664);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(24,0.001244385);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(25,0.0005332528);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinContent(26,0.004911622);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(1,0.00573727);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(2,0.01387439);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(3,0.01759881);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(4,0.01781302);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(5,0.01475041);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(6,0.01550491);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(7,0.01147123);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(8,0.008255346);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(9,0.008188649);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(10,0.006694763);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(11,0.005630297);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(12,0.005403085);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(13,0.004510876);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(14,0.004027223);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(15,0.001973015);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(16,0.001943246);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(17,0.0006607267);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(18,0.002148086);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(19,0.001918606);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(20,0.001443053);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(21,0.0003971437);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(24,0.001054138);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(25,0.0004440684);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetBinError(26,0.002814872);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12","thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->SetMaximum(0.3000332);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(1,0.0211717);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(2,0.1578479);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(3,0.2681471);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(4,0.2614793);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(5,0.187938);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(6,0.1937029);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(7,0.1123534);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(8,0.06490497);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(9,0.05606501);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(10,0.04094301);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(11,0.02784637);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(12,0.02696758);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(13,0.01812678);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(14,0.01296923);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(15,0.003659548);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(16,0.003299592);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(17,0.001233317);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(18,0.004603903);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(19,0.003299885);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(20,0.002625575);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(21,0.0006708664);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(24,0.001244385);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(25,0.0005332528);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinContent(26,0.004911622);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(1,0.00573727);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(2,0.01387439);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(3,0.01759881);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(4,0.01781302);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(5,0.01475041);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(6,0.01550491);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(7,0.01147123);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(8,0.008255346);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(9,0.008188649);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(10,0.006694763);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(11,0.005630297);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(12,0.005403085);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(13,0.004510876);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(14,0.004027223);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(15,0.001973015);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(16,0.001943246);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(17,0.0006607267);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(18,0.002148086);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(19,0.001918606);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(20,0.001443053);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(21,0.0003971437);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(24,0.001054138);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(25,0.0004440684);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetBinError(26,0.002814872);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt259->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3011[25] = {
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
   Double_t _fy3011[25] = {
   1.77498,
   15.44649,
   30.60155,
   35.11537,
   26.74788,
   14.27446,
   8.118584,
   5.668364,
   2.808672,
   2.024611,
   1.956696,
   1.723318,
   0.8793291,
   0.6671097,
   0.7815003,
   0.4409339,
   0.3472879,
   0.6951329,
   0.32204,
   0.1924337,
   0.3125463,
   0.1138261,
   0.08765395,
   0.09417131,
   0.08342773};
   Double_t _felx3011[25] = {
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
   Double_t _fely3011[25] = {
   0.7084048,
   2.890339,
   4.347006,
   3.526778,
   2.133686,
   1.38154,
   1.093387,
   0.6686379,
   0.320389,
   0.2663056,
   0.5198976,
   0.5752354,
   0.2193579,
   0.206228,
   0.2227068,
   0.1171059,
   0.04789162,
   0.5028848,
   0.2045168,
   0.07659539,
   0.1812045,
   0.04866248,
   0.02948372,
   0.02389278,
   0.02438186};
   Double_t _fehx3011[25] = {
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
   Double_t _fehy3011[25] = {
   1.119393,
   2.888075,
   4.344807,
   3.524273,
   2.13192,
   1.404027,
   0.5270581,
   0.686791,
   0.3196574,
   0.2008615,
   0.5196541,
   0.574878,
   0.1700671,
   0.2052137,
   0.2219344,
   0.1165677,
   0.04770725,
   0.5058279,
   0.2043117,
   0.07648166,
   0.1811823,
   0.04863093,
   0.02938936,
   0.02384398,
   0.02438783};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,219);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(42.49779);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2");
   
   Double_t _fx3012[25] = {
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
   Double_t _fy3012[25] = {
   2,
   19,
   37,
   42,
   41,
   8,
   19,
   3,
   5,
   3,
   1,
   1,
   3,
   1,
   0,
   1,
   0,
   0,
   1,
   1,
   0,
   1,
   1,
   0,
   0};
   Double_t _felx3012[25] = {
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
   Double_t _fely3012[25] = {
   1.29183,
   4.320299,
   6.05526,
   6.454957,
   6.377022,
   2.768432,
   4.320299,
   1.632727,
   2.159724,
   1.632727,
   0.8272524,
   0.8272524,
   1.632727,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0.8272524,
   0,
   0};
   Double_t _fehx3012[25] = {
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
   Double_t _fehy3012[25] = {
   2.63791,
   5.435307,
   7.137703,
   7.532337,
   7.45534,
   3.94522,
   5.435307,
   2.918242,
   3.382539,
   2.918242,
   2.29957,
   2.29957,
   2.918242,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   2.29957,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,219);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(54.48557);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
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
   
   TH1F *hframe_copy60 = new TH1F("hframe_copy60","",1000,10,200);
   hframe_copy60->SetMinimum(0);
   hframe_copy60->SetMaximum(121.2019);
   hframe_copy60->SetDirectory(0);
   hframe_copy60->SetStats(0);
   hframe_copy60->SetLineStyle(0);
   hframe_copy60->SetMarkerStyle(20);
   hframe_copy60->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy60->GetXaxis()->SetNdivisions(506);
   hframe_copy60->GetXaxis()->SetLabelFont(42);
   hframe_copy60->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetXaxis()->SetLabelSize(0.05);
   hframe_copy60->GetXaxis()->SetTitleSize(0.06);
   hframe_copy60->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy60->GetXaxis()->SetTitleFont(42);
   hframe_copy60->GetYaxis()->SetTitle("Events");
   hframe_copy60->GetYaxis()->SetLabelFont(42);
   hframe_copy60->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetYaxis()->SetLabelSize(0.05);
   hframe_copy60->GetYaxis()->SetTitleSize(0.06);
   hframe_copy60->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy60->GetYaxis()->SetTitleFont(42);
   hframe_copy60->GetZaxis()->SetLabelFont(42);
   hframe_copy60->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetZaxis()->SetLabelSize(0.05);
   hframe_copy60->GetZaxis()->SetTitleSize(0.06);
   hframe_copy60->GetZaxis()->SetTitleFont(42);
   hframe_copy60->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_pt2->Modified();
   ccwh3l_MET_JetV_13TeV_pt2->cd();
   ccwh3l_MET_JetV_13TeV_pt2->SetSelected(ccwh3l_MET_JetV_13TeV_pt2);
}
