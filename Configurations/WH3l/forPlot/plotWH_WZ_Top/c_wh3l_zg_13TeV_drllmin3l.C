void c_wh3l_zg_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_drllmin3l/cc
//=========  (Sun Jul  3 02:18:06 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_drllmin3l = new TCanvas("ccwh3l_zg_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_zg_13TeV_drllmin3l->Range(-1.2,-25.58378,6.3,171.2145);
   ccwh3l_zg_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_zg_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_zg_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_zg_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_zg_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_zg_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,0,6);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(161.3746);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("min #Delta R_{ll} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19","thsBackground_grouped_wh3l_zg_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->SetMinimum(-0.2325829);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->SetMaximum(57.78346);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetBinContent(1,6.258081);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetBinContent(2,6.574802);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetBinContent(3,10.75784);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetBinContent(4,-0.009922814);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetBinError(1,2.046222);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetBinError(2,2.291653);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetBinError(3,3.010124);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetBinError(4,0.009922814);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l92->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->SetBinContent(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->SetBinError(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l93->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->SetBinContent(1,0.005061584);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->SetBinContent(2,0.00942145);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->SetBinError(1,0.003590729);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->SetBinError(2,0.005131318);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l94->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetBinContent(1,21.38997);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetBinContent(2,38.97665);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetBinContent(3,43.71652);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetBinContent(4,-0.1162914);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetBinError(1,1.830118);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetBinError(2,2.366336);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetBinError(3,2.436005);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetBinError(4,0.1162914);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l95->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetBinContent(1,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetBinContent(2,0.3434651);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetBinContent(3,0.1707104);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetBinError(1,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetBinError(2,0.1152082);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetBinError(3,0.0856472);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l96->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetBinContent(1,0.4669007);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetBinContent(2,1.035127);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetBinContent(3,0.3764965);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetBinError(1,0.04955116);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetBinError(2,0.07582529);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetBinError(3,0.04494514);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l97->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetBinContent(1,0.02327719);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetBinContent(2,0.05519439);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetBinContent(3,0.01030506);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetBinError(1,0.005643408);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetBinError(2,0.007503207);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetBinError(3,0.002636156);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l98->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20","thsSignal_grouped_wh3l_zg_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->SetMaximum(0.06583248);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetBinContent(1,0.02327719);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetBinContent(2,0.05519439);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetBinContent(3,0.01030506);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetBinError(1,0.005643408);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetBinError(2,0.007503207);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetBinError(3,0.002636156);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l99->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3019[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3019[5] = {
   28.1992,
   46.94942,
   55.02156,
   -0.1262143,
   0};
   Double_t _felx3019[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3019[5] = {
   4.670416,
   5.695229,
   7.030858,
   0.1267759,
   0};
   Double_t _fehx3019[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3019[5] = {
   4.66504,
   5.682753,
   7.025246,
   0.1270208,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,6.6);
   Graph_Graph3019->SetMinimum(-6.48297);
   Graph_Graph3019->SetMaximum(68.27679);
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
   
   Double_t _fx3020[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3020[5] = {
   28,
   48,
   57,
   0,
   0};
   Double_t _felx3020[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3020[5] = {
   5.259811,
   6.904115,
   7.527768,
   0,
   0};
   Double_t _fehx3020[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3020[5] = {
   6.354577,
   7.976496,
   8.594187,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,6.6);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(72.15361);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy100 = new TH1F("hframe_copy100","",1000,0,6);
   hframe_copy100->SetMinimum(0);
   hframe_copy100->SetMaximum(161.3746);
   hframe_copy100->SetDirectory(0);
   hframe_copy100->SetStats(0);
   hframe_copy100->SetLineStyle(0);
   hframe_copy100->SetMarkerStyle(20);
   hframe_copy100->GetXaxis()->SetTitle("min #Delta R_{ll} [GeV]");
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
   ccwh3l_zg_13TeV_drllmin3l->Modified();
   ccwh3l_zg_13TeV_drllmin3l->cd();
   ccwh3l_zg_13TeV_drllmin3l->SetSelected(ccwh3l_zg_13TeV_drllmin3l);
}
