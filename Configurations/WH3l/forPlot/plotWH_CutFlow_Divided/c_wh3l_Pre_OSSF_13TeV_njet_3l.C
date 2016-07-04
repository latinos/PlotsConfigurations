void c_wh3l_Pre_OSSF_13TeV_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_OSSF_13TeV_njet_3l/cc
//=========  (Sun Jul  3 16:48:24 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_OSSF_13TeV_njet_3l = new TCanvas("ccwh3l_Pre_OSSF_13TeV_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetHighLightColor(2);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->Range(-1.6,-244.1092,8.4,1633.654);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetFillColor(0);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetBorderSize(2);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetTickx(1);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetTicky(1);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetLeftMargin(0.16);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetRightMargin(0.04);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetTopMargin(0.05);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetBottomMargin(0.13);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetFrameBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe1 = new TH1F("hframe1","",1000,0,8);
   hframe1->SetMinimum(0);
   hframe1->SetMaximum(1539.766);
   hframe1->SetDirectory(0);
   hframe1->SetStats(0);
   hframe1->SetLineStyle(0);
   hframe1->SetMarkerStyle(20);
   hframe1->GetXaxis()->SetTitle("N_Jets");
   hframe1->GetXaxis()->SetNdivisions(506);
   hframe1->GetXaxis()->SetLabelFont(42);
   hframe1->GetXaxis()->SetLabelOffset(0.007);
   hframe1->GetXaxis()->SetLabelSize(0.05);
   hframe1->GetXaxis()->SetTitleSize(0.06);
   hframe1->GetXaxis()->SetTitleOffset(0.9);
   hframe1->GetXaxis()->SetTitleFont(42);
   hframe1->GetYaxis()->SetTitle("Events");
   hframe1->GetYaxis()->SetLabelFont(42);
   hframe1->GetYaxis()->SetLabelOffset(0.007);
   hframe1->GetYaxis()->SetLabelSize(0.05);
   hframe1->GetYaxis()->SetTitleSize(0.06);
   hframe1->GetYaxis()->SetTitleOffset(1.25);
   hframe1->GetYaxis()->SetTitleFont(42);
   hframe1->GetZaxis()->SetLabelFont(42);
   hframe1->GetZaxis()->SetLabelOffset(0.007);
   hframe1->GetZaxis()->SetLabelSize(0.05);
   hframe1->GetZaxis()->SetTitleSize(0.06);
   hframe1->GetZaxis()->SetTitleFont(42);
   hframe1->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l = new THStack();
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->SetName("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->SetTitle("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1 = new TH1F("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1","thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->SetMinimum(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->SetMaximum(646.7016);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->SetStats(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->SetHistogram(thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_1);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2 = new TH1D("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinContent(1,188.0219);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinContent(2,64.22823);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinContent(3,25.75391);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinContent(4,8.136732);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinContent(5,1.679449);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinContent(6,0.6529993);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinContent(7,0.3840151);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinError(1,10.92024);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinError(2,6.403461);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinError(3,3.891032);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinError(4,1.989877);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinError(5,1.091357);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinError(6,0.6398245);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetBinError(7,0.3498513);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l2->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Add(new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3 = new TH1D("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetBinContent(1,0.2911867);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetBinContent(2,0.08235697);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetBinContent(3,0.0609534);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetBinError(1,0.06685384);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetBinError(2,0.03639728);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetBinError(3,0.03065667);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Add(new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4 = new TH1D("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinContent(1,1.206898);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinContent(2,1.557404);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinContent(3,1.342901);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinContent(4,0.6919947);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinContent(5,0.2805307);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinContent(6,0.1020821);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinContent(7,0.02158287);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinContent(8,0.00647171);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinError(1,0.05100321);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinError(2,0.05410452);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinError(3,0.04913489);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinError(4,0.03494868);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinError(5,0.02128454);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinError(6,0.01291989);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinError(7,0.0057686);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetBinError(8,0.002735907);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l4->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Add(new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5 = new TH1D("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinContent(1,179.2895);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinContent(2,37.45802);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinContent(3,8.663198);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinContent(4,0.9798775);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinContent(5,0.1473827);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinError(1,5.053755);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinError(2,2.864872);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinError(3,1.299818);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinError(4,0.5384504);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetBinError(5,0.1242896);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Add(new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6 = new TH1D("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinContent(1,31.71014);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinContent(2,16.4273);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinContent(3,4.608939);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinContent(4,0.6752945);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinContent(5,0.09603499);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinError(1,1.144036);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinError(2,0.8193842);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinError(3,0.4377896);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinError(4,0.1612237);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetBinError(5,0.06172308);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l6->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Add(new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7 = new TH1D("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinContent(1,212.9697);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinContent(2,110.0946);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinContent(3,34.45833);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinContent(4,8.644925);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinContent(5,1.993155);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinContent(6,0.3898641);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinContent(7,0.08245192);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinContent(8,0.01637294);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinError(1,1.077593);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinError(2,0.7742248);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinError(3,0.4334291);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinError(4,0.2167351);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinError(5,0.103866);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinError(6,0.04543697);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinError(7,0.02072821);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetBinError(8,0.009485971);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Add(new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinContent(1,2.416966);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinContent(2,1.56621);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinContent(3,0.6748468);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinContent(4,0.2480394);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinContent(5,0.07635837);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinContent(6,0.02140926);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinContent(7,0.002523271);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinContent(8,0.0008013493);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinError(1,0.05376507);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinError(2,0.04043061);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinError(3,0.02368818);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinError(4,0.01338658);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinError(5,0.007517334);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinError(6,0.003843116);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinError(7,0.001037099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetBinError(8,0.0005713281);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l8->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l,"");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l = new THStack();
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->SetName("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->SetTitle("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2 = new TH1F("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2","thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->SetMaximum(2.594267);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->SetStats(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->SetHistogram(thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l_stack_2);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinContent(1,2.416966);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinContent(2,1.56621);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinContent(3,0.6748468);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinContent(4,0.2480394);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinContent(5,0.07635837);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinContent(6,0.02140926);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinContent(7,0.002523271);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinContent(8,0.0008013493);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinError(1,0.05376507);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinError(2,0.04043061);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinError(3,0.02368818);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinError(4,0.01338658);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinError(5,0.007517334);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinError(6,0.003843116);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinError(7,0.001037099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetBinError(8,0.0005713281);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l9->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l,"");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3001[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3001[8] = {
   613.4893,
   229.848,
   74.88824,
   19.12882,
   4.196552,
   1.144946,
   0.4880499,
   0.02284465};
   Double_t _felx3001[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3001[8] = {
   69.50908,
   25.46625,
   11.04163,
   4.140433,
   1.536193,
   0.7386175,
   0.3999883,
   0.0127906};
   Double_t _fehx3001[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3001[8] = {
   69.44761,
   25.43488,
   11.03599,
   4.136116,
   1.535235,
   0.7384734,
   0.3999696,
   0.0127917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,8.8);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(751.2296);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("2");
   
   Double_t _fx3002[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3002[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3002[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3002[8] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,8.8);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(1.262698);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineStyle(0);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_njet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_njet_3l","Data","EPL");
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
   
   TH1F *hframe_copy10 = new TH1F("hframe_copy10","",1000,0,8);
   hframe_copy10->SetMinimum(0);
   hframe_copy10->SetMaximum(1539.766);
   hframe_copy10->SetDirectory(0);
   hframe_copy10->SetStats(0);
   hframe_copy10->SetLineStyle(0);
   hframe_copy10->SetMarkerStyle(20);
   hframe_copy10->GetXaxis()->SetTitle("N_Jets");
   hframe_copy10->GetXaxis()->SetNdivisions(506);
   hframe_copy10->GetXaxis()->SetLabelFont(42);
   hframe_copy10->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetXaxis()->SetLabelSize(0.05);
   hframe_copy10->GetXaxis()->SetTitleSize(0.06);
   hframe_copy10->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy10->GetXaxis()->SetTitleFont(42);
   hframe_copy10->GetYaxis()->SetTitle("Events");
   hframe_copy10->GetYaxis()->SetLabelFont(42);
   hframe_copy10->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetYaxis()->SetLabelSize(0.05);
   hframe_copy10->GetYaxis()->SetTitleSize(0.06);
   hframe_copy10->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy10->GetYaxis()->SetTitleFont(42);
   hframe_copy10->GetZaxis()->SetLabelFont(42);
   hframe_copy10->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetZaxis()->SetLabelSize(0.05);
   hframe_copy10->GetZaxis()->SetTitleSize(0.06);
   hframe_copy10->GetZaxis()->SetTitleFont(42);
   hframe_copy10->Draw("sameaxis");
   ccwh3l_Pre_OSSF_13TeV_njet_3l->Modified();
   ccwh3l_Pre_OSSF_13TeV_njet_3l->cd();
   ccwh3l_Pre_OSSF_13TeV_njet_3l->SetSelected(ccwh3l_Pre_OSSF_13TeV_njet_3l);
}
