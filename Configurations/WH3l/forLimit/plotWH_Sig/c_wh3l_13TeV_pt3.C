void c_wh3l_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt3/cc
//=========  (Wed Jun 29 22:36:21 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_pt3 = new TCanvas("ccwh3l_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_13TeV_pt3->Range(-88,-5.634286,524.5,37.70638);
   ccwh3l_13TeV_pt3->SetFillColor(0);
   ccwh3l_13TeV_pt3->SetBorderMode(0);
   ccwh3l_13TeV_pt3->SetBorderSize(2);
   ccwh3l_13TeV_pt3->SetTickx(1);
   ccwh3l_13TeV_pt3->SetTicky(1);
   ccwh3l_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe241 = new TH1F("hframe241","",1000,10,500);
   hframe241->SetMinimum(0);
   hframe241->SetMaximum(35.53934);
   hframe241->SetDirectory(0);
   hframe241->SetStats(0);
   hframe241->SetLineStyle(0);
   hframe241->SetMarkerStyle(20);
   hframe241->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe241->GetXaxis()->SetNdivisions(506);
   hframe241->GetXaxis()->SetLabelFont(42);
   hframe241->GetXaxis()->SetLabelOffset(0.007);
   hframe241->GetXaxis()->SetLabelSize(0.05);
   hframe241->GetXaxis()->SetTitleSize(0.06);
   hframe241->GetXaxis()->SetTitleOffset(0.9);
   hframe241->GetXaxis()->SetTitleFont(42);
   hframe241->GetYaxis()->SetTitle("Events");
   hframe241->GetYaxis()->SetLabelFont(42);
   hframe241->GetYaxis()->SetLabelOffset(0.007);
   hframe241->GetYaxis()->SetLabelSize(0.05);
   hframe241->GetYaxis()->SetTitleSize(0.06);
   hframe241->GetYaxis()->SetTitleOffset(1.25);
   hframe241->GetYaxis()->SetTitleFont(42);
   hframe241->GetZaxis()->SetLabelFont(42);
   hframe241->GetZaxis()->SetLabelOffset(0.007);
   hframe241->GetZaxis()->SetLabelSize(0.05);
   hframe241->GetZaxis()->SetTitleSize(0.06);
   hframe241->GetZaxis()->SetTitleFont(42);
   hframe241->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt3->SetName("thsBackground_grouped_wh3l_13TeV_pt3");
   thsBackground_grouped_wh3l_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt3_stack_49 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt3_stack_49","thsBackground_grouped_wh3l_13TeV_pt3",50,10,500);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetMinimum(-0.2159116);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetMaximum(14.92652);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt3_stack_49);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_pt3242 = new TH1D("new_histo_group_Fake_wh3l_13TeV_pt3242","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(1,7.635664);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(2,1.718774);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(3,0.0982598);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(4,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(1,2.403975);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(2,0.8048401);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(3,0.3141714);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(4,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Fake_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt3243 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt3243","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinContent(1,0.0589238);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinContent(2,0.01530373);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinError(1,0.03000498);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinError(2,0.01530373);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt3243->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt3243->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_WW_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt3244 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt3244","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinContent(1,0.002513933);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinContent(2,0.001944774);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinError(1,0.001224446);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinError(2,0.001122858);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetEntries(8);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_VVV_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_pt3245 = new TH1D("new_histo_group_Vg_wh3l_13TeV_pt3245","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinContent(1,1.280068);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinContent(2,1.368101);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinError(1,0.3762169);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinError(2,0.4282726);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Vg_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_pt3246 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_pt3246","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(1,0.4568733);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(2,0.0884324);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(4,0.08041495);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(1,0.1319881);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(2,0.06254373);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(4,0.05731234);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_pt3247 = new TH1D("new_histo_group_WZ_wh3l_13TeV_pt3247","histo_WZ",50,10,500);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(1,4.383921);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(2,1.862005);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(3,0.6387528);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(4,0.2579998);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(5,0.09409206);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(6,0.05818515);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(7,0.02696442);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(8,0.01878316);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(9,0.02828208);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(10,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(12,0.01491714);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(1,0.1547205);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(2,0.1004707);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(3,0.05788906);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(4,0.03717431);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(5,0.02225764);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(6,0.01782869);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(7,0.01209059);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(8,0.01087568);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(9,0.01275592);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(10,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(12,0.009104556);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_WZ_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt3248 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt3248","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(1,0.3977732);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(2,0.243152);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(3,0.0945922);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(4,0.0412392);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(5,0.01985834);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(6,0.01167822);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(7,0.001281539);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(8,0.002269617);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(9,-0.0001023572);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(13,0.0002656808);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(1,0.02123663);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(2,0.01709761);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(3,0.0106815);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(4,0.007258835);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(5,0.005162903);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(6,0.004038265);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(7,0.0009513927);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(8,0.001720137);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(9,0.0003811577);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(13,0.0002100476);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetEntries(1320);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_pt3,"");
   thsBackground_grouped_wh3l_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt3->SetName("thsSignal_grouped_wh3l_13TeV_pt3");
   thsSignal_grouped_wh3l_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt3_stack_50 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt3_stack_50","thsSignal_grouped_wh3l_13TeV_pt3",50,10,500);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetMinimum(-0.0004835149);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetMaximum(0.4399604);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt3_stack_50);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt3249 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt3249","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(1,0.3977732);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(2,0.243152);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(3,0.0945922);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(4,0.0412392);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(5,0.01985834);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(6,0.01167822);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(7,0.001281539);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(8,0.002269617);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(9,-0.0001023572);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(13,0.0002656808);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(1,0.02123663);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(2,0.01709761);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(3,0.0106815);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(4,0.007258835);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(5,0.005162903);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(6,0.004038265);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(7,0.0009513927);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(8,0.001720137);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(9,0.0003811577);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(13,0.0002100476);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetEntries(1320);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_pt3,"");
   thsSignal_grouped_wh3l_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3049[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3049[50] = {
   13.81796,
   5.054561,
   0.751487,
   0.6145373,
   0.09409206,
   0.05818515,
   0.02696442,
   0.01878316,
   0.02828208,
   0.005313793,
   0,
   0.01491714,
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
   Double_t _felx3049[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3049[50] = {
   4.107058,
   1.537475,
   0.1742752,
   0.3830466,
   0.02235846,
   0.01787915,
   0.01210699,
   0.01088375,
   0.01280114,
   0.005320137,
   0,
   0.009111702,
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
   Double_t _fehx3049[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3049[50] = {
   4.105934,
   1.537448,
   0.388155,
   0.3830437,
   0.02233716,
   0.01788437,
   0.012105,
   0.01088442,
   0.01279777,
   0.005320925,
   0,
   0.009112708,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3049,_fy3049,_felx3049,_fehx3049,_fely3049,_fehy3049);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3049 = new TH1F("Graph_Graph3049","",100,0,549);
   Graph_Graph3049->SetMinimum(-1.792397);
   Graph_Graph3049->SetMaximum(19.71629);
   Graph_Graph3049->SetDirectory(0);
   Graph_Graph3049->SetStats(0);
   Graph_Graph3049->SetLineStyle(0);
   Graph_Graph3049->SetMarkerStyle(20);
   Graph_Graph3049->GetXaxis()->SetLabelFont(42);
   Graph_Graph3049->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3049->GetXaxis()->SetTitleFont(42);
   Graph_Graph3049->GetYaxis()->SetLabelFont(42);
   Graph_Graph3049->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3049->GetYaxis()->SetTitleFont(42);
   Graph_Graph3049->GetZaxis()->SetLabelFont(42);
   Graph_Graph3049->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3049);
   
   grae->Draw("2");
   
   Double_t _fx3050[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3050[50] = {
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
   0,
   0};
   Double_t _felx3050[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3050[50] = {
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
   0,
   0};
   Double_t _fehx3050[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3050[50] = {
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
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(50,_fx3050,_fy3050,_felx3050,_fehx3050,_fely3050,_fehy3050);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3050 = new TH1F("Graph_Graph3050","",100,0,549);
   Graph_Graph3050->SetMinimum(0);
   Graph_Graph3050->SetMaximum(1.262698);
   Graph_Graph3050->SetDirectory(0);
   Graph_Graph3050->SetStats(0);
   Graph_Graph3050->SetLineStyle(0);
   Graph_Graph3050->SetMarkerStyle(20);
   Graph_Graph3050->GetXaxis()->SetLabelFont(42);
   Graph_Graph3050->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3050->GetXaxis()->SetTitleFont(42);
   Graph_Graph3050->GetYaxis()->SetLabelFont(42);
   Graph_Graph3050->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3050->GetYaxis()->SetTitleFont(42);
   Graph_Graph3050->GetZaxis()->SetLabelFont(42);
   Graph_Graph3050->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3050);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy250 = new TH1F("hframe_copy250","",1000,10,500);
   hframe_copy250->SetMinimum(0);
   hframe_copy250->SetMaximum(35.53934);
   hframe_copy250->SetDirectory(0);
   hframe_copy250->SetStats(0);
   hframe_copy250->SetLineStyle(0);
   hframe_copy250->SetMarkerStyle(20);
   hframe_copy250->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy250->GetXaxis()->SetNdivisions(506);
   hframe_copy250->GetXaxis()->SetLabelFont(42);
   hframe_copy250->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetXaxis()->SetLabelSize(0.05);
   hframe_copy250->GetXaxis()->SetTitleSize(0.06);
   hframe_copy250->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy250->GetXaxis()->SetTitleFont(42);
   hframe_copy250->GetYaxis()->SetTitle("Events");
   hframe_copy250->GetYaxis()->SetLabelFont(42);
   hframe_copy250->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetYaxis()->SetLabelSize(0.05);
   hframe_copy250->GetYaxis()->SetTitleSize(0.06);
   hframe_copy250->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy250->GetYaxis()->SetTitleFont(42);
   hframe_copy250->GetZaxis()->SetLabelFont(42);
   hframe_copy250->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetZaxis()->SetLabelSize(0.05);
   hframe_copy250->GetZaxis()->SetTitleSize(0.06);
   hframe_copy250->GetZaxis()->SetTitleFont(42);
   hframe_copy250->Draw("sameaxis");
   ccwh3l_13TeV_pt3->Modified();
   ccwh3l_13TeV_pt3->cd();
   ccwh3l_13TeV_pt3->SetSelected(ccwh3l_13TeV_pt3);
}
