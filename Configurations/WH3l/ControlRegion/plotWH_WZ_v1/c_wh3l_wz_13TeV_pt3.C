void c_wh3l_wz_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt3/cc
//=========  (Sun Jul  3 22:54:21 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_pt3 = new TCanvas("ccwh3l_wz_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_wz_13TeV_pt3->Range(-28,-20.4941,209.5,137.1529);
   ccwh3l_wz_13TeV_pt3->SetFillColor(0);
   ccwh3l_wz_13TeV_pt3->SetBorderMode(0);
   ccwh3l_wz_13TeV_pt3->SetBorderSize(2);
   ccwh3l_wz_13TeV_pt3->SetTickx(1);
   ccwh3l_wz_13TeV_pt3->SetTicky(1);
   ccwh3l_wz_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe71 = new TH1F("hframe71","",1000,10,200);
   hframe71->SetMinimum(0);
   hframe71->SetMaximum(129.2705);
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt3");
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15","thsBackground_grouped_wh3l_wz_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->SetMinimum(-0.2855344);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->SetMaximum(37.83123);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt372 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt372","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(1,6.35371);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(2,2.388118);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(3,1.292545);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(4,0.5737623);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(5,-0.1283075);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(6,0.1777274);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(7,0.03057618);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(8,-0.0500566);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(14,-0.01660391);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(17,-0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinContent(19,-0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(1,2.636959);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(2,1.59358);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(3,1.067905);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(4,0.6233276);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(5,0.157227);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(6,0.1291392);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(7,0.08150602);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(8,0.03572201);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(14,0.01660391);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(17,0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetBinError(19,0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt372->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt373 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt373","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->SetBinContent(1,0.06107909);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->SetBinContent(2,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->SetBinError(1,0.0310623);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->SetBinError(2,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt373->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt373->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt373->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_WW_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_pt374 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_pt374","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(1,0.07793093);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(2,0.1309935);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(3,0.1327602);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(4,0.09164807);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(5,0.0515291);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(6,0.02901275);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(7,0.02725487);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(8,0.01140598);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(9,0.009945392);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(10,0.006236389);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(11,0.003119879);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(14,0.001540678);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(15,0.00295189);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(19,0.001984254);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(21,0.002242446);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(23,0.0007301272);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinContent(26,0.0002847629);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(1,0.01252398);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(2,0.01618509);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(3,0.01522469);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(4,0.01323059);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(5,0.009833426);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(6,0.007114782);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(7,0.007021954);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(8,0.00424256);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(9,0.004013333);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(10,0.004259961);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(11,0.002557946);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(14,0.001089434);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(15,0.00219728);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(19,0.001984254);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(21,0.002242446);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(23,0.0007301272);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetBinError(26,0.0002847629);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt374->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_VVV_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt375 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt375","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinContent(1,2.616756);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinContent(2,1.625798);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinContent(3,0.5452791);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinContent(4,-0.09539273);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinContent(6,0.295315);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinError(1,0.5852766);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinError(2,0.4443787);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinError(3,0.2246444);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinError(4,0.09539273);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetBinError(6,0.1733317);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt375->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt376 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt376","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(1,1.508285);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(2,2.178785);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(3,1.325424);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(4,0.8322679);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(5,0.517881);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(6,0.2439608);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(8,0.1094813);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(9,0.04241135);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinContent(11,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(1,0.2565077);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(2,0.3017514);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(3,0.2330152);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(4,0.1870003);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(5,0.1469836);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(6,0.101073);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(8,0.06647822);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(9,0.04241135);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetBinError(11,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt376->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt377 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt377","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(1,17.79652);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(2,29.45745);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(3,28.80638);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(4,17.51622);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(5,7.507386);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(6,3.136515);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(7,1.607946);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(8,0.9242179);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(9,0.6617921);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(10,0.2986237);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(11,0.2656996);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(12,0.1748666);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(13,0.1372481);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(14,0.05939515);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(15,0.08821314);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(16,0.05781074);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(17,0.03176196);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(18,0.03703623);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(19,0.009425499);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(22,0.005472263);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(24,0.006102045);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(25,0.01070773);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinContent(26,0.006436534);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(1,0.3107239);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(2,0.401396);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(3,0.3954102);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(4,0.3079296);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(5,0.2016192);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(6,0.1309137);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(7,0.09288143);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(8,0.0709757);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(9,0.06096153);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(10,0.04018208);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(11,0.03793749);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(12,0.03046482);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(13,0.02704034);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(14,0.01711269);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(15,0.02171463);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(16,0.01743194);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(17,0.01309819);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(18,0.01365944);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(19,0.006824628);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(22,0.005472263);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(24,0.006102045);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(25,0.007573399);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetBinError(26,0.006436534);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt377->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt378 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt378","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(1,0.1690891);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(2,0.2342768);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(3,0.2094928);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(4,0.1026837);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(5,0.07219297);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(6,0.04401186);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(7,0.01871077);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(8,0.01513677);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(9,0.004949272);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(10,0.009902263);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(11,0.00269183);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(12,0.005403658);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(13,0.002063984);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(14,0.002039255);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(15,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinContent(22,0.0004464625);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(1,0.01411743);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(2,0.0165395);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(3,0.01621663);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(4,0.01074244);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(5,0.009278441);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(6,0.006969409);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(7,0.004142118);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(8,0.003786296);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(9,0.001490841);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(10,0.003155715);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(11,0.001749805);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(12,0.002547855);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(13,0.001674582);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(14,0.001651442);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(15,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetBinError(22,0.0004464625);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt378->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt3,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_pt3->SetName("thsSignal_grouped_wh3l_wz_13TeV_pt3");
   thsSignal_grouped_wh3l_wz_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16","thsSignal_grouped_wh3l_wz_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->SetMaximum(0.2633571);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt379 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt379","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(1,0.1690891);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(2,0.2342768);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(3,0.2094928);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(4,0.1026837);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(5,0.07219297);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(6,0.04401186);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(7,0.01871077);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(8,0.01513677);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(9,0.004949272);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(10,0.009902263);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(11,0.00269183);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(12,0.005403658);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(13,0.002063984);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(14,0.002039255);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(15,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinContent(22,0.0004464625);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(1,0.01411743);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(2,0.0165395);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(3,0.01621663);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(4,0.01074244);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(5,0.009278441);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(6,0.006969409);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(7,0.004142118);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(8,0.003786296);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(9,0.001490841);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(10,0.003155715);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(11,0.001749805);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(12,0.002547855);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(13,0.001674582);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(14,0.001651442);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(15,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetBinError(22,0.0004464625);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt379->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt3,"");
   thsSignal_grouped_wh3l_wz_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3015[25] = {
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
   Double_t _fy3015[25] = {
   28.41428,
   35.79546,
   32.10239,
   18.91851,
   7.948489,
   3.882531,
   1.665777,
   0.9950486,
   0.7141489,
   0.3048601,
   0.3134496,
   0.1748666,
   0.1372481,
   0.04433192,
   0.09116503,
   0.05781073,
   0.008375357,
   0.03703623,
   -0.008299343,
   0,
   0.002242446,
   0.005472263,
   0.0007301272,
   0.006102045,
   0.01070773};
   Double_t _felx3015[25] = {
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
   Double_t _fely3015[25] = {
   4.573874,
   3.005699,
   2.032196,
   1.209814,
   0.5253775,
   0.5478989,
   0.1371373,
   0.1807511,
   0.1093688,
   0.04593854,
   0.08600486,
   0.0308521,
   0.0277722,
   0.03541818,
   0.02449079,
   0.01765269,
   0.03745299,
   0.01379594,
   0.02941709,
   0,
   0.003171995,
   0.005473432,
   0.0007324795,
   0.00610425,
   0.007583994};
   Double_t _fehx3015[25] = {
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
   Double_t _fehy3015[25] = {
   4.563183,
   3.002812,
   2.029805,
   1.257108,
   0.4959785,
   0.5474926,
   0.1858583,
   0.1803035,
   0.1089729,
   0.04567184,
   0.08571842,
   0.03076459,
   0.02747097,
   0.03538905,
   0.02440665,
   0.01765094,
   0.03742628,
   0.01376403,
   0.02941121,
   0,
   0.003171997,
   0.005473442,
   0.0007328754,
   0.006104375,
   0.007586115};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,219);
   Graph_Graph3015->SetMinimum(-3.921316);
   Graph_Graph3015->SetMaximum(42.68187);
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
   Double_t _fy3016[25] = {
   35,
   45,
   40,
   23,
   12,
   2,
   3,
   2,
   0,
   0,
   0,
   0,
   0,
   1,
   0,
   0,
   1,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3016[25] = {
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
   Double_t _fely3016[25] = {
   5.887788,
   6.68331,
   6.298123,
   4.760806,
   3.415326,
   1.29183,
   1.632727,
   1.29183,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   0,
   0,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3016[25] = {
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
   Double_t _fehy3016[25] = {
   6.972554,
   7.758066,
   7.377414,
   5.865355,
   4.559911,
   2.63791,
   2.918242,
   2.63791,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
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
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,219);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(58.03387);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,10,200);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(129.2705);
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
   ccwh3l_wz_13TeV_pt3->Modified();
   ccwh3l_wz_13TeV_pt3->cd();
   ccwh3l_wz_13TeV_pt3->SetSelected(ccwh3l_wz_13TeV_pt3);
}
