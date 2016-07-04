void c_wh3l_Pre_OSSF_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_Pre_OSSF_13TeV_pt3/cc
//=========  (Sun Jul  3 16:48:27 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_OSSF_13TeV_pt3 = new TCanvas("ccwh3l_Pre_OSSF_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_Pre_OSSF_13TeV_pt3->Range(-7.999999,-70.8254,104.5,473.9854);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetFillColor(0);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetBorderSize(2);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetTickx(1);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetTicky(1);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe71 = new TH1F("hframe71","",1000,10,100);
   hframe71->SetMinimum(0);
   hframe71->SetMaximum(446.7448);
   hframe71->SetDirectory(0);
   hframe71->SetStats(0);
   hframe71->SetLineStyle(0);
   hframe71->SetMarkerStyle(20);
   hframe71->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe71->GetXaxis()->SetNdivisions(506);
   hframe71->GetXaxis()->SetLabelFont(42);
   hframe71->GetXaxis()->SetLabelOffset(0.007);
   hframe71->GetXaxis()->SetLabelSize(0.05);
   hframe71->GetXaxis()->SetTitleSize(0.06);
   hframe71->GetXaxis()->SetTitleOffset(0.9);
   hframe71->GetXaxis()->SetTitleFont(42);
   hframe71->GetYaxis()->SetTitle("Events");
   hframe71->GetYaxis()->SetLabelFont(42);
   hframe71->GetYaxis()->SetLabelOffset(0.007);
   hframe71->GetYaxis()->SetLabelSize(0.05);
   hframe71->GetYaxis()->SetTitleSize(0.06);
   hframe71->GetYaxis()->SetTitleOffset(1.25);
   hframe71->GetYaxis()->SetTitleFont(42);
   hframe71->GetZaxis()->SetLabelFont(42);
   hframe71->GetZaxis()->SetLabelOffset(0.007);
   hframe71->GetZaxis()->SetLabelSize(0.05);
   hframe71->GetZaxis()->SetTitleSize(0.06);
   hframe71->GetZaxis()->SetTitleFont(42);
   hframe71->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->SetName("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15 = new TH1F("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15","thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3",25,10,100);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->SetMinimum(-0.3603672);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->SetMaximum(187.6328);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372 = new TH1D("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372","histo_Fake",25,10,100);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(1,83.79163);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(2,80.54549);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(3,39.57767);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(4,36.11466);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(5,13.1094);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(6,12.26588);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(7,8.27067);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(8,5.143684);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(9,1.726659);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(10,3.386365);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(11,1.12187);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(12,0.9022869);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(13,0.639869);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(14,1.642763);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(15,0.3599255);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(16,0.02493265);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(17,0.05876933);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(18,-0.02699191);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(19,0.1256825);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(20,0.1141508);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(21,-0.05848589);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(22,-0.02072278);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(23,0.009508357);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(24,0.06583638);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinContent(26,-0.03427706);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(1,8.78939);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(2,7.215763);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(3,4.32702);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(4,3.919644);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(5,2.269214);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(6,2.168881);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(7,1.748507);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(8,1.422543);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(9,0.7847065);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(10,1.027598);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(11,0.5058568);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(12,0.2810354);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(13,0.3592147);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(14,0.6545695);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(15,0.335224);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(16,0.07716391);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(17,0.1038746);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(18,0.09870928);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(19,0.1023281);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(20,0.09828787);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(21,0.0413654);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(22,0.02072278);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(23,0.01005039);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(24,0.06583638);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetBinError(26,0.0848834);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt372->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->Add(new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373 = new TH1D("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373","histo_WW",25,10,100);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(1,0.07876609);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(2,0.1044584);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(3,0.09760748);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(4,0.04366378);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(5,0.05346683);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(6,0.004725511);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(7,0.01447441);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(9,0.009663942);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(12,0.01461809);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinContent(21,0.01305253);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(1,0.03563997);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(2,0.0412507);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(3,0.04015041);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(4,0.02580281);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(5,0.02784014);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(6,0.004725511);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(7,0.01447441);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(9,0.009663942);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(12,0.01461809);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetBinError(21,0.01305253);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt373->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->Add(new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374 = new TH1D("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374","histo_VVV",25,10,100);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(1,0.2958202);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(2,0.4499542);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(3,0.5178406);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(4,0.4762353);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(5,0.4831691);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(6,0.4801836);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(7,0.4795423);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(8,0.3338116);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(9,0.2848247);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(10,0.2298253);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(11,0.2229923);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(12,0.1866841);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(13,0.1096388);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(14,0.08218941);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(15,0.09412176);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(16,0.07082532);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(17,0.04270681);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(18,0.05367491);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(19,0.04188487);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(20,0.0343677);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(21,0.02386141);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(22,0.03057036);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(23,0.0138996);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(24,0.01594392);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(25,0.0209121);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinContent(26,0.1343843);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(1,0.02466658);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(2,0.02910315);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(3,0.03163412);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(4,0.03055098);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(5,0.02972524);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(6,0.02974119);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(7,0.02981837);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(8,0.02466463);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(9,0.02295977);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(10,0.02106521);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(11,0.0195741);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(12,0.01881507);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(13,0.01425991);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(14,0.01250333);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(15,0.01307598);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(16,0.01123187);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(17,0.009385474);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(18,0.009545903);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(19,0.009529224);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(20,0.008218235);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(21,0.007461059);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(22,0.00853332);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(23,0.004658795);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(24,0.005274457);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(25,0.006860748);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetBinError(26,0.01556831);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt374->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->Add(new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375 = new TH1D("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375","histo_Vg",25,10,100);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(1,55.86159);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(2,59.70717);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(3,41.64368);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(4,25.11707);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(5,16.62166);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(6,6.42827);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(7,6.53681);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(8,3.962331);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(9,3.244591);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(10,1.991068);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(11,1.447619);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(12,1.173041);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(13,0.123336);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(14,1.173576);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(15,0.4528519);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(16,0.09550371);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(17,0.2690084);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(18,0.4303881);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(19,0.1398105);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(20,-0.01352369);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(21,-0.2103043);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(23,0.1198037);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(24,-0.009118929);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(25,0.09054862);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinContent(26,0.141221);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(1,2.946539);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(2,2.923001);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(3,2.600917);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(4,2.041827);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(5,1.625568);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(6,1.10152);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(7,1.020193);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(8,0.8532658);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(9,0.7231683);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(10,0.5790773);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(11,0.4414135);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(12,0.4616457);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(13,0.2678092);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(14,0.4385553);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(15,0.2751437);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(16,0.244709);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(17,0.1694413);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(18,0.2193263);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(19,0.2041918);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(20,0.2543611);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(21,0.1500629);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(23,0.1198037);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(24,0.167729);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(25,0.09054862);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetBinError(26,0.1897093);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt375->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->Add(new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376 = new TH1D("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376","histo_ZZ",25,10,100);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(1,4.936895);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(2,5.105706);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(3,7.250682);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(4,6.092763);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(5,6.096291);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(6,4.952256);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(7,4.928124);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(8,3.724489);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(9,3.435403);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(10,2.238381);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(11,1.231252);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(12,1.121984);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(13,0.4410989);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(14,0.2856741);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(15,0.2167355);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(16,0.3031304);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(17,0.3677191);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(18,0.2480749);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(19,0.06282513);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(20,0.1074771);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(22,0.08358244);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(23,0.03777287);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinContent(26,0.2493988);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(1,0.4535155);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(2,0.4565845);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(3,0.5492926);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(4,0.4972552);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(5,0.4964809);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(6,0.4525992);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(7,0.4468936);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(8,0.3956509);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(9,0.3759439);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(10,0.3033799);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(11,0.2276547);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(12,0.2177667);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(13,0.1317647);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(14,0.1082361);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(15,0.09853989);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(16,0.1153101);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(17,0.1226509);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(18,0.1083675);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(19,0.04706851);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(20,0.06300779);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(22,0.05417696);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(23,0.03777287);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetBinError(26,0.09437637);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt376->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377 = new TH1D("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377","histo_WZ",25,10,100);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(1,23.79078);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(2,32.16976);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(3,39.64962);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(4,43.02032);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(5,43.25643);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(6,41.80094);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(7,36.16947);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(8,29.23768);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(9,21.96266);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(10,14.89078);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(11,9.766653);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(12,7.360516);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(13,5.078342);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(14,3.956761);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(15,3.083698);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(16,2.336381);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(17,1.879951);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(18,1.567857);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(19,1.351064);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(20,0.9807402);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(21,0.8010368);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(22,0.6723266);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(23,0.5489871);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(24,0.5145848);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(25,0.3739043);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinContent(26,2.428163);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(1,0.356861);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(2,0.418779);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(3,0.4662791);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(4,0.4848803);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(5,0.4863436);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(6,0.4771796);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(7,0.4430876);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(8,0.3987555);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(9,0.3462042);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(10,0.2857474);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(11,0.2304544);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(12,0.2006061);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(13,0.1665674);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(14,0.146143);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(15,0.1298664);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(16,0.1137541);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(17,0.1008609);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(18,0.09210352);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(19,0.08629332);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(20,0.07285489);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(21,0.06637947);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(22,0.05978384);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(23,0.05479022);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(24,0.05324228);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(25,0.04510361);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetBinError(26,0.1139946);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt377->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->Add(new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(1,0.4876162);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(2,0.6153939);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(3,0.6041355);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(4,0.6141131);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(5,0.5382387);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(6,0.4396393);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(7,0.3348534);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(8,0.2990548);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(9,0.2038814);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(10,0.2005933);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(11,0.1417273);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(12,0.1147331);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(13,0.07982865);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(14,0.04986782);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(15,0.05800426);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(16,0.03492985);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(17,0.04098727);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(18,0.03059145);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(19,0.01999099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(20,0.02091716);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(21,0.01720941);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(22,0.008887836);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(23,0.005242166);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(24,0.009609719);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(25,0.008125299);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinContent(26,0.02898246);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(1,0.02262448);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(2,0.02630069);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(3,0.02592127);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(4,0.02584346);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(5,0.02448422);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(6,0.02215043);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(7,0.0189615);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(8,0.0178175);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(9,0.01467281);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(10,0.01470897);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(11,0.01136659);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(12,0.01049218);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(13,0.008596294);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(14,0.006026884);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(15,0.007018599);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(16,0.005641011);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(17,0.006116299);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(18,0.005144553);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(19,0.003714761);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(20,0.004140305);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(21,0.003586149);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(22,0.00240004);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(23,0.001802536);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(24,0.003300843);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(25,0.002415637);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetBinError(26,0.005671811);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt378->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt3,"");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3->SetName("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16 = new TH1F("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16","thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3",25,10,100);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->SetMaximum(0.6737793);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(1,0.4876162);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(2,0.6153939);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(3,0.6041355);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(4,0.6141131);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(5,0.5382387);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(6,0.4396393);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(7,0.3348534);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(8,0.2990548);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(9,0.2038814);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(10,0.2005933);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(11,0.1417273);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(12,0.1147331);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(13,0.07982865);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(14,0.04986782);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(15,0.05800426);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(16,0.03492985);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(17,0.04098727);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(18,0.03059145);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(19,0.01999099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(20,0.02091716);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(21,0.01720941);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(22,0.008887836);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(23,0.005242166);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(24,0.009609719);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(25,0.008125299);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinContent(26,0.02898246);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(1,0.02262448);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(2,0.02630069);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(3,0.02592127);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(4,0.02584346);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(5,0.02448422);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(6,0.02215043);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(7,0.0189615);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(8,0.0178175);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(9,0.01467281);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(10,0.01470897);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(11,0.01136659);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(12,0.01049218);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(13,0.008596294);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(14,0.006026884);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(15,0.007018599);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(16,0.005641011);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(17,0.006116299);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(18,0.005144553);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(19,0.003714761);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(20,0.004140305);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(21,0.003586149);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(22,0.00240004);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(23,0.001802536);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(24,0.003300843);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(25,0.002415637);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetBinError(26,0.005671811);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt379->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt3,"");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3015[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3015[25] = {
   168.7555,
   178.0825,
   128.7371,
   110.8647,
   79.62041,
   65.93226,
   56.39909,
   42.40199,
   30.66381,
   22.73642,
   13.79039,
   10.75913,
   6.392285,
   7.140964,
   4.207333,
   2.830774,
   2.618155,
   2.273003,
   1.721267,
   1.223212,
   0.5691605,
   0.7657567,
   0.7299716,
   0.5872462,
   0.485365};
   Double_t _felx3015[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3015[25] = {
   32.39667,
   30.59771,
   16.26402,
   14.56895,
   6.861306,
   6.091976,
   4.759517,
   3.616466,
   2.375562,
   2.531746,
   1.499852,
   1.256838,
   0.8371937,
   1.481817,
   0.8679947,
   0.3708332,
   0.4683313,
   0.5331778,
   0.3910052,
   0.4999331,
   0.2803821,
   0.1480392,
   0.2285553,
   0.2939146,
   0.1443514};
   Double_t _fehx3015[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3015[25] = {
   32.35321,
   30.5848,
   16.25827,
   14.5655,
   6.858137,
   6.089795,
   4.757485,
   3.614152,
   2.375605,
   2.529888,
   1.49796,
   1.254814,
   0.9740095,
   1.480725,
   0.8686111,
   0.567369,
   0.5115961,
   0.4618053,
   0.4540957,
   0.2614731,
   0.2802337,
   0.1478076,
   0.2283655,
   0.1371148,
   0.1442339};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,1.000001,109);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(229.5052);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2");
   
   Double_t _fx3016[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3016[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3016[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3016[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3016[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3016[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,1.000001,109);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(1.262698);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineStyle(0);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,10,100);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(446.7448);
   hframe_copy80->SetDirectory(0);
   hframe_copy80->SetStats(0);
   hframe_copy80->SetLineStyle(0);
   hframe_copy80->SetMarkerStyle(20);
   hframe_copy80->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy80->GetXaxis()->SetNdivisions(506);
   hframe_copy80->GetXaxis()->SetLabelFont(42);
   hframe_copy80->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetXaxis()->SetLabelSize(0.05);
   hframe_copy80->GetXaxis()->SetTitleSize(0.06);
   hframe_copy80->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy80->GetXaxis()->SetTitleFont(42);
   hframe_copy80->GetYaxis()->SetTitle("Events");
   hframe_copy80->GetYaxis()->SetLabelFont(42);
   hframe_copy80->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetYaxis()->SetLabelSize(0.05);
   hframe_copy80->GetYaxis()->SetTitleSize(0.06);
   hframe_copy80->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy80->GetYaxis()->SetTitleFont(42);
   hframe_copy80->GetZaxis()->SetLabelFont(42);
   hframe_copy80->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetZaxis()->SetLabelSize(0.05);
   hframe_copy80->GetZaxis()->SetTitleSize(0.06);
   hframe_copy80->GetZaxis()->SetTitleFont(42);
   hframe_copy80->Draw("sameaxis");
   ccwh3l_Pre_OSSF_13TeV_pt3->Modified();
   ccwh3l_Pre_OSSF_13TeV_pt3->cd();
   ccwh3l_Pre_OSSF_13TeV_pt3->SetSelected(ccwh3l_Pre_OSSF_13TeV_pt3);
}
