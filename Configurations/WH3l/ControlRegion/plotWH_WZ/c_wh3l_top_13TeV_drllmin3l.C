void c_wh3l_top_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_drllmin3l/cc
//=========  (Sat Jul  2 20:39:42 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_drllmin3l = new TCanvas("ccwh3l_top_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_top_13TeV_drllmin3l->Range(-0.8,-10.25333,4.2,68.61846);
   ccwh3l_top_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_top_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_top_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_top_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_top_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_top_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_top_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_top_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe127 = new TH1F("hframe127","",1000,0,4);
   hframe127->SetMinimum(0);
   hframe127->SetMaximum(64.67487);
   hframe127->SetDirectory(0);
   hframe127->SetStats(0);
   hframe127->SetLineStyle(0);
   hframe127->SetMarkerStyle(20);
   hframe127->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe127->GetXaxis()->SetNdivisions(506);
   hframe127->GetXaxis()->SetLabelFont(42);
   hframe127->GetXaxis()->SetLabelOffset(0.007);
   hframe127->GetXaxis()->SetLabelSize(0.05);
   hframe127->GetXaxis()->SetTitleSize(0.06);
   hframe127->GetXaxis()->SetTitleOffset(0.9);
   hframe127->GetXaxis()->SetTitleFont(42);
   hframe127->GetYaxis()->SetTitle("Events");
   hframe127->GetYaxis()->SetLabelFont(42);
   hframe127->GetYaxis()->SetLabelOffset(0.007);
   hframe127->GetYaxis()->SetLabelSize(0.05);
   hframe127->GetYaxis()->SetTitleSize(0.06);
   hframe127->GetYaxis()->SetTitleOffset(1.25);
   hframe127->GetYaxis()->SetTitleFont(42);
   hframe127->GetZaxis()->SetLabelFont(42);
   hframe127->GetZaxis()->SetLabelOffset(0.007);
   hframe127->GetZaxis()->SetLabelSize(0.05);
   hframe127->GetZaxis()->SetTitleSize(0.06);
   hframe127->GetZaxis()->SetTitleFont(42);
   hframe127->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_top_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29","thsBackground_grouped_wh3l_top_13TeV_drllmin3l",3,0,4);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->SetMinimum(0);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->SetMaximum(27.16345);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_29);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128","histo_Fake",3,0,4);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetBinContent(1,11.89411);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetBinContent(2,21.51657);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetBinContent(3,3.918055);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetBinContent(4,0.3650929);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetBinError(1,2.565941);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetBinError(2,3.391951);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetBinError(3,1.285618);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetBinError(4,0.3650929);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_drllmin3l129 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_drllmin3l129","histo_WW",3,0,4);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetBinContent(1,0.08709865);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetBinContent(2,0.04585555);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetBinContent(3,0.03510752);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetBinError(1,0.03756961);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetBinError(2,0.02649148);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetBinError(3,0.02482492);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l129->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130","histo_Vg",3,0,4);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->SetBinContent(1,0.5978995);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->SetBinContent(2,0.7947166);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->SetBinError(1,0.3082773);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->SetBinError(2,0.3320899);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l130->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131","histo_ZZ",3,0,4);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetBinContent(1,0.3486922);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetBinContent(2,0.2732332);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetBinContent(3,0.05850328);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetBinError(1,0.1175253);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetBinError(2,0.1118331);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetBinError(3,0.04729257);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l131->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132","histo_WZ",3,0,4);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetBinContent(1,5.308905);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetBinContent(2,3.119334);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetBinContent(3,0.4396247);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetBinError(1,0.1699467);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetBinError(2,0.1304124);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetBinError(3,0.04814876);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetBinContent(1,0.2768438);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetBinContent(2,0.1202369);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetBinContent(3,0.008884417);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetBinError(1,0.01676995);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetBinError(2,0.01092535);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetBinError(3,0.00254216);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_top_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_top_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30","thsSignal_grouped_wh3l_top_13TeV_drllmin3l",3,0,4);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->SetMaximum(0.3082944);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_drllmin3l_stack_30);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetBinContent(1,0.2768438);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetBinContent(2,0.1202369);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetBinContent(3,0.008884417);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetBinError(1,0.01676995);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetBinError(2,0.01092535);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetBinError(3,0.00254216);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l134->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_top_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3029[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3029[3] = {
   18.23671,
   25.74971,
   4.45129};
   Double_t _felx3029[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3029[3] = {
   5.255373,
   8.525475,
   1.964022};
   Double_t _fehx3029[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3029[3] = {
   5.255121,
   8.52528,
   1.964012};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,4.4);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(37.45376);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineStyle(0);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("2");
   
   Double_t _fx3030[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3030[3] = {
   19,
   20,
   2};
   Double_t _felx3030[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3030[3] = {
   4.320299,
   4.43453,
   1.29183};
   Double_t _fehx3030[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3030[3] = {
   5.435307,
   5.546633,
   2.63791};
   grae = new TGraphAsymmErrors(3,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,4.4);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(28.03048);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineStyle(0);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetLabelFont(42);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3030->GetXaxis()->SetTitleFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3030->GetYaxis()->SetTitleFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy135 = new TH1F("hframe_copy135","",1000,0,4);
   hframe_copy135->SetMinimum(0);
   hframe_copy135->SetMaximum(64.67487);
   hframe_copy135->SetDirectory(0);
   hframe_copy135->SetStats(0);
   hframe_copy135->SetLineStyle(0);
   hframe_copy135->SetMarkerStyle(20);
   hframe_copy135->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy135->GetXaxis()->SetNdivisions(506);
   hframe_copy135->GetXaxis()->SetLabelFont(42);
   hframe_copy135->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy135->GetXaxis()->SetLabelSize(0.05);
   hframe_copy135->GetXaxis()->SetTitleSize(0.06);
   hframe_copy135->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy135->GetXaxis()->SetTitleFont(42);
   hframe_copy135->GetYaxis()->SetTitle("Events");
   hframe_copy135->GetYaxis()->SetLabelFont(42);
   hframe_copy135->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy135->GetYaxis()->SetLabelSize(0.05);
   hframe_copy135->GetYaxis()->SetTitleSize(0.06);
   hframe_copy135->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy135->GetYaxis()->SetTitleFont(42);
   hframe_copy135->GetZaxis()->SetLabelFont(42);
   hframe_copy135->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy135->GetZaxis()->SetLabelSize(0.05);
   hframe_copy135->GetZaxis()->SetTitleSize(0.06);
   hframe_copy135->GetZaxis()->SetTitleFont(42);
   hframe_copy135->Draw("sameaxis");
   ccwh3l_top_13TeV_drllmin3l->Modified();
   ccwh3l_top_13TeV_drllmin3l->cd();
   ccwh3l_top_13TeV_drllmin3l->SetSelected(ccwh3l_top_13TeV_drllmin3l);
}
