void c_wh3l_wz_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 20:39:36 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_mllmin3l = new TCanvas("ccwh3l_wz_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_mllmin3l->Range(-28,-24.73813,209.5,165.5552);
   ccwh3l_wz_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_wz_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_wz_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_wz_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_wz_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_wz_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe28 = new TH1F("hframe28","",1000,10,200);
   hframe28->SetMinimum(0);
   hframe28->SetMaximum(156.0405);
   hframe28->SetDirectory(0);
   hframe28->SetStats(0);
   hframe28->SetLineStyle(0);
   hframe28->SetMarkerStyle(20);
   hframe28->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe28->GetXaxis()->SetNdivisions(506);
   hframe28->GetXaxis()->SetLabelFont(42);
   hframe28->GetXaxis()->SetLabelOffset(0.007);
   hframe28->GetXaxis()->SetLabelSize(0.05);
   hframe28->GetXaxis()->SetTitleSize(0.06);
   hframe28->GetXaxis()->SetTitleOffset(0.9);
   hframe28->GetXaxis()->SetTitleFont(42);
   hframe28->GetYaxis()->SetTitle("Events");
   hframe28->GetYaxis()->SetLabelFont(42);
   hframe28->GetYaxis()->SetLabelOffset(0.007);
   hframe28->GetYaxis()->SetLabelSize(0.05);
   hframe28->GetYaxis()->SetTitleSize(0.06);
   hframe28->GetYaxis()->SetTitleOffset(1.25);
   hframe28->GetYaxis()->SetTitleFont(42);
   hframe28->GetZaxis()->SetLabelFont(42);
   hframe28->GetZaxis()->SetLabelOffset(0.007);
   hframe28->GetZaxis()->SetLabelSize(0.05);
   hframe28->GetZaxis()->SetTitleSize(0.06);
   hframe28->GetZaxis()->SetTitleFont(42);
   hframe28->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7","thsBackground_grouped_wh3l_wz_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetMinimum(-1.107521);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetMaximum(48.87166);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(1,-0.04741513);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(2,1.429295);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(3,1.749597);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(4,1.99302);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(5,-0.2070794);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(6,2.466232);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(7,0.1173532);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(8,1.903734);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(9,0.7166687);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(10,0.4626989);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinContent(11,-0.005728715);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(1,0.6633781);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(2,1.051184);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(3,1.116901);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(4,1.482562);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(5,0.9004413);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(6,1.40201);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(7,0.6483614);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(8,1.115052);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(9,1.112582);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(10,0.6356148);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetBinError(11,0.00575287);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetBinContent(2,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetBinContent(4,0.03556199);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetBinContent(6,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetBinContent(9,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetBinError(2,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetBinError(4,0.02515185);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetBinError(6,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetBinError(9,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l30->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(1,0.7270315);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(2,0.8432823);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(3,0.3197199);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(4,0.7168892);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(5,1.41604);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(6,0.2751281);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(7,-0.01416177);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(8,0.1751672);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(9,0.4554045);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(1,0.2768263);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(2,0.3196435);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(3,0.2307842);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(4,0.278093);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(5,0.3963379);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(6,0.1768254);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(7,0.1626294);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(8,0.178755);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(9,0.2609775);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(1,0.3156072);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(2,0.3759817);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(3,0.3980983);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(4,0.7233076);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(5,0.3205697);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(6,0.6555993);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(7,0.8483328);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(8,0.6670573);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(9,2.308196);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinContent(10,0.1903763);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(1,0.1143133);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(2,0.1253146);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(3,0.1393838);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(4,0.1749499);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(5,0.1213829);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(6,0.1670976);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(7,0.1849828);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(8,0.1688292);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(9,0.3081757);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetBinError(10,0.08359945);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(1,2.501736);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(2,4.501726);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(3,6.499624);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(4,8.253102);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(5,8.861479);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(6,9.037047);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(7,9.426976);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(8,12.15617);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(9,42.77198);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(10,3.788837);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(11,0.6967011);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinContent(12,0.1078549);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(1,0.117162);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(2,0.157385);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(3,0.1880452);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(4,0.2126379);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(5,0.2196523);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(6,0.2215984);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(7,0.2262413);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(8,0.2572601);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(9,0.4814859);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(10,0.1430264);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(11,0.06085081);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetBinError(12,0.02403616);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(1,0.01910599);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(2,0.06494957);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(3,0.07198817);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(4,0.09413344);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(5,0.08463699);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(6,0.08561873);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(7,0.07496231);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(8,0.09110011);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(9,0.2778725);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(10,0.02596578);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(1,0.005227266);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(2,0.009388355);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(3,0.009643697);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(4,0.01120598);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(5,0.01015137);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(6,0.01010335);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(7,0.008726056);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(8,0.0100224);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(9,0.0173314);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(10,0.004974749);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8","thsSignal_grouped_wh3l_wz_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetMaximum(0.3099641);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(1,0.01910599);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(2,0.06494957);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(3,0.07198817);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(4,0.09413344);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(5,0.08463699);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(6,0.08561873);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(7,0.07496231);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(8,0.09110011);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(9,0.2778725);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(10,0.02596578);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(1,0.005227266);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(2,0.009388355);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(3,0.009643697);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(4,0.01120598);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(5,0.01015137);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(6,0.01010335);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(7,0.008726056);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(8,0.0100224);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(9,0.0173314);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(10,0.004974749);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l35->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
   3.496959,
   7.161215,
   8.967038,
   11.72188,
   10.39101,
   12.44859,
   10.3785,
   14.90213,
   46.26657,
   4.441912,
   0.7642267,
   0.1078549,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   1.178666,
   1.749131,
   1.798078,
   2.302729,
   1.66039,
   2.172696,
   0.7229936,
   1.856905,
   2.000699,
   0.7131543,
   0.1408683,
   0.02412302,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.5685441,
   1.748497,
   1.79792,
   2.301987,
   0.9821855,
   2.17241,
   1.093815,
   1.858734,
   2.345735,
   0.8805849,
   0.1407402,
   0.0241228,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,219);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(53.47353);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
   6,
   6,
   10,
   17,
   17,
   11,
   14,
   20,
   55,
   9,
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
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   2.379969,
   2.379969,
   3.108748,
   4.082258,
   4.082258,
   3.265636,
   3.696567,
   4.43453,
   7.393726,
   2.943511,
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
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   3.583713,
   3.583713,
   4.267035,
   5.203825,
   5.203825,
   4.416609,
   4.830479,
   5.546633,
   8.461342,
   4.110286,
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
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,219);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(69.80748);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy36 = new TH1F("hframe_copy36","",1000,10,200);
   hframe_copy36->SetMinimum(0);
   hframe_copy36->SetMaximum(156.0405);
   hframe_copy36->SetDirectory(0);
   hframe_copy36->SetStats(0);
   hframe_copy36->SetLineStyle(0);
   hframe_copy36->SetMarkerStyle(20);
   hframe_copy36->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy36->GetXaxis()->SetNdivisions(506);
   hframe_copy36->GetXaxis()->SetLabelFont(42);
   hframe_copy36->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetXaxis()->SetLabelSize(0.05);
   hframe_copy36->GetXaxis()->SetTitleSize(0.06);
   hframe_copy36->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy36->GetXaxis()->SetTitleFont(42);
   hframe_copy36->GetYaxis()->SetTitle("Events");
   hframe_copy36->GetYaxis()->SetLabelFont(42);
   hframe_copy36->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetYaxis()->SetLabelSize(0.05);
   hframe_copy36->GetYaxis()->SetTitleSize(0.06);
   hframe_copy36->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy36->GetYaxis()->SetTitleFont(42);
   hframe_copy36->GetZaxis()->SetLabelFont(42);
   hframe_copy36->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetZaxis()->SetLabelSize(0.05);
   hframe_copy36->GetZaxis()->SetTitleSize(0.06);
   hframe_copy36->GetZaxis()->SetTitleFont(42);
   hframe_copy36->Draw("sameaxis");
   ccwh3l_wz_13TeV_mllmin3l->Modified();
   ccwh3l_wz_13TeV_mllmin3l->cd();
   ccwh3l_wz_13TeV_mllmin3l->SetSelected(ccwh3l_wz_13TeV_mllmin3l);
}
