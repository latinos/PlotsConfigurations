void c_wh3l_Pre_OSSF_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_Pre_OSSF_13TeV_pt1/cc
//=========  (Sun Jul  3 16:48:28 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_OSSF_13TeV_pt1 = new TCanvas("ccwh3l_Pre_OSSF_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_Pre_OSSF_13TeV_pt1->Range(-16,-51.1308,209,342.183);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetFillColor(0);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetBorderSize(2);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetTickx(1);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetTicky(1);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,20,200);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(322.5173);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe91->GetXaxis()->SetNdivisions(506);
   hframe91->GetXaxis()->SetLabelFont(42);
   hframe91->GetXaxis()->SetLabelOffset(0.007);
   hframe91->GetXaxis()->SetLabelSize(0.05);
   hframe91->GetXaxis()->SetTitleSize(0.06);
   hframe91->GetXaxis()->SetTitleOffset(0.9);
   hframe91->GetXaxis()->SetTitleFont(42);
   hframe91->GetYaxis()->SetTitle("Events");
   hframe91->GetYaxis()->SetLabelFont(42);
   hframe91->GetYaxis()->SetLabelOffset(0.007);
   hframe91->GetYaxis()->SetLabelSize(0.05);
   hframe91->GetYaxis()->SetTitleSize(0.06);
   hframe91->GetYaxis()->SetTitleOffset(1.25);
   hframe91->GetYaxis()->SetTitleFont(42);
   hframe91->GetZaxis()->SetLabelFont(42);
   hframe91->GetZaxis()->SetLabelOffset(0.007);
   hframe91->GetZaxis()->SetLabelSize(0.05);
   hframe91->GetZaxis()->SetTitleSize(0.06);
   hframe91->GetZaxis()->SetTitleFont(42);
   hframe91->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->SetName("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19 = new TH1F("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19","thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1",25,20,200);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->SetMinimum(-0.2173263);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->SetMaximum(135.4573);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192 = new TH1D("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192","histo_Fake",25,20,200);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(1,8.976125);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(2,23.27557);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(3,40.96035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(4,43.76627);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(5,47.132);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(6,35.52787);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(7,21.53147);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(8,16.56694);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(9,13.57675);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(10,6.196483);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(11,6.610337);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(12,4.727694);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(13,4.986536);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(14,1.076878);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(15,3.261007);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(16,1.418312);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(17,0.9256121);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(18,0.2759651);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(19,0.819801);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(20,2.017794);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(21,1.70439);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(22,2.439057);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(23,-0.1106324);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(24,0.08986556);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(25,0.2879493);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinContent(26,0.8168504);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(1,3.265562);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(2,3.879188);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(3,5.143588);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(4,5.112868);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(5,5.511837);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(6,4.50494);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(7,3.53421);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(8,3.148149);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(9,2.733948);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(10,2.010541);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(11,1.740627);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(12,1.802195);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(13,1.521933);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(14,1.105533);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(15,1.193395);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(16,0.8278255);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(17,0.7963435);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(18,0.2565335);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(19,0.9972038);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(20,1.02042);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(21,1.06762);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(22,1.201909);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(23,0.1066939);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(24,0.156887);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(25,0.1622134);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetBinError(26,0.9313857);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->Add(new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193 = new TH1D("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193","histo_WW",25,20,200);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(2,0.05323686);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(3,0.01034371);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(4,0.02784318);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(5,0.05745563);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(6,0.07123238);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(7,0.01273931);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(8,0.03406818);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(9,0.03332006);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(10,0.0291407);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(11,0.01566606);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(14,0.04026545);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(16,0.01305253);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinContent(26,0.02181735);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(2,0.03156997);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(3,0.01034371);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(4,0.02029379);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(5,0.02931931);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(6,0.03370235);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(7,0.01273931);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(8,0.02436031);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(9,0.02363879);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(10,0.02123909);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(11,0.01566606);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(14,0.02390001);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(16,0.01305253);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetBinError(26,0.01629472);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->Add(new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194 = new TH1D("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194","histo_VVV",25,20,200);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(1,0.01236305);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(2,0.04904929);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(3,0.114433);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(4,0.2149871);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(5,0.2854022);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(6,0.3466542);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(7,0.3275154);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(8,0.3485159);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(9,0.3488381);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(10,0.2790055);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(11,0.2740449);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(12,0.2367425);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(13,0.1892341);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(14,0.1670344);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(15,0.1723906);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(16,0.1507853);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(17,0.1356373);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(18,0.12175);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(19,0.1289941);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(20,0.1202034);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(21,0.1319289);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(22,0.09388078);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(23,0.05645725);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(24,0.06888605);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(25,0.06413538);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinContent(26,0.770996);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(1,0.00505864);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(2,0.01077965);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(3,0.01502879);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(4,0.01973629);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(5,0.02437567);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(6,0.02541074);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(7,0.02309115);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(8,0.02566179);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(9,0.0254447);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(10,0.02300356);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(11,0.02324273);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(12,0.02127061);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(13,0.01941448);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(14,0.01748086);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(15,0.01820929);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(16,0.01621798);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(17,0.01555004);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(18,0.01484421);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(19,0.01588282);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(20,0.01482808);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(21,0.01539503);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(22,0.01348575);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(23,0.010728);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(24,0.01131422);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(25,0.01104035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetBinError(26,0.0383626);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->Add(new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195 = new TH1D("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195","histo_Vg",25,20,200);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(1,11.57126);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(2,32.85505);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(3,56.6911);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(4,44.0972);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(5,26.43357);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(6,14.97418);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(7,11.04366);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(8,7.695916);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(9,4.457803);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(10,3.683093);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(11,1.897053);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(12,2.466297);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(13,1.198741);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(14,1.617474);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(15,1.309766);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(16,0.372409);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(17,0.3917544);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(18,0.3339068);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(19,1.010868);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(20,0.7166647);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(21,0.6765417);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(22,-0.007094819);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(23,0.6081084);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(24,0.07375429);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(25,0.004261324);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinContent(26,0.3646682);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(1,1.2711);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(2,2.169003);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(3,2.831785);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(4,2.606797);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(5,2.088335);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(6,1.577859);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(7,1.31657);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(8,1.199888);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(9,0.8725601);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(10,0.8586072);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(11,0.7285732);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(12,0.6868049);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(13,0.5985335);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(14,0.5094471);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(15,0.4324487);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(16,0.4803353);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(17,0.3779503);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(18,0.3502441);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(19,0.365627);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(20,0.3604286);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(21,0.2714854);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(22,0.1521329);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(23,0.2596169);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(24,0.2480294);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(25,0.1527112);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetBinError(26,0.519136);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->Add(new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196 = new TH1D("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196","histo_ZZ",25,20,200);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(1,0.8945776);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(2,1.453755);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(3,2.806613);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(4,6.375098);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(5,7.459136);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(6,7.135204);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(7,5.241959);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(8,4.295136);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(9,2.927553);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(10,2.840937);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(11,2.552778);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(12,1.785961);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(13,1.485817);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(14,1.006792);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(15,0.7547594);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(16,0.5029147);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(17,0.6321686);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(18,0.3880139);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(19,0.4334457);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(20,0.4034817);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(21,0.3830359);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(22,0.112924);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(23,0.2209311);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(24,0.2097874);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(25,0.06912343);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinContent(26,1.145811);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(1,0.1915523);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(2,0.2459136);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(3,0.3402688);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(4,0.5146553);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(5,0.5548072);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(6,0.5384983);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(7,0.465614);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(8,0.4248396);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(9,0.3438773);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(10,0.3435586);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(11,0.3213269);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(12,0.2691048);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(13,0.2449828);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(14,0.204224);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(15,0.1764429);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(16,0.1420586);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(17,0.1585976);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(18,0.1246542);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(19,0.1365409);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(20,0.1266627);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(21,0.1304815);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(22,0.06079016);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(23,0.1003777);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(24,0.08927148);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(25,0.0498044);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetBinError(26,0.2171652);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197 = new TH1D("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197","histo_WZ",25,20,200);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(1,2.843288);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(2,7.304799);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(3,15.37107);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(4,34.16499);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(5,46.51313);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(6,44.06539);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(7,37.33769);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(8,30.28869);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(9,24.27822);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(10,19.77316);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(11,15.91318);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(12,12.86158);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(13,10.98032);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(14,8.875366);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(15,7.461064);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(16,6.388788);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(17,5.296963);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(18,4.257821);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(19,4.168232);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(20,3.280194);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(21,2.977965);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(22,2.318808);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(23,2.297858);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(24,2.011823);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(25,1.758483);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinContent(26,15.86055);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(1,0.1240109);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(2,0.199477);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(3,0.2890126);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(4,0.4314334);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(5,0.5041954);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(6,0.4899682);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(7,0.4513632);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(8,0.4072772);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(9,0.3646485);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(10,0.3291007);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(11,0.2943977);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(12,0.264027);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(13,0.244212);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(14,0.2194687);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(15,0.2013972);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(16,0.185634);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(17,0.1690939);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(18,0.1518841);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(19,0.1508599);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(20,0.1324802);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(21,0.1277344);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(22,0.1120048);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(23,0.1119131);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(24,0.1037188);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(25,0.09723152);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetBinError(26,0.2933757);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->Add(new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(1,0.04406366);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(2,0.1255265);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(3,0.2238548);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(4,0.3605492);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(5,0.4397788);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(6,0.435487);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(7,0.3879779);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(8,0.3684715);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(9,0.3698897);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(10,0.3121371);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(11,0.2989074);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(12,0.2228133);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(13,0.2289199);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(14,0.1755754);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(15,0.1424731);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(16,0.1370678);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(17,0.1147901);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(18,0.08914998);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(19,0.07356954);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(20,0.06357858);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(21,0.05334151);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(22,0.04778423);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(23,0.0299849);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(24,0.0268926);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(25,0.03369441);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinContent(26,0.2008754);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(1,0.006990348);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(2,0.01193688);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(3,0.01575445);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(4,0.02129298);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(5,0.02353108);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(6,0.02306864);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(7,0.02075826);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(8,0.0202143);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(9,0.02071545);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(10,0.01834804);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(11,0.01742804);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(12,0.01455415);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(13,0.01446074);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(14,0.01253431);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(15,0.01129424);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(16,0.01114942);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(17,0.01041877);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(18,0.008592022);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(19,0.007752236);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(20,0.007108099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(21,0.006768948);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(22,0.005929033);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(23,0.004384513);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(24,0.005091609);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(25,0.005615541);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetBinError(26,0.01303465);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt1,"");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1->SetName("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20 = new TH1F("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20","thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1",25,20,200);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->SetMaximum(0.4864754);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(1,0.04406366);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(2,0.1255265);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(3,0.2238548);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(4,0.3605492);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(5,0.4397788);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(6,0.435487);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(7,0.3879779);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(8,0.3684715);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(9,0.3698897);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(10,0.3121371);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(11,0.2989074);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(12,0.2228133);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(13,0.2289199);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(14,0.1755754);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(15,0.1424731);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(16,0.1370678);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(17,0.1147901);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(18,0.08914998);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(19,0.07356954);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(20,0.06357858);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(21,0.05334151);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(22,0.04778423);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(23,0.0299849);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(24,0.0268926);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(25,0.03369441);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinContent(26,0.2008754);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(1,0.006990348);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(2,0.01193688);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(3,0.01575445);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(4,0.02129298);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(5,0.02353108);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(6,0.02306864);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(7,0.02075826);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(8,0.0202143);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(9,0.02071545);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(10,0.01834804);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(11,0.01742804);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(12,0.01455415);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(13,0.01446074);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(14,0.01253431);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(15,0.01129424);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(16,0.01114942);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(17,0.01041877);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(18,0.008592022);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(19,0.007752236);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(20,0.007108099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(21,0.006768948);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(22,0.005929033);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(23,0.004384513);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(24,0.005091609);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(25,0.005615541);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetBinError(26,0.01303465);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt1,"");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3019[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3019[25] = {
   24.29761,
   64.99146,
   115.9539,
   128.6464,
   127.8807,
   102.1205,
   75.49503,
   59.22926,
   45.62248,
   32.80182,
   27.26306,
   22.09259,
   18.84064,
   12.78381,
   12.95899,
   8.846262,
   7.382136,
   5.377457,
   6.561341,
   6.538338,
   5.873861,
   4.957575,
   3.072723,
   2.454117,
   2.183953};
   Double_t _felx3019[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3019[25] = {
   5.85896,
   10.63023,
   16.96764,
   17.79882,
   18.75019,
   14.42518,
   9.595931,
   7.871355,
   6.497409,
   4.233936,
   3.919544,
   3.525515,
   3.192399,
   2.130376,
   2.35375,
   1.661665,
   1.578515,
   0.9126938,
   1.533898,
   1.810335,
   1.729812,
   1.764916,
   0.6105853,
   0.383057,
   0.3506756};
   Double_t _fehx3019[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3019[25] = {
   5.858769,
   10.62082,
   16.95913,
   17.79474,
   18.74664,
   14.42262,
   9.59416,
   7.870275,
   6.497757,
   4.231922,
   3.918134,
   3.518718,
   3.185724,
   2.151299,
   2.347929,
   1.759442,
   1.574024,
   0.9244805,
   1.704982,
   1.809627,
   1.727828,
   1.639489,
   0.6056409,
   0.6172765,
   0.4903222};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,2.000001,218);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(161.1067);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t _fx3020[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3020[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3020[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3020[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3020[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3020[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,2.000001,218);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(1.262698);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy100 = new TH1F("hframe_copy100","",1000,20,200);
   hframe_copy100->SetMinimum(0);
   hframe_copy100->SetMaximum(322.5173);
   hframe_copy100->SetDirectory(0);
   hframe_copy100->SetStats(0);
   hframe_copy100->SetLineStyle(0);
   hframe_copy100->SetMarkerStyle(20);
   hframe_copy100->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy100->GetXaxis()->SetNdivisions(506);
   hframe_copy100->GetXaxis()->SetLabelFont(42);
   hframe_copy100->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetXaxis()->SetLabelSize(0.05);
   hframe_copy100->GetXaxis()->SetTitleSize(0.06);
   hframe_copy100->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy100->GetXaxis()->SetTitleFont(42);
   hframe_copy100->GetYaxis()->SetTitle("Events");
   hframe_copy100->GetYaxis()->SetLabelFont(42);
   hframe_copy100->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetYaxis()->SetLabelSize(0.05);
   hframe_copy100->GetYaxis()->SetTitleSize(0.06);
   hframe_copy100->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy100->GetYaxis()->SetTitleFont(42);
   hframe_copy100->GetZaxis()->SetLabelFont(42);
   hframe_copy100->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetZaxis()->SetLabelSize(0.05);
   hframe_copy100->GetZaxis()->SetTitleSize(0.06);
   hframe_copy100->GetZaxis()->SetTitleFont(42);
   hframe_copy100->Draw("sameaxis");
   ccwh3l_Pre_OSSF_13TeV_pt1->Modified();
   ccwh3l_Pre_OSSF_13TeV_pt1->cd();
   ccwh3l_Pre_OSSF_13TeV_pt1->SetSelected(ccwh3l_Pre_OSSF_13TeV_pt1);
}
