void c_wh3l_MET_JetV_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_pt3/cc
//=========  (Sat Jul  2 21:43:31 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_pt3 = new TCanvas("ccwh3l_MET_JetV_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_pt3->Range(-28,-23.04386,209.5,154.2166);
   ccwh3l_MET_JetV_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe101 = new TH1F("hframe101","",1000,10,200);
   hframe101->SetMinimum(0);
   hframe101->SetMaximum(145.3536);
   hframe101->SetDirectory(0);
   hframe101->SetStats(0);
   hframe101->SetLineStyle(0);
   hframe101->SetMarkerStyle(20);
   hframe101->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe101->GetXaxis()->SetNdivisions(506);
   hframe101->GetXaxis()->SetLabelFont(42);
   hframe101->GetXaxis()->SetLabelOffset(0.007);
   hframe101->GetXaxis()->SetLabelSize(0.05);
   hframe101->GetXaxis()->SetTitleSize(0.06);
   hframe101->GetXaxis()->SetTitleOffset(0.9);
   hframe101->GetXaxis()->SetTitleFont(42);
   hframe101->GetYaxis()->SetTitle("Events");
   hframe101->GetYaxis()->SetLabelFont(42);
   hframe101->GetYaxis()->SetLabelOffset(0.007);
   hframe101->GetYaxis()->SetLabelSize(0.05);
   hframe101->GetYaxis()->SetTitleSize(0.06);
   hframe101->GetYaxis()->SetTitleOffset(1.25);
   hframe101->GetYaxis()->SetTitleFont(42);
   hframe101->GetZaxis()->SetLabelFont(42);
   hframe101->GetZaxis()->SetLabelOffset(0.007);
   hframe101->GetZaxis()->SetLabelSize(0.05);
   hframe101->GetZaxis()->SetTitleSize(0.06);
   hframe101->GetZaxis()->SetTitleFont(42);
   hframe101->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21","thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetMinimum(-0.202063);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetMaximum(44.06935);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(1,10.80252);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(2,4.451882);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(3,1.478703);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(4,1.198091);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(5,0.1485083);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(6,0.1777274);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(7,0.03057618);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(8,-0.0500566);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(14,-0.01660391);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(17,-0.02338661);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(19,-0.0197091);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(1,3.324014);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(2,1.779934);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(3,1.121676);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(4,0.7696787);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(5,0.3505713);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(6,0.1291392);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(7,0.08150602);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(8,0.03572201);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(14,0.01660391);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(17,0.02338661);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(19,0.0197091);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetEntries(425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinContent(1,0.08967039);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinContent(2,0.04382778);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinError(1,0.03746065);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinError(2,0.02531838);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetEntries(10);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(1,0.1650549);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(2,0.2085475);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(3,0.1620835);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(4,0.1245425);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(5,0.08986664);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(6,0.05357729);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(7,0.02964156);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(8,0.01370342);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(9,0.01450403);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(10,0.01463386);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(11,0.002555245);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(12,0.007272026);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(13,0.001995288);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(14,0.001540678);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(15,0.00295189);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(19,0.001984254);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(21,0.002242446);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(23,0.0007301272);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(26,0.0002847629);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(1,0.01953187);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(2,0.0217456);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(3,0.01748268);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(4,0.01607773);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(5,0.01356734);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(6,0.01024194);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(7,0.008024315);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(8,0.004824681);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(9,0.00514761);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(10,0.006011367);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(11,0.002619523);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(12,0.004275166);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(13,0.001995288);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(14,0.001089434);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(15,0.00219728);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(19,0.001984254);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(21,0.002242446);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(23,0.0007301272);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(26,0.0002847629);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetEntries(739);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinContent(1,3.793964);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinContent(2,2.972532);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinContent(3,0.6695054);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinContent(4,-0.09539273);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinContent(6,0.295315);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinContent(8,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinError(1,0.6912745);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinError(2,0.6096598);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinError(3,0.2567046);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinError(4,0.09539273);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinError(6,0.1733317);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinError(8,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(1,1.857401);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(2,2.287157);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(3,1.370528);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(4,0.8322679);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(5,0.5631591);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(6,0.2439608);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(8,0.1094813);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(9,0.04241135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(11,0.04463009);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(1,0.2803306);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(2,0.3094166);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(3,0.2373404);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(4,0.1870003);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(5,0.1537995);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(6,0.101073);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(8,0.06647822);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(9,0.04241135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(11,0.04463009);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetEntries(198);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(1,21.18999);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(2,31.59168);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(3,29.91656);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(4,18.35082);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(5,8.00791);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(6,3.400003);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(7,1.785538);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(8,1.104518);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(9,0.7618056);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(10,0.3535229);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(11,0.2951311);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(12,0.2350521);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(13,0.1769859);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(14,0.0689137);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(15,0.09559278);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(16,0.08692777);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(17,0.04234731);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(18,0.04705152);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(19,0.009425499);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(21,0.006291073);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(22,0.005472263);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(23,0.01006356);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(24,0.006102045);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(25,0.01070773);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(26,0.01640541);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(1,0.3391595);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(2,0.41584);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(3,0.4028799);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(4,0.3151319);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(5,0.208089);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(6,0.1363017);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(7,0.09763614);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(8,0.07757909);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(9,0.06507019);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(10,0.04360296);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(11,0.03995103);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(12,0.03561581);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(13,0.03064006);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(14,0.01848307);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(15,0.02263182);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(16,0.0214776);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(17,0.0151207);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(18,0.01550121);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(19,0.006824628);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(21,0.006291073);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(22,0.005472263);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(23,0.00733257);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(24,0.006102045);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(25,0.007573399);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(26,0.009590857);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetEntries(23985);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(1,0.3961204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(2,0.4151818);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(3,0.2969767);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(4,0.1422245);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(5,0.09444064);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(6,0.05725316);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(7,0.02501975);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(8,0.01970077);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(9,0.005356446);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(10,0.01179777);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(11,0.002376036);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(12,0.005403658);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(13,0.002063984);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(14,0.002039255);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(15,0.000432484);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(22,0.0004464625);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(1,0.02136246);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(2,0.0221695);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(3,0.01938018);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(4,0.01287608);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(5,0.01071648);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(6,0.008130266);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(7,0.004984902);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(8,0.004657046);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(9,0.00153499);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(10,0.003584247);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(11,0.001778073);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(12,0.002547855);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(13,0.001674582);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(14,0.001651442);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(15,0.000432484);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(22,0.0004464625);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22","thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetMaximum(0.4592189);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(1,0.3961204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(2,0.4151818);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(3,0.2969767);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(4,0.1422245);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(5,0.09444064);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(6,0.05725316);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(7,0.02501975);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(8,0.01970077);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(9,0.005356446);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(10,0.01179777);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(11,0.002376036);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(12,0.005403658);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(13,0.002063984);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(14,0.002039255);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(15,0.000432484);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(22,0.0004464625);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(1,0.02136246);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(2,0.0221695);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(3,0.01938018);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(4,0.01287608);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(5,0.01071648);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(6,0.008130266);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(7,0.004984902);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(8,0.004657046);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(9,0.00153499);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(10,0.003584247);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(11,0.001778073);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(12,0.002547855);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(13,0.001674582);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(14,0.001651442);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(15,0.000432484);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(22,0.0004464625);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3021[25] = {
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
   Double_t _fy3021[25] = {
   37.8986,
   41.55563,
   33.61185,
   20.41033,
   8.809444,
   4.170583,
   1.845756,
   1.283495,
   0.8187209,
   0.3681568,
   0.3423164,
   0.2423241,
   0.1789812,
   0.05385048,
   0.09854466,
   0.08692777,
   0.0189607,
   0.04705152,
   -0.008299343,
   0,
   0.00853352,
   0.005472263,
   0.01079369,
   0.006102045,
   0.01070773};
   Double_t _felx3021[25] = {
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
   Double_t _fely3021[25] = {
   6.199296,
   3.642632,
   2.162404,
   1.46203,
   0.5399386,
   0.5585082,
   0.1439612,
   0.2932611,
   0.11549,
   0.05281588,
   0.08809759,
   0.04120584,
   0.03378937,
   0.036823,
   0.02540282,
   0.02183182,
   0.0394652,
   0.01568656,
   0.02941709,
   0,
   0.008824446,
   0.005473432,
   0.008065267,
   0.00610425,
   0.007583994};
   Double_t _fehx3021[25] = {
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
   Double_t _fehy3021[25] = {
   6.186174,
   3.639548,
   2.15976,
   1.460894,
   0.7366112,
   0.557822,
   0.1924155,
   0.2928895,
   0.1150123,
   0.05254507,
   0.08785407,
   0.04108514,
   0.03336204,
   0.03677498,
   0.02532171,
   0.02182203,
   0.03943465,
   0.01563016,
   0.02941121,
   0,
   0.008823129,
   0.005473442,
   0.008064883,
   0.006104375,
   0.007586115};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,219);
   Graph_Graph3021->SetMinimum(-4.561006);
   Graph_Graph3021->SetMaximum(49.71847);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineStyle(0);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("2");
   
   Double_t _fx3022[25] = {
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
   Double_t _fy3022[25] = {
   47,
   51,
   45,
   24,
   13,
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
   Double_t _felx3022[25] = {
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
   Double_t _fely3022[25] = {
   6.831306,
   7.118073,
   6.68331,
   4.864704,
   3.558726,
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
   Double_t _fehx3022[25] = {
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
   Double_t _fehy3022[25] = {
   7.904454,
   8.188293,
   7.758066,
   5.967054,
   4.697669,
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
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,219);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(65.10712);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineStyle(0);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy110 = new TH1F("hframe_copy110","",1000,10,200);
   hframe_copy110->SetMinimum(0);
   hframe_copy110->SetMaximum(145.3536);
   hframe_copy110->SetDirectory(0);
   hframe_copy110->SetStats(0);
   hframe_copy110->SetLineStyle(0);
   hframe_copy110->SetMarkerStyle(20);
   hframe_copy110->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy110->GetXaxis()->SetNdivisions(506);
   hframe_copy110->GetXaxis()->SetLabelFont(42);
   hframe_copy110->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetXaxis()->SetLabelSize(0.05);
   hframe_copy110->GetXaxis()->SetTitleSize(0.06);
   hframe_copy110->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy110->GetXaxis()->SetTitleFont(42);
   hframe_copy110->GetYaxis()->SetTitle("Events");
   hframe_copy110->GetYaxis()->SetLabelFont(42);
   hframe_copy110->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetYaxis()->SetLabelSize(0.05);
   hframe_copy110->GetYaxis()->SetTitleSize(0.06);
   hframe_copy110->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy110->GetYaxis()->SetTitleFont(42);
   hframe_copy110->GetZaxis()->SetLabelFont(42);
   hframe_copy110->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetZaxis()->SetLabelSize(0.05);
   hframe_copy110->GetZaxis()->SetTitleSize(0.06);
   hframe_copy110->GetZaxis()->SetTitleFont(42);
   hframe_copy110->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_pt3->Modified();
   ccwh3l_MET_JetV_13TeV_pt3->cd();
   ccwh3l_MET_JetV_13TeV_pt3->SetSelected(ccwh3l_MET_JetV_13TeV_pt3);
}
