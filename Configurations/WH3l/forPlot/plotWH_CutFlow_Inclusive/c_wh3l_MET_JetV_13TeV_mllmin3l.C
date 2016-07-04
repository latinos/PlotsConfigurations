void c_wh3l_MET_JetV_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 16:18:59 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_JetV_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_mllmin3l->Range(-28,-18.72443,209.5,125.3096);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe51 = new TH1F("hframe51","",1000,10,200);
   hframe51->SetMinimum(0);
   hframe51->SetMaximum(118.1079);
   hframe51->SetDirectory(0);
   hframe51->SetStats(0);
   hframe51->SetLineStyle(0);
   hframe51->SetMarkerStyle(20);
   hframe51->GetXaxis()->SetTitle("min m_{ll} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11","thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->SetMinimum(-0.8074016);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->SetMaximum(49.60533);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(1,0.3090933);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(2,3.241227);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(3,3.357372);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(4,4.689681);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(5,1.70854);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(6,3.61215);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(7,0.09533476);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(8,1.792758);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(9,1.044069);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(10,0.4626989);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(11,-0.04399218);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(14,0.2766957);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(17,-0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinContent(21,0.3070375);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(1,1.116495);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(2,1.38788);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(3,1.423921);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(4,2.09057);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(5,1.261772);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(6,1.745283);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(7,0.6593583);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(8,1.119865);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(9,1.171567);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(10,0.6356148);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(11,0.03869352);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(14,0.2813675);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(17,0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetBinError(21,0.358322);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetEntries(453);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l52->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinContent(2,0.01092969);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinContent(4,0.06415329);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinContent(6,0.02906182);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinContent(9,0.01431565);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinError(2,0.01092969);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinError(4,0.0327269);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinError(6,0.02054997);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinError(9,0.01431565);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(1,0.03420347);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(2,0.05048397);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(3,0.0615087);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(4,0.1130683);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(5,0.1004075);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(6,0.07761825);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(7,0.09010456);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(8,0.07107284);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(9,0.2288693);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(10,0.05870635);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(11,0.01377677);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(12,0.02790576);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(13,0.0151273);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(14,0.008126946);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(15,0.003593045);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(16,0.003731576);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(17,0.01012519);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(18,0.002535909);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(19,0.004591641);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(20,0.00520535);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinContent(21,0.03039649);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(1,0.008497098);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(2,0.01197473);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(3,0.01105504);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(4,0.01627369);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(5,0.01553251);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(6,0.01281085);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(7,0.01429397);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(8,0.0113656);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(9,0.02034232);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(10,0.01101359);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(11,0.007646104);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(12,0.008325229);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(13,0.005454324);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(14,0.004385626);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(15,0.002734737);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(16,0.004411042);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(17,0.006006655);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(18,0.002535909);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(19,0.003246781);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(20,0.003414617);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetBinError(21,0.008127902);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetEntries(806);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l54->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(1,1.10907);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(2,1.150793);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(3,0.7582078);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(4,1.186459);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(5,1.880741);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(6,0.8609876);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(7,-0.01416177);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(8,0.1751672);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(9,0.4554045);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinContent(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(1,0.3319049);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(2,0.4004741);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(3,0.31269);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(4,0.3881234);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(5,0.470314);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(6,0.2873305);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(7,0.1626294);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(8,0.178755);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(9,0.2609775);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetBinError(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l55->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(1,0.4340879);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(2,0.4539343);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(3,0.5309143);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(4,0.7766226);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(5,0.3954336);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(6,0.7500512);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(7,0.8768954);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(8,0.6670573);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(9,2.353474);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinContent(10,0.1903763);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(1,0.1333065);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(2,0.1379252);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(3,0.1549188);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(4,0.1798699);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(5,0.1328677);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(6,0.1800349);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(7,0.187175);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(8,0.1688292);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(9,0.3114842);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetBinError(10,0.08359945);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetEntries(200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l56->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(1,3.66632);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(2,5.866702);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(3,8.038164);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(4,9.542405);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(5,9.679376);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(6,9.789104);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(7,9.595936);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(8,12.28476);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(9,42.86581);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(10,3.913066);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(11,0.7671286);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(12,0.437889);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(13,0.3689417);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(14,0.2425813);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(15,0.1398307);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(16,0.1320375);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(17,0.09025413);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(18,0.07832975);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(19,0.04752229);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(20,0.05939343);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinContent(21,0.4603517);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(1,0.1414637);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(2,0.1793348);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(3,0.2092009);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(4,0.2287663);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(5,0.2293862);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(6,0.2306181);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(7,0.2282036);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(8,0.2585811);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(9,0.4820057);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(10,0.1454365);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(11,0.06386422);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(12,0.04869425);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(13,0.04545907);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(14,0.03666423);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(15,0.02732592);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(16,0.02682471);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(17,0.02200632);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(18,0.01987559);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(19,0.01611416);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(20,0.01742303);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetBinError(21,0.04935104);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetEntries(24086);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(1,0.1153789);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(2,0.2295896);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(3,0.2536551);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(4,0.2493939);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(5,0.2068108);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(6,0.1467101);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(7,0.09815675);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(8,0.0954539);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(9,0.2812266);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(10,0.02596578);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinContent(12,0.003970309);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(1,0.01232936);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(2,0.01763647);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(3,0.01793899);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(4,0.01748399);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(5,0.01477286);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(6,0.01255797);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(7,0.01015561);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(8,0.0100791);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(9,0.01737936);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(10,0.004974749);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetBinError(12,0.002167029);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l58->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12","thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->SetMaximum(0.3135363);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(1,0.1153789);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(2,0.2295896);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(3,0.2536551);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(4,0.2493939);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(5,0.2068108);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(6,0.1467101);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(7,0.09815675);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(8,0.0954539);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(9,0.2812266);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(10,0.02596578);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinContent(12,0.003970309);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(1,0.01232936);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(2,0.01763647);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(3,0.01793899);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(4,0.01748399);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(5,0.01477286);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(6,0.01255797);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(7,0.01015561);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(8,0.0100791);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(9,0.01737936);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(10,0.004974749);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetBinError(12,0.002167029);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l59->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3011[20] = {
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
   Double_t _fy3011[20] = {
   5.568078,
   10.77407,
   12.76229,
   16.37239,
   13.7645,
   15.11897,
   10.64411,
   14.99082,
   46.96194,
   4.639056,
   0.8101676,
   0.7772148,
   0.384069,
   0.5274039,
   0.1536642,
   0.1357691,
   0.09958234,
   0.08086566,
   0.05211393,
   0.06459878};
   Double_t _felx3011[20] = {
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
   Double_t _fely3011[20] = {
   0.9736225,
   2.430548,
   2.454397,
   3.385746,
   2.216267,
   2.793305,
   0.7253,
   1.861108,
   2.342967,
   0.7423264,
   0.1855222,
   0.3853919,
   0.05352433,
   0.3323376,
   0.04074082,
   0.03094199,
   0.03070758,
   0.02267245,
   0.01992263,
   0.02145897};
   Double_t _fehx3011[20] = {
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
   Double_t _fehy3011[20] = {
   1.76372,
   2.429719,
   2.453712,
   3.384836,
   2.215505,
   2.792885,
   1.126289,
   1.862802,
   2.444637,
   0.9095399,
   0.1854095,
   0.3853643,
   0.0534127,
   0.3367972,
   0.04070507,
   0.03160384,
   0.03064322,
   0.02264548,
   0.01991859,
   0.02144801};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,219);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(54.34402);
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
   
   Double_t _fx3012[20] = {
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
   Double_t _fy3012[20] = {
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
   Double_t _felx3012[20] = {
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
   Double_t _fely3012[20] = {
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
   Double_t _fehx3012[20] = {
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
   Double_t _fehy3012[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,219);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_mllmin3l","Data","EPL");
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
   hframe_copy60->SetMaximum(118.1079);
   hframe_copy60->SetDirectory(0);
   hframe_copy60->SetStats(0);
   hframe_copy60->SetLineStyle(0);
   hframe_copy60->SetMarkerStyle(20);
   hframe_copy60->GetXaxis()->SetTitle("min m_{ll} [GeV]");
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
   ccwh3l_MET_JetV_13TeV_mllmin3l->Modified();
   ccwh3l_MET_JetV_13TeV_mllmin3l->cd();
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetSelected(ccwh3l_MET_JetV_13TeV_mllmin3l);
}
