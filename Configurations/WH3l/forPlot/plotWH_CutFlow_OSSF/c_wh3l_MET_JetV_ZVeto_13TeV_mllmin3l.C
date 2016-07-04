void c_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 21:43:53 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Range(-28,-4.756097,209.5,31.82927);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe431 = new TH1F("hframe431","",1000,10,200);
   hframe431->SetMinimum(0);
   hframe431->SetMaximum(30);
   hframe431->SetDirectory(0);
   hframe431->SetStats(0);
   hframe431->SetLineStyle(0);
   hframe431->SetMarkerStyle(20);
   hframe431->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe431->GetXaxis()->SetNdivisions(506);
   hframe431->GetXaxis()->SetLabelFont(42);
   hframe431->GetXaxis()->SetLabelOffset(0.007);
   hframe431->GetXaxis()->SetLabelSize(0.05);
   hframe431->GetXaxis()->SetTitleSize(0.06);
   hframe431->GetXaxis()->SetTitleOffset(0.9);
   hframe431->GetXaxis()->SetTitleFont(42);
   hframe431->GetYaxis()->SetTitle("Events");
   hframe431->GetYaxis()->SetLabelFont(42);
   hframe431->GetYaxis()->SetLabelOffset(0.007);
   hframe431->GetYaxis()->SetLabelSize(0.05);
   hframe431->GetYaxis()->SetTitleSize(0.06);
   hframe431->GetYaxis()->SetTitleOffset(1.25);
   hframe431->GetYaxis()->SetTitleFont(42);
   hframe431->GetZaxis()->SetLabelFont(42);
   hframe431->GetZaxis()->SetLabelOffset(0.007);
   hframe431->GetZaxis()->SetLabelSize(0.05);
   hframe431->GetZaxis()->SetTitleSize(0.06);
   hframe431->GetZaxis()->SetTitleFont(42);
   hframe431->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetMinimum(-0.45898);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetMaximum(4.248832);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(1,0.4355802);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(2,1.918242);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(3,0.8138962);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(4,2.188176);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(5,1.019978);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(6,0.3806838);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(9,-0.03771514);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(11,-0.03826347);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(14,0.2766957);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(17,-0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(21,0.3217396);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(1,0.8945602);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(2,0.9027147);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(3,0.5878922);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(4,1.381027);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(5,0.7266675);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(6,0.6637901);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(9,0.03771514);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(11,0.03826347);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(14,0.2813675);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(17,0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(21,0.3580202);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinContent(4,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinContent(6,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinError(4,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinError(6,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(1,0.01667554);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(2,0.0378494);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(3,0.02653573);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(4,0.04284612);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(5,0.04721177);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(6,0.02892814);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(7,0.00863835);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(8,0.008017647);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(9,0.003153314);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(10,0.004819323);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(11,0.002889919);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(12,0.02202004);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(13,0.0124721);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(14,0.008126946);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(15,0.003100301);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(16,0.003731576);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(17,0.005301012);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(18,0.002535909);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(19,0.004591641);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(20,0.0004281031);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(21,0.02626795);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(1,0.006088084);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(2,0.01016229);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(3,0.007780621);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(4,0.01073823);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(5,0.01113153);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(6,0.008922112);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(7,0.004455032);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(8,0.004027402);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(9,0.002187236);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(10,0.00312073);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(11,0.002845159);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(12,0.007573183);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(13,0.00500834);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(14,0.004385626);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(15,0.00268998);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(16,0.004411042);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(17,0.004941824);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(18,0.002535909);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(19,0.003246781);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(20,0.0004281031);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(21,0.007582931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinContent(1,0.3820383);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinContent(2,0.3075112);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinContent(3,0.4384879);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinContent(4,0.4695703);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinContent(5,0.4647019);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinContent(6,0.5858595);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinContent(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinError(1,0.1831067);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinError(2,0.2412625);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinError(3,0.2109827);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinError(4,0.2707473);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinError(5,0.2532026);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinError(6,0.2264765);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinError(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(1,0.1184806);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(2,0.0779526);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(3,0.05496571);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(4,0.05331504);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(5,0.07486387);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(6,0.09445183);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(7,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(9,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(1,0.06857912);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(2,0.0576159);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(3,0.03889657);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(4,0.04178168);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(5,0.05403712);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(6,0.06701456);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(7,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(9,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(1,1.146046);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(2,1.32871);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(3,1.437027);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(4,1.148833);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(5,0.7383369);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(6,0.7150599);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(7,0.1409531);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(8,0.1103344);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(9,0.08459242);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(10,0.1242295);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(11,0.07042757);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(12,0.3244111);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(13,0.3689417);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(14,0.2425813);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(15,0.1341977);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(16,0.1320375);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(17,0.09025413);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(18,0.07832975);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(19,0.04752229);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(20,0.05939343);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(21,0.4493509);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(1,0.07870379);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(2,0.08484749);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(3,0.08866657);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(4,0.0793592);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(5,0.06326804);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(6,0.06246365);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(7,0.02703843);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(8,0.0242325);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(9,0.02126128);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(10,0.02636721);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(11,0.019386);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(12,0.04197351);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(13,0.04545907);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(14,0.03666423);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(15,0.02673904);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(16,0.02682471);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(17,0.02200632);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(18,0.01987559);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(19,0.01611416);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(20,0.01742303);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(21,0.04872337);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(1,0.07309758);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(2,0.1209301);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(3,0.1419524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(4,0.1151753);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(5,0.08002558);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(6,0.03838333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(7,0.007843284);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(8,0.001023135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(9,0.0009752383);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(12,0.003970309);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(1,0.009579202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(2,0.0127017);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(3,0.01361821);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(4,0.01177198);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(5,0.008620712);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(6,0.005999596);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(7,0.003129957);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(8,0.0004669497);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(9,0.000539059);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(12,0.002167029);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetMaximum(0.1633492);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(1,0.07309758);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(2,0.1209301);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(3,0.1419524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(4,0.1151753);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(5,0.08002558);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(6,0.03838333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(7,0.007843284);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(8,0.001023135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(9,0.0009752383);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(12,0.003970309);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(1,0.009579202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(2,0.0127017);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(3,0.01361821);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(4,0.01177198);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(5,0.008620712);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(6,0.005999596);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(7,0.003129957);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(8,0.0004669497);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(9,0.000539059);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(12,0.002167029);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3087[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3087[20] = {
   2.114124,
   3.670265,
   2.770913,
   3.931332,
   2.345092,
   1.819458,
   0.178154,
   0.118352,
   0.09530871,
   0.1432573,
   0.03505402,
   0.6578513,
   0.3814138,
   0.5274039,
   0.1475386,
   0.1357691,
   0.09475817,
   0.08086566,
   0.05211393,
   0.05982153};
   Double_t _felx3087[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3087[20] = {
   0.8084955,
   1.463778,
   0.9817538,
   1.961756,
   1.166012,
   0.7732677,
   0.06076661,
   0.0295047,
   0.1073281,
   0.0439811,
   0.06203884,
   0.3778071,
   0.05243334,
   0.3323376,
   0.04006257,
   0.03094199,
   0.02841866,
   0.02267245,
   0.01992263,
   0.01793849};
   Double_t _fehx3087[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3087[20] = {
   1.259364,
   1.463717,
   0.981416,
   1.9617,
   1.165964,
   1.052776,
   0.06076669,
   0.02946893,
   0.1073281,
   0.04397763,
   0.06203879,
   0.3777857,
   0.05232282,
   0.3367972,
   0.04002803,
   0.03160384,
   0.02835588,
   0.02264548,
   0.01991859,
   0.01792757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3087,_fy3087,_felx3087,_fehx3087,_fely3087,_fehy3087);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3087 = new TH1F("Graph_Graph3087","",100,0,219);
   Graph_Graph3087->SetMinimum(-0.6189865);
   Graph_Graph3087->SetMaximum(6.485034);
   Graph_Graph3087->SetDirectory(0);
   Graph_Graph3087->SetStats(0);
   Graph_Graph3087->SetLineStyle(0);
   Graph_Graph3087->SetMarkerStyle(20);
   Graph_Graph3087->GetXaxis()->SetLabelFont(42);
   Graph_Graph3087->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3087->GetXaxis()->SetTitleFont(42);
   Graph_Graph3087->GetYaxis()->SetLabelFont(42);
   Graph_Graph3087->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3087->GetYaxis()->SetTitleFont(42);
   Graph_Graph3087->GetZaxis()->SetLabelFont(42);
   Graph_Graph3087->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3087);
   
   grae->Draw("2");
   
   Double_t _fx3088[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3088[20] = {
   5,
   0,
   1,
   4,
   3,
   9,
   0,
   0,
   0,
   0,
   1,
   0,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3088[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3088[20] = {
   2.159724,
   0,
   0.8272524,
   1.914367,
   1.632727,
   2.943511,
   0,
   0,
   0,
   0,
   0.8272524,
   0,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3088[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3088[20] = {
   3.382539,
   1.147908,
   2.29957,
   3.162815,
   2.918242,
   4.110286,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3088,_fy3088,_felx3088,_fehx3088,_fely3088,_fehy3088);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3088 = new TH1F("Graph_Graph3088","",100,0,219);
   Graph_Graph3088->SetMinimum(0);
   Graph_Graph3088->SetMaximum(14.42131);
   Graph_Graph3088->SetDirectory(0);
   Graph_Graph3088->SetStats(0);
   Graph_Graph3088->SetLineStyle(0);
   Graph_Graph3088->SetMarkerStyle(20);
   Graph_Graph3088->GetXaxis()->SetLabelFont(42);
   Graph_Graph3088->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3088->GetXaxis()->SetTitleFont(42);
   Graph_Graph3088->GetYaxis()->SetLabelFont(42);
   Graph_Graph3088->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3088->GetYaxis()->SetTitleFont(42);
   Graph_Graph3088->GetZaxis()->SetLabelFont(42);
   Graph_Graph3088->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3088);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy440 = new TH1F("hframe_copy440","",1000,10,200);
   hframe_copy440->SetMinimum(0);
   hframe_copy440->SetMaximum(30);
   hframe_copy440->SetDirectory(0);
   hframe_copy440->SetStats(0);
   hframe_copy440->SetLineStyle(0);
   hframe_copy440->SetMarkerStyle(20);
   hframe_copy440->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy440->GetXaxis()->SetNdivisions(506);
   hframe_copy440->GetXaxis()->SetLabelFont(42);
   hframe_copy440->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetXaxis()->SetLabelSize(0.05);
   hframe_copy440->GetXaxis()->SetTitleSize(0.06);
   hframe_copy440->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy440->GetXaxis()->SetTitleFont(42);
   hframe_copy440->GetYaxis()->SetTitle("Events");
   hframe_copy440->GetYaxis()->SetLabelFont(42);
   hframe_copy440->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetYaxis()->SetLabelSize(0.05);
   hframe_copy440->GetYaxis()->SetTitleSize(0.06);
   hframe_copy440->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy440->GetYaxis()->SetTitleFont(42);
   hframe_copy440->GetZaxis()->SetLabelFont(42);
   hframe_copy440->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetZaxis()->SetLabelSize(0.05);
   hframe_copy440->GetZaxis()->SetTitleSize(0.06);
   hframe_copy440->GetZaxis()->SetTitleFont(42);
   hframe_copy440->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l);
}
