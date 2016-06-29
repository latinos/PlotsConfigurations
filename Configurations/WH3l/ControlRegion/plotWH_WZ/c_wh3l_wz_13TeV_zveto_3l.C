void c_wh3l_wz_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_zveto_3l/cc
//=========  (Tue Jun 28 16:48:58 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_zveto_3l = new TCanvas("ccwh3l_wz_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_zveto_3l->Range(-20,-54.80191,105,366.7512);
   ccwh3l_wz_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_wz_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_wz_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_wz_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_wz_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_wz_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe81 = new TH1F("hframe81","",1000,0,100);
   hframe81->SetMinimum(0);
   hframe81->SetMaximum(345.6736);
   hframe81->SetDirectory(0);
   hframe81->SetStats(0);
   hframe81->SetLineStyle(0);
   hframe81->SetMarkerStyle(20);
   hframe81->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe81->GetXaxis()->SetNdivisions(506);
   hframe81->GetXaxis()->SetLabelFont(42);
   hframe81->GetXaxis()->SetLabelOffset(0.007);
   hframe81->GetXaxis()->SetLabelSize(0.05);
   hframe81->GetXaxis()->SetTitleSize(0.06);
   hframe81->GetXaxis()->SetTitleOffset(0.9);
   hframe81->GetXaxis()->SetTitleFont(42);
   hframe81->GetYaxis()->SetTitle("Events");
   hframe81->GetYaxis()->SetLabelFont(42);
   hframe81->GetYaxis()->SetLabelOffset(0.007);
   hframe81->GetYaxis()->SetLabelSize(0.05);
   hframe81->GetYaxis()->SetTitleSize(0.06);
   hframe81->GetYaxis()->SetTitleOffset(1.25);
   hframe81->GetYaxis()->SetTitleFont(42);
   hframe81->GetZaxis()->SetLabelFont(42);
   hframe81->GetZaxis()->SetLabelOffset(0.007);
   hframe81->GetZaxis()->SetLabelSize(0.05);
   hframe81->GetZaxis()->SetTitleSize(0.06);
   hframe81->GetZaxis()->SetTitleFont(42);
   hframe81->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11","thsBackground_grouped_wh3l_wz_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->SetMinimum(-0.6592924);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->SetMaximum(108.8562);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinContent(1,7.602749);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinContent(2,0.3812846);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinContent(3,2.102353);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinContent(4,0.6579952);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinContent(5,-0.1936938);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinError(1,2.872935);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinError(2,1.001575);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinError(3,1.078301);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinError(4,0.6609701);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetBinError(5,0.4655986);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l82->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->SetBinContent(1,0.04987764);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->SetBinContent(5,0.02551711);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->SetBinError(1,0.02894052);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->SetBinError(5,0.01822775);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l83->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinContent(1,0.1375984);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinContent(2,0.01779733);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinContent(3,0.003370924);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinContent(4,0.003084539);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinContent(5,0.0006553935);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinError(1,0.009877051);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinError(2,0.003573432);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinError(3,0.001362447);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinError(4,0.001558556);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetBinError(5,0.0006553935);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l84->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinContent(1,1.585114);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinContent(2,0.3848401);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinContent(3,0.5328983);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinContent(4,1.096138);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinContent(5,1.41424);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinError(1,0.4777896);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinError(2,0.2228427);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinError(3,0.23687);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinError(4,0.3478079);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetBinError(5,0.41864);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l85->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinContent(1,6.558539);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinContent(2,1.19177);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinContent(3,0.4122734);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinContent(4,0.09885735);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinContent(5,0.06931598);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinError(1,0.51827);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinError(2,0.2176818);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinError(3,0.1522521);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinError(4,0.05932658);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetBinError(5,0.05004546);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l86->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinContent(1,87.73872);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinContent(2,12.72651);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinContent(3,4.300044);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinContent(4,2.233008);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinContent(5,1.639302);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinError(1,0.6909653);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinError(2,0.2627317);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinError(3,0.1523238);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinError(4,0.1090673);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetBinError(5,0.09485665);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Draw("hist same");
   
   Double_t _fx3021[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3021[20] = {
   103.6726,
   14.7022,
   7.35094,
   4.089083,
   2.955337,
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
   Double_t _felx3021[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3021[20] = {
   5.138249,
   1.094957,
   1.739668,
   1.19265,
   1.050425,
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
   Double_t _fehx3021[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3021[20] = {
   5.138256,
   1.712772,
   1.739667,
   1.195582,
   0.7793581,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,110);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(119.6919);
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
   
   Double_t _fx3022[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3022[20] = {
   127,
   24,
   8,
   4,
   4,
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
   Double_t _felx3022[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3022[20] = {
   11.25481,
   4.864704,
   2.768432,
   1.914367,
   1.914367,
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
   Double_t _fehx3022[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3022[20] = {
   12.29929,
   5.967054,
   3.94522,
   3.162815,
   3.162815,
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
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,110);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(153.2292);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy88 = new TH1F("hframe_copy88","",1000,0,100);
   hframe_copy88->SetMinimum(0);
   hframe_copy88->SetMaximum(345.6736);
   hframe_copy88->SetDirectory(0);
   hframe_copy88->SetStats(0);
   hframe_copy88->SetLineStyle(0);
   hframe_copy88->SetMarkerStyle(20);
   hframe_copy88->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy88->GetXaxis()->SetNdivisions(506);
   hframe_copy88->GetXaxis()->SetLabelFont(42);
   hframe_copy88->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy88->GetXaxis()->SetLabelSize(0.05);
   hframe_copy88->GetXaxis()->SetTitleSize(0.06);
   hframe_copy88->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy88->GetXaxis()->SetTitleFont(42);
   hframe_copy88->GetYaxis()->SetTitle("Events");
   hframe_copy88->GetYaxis()->SetLabelFont(42);
   hframe_copy88->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy88->GetYaxis()->SetLabelSize(0.05);
   hframe_copy88->GetYaxis()->SetTitleSize(0.06);
   hframe_copy88->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy88->GetYaxis()->SetTitleFont(42);
   hframe_copy88->GetZaxis()->SetLabelFont(42);
   hframe_copy88->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy88->GetZaxis()->SetLabelSize(0.05);
   hframe_copy88->GetZaxis()->SetTitleSize(0.06);
   hframe_copy88->GetZaxis()->SetTitleFont(42);
   hframe_copy88->Draw("sameaxis");
   ccwh3l_wz_13TeV_zveto_3l->Modified();
   ccwh3l_wz_13TeV_zveto_3l->cd();
   ccwh3l_wz_13TeV_zveto_3l->SetSelected(ccwh3l_wz_13TeV_zveto_3l);
}
