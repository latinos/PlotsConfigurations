void c_wh3l_zg_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt3/cc
//=========  (Tue Jun 28 16:49:17 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_pt3 = new TCanvas("ccwh3l_zg_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_zg_13TeV_pt3->Range(-28,-41.5155,209.5,277.8345);
   ccwh3l_zg_13TeV_pt3->SetFillColor(0);
   ccwh3l_zg_13TeV_pt3->SetBorderMode(0);
   ccwh3l_zg_13TeV_pt3->SetBorderSize(2);
   ccwh3l_zg_13TeV_pt3->SetTickx(1);
   ccwh3l_zg_13TeV_pt3->SetTicky(1);
   ccwh3l_zg_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe265 = new TH1F("hframe265","",1000,10,200);
   hframe265->SetMinimum(0);
   hframe265->SetMaximum(261.867);
   hframe265->SetDirectory(0);
   hframe265->SetStats(0);
   hframe265->SetLineStyle(0);
   hframe265->SetMarkerStyle(20);
   hframe265->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe265->GetXaxis()->SetNdivisions(506);
   hframe265->GetXaxis()->SetLabelFont(42);
   hframe265->GetXaxis()->SetLabelOffset(0.007);
   hframe265->GetXaxis()->SetLabelSize(0.05);
   hframe265->GetXaxis()->SetTitleSize(0.06);
   hframe265->GetXaxis()->SetTitleOffset(0.9);
   hframe265->GetXaxis()->SetTitleFont(42);
   hframe265->GetYaxis()->SetTitle("Events");
   hframe265->GetYaxis()->SetLabelFont(42);
   hframe265->GetYaxis()->SetLabelOffset(0.007);
   hframe265->GetYaxis()->SetLabelSize(0.05);
   hframe265->GetYaxis()->SetTitleSize(0.06);
   hframe265->GetYaxis()->SetTitleOffset(1.25);
   hframe265->GetYaxis()->SetTitleFont(42);
   hframe265->GetZaxis()->SetLabelFont(42);
   hframe265->GetZaxis()->SetLabelOffset(0.007);
   hframe265->GetZaxis()->SetLabelSize(0.05);
   hframe265->GetZaxis()->SetTitleSize(0.06);
   hframe265->GetZaxis()->SetTitleFont(42);
   hframe265->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt3->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt3");
   thsBackground_grouped_wh3l_zg_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34","thsBackground_grouped_wh3l_zg_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->SetMinimum(-0.3306511);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->SetMaximum(90.99205);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_34);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt3266 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt3266","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetBinContent(1,15.58695);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetBinContent(2,8.650591);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetBinContent(3,-0.08956183);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetBinError(1,3.866046);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetBinError(2,1.953689);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetBinError(3,0.2410893);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3266->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt3267 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt3267","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->SetBinContent(1,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->SetBinError(1,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3267->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_WW_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt3268 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt3268","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->SetBinContent(1,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->SetBinError(1,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt3268->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt3269 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt3269","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetBinContent(1,69.35363);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetBinContent(2,31.01835);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetBinContent(3,3.686918);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetBinContent(4,0.1054283);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetBinError(1,3.151896);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetBinError(2,2.105612);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetBinError(3,0.7339677);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetBinError(4,0.1054283);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3269->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt3270 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt3270","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetBinContent(1,0.4251622);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetBinContent(2,0.290047);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetBinContent(3,0.02113204);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetBinError(1,0.1349264);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetBinError(2,0.1038717);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetBinError(3,0.02113204);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3270->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt3271 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt3271","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetBinContent(1,1.284072);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetBinContent(2,0.5408963);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetBinContent(3,0.05355535);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetBinError(1,0.08354275);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetBinError(2,0.05450343);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetBinError(3,0.01657837);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3271->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt3,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Draw("hist same");
   
   Double_t _fx3067[25] = {
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
   Double_t _fy3067[25] = {
   86.6591,
   40.49989,
   3.672043,
   0.1054283,
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
   Double_t _felx3067[25] = {
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
   Double_t _fely3067[25] = {
   8.828163,
   5.023773,
   1.018059,
   0.1054667,
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
   Double_t _fehx3067[25] = {
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
   Double_t _fehy3067[25] = {
   8.828154,
   5.023769,
   0.8674562,
   0.1054667,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3067,_fy3067,_felx3067,_fehx3067,_fely3067,_fehy3067);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3067 = new TH1F("Graph_Graph3067","",100,0,219);
   Graph_Graph3067->SetMinimum(-9.548767);
   Graph_Graph3067->SetMaximum(105.036);
   Graph_Graph3067->SetDirectory(0);
   Graph_Graph3067->SetStats(0);
   Graph_Graph3067->SetLineStyle(0);
   Graph_Graph3067->SetMarkerStyle(20);
   Graph_Graph3067->GetXaxis()->SetLabelFont(42);
   Graph_Graph3067->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3067->GetXaxis()->SetTitleFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3067->GetYaxis()->SetTitleFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3067);
   
   grae->Draw("2");
   
   Double_t _fx3068[25] = {
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
   Double_t _fy3068[25] = {
   95,
   31,
   7,
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
   Double_t _felx3068[25] = {
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
   Double_t _fely3068[25] = {
   9.729809,
   5.537672,
   2.581513,
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
   Double_t _fehx3068[25] = {
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
   Double_t _fehy3068[25] = {
   10.78125,
   6.627738,
   3.770356,
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
   grae = new TGraphAsymmErrors(25,_fx3068,_fy3068,_felx3068,_fehx3068,_fely3068,_fehy3068);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3068 = new TH1F("Graph_Graph3068","",100,0,219);
   Graph_Graph3068->SetMinimum(0);
   Graph_Graph3068->SetMaximum(116.3594);
   Graph_Graph3068->SetDirectory(0);
   Graph_Graph3068->SetStats(0);
   Graph_Graph3068->SetLineStyle(0);
   Graph_Graph3068->SetMarkerStyle(20);
   Graph_Graph3068->GetXaxis()->SetLabelFont(42);
   Graph_Graph3068->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3068->GetXaxis()->SetTitleFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3068->GetYaxis()->SetTitleFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3068);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy272 = new TH1F("hframe_copy272","",1000,10,200);
   hframe_copy272->SetMinimum(0);
   hframe_copy272->SetMaximum(261.867);
   hframe_copy272->SetDirectory(0);
   hframe_copy272->SetStats(0);
   hframe_copy272->SetLineStyle(0);
   hframe_copy272->SetMarkerStyle(20);
   hframe_copy272->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy272->GetXaxis()->SetNdivisions(506);
   hframe_copy272->GetXaxis()->SetLabelFont(42);
   hframe_copy272->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy272->GetXaxis()->SetLabelSize(0.05);
   hframe_copy272->GetXaxis()->SetTitleSize(0.06);
   hframe_copy272->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy272->GetXaxis()->SetTitleFont(42);
   hframe_copy272->GetYaxis()->SetTitle("Events");
   hframe_copy272->GetYaxis()->SetLabelFont(42);
   hframe_copy272->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy272->GetYaxis()->SetLabelSize(0.05);
   hframe_copy272->GetYaxis()->SetTitleSize(0.06);
   hframe_copy272->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy272->GetYaxis()->SetTitleFont(42);
   hframe_copy272->GetZaxis()->SetLabelFont(42);
   hframe_copy272->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy272->GetZaxis()->SetLabelSize(0.05);
   hframe_copy272->GetZaxis()->SetTitleSize(0.06);
   hframe_copy272->GetZaxis()->SetTitleFont(42);
   hframe_copy272->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt3->Modified();
   ccwh3l_zg_13TeV_pt3->cd();
   ccwh3l_zg_13TeV_pt3->SetSelected(ccwh3l_zg_13TeV_pt3);
}
