void c_wh3l_zg_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt3/cc
//=========  (Sat Jul  2 20:39:49 2016) by ROOT version6.02/13
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
   
   TH1F *hframe217 = new TH1F("hframe217","",1000,10,200);
   hframe217->SetMinimum(0);
   hframe217->SetMaximum(261.867);
   hframe217->SetDirectory(0);
   hframe217->SetStats(0);
   hframe217->SetLineStyle(0);
   hframe217->SetMarkerStyle(20);
   hframe217->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe217->GetXaxis()->SetNdivisions(506);
   hframe217->GetXaxis()->SetLabelFont(42);
   hframe217->GetXaxis()->SetLabelOffset(0.007);
   hframe217->GetXaxis()->SetLabelSize(0.05);
   hframe217->GetXaxis()->SetTitleSize(0.06);
   hframe217->GetXaxis()->SetTitleOffset(0.9);
   hframe217->GetXaxis()->SetTitleFont(42);
   hframe217->GetYaxis()->SetTitle("Events");
   hframe217->GetYaxis()->SetLabelFont(42);
   hframe217->GetYaxis()->SetLabelOffset(0.007);
   hframe217->GetYaxis()->SetLabelSize(0.05);
   hframe217->GetYaxis()->SetTitleSize(0.06);
   hframe217->GetYaxis()->SetTitleOffset(1.25);
   hframe217->GetYaxis()->SetTitleFont(42);
   hframe217->GetZaxis()->SetLabelFont(42);
   hframe217->GetZaxis()->SetLabelOffset(0.007);
   hframe217->GetZaxis()->SetLabelSize(0.05);
   hframe217->GetZaxis()->SetTitleSize(0.06);
   hframe217->GetZaxis()->SetTitleFont(42);
   hframe217->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt3->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt3");
   thsBackground_grouped_wh3l_zg_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49","thsBackground_grouped_wh3l_zg_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->SetMinimum(-0.3306511);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->SetMaximum(90.92072);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt3_stack_49);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt3218 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt3218","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetBinContent(1,15.58695);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetBinContent(2,8.083412);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetBinContent(3,-0.08956183);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetBinError(1,3.866046);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetBinError(2,1.869548);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetBinError(3,0.2410893);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt3218->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt3219 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt3219","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->SetBinContent(1,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->SetBinError(1,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt3219->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_WW_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt3220 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt3220","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetBinContent(1,69.28531);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetBinContent(2,30.88919);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetBinContent(3,3.686918);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetBinContent(4,0.1054283);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetBinError(1,3.151155);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetBinError(2,2.101646);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetBinError(3,0.7339677);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetBinError(4,0.1054283);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt3220->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt3221 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt3221","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->SetBinContent(1,0.3813102);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->SetBinContent(2,0.2120582);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->SetBinError(1,0.1276014);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->SetBinError(2,0.08786308);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt3221->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt3222 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt3222","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetBinContent(1,1.284072);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetBinContent(2,0.5408963);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetBinContent(3,0.05355535);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetBinError(1,0.08354275);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetBinError(2,0.05450343);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetBinError(3,0.01657837);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt3222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt3223 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt3223","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetBinContent(1,0.04356148);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetBinContent(2,0.03969771);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetBinContent(3,0.005517458);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetBinError(1,0.006560846);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetBinError(2,0.006950568);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetBinError(3,0.00193401);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt3,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt3->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt3");
   thsSignal_grouped_wh3l_zg_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50","thsSignal_grouped_wh3l_zg_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->SetMaximum(0.05262844);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt3_stack_50);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt3224 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt3224","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetBinContent(1,0.04356148);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetBinContent(2,0.03969771);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetBinContent(3,0.005517458);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetBinError(1,0.006560846);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetBinError(2,0.006950568);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetBinError(3,0.00193401);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt3224->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt3,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3049[25] = {
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
   Double_t _fy3049[25] = {
   86.5476,
   39.72555,
   3.650911,
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
   Double_t _felx3049[25] = {
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
   Double_t _fely3049[25] = {
   9.813226,
   5.11928,
   0.9986299,
   0.105473,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3049[25] = {
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
   Double_t _fehy3049[25] = {
   9.783235,
   5.118256,
   0.8483766,
   0.105473,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3049,_fy3049,_felx3049,_fehx3049,_fely3049,_fehy3049);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3049 = new TH1F("Graph_Graph3049","",100,0,219);
   Graph_Graph3049->SetMinimum(-9.633133);
   Graph_Graph3049->SetMaximum(105.9639);
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
   
   Double_t _fx3050[25] = {
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
   Double_t _fy3050[25] = {
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
   Double_t _felx3050[25] = {
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
   Double_t _fely3050[25] = {
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
   Double_t _fehx3050[25] = {
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
   Double_t _fehy3050[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3050,_fy3050,_felx3050,_fehx3050,_fely3050,_fehy3050);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3050 = new TH1F("Graph_Graph3050","",100,0,219);
   Graph_Graph3050->SetMinimum(0);
   Graph_Graph3050->SetMaximum(116.3594);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy225 = new TH1F("hframe_copy225","",1000,10,200);
   hframe_copy225->SetMinimum(0);
   hframe_copy225->SetMaximum(261.867);
   hframe_copy225->SetDirectory(0);
   hframe_copy225->SetStats(0);
   hframe_copy225->SetLineStyle(0);
   hframe_copy225->SetMarkerStyle(20);
   hframe_copy225->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy225->GetXaxis()->SetNdivisions(506);
   hframe_copy225->GetXaxis()->SetLabelFont(42);
   hframe_copy225->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy225->GetXaxis()->SetLabelSize(0.05);
   hframe_copy225->GetXaxis()->SetTitleSize(0.06);
   hframe_copy225->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy225->GetXaxis()->SetTitleFont(42);
   hframe_copy225->GetYaxis()->SetTitle("Events");
   hframe_copy225->GetYaxis()->SetLabelFont(42);
   hframe_copy225->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy225->GetYaxis()->SetLabelSize(0.05);
   hframe_copy225->GetYaxis()->SetTitleSize(0.06);
   hframe_copy225->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy225->GetYaxis()->SetTitleFont(42);
   hframe_copy225->GetZaxis()->SetLabelFont(42);
   hframe_copy225->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy225->GetZaxis()->SetLabelSize(0.05);
   hframe_copy225->GetZaxis()->SetTitleSize(0.06);
   hframe_copy225->GetZaxis()->SetTitleFont(42);
   hframe_copy225->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt3->Modified();
   ccwh3l_zg_13TeV_pt3->cd();
   ccwh3l_zg_13TeV_pt3->SetSelected(ccwh3l_zg_13TeV_pt3);
}
