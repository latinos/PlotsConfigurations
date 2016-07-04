void c_wh3l_MET_JetV_ZVeto_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt3/cc
//=========  (Sun Jul  3 16:19:16 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt3 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->Range(-7.999999,-2.815971,104.5,18.84534);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe371 = new TH1F("hframe371","",1000,10,100);
   hframe371->SetMinimum(0);
   hframe371->SetMaximum(17.76228);
   hframe371->SetDirectory(0);
   hframe371->SetStats(0);
   hframe371->SetLineStyle(0);
   hframe371->SetMarkerStyle(20);
   hframe371->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe371->GetXaxis()->SetNdivisions(506);
   hframe371->GetXaxis()->SetLabelFont(42);
   hframe371->GetXaxis()->SetLabelOffset(0.007);
   hframe371->GetXaxis()->SetLabelSize(0.05);
   hframe371->GetXaxis()->SetTitleSize(0.06);
   hframe371->GetXaxis()->SetTitleOffset(0.9);
   hframe371->GetXaxis()->SetTitleFont(42);
   hframe371->GetYaxis()->SetTitle("Events");
   hframe371->GetYaxis()->SetLabelFont(42);
   hframe371->GetYaxis()->SetLabelOffset(0.007);
   hframe371->GetYaxis()->SetLabelSize(0.05);
   hframe371->GetYaxis()->SetTitleSize(0.06);
   hframe371->GetYaxis()->SetTitleOffset(1.25);
   hframe371->GetYaxis()->SetTitleFont(42);
   hframe371->GetZaxis()->SetLabelFont(42);
   hframe371->GetZaxis()->SetLabelOffset(0.007);
   hframe371->GetZaxis()->SetLabelSize(0.05);
   hframe371->GetZaxis()->SetTitleSize(0.06);
   hframe371->GetZaxis()->SetTitleFont(42);
   hframe371->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3",25,10,100);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->SetMinimum(-0.3139614);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->SetMaximum(7.460157);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_75);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372","histo_Fake",25,10,100);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(1,4.573017);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(2,2.787793);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(3,1.059772);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(4,1.054235);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(5,-0.1293835);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(6,0.2992426);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(7,0.06109051);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(8,0.3557834);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(9,0.2721821);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(11,0.2761226);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinContent(22,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(1,1.696432);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(2,1.675007);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(3,0.4959364);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(4,0.6641368);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(5,0.1845779);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(6,0.3239788);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(7,0.3109455);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(8,0.3563444);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(9,0.313371);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(11,0.2761226);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetBinError(22,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetEntries(117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3372->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373","histo_WW",25,10,100);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinContent(1,0.03427349);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinContent(2,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinContent(3,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinContent(4,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinContent(7,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinError(1,0.02427729);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinError(2,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinError(3,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinError(4,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetBinError(7,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3373->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374","histo_VVV",25,10,100);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(1,0.04807267);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(2,0.05879242);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(3,0.05123329);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(4,0.03662031);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(5,0.0323234);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(6,0.02467116);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(7,0.02661308);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(8,0.02369114);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(9,0.02412215);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(10,0.02735613);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(11,0.01780054);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(12,0.01901612);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(13,0.003761163);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(14,0.001867676);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(15,0.003552132);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(16,0.004304334);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(18,0.0022942);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(19,0.002264441);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(20,0.00573207);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(21,0.002378346);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(22,0.00441872);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(23,-0.000564634);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(24,0.00180645);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(25,0.002929666);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinContent(26,0.004531198);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(1,0.01153527);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(2,0.01167906);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(3,0.01130578);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(4,0.011461);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(5,0.00902665);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(6,0.007109095);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(7,0.009216238);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(8,0.00721147);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(9,0.007623546);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(10,0.008070795);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(11,0.006156965);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(12,0.006328402);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(13,0.006192999);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(14,0.001243099);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(15,0.002621706);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(16,0.00305055);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(18,0.0022942);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(19,0.002264441);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(20,0.003337216);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(21,0.002378346);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(22,0.003125929);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(23,0.000564634);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(24,0.00180645);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(25,0.002929666);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetBinError(26,0.003226765);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetEntries(250);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3374->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375","histo_Vg",25,10,100);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinContent(1,0.431063);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinContent(2,0.627245);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinContent(3,0.632457);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinContent(4,0.7208008);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinContent(5,0.2366032);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinContent(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinError(1,0.1976432);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinError(2,0.2865512);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinError(3,0.2524005);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinError(4,0.334687);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinError(5,0.1675134);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetBinError(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3375->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376","histo_ZZ",25,10,100);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinContent(1,0.1607586);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinContent(2,0.1883576);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinContent(3,0.1077572);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinContent(4,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinContent(5,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinContent(6,0.04510369);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinContent(9,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinContent(11,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinError(1,0.07307538);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinError(2,0.0863078);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinError(3,0.06805732);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinError(4,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinError(5,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinError(6,0.04510369);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinError(9,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetBinError(11,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3376->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377","histo_WZ",25,10,100);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(1,1.72789);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(2,1.675243);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(3,1.435593);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(4,0.8865593);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(5,0.6918202);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(6,0.4961352);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(7,0.4796005);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(8,0.3944102);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(9,0.3156637);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(10,0.2235989);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(11,0.1718953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(12,0.1634368);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(13,0.08926507);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(14,0.0551572);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(15,0.1166869);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(16,0.06542658);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(17,0.08607462);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(18,0.06855283);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(19,0.03146062);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(20,0.04249581);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(21,0.01862828);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(22,0.02811091);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(23,0.006096383);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(24,0.04568309);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(25,0.009037319);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinContent(26,0.1381423);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(1,0.09658502);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(2,0.09583325);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(3,0.08949166);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(4,0.06946313);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(5,0.06094266);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(6,0.05175235);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(7,0.05070453);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(8,0.04582326);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(9,0.04135326);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(10,0.03436792);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(11,0.03020591);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(12,0.02980293);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(13,0.0218179);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(14,0.01645845);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(15,0.02414916);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(16,0.01907421);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(17,0.02178731);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(18,0.01871285);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(19,0.01294801);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(20,0.01494689);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(21,0.01009748);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(22,0.01193628);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(23,0.006096383);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(24,0.01621885);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(25,0.006889349);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetBinError(26,0.02718544);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetEntries(1942);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3377->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(1,0.1298365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(2,0.168191);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(3,0.1451186);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(4,0.1005218);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(5,0.07466894);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(6,0.05503722);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(7,0.03205603);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(8,0.03025515);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(9,0.01921564);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(10,0.01864647);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(11,0.007348792);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(12,0.01056361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(13,0.007003974);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(14,0.00326976);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(15,0.001292458);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(16,0.00709135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(17,0.00213953);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(18,0.001288333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(20,0.001686607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(21,0.0003785175);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(22,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(24,-0.0001023572);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinContent(26,0.0002656808);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(1,0.01205091);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(2,0.01359214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(3,0.01324839);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(4,0.01081511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(5,0.009403835);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(6,0.008700111);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(7,0.005986649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(8,0.005995711);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(9,0.004816524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(10,0.005091137);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(11,0.002708282);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(12,0.003961376);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(13,0.00303547);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(14,0.001693378);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(15,0.001081659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(16,0.003269092);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(17,0.001818713);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(18,0.0009539556);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(20,0.001686607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(21,0.0002690901);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(22,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(24,0.0003811577);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetBinError(26,0.0002100476);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3378->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3",25,10,100);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->SetMinimum(-0.0004835149);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->SetMaximum(0.1908723);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_76);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(1,0.1298365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(2,0.168191);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(3,0.1451186);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(4,0.1005218);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(5,0.07466894);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(6,0.05503722);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(7,0.03205603);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(8,0.03025515);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(9,0.01921564);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(10,0.01864647);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(11,0.007348792);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(12,0.01056361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(13,0.007003974);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(14,0.00326976);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(15,0.001292458);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(16,0.00709135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(17,0.00213953);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(18,0.001288333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(20,0.001686607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(21,0.0003785175);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(22,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(24,-0.0001023572);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinContent(26,0.0002656808);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(1,0.01205091);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(2,0.01359214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(3,0.01324839);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(4,0.01081511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(5,0.009403835);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(6,0.008700111);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(7,0.005986649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(8,0.005995711);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(9,0.004816524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(10,0.005091137);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(11,0.002708282);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(12,0.003961376);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(13,0.00303547);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(14,0.001693378);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(15,0.001081659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(16,0.003269092);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(17,0.001818713);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(18,0.0009539556);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(20,0.001686607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(21,0.0002690901);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(22,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(24,0.0003811577);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetBinError(26,0.0002100476);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3379->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3075[25] = {
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
   Double_t _fy3075[25] = {
   6.975075,
   5.347874,
   3.301021,
   2.71352,
   0.874692,
   0.8651527,
   0.5817785,
   0.7738848,
   0.6471048,
   0.250955,
   0.5110965,
   0.1824529,
   0.09302623,
   0.05702487,
   0.2260878,
   0.06973092,
   0.08607461,
   0.07084703,
   0.03372506,
   0.04822788,
   0.02100663,
   0.01782746,
   0.005531749,
   0.04748954,
   0.01196699};
   Double_t _felx3075[25] = {
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
   Double_t _fely3075[25] = {
   2.647919,
   2.379543,
   1.006264,
   1.156876,
   0.4690831,
   0.4174633,
   0.1399995,
   0.4280726,
   0.3696562,
   0.05076792,
   0.3710033,
   0.0408872,
   0.02601358,
   0.01786719,
   0.1327598,
   0.02262834,
   0.02185043,
   0.02126115,
   0.01540974,
   0.01920012,
   0.01271676,
   0.03054538,
   0.006685158,
   0.018199,
   0.01025434};
   Double_t _fehx3075[25] = {
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
   Double_t _fehy3075[25] = {
   2.647152,
   2.379366,
   1.006207,
   1.156838,
   0.4143706,
   0.4413743,
   0.3869226,
   0.4286015,
   0.4094925,
   0.05071242,
   0.3709997,
   0.04076149,
   0.02832459,
   0.01785825,
   0.1327612,
   0.02263172,
   0.02182385,
   0.02123695,
   0.01541128,
   0.01919913,
   0.01271615,
   0.03054109,
   0.006685161,
   0.01820892,
   0.01025464};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3075,_fy3075,_felx3075,_fehx3075,_fely3075,_fehy3075);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3075 = new TH1F("Graph_Graph3075","",100,1.000001,109);
   Graph_Graph3075->SetMinimum(-0.9762124);
   Graph_Graph3075->SetMaximum(10.58572);
   Graph_Graph3075->SetDirectory(0);
   Graph_Graph3075->SetStats(0);
   Graph_Graph3075->SetLineStyle(0);
   Graph_Graph3075->SetMarkerStyle(20);
   Graph_Graph3075->GetXaxis()->SetLabelFont(42);
   Graph_Graph3075->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3075->GetXaxis()->SetTitleFont(42);
   Graph_Graph3075->GetYaxis()->SetLabelFont(42);
   Graph_Graph3075->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3075->GetYaxis()->SetTitleFont(42);
   Graph_Graph3075->GetZaxis()->SetLabelFont(42);
   Graph_Graph3075->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3075);
   
   grae->Draw("2");
   
   Double_t _fx3076[25] = {
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
   Double_t _fy3076[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3076[25] = {
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
   Double_t _fely3076[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3076[25] = {
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
   Double_t _fehy3076[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3076,_fy3076,_felx3076,_fehx3076,_fely3076,_fehy3076);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3076 = new TH1F("Graph_Graph3076","",100,1.000001,109);
   Graph_Graph3076->SetMinimum(0);
   Graph_Graph3076->SetMaximum(1.262698);
   Graph_Graph3076->SetDirectory(0);
   Graph_Graph3076->SetStats(0);
   Graph_Graph3076->SetLineStyle(0);
   Graph_Graph3076->SetMarkerStyle(20);
   Graph_Graph3076->GetXaxis()->SetLabelFont(42);
   Graph_Graph3076->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3076->GetXaxis()->SetTitleFont(42);
   Graph_Graph3076->GetYaxis()->SetLabelFont(42);
   Graph_Graph3076->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3076->GetYaxis()->SetTitleFont(42);
   Graph_Graph3076->GetZaxis()->SetLabelFont(42);
   Graph_Graph3076->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3076);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy380 = new TH1F("hframe_copy380","",1000,10,100);
   hframe_copy380->SetMinimum(0);
   hframe_copy380->SetMaximum(17.76228);
   hframe_copy380->SetDirectory(0);
   hframe_copy380->SetStats(0);
   hframe_copy380->SetLineStyle(0);
   hframe_copy380->SetMarkerStyle(20);
   hframe_copy380->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy380->GetXaxis()->SetNdivisions(506);
   hframe_copy380->GetXaxis()->SetLabelFont(42);
   hframe_copy380->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetXaxis()->SetLabelSize(0.05);
   hframe_copy380->GetXaxis()->SetTitleSize(0.06);
   hframe_copy380->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy380->GetXaxis()->SetTitleFont(42);
   hframe_copy380->GetYaxis()->SetTitle("Events");
   hframe_copy380->GetYaxis()->SetLabelFont(42);
   hframe_copy380->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetYaxis()->SetLabelSize(0.05);
   hframe_copy380->GetYaxis()->SetTitleSize(0.06);
   hframe_copy380->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy380->GetYaxis()->SetTitleFont(42);
   hframe_copy380->GetZaxis()->SetLabelFont(42);
   hframe_copy380->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetZaxis()->SetLabelSize(0.05);
   hframe_copy380->GetZaxis()->SetTitleSize(0.06);
   hframe_copy380->GetZaxis()->SetTitleFont(42);
   hframe_copy380->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_pt3);
}
