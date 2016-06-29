void c_wh3l_wz_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt3/cc
//=========  (Tue Jun 28 16:49:02 2016) by ROOT version6.02/13
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
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,10,200);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(129.2705);
   hframe121->SetDirectory(0);
   hframe121->SetStats(0);
   hframe121->SetLineStyle(0);
   hframe121->SetMarkerStyle(20);
   hframe121->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe121->GetXaxis()->SetNdivisions(506);
   hframe121->GetXaxis()->SetLabelFont(42);
   hframe121->GetXaxis()->SetLabelOffset(0.007);
   hframe121->GetXaxis()->SetLabelSize(0.05);
   hframe121->GetXaxis()->SetTitleSize(0.06);
   hframe121->GetXaxis()->SetTitleOffset(0.9);
   hframe121->GetXaxis()->SetTitleFont(42);
   hframe121->GetYaxis()->SetTitle("Events");
   hframe121->GetYaxis()->SetLabelFont(42);
   hframe121->GetYaxis()->SetLabelOffset(0.007);
   hframe121->GetYaxis()->SetLabelSize(0.05);
   hframe121->GetYaxis()->SetTitleSize(0.06);
   hframe121->GetYaxis()->SetTitleOffset(1.25);
   hframe121->GetYaxis()->SetTitleFont(42);
   hframe121->GetZaxis()->SetLabelFont(42);
   hframe121->GetZaxis()->SetLabelOffset(0.007);
   hframe121->GetZaxis()->SetLabelSize(0.05);
   hframe121->GetZaxis()->SetTitleSize(0.06);
   hframe121->GetZaxis()->SetTitleFont(42);
   hframe121->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt3");
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16","thsBackground_grouped_wh3l_wz_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->SetMinimum(-0.2855344);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->SetMaximum(37.638);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_16);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt3122 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt3122","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(1,6.35371);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(2,2.388118);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(3,1.264856);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(4,0.5737623);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(5,-0.1283075);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(6,0.1777274);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(7,0.03057618);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(8,-0.0500566);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(14,-0.01660391);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(17,-0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinContent(19,-0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(1,2.636959);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(2,1.59358);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(3,1.068264);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(4,0.6233276);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(5,0.157227);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(6,0.1291392);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(7,0.08150602);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(8,0.03572201);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(14,0.01660391);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(17,0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetBinError(19,0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt3122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt3123 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt3123","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->SetBinContent(1,0.06107909);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->SetBinContent(2,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->SetBinError(1,0.0310623);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->SetBinError(2,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt3123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_WW_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_pt3124 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_pt3124","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(1,0.01691947);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(2,0.03642414);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(3,0.03895945);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(4,0.02350533);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(5,0.01588616);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(6,0.009388256);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(7,0.005653788);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(8,0.004078956);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(9,0.004234101);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(10,0.001331911);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(11,0.001311713);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(13,0.0004502267);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(14,0.001540678);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(15,0.0008356085);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(17,0.0004507764);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(19,0.0005211808);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(23,0.0007301272);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinContent(26,0.0002847629);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(1,0.003321436);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(2,0.005119554);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(3,0.005589457);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(4,0.003866788);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(5,0.003255077);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(6,0.002711069);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(7,0.001909408);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(8,0.001676699);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(9,0.001620366);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(10,0.0009423768);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(11,0.0009276616);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(13,0.0004500321);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(14,0.001089434);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(15,0.0005910937);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(17,0.0004507764);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(19,0.0005211808);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(23,0.0007301272);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetBinError(26,0.0002847629);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt3124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_VVV_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt3125 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt3125","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinContent(1,2.616756);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinContent(2,1.651274);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinContent(3,0.5452791);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinContent(4,-0.09539273);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinContent(6,0.295315);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinError(1,0.5852766);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinError(2,0.4451084);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinError(3,0.2246444);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinError(4,0.09539273);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetBinError(6,0.1733317);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt3125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt3126 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt3126","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(1,1.552904);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(2,2.291682);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(3,1.616847);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(4,1.240662);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(5,0.7411626);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(6,0.4580906);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(7,0.04165012);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(8,0.154504);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(9,0.04241135);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(10,0.04333704);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(11,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(13,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinContent(15,0.0418944);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(1,0.2603595);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(2,0.3083326);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(3,0.2555871);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(4,0.2196071);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(5,0.1733052);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(6,0.1393832);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(7,0.04165012);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(8,0.08028942);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(9,0.04241135);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(10,0.04333704);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(11,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(13,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetBinError(15,0.0418944);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt3126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt3127 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt3127","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(1,17.80042);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(2,29.4639);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(3,28.81786);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(4,17.52875);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(5,7.507386);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(6,3.136515);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(7,1.607946);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(8,0.9242179);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(9,0.6617921);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(10,0.2986237);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(11,0.2656996);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(12,0.1748666);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(13,0.1372481);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(14,0.05939515);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(15,0.08821314);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(16,0.05781074);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(17,0.03176196);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(18,0.03703623);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(19,0.009425499);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(22,0.005472263);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(24,0.006102045);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(25,0.01070773);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinContent(26,0.006436534);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(1,0.3107483);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(2,0.4014477);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(3,0.3954891);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(4,0.308057);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(5,0.2016192);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(6,0.1309137);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(7,0.09288143);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(8,0.0709757);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(9,0.06096153);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(10,0.04018208);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(11,0.03793749);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(12,0.03046482);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(13,0.02704034);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(14,0.01711269);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(15,0.02171463);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(16,0.01743194);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(17,0.01309819);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(18,0.01365944);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(19,0.006824628);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(22,0.005472263);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(24,0.006102045);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(25,0.007573399);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetBinError(26,0.006436534);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt3127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt3,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Draw("hist same");
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
   28.40178,
   35.84571,
   32.28381,
   19.27128,
   8.136127,
   4.077036,
   1.685826,
   1.032744,
   0.7084376,
   0.3432927,
   0.3116414,
   0.1748666,
   0.1986788,
   0.04433192,
   0.1309431,
   0.05781073,
   0.008826134,
   0.03703623,
   -0.009762418,
   0,
   0,
   0.005472263,
   0.0007301272,
   0.006102045,
   0.01070773};
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   4.277607,
   2.861161,
   1.987053,
   1.213375,
   0.5371799,
   0.5783105,
   0.1672739,
   0.1893089,
   0.1050009,
   0.08447009,
   0.08350445,
   0.03046484,
   0.08848648,
   0.03516068,
   0.06421049,
   0.01743194,
   0.03759602,
   0.01365944,
   0.02769347,
   0,
   0,
   0.005472263,
   0.0007303932,
   0.006102045,
   0.0075734};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   4.277606,
   2.861156,
   1.98705,
   1.262443,
   0.5083611,
   0.5783108,
   0.2181438,
   0.189309,
   0.1050009,
   0.08447009,
   0.08350448,
   0.03046483,
   0.0884865,
   0.03516068,
   0.06421048,
   0.01743194,
   0.03759602,
   0.01365944,
   0.02769348,
   0,
   0,
   0.005472263,
   0.0007303932,
   0.006102045,
   0.0075734};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,219);
   Graph_Graph3031->SetMinimum(-3.911889);
   Graph_Graph3031->SetMaximum(42.5813);
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
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   35,
   45,
   42,
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
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   5.887788,
   6.68331,
   6.454957,
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
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   6.972554,
   7.758066,
   7.532337,
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
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,219);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(58.03387);
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
   
   TH1F *hframe_copy128 = new TH1F("hframe_copy128","",1000,10,200);
   hframe_copy128->SetMinimum(0);
   hframe_copy128->SetMaximum(129.2705);
   hframe_copy128->SetDirectory(0);
   hframe_copy128->SetStats(0);
   hframe_copy128->SetLineStyle(0);
   hframe_copy128->SetMarkerStyle(20);
   hframe_copy128->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy128->GetXaxis()->SetNdivisions(506);
   hframe_copy128->GetXaxis()->SetLabelFont(42);
   hframe_copy128->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy128->GetXaxis()->SetLabelSize(0.05);
   hframe_copy128->GetXaxis()->SetTitleSize(0.06);
   hframe_copy128->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy128->GetXaxis()->SetTitleFont(42);
   hframe_copy128->GetYaxis()->SetTitle("Events");
   hframe_copy128->GetYaxis()->SetLabelFont(42);
   hframe_copy128->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy128->GetYaxis()->SetLabelSize(0.05);
   hframe_copy128->GetYaxis()->SetTitleSize(0.06);
   hframe_copy128->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy128->GetYaxis()->SetTitleFont(42);
   hframe_copy128->GetZaxis()->SetLabelFont(42);
   hframe_copy128->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy128->GetZaxis()->SetLabelSize(0.05);
   hframe_copy128->GetZaxis()->SetTitleSize(0.06);
   hframe_copy128->GetZaxis()->SetTitleFont(42);
   hframe_copy128->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt3->Modified();
   ccwh3l_wz_13TeV_pt3->cd();
   ccwh3l_wz_13TeV_pt3->SetSelected(ccwh3l_wz_13TeV_pt3);
}
