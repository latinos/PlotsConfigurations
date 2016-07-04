void c_wh3l_MET_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_pt3/cc
//=========  (Sun Jul  3 01:21:59 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_pt3 = new TCanvas("ccwh3l_MET_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_13TeV_pt3->Range(-28,-3.138855,209.5,21.00618);
   ccwh3l_MET_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe231 = new TH1F("hframe231","",1000,10,200);
   hframe231->SetMinimum(0);
   hframe231->SetMaximum(19.79893);
   hframe231->SetDirectory(0);
   hframe231->SetStats(0);
   hframe231->SetLineStyle(0);
   hframe231->SetMarkerStyle(20);
   hframe231->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe231->GetXaxis()->SetNdivisions(506);
   hframe231->GetXaxis()->SetLabelFont(42);
   hframe231->GetXaxis()->SetLabelOffset(0.007);
   hframe231->GetXaxis()->SetLabelSize(0.05);
   hframe231->GetXaxis()->SetTitleSize(0.06);
   hframe231->GetXaxis()->SetTitleOffset(0.9);
   hframe231->GetXaxis()->SetTitleFont(42);
   hframe231->GetYaxis()->SetTitle("Events");
   hframe231->GetYaxis()->SetLabelFont(42);
   hframe231->GetYaxis()->SetLabelOffset(0.007);
   hframe231->GetYaxis()->SetLabelSize(0.05);
   hframe231->GetYaxis()->SetTitleSize(0.06);
   hframe231->GetYaxis()->SetTitleOffset(1.25);
   hframe231->GetYaxis()->SetTitleFont(42);
   hframe231->GetZaxis()->SetLabelFont(42);
   hframe231->GetZaxis()->SetLabelOffset(0.007);
   hframe231->GetZaxis()->SetLabelSize(0.05);
   hframe231->GetZaxis()->SetTitleSize(0.06);
   hframe231->GetZaxis()->SetTitleFont(42);
   hframe231->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47","thsBackground_grouped_wh3l_MET_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->SetMinimum(-0.1049991);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->SetMaximum(9.507997);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_47);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_pt3232 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_pt3232","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinContent(1,7.008764);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinContent(2,5.796714);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinContent(3,4.108968);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinContent(4,0.6625409);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinContent(5,1.111306);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinContent(6,0.517307);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinContent(7,-0.0183112);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinContent(11,-0.01470217);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinError(1,2.046471);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinError(2,1.568721);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinError(3,1.229819);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinError(4,0.5284904);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinError(5,0.5833189);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinError(6,0.333868);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinError(7,0.03024296);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetBinError(11,0.01470217);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_pt3233 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_pt3233","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetBinContent(1,0.06396418);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetBinContent(2,0.01483974);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetBinContent(4,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetBinContent(6,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetBinError(1,0.0320131);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetBinError(2,0.01130347);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetBinError(4,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetBinError(6,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3233->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_pt3234 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_pt3234","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(1,0.05626145);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(2,0.05799295);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(3,0.07575346);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(4,0.03107048);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(5,0.03430049);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(6,0.02452606);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(7,0.00113918);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(8,0.01033206);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(9,0.004447505);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(10,0.01147595);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(11,0.000287528);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(13,0.001998331);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(16,0.0002148976);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(17,0.001560374);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinContent(22,0.002202303);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(1,0.01190876);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(2,0.01394186);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(3,0.01405064);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(4,0.00969832);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(5,0.009850945);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(6,0.007285925);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(7,0.004019027);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(8,0.004736617);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(9,0.00315588);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(10,0.005202445);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(11,0.0002873131);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(13,0.001998331);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(16,0.0002148976);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(17,0.001560374);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetBinError(22,0.002202303);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetEntries(198);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_pt3235 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_pt3235","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->SetBinContent(1,0.05736144);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->SetBinContent(4,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->SetBinError(1,0.1623605);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->SetBinError(4,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->SetEntries(4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_pt3236 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_pt3236","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->SetBinContent(1,0.09040143);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->SetBinContent(4,0.03513683);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->SetBinError(1,0.06402017);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->SetBinError(4,0.03513683);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->SetEntries(3);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_pt3237 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_pt3237","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(1,0.4957682);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(2,0.2916262);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(3,0.2157028);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(4,0.0812465);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(5,0.02806127);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(6,0.02349841);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(7,0.0251956);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(8,0.004988727);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(9,0.009784053);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinContent(10,0.01100077);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(1,0.05246564);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(2,0.03958594);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(3,0.03399061);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(4,0.02090957);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(5,0.01255854);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(6,0.01030376);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(7,0.01212334);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(8,0.004988727);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(9,0.00708697);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetBinError(10,0.007845909);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetEntries(244);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt3238 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt3238","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(1,0.1470505);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(2,0.1288331);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(3,0.0558435);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(4,0.03692403);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(5,0.02200196);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(6,0.006914784);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(7,0.004507182);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(8,0.005658448);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(9,0.0010871);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(10,0.0005029922);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(11,0.0004177496);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(12,0.002110052);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(1,0.01239026);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(2,0.01195451);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(3,0.007616894);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(4,0.006429883);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(5,0.00497794);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(6,0.002414131);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(7,0.001738852);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(8,0.002719256);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(9,0.0009049054);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(10,0.0003740448);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(11,0.0002954586);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(12,0.001715965);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48","thsSignal_grouped_wh3l_MET_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->SetMaximum(0.1674128);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_48);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt3239 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt3239","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(1,0.1470505);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(2,0.1288331);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(3,0.0558435);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(4,0.03692403);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(5,0.02200196);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(6,0.006914784);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(7,0.004507182);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(8,0.005658448);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(9,0.0010871);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(10,0.0005029922);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(11,0.0004177496);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(12,0.002110052);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(1,0.01239026);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(2,0.01195451);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(3,0.007616894);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(4,0.006429883);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(5,0.00497794);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(6,0.002414131);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(7,0.001738852);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(8,0.002719256);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(9,0.0009049054);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(10,0.0003740448);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(11,0.0002954586);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(12,0.001715965);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3239->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3047[25] = {
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
   Double_t _fy3047[25] = {
   7.772521,
   6.161173,
   4.400424,
   0.9486848,
   1.173667,
   0.5816558,
   0.008023573,
   0.01532078,
   0.01423156,
   0.02247672,
   -0.01441464,
   0,
   0.00199833,
   0,
   0,
   0.0002148976,
   0.001560374,
   0,
   0,
   0,
   0,
   0.002202303,
   0,
   0,
   0};
   Double_t _felx3047[25] = {
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
   Double_t _fely3047[25] = {
   3.339093,
   2.605378,
   1.925288,
   0.7693093,
   0.7206696,
   0.4106054,
   0.04399167,
   0.01419384,
   0.01117422,
   0.01738882,
   0.01585075,
   0,
   0.002828311,
   0,
   0,
   0.0003041725,
   0.002207554,
   0,
   0,
   0,
   0,
   0.003117367,
   0,
   0,
   0};
   Double_t _fehx3047[25] = {
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
   Double_t _fehy3047[25] = {
   3.411125,
   2.605373,
   1.925281,
   0.7693022,
   0.7206804,
   0.4106022,
   0.03506771,
   0.01419375,
   0.01116572,
   0.01738588,
   0.01585075,
   0,
   0.002828464,
   0,
   0,
   0.0003041965,
   0.002207575,
   0,
   0,
   0,
   0,
   0.003117569,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,219);
   Graph_Graph3047->SetMinimum(-1.157929);
   Graph_Graph3047->SetMaximum(12.30561);
   Graph_Graph3047->SetDirectory(0);
   Graph_Graph3047->SetStats(0);
   Graph_Graph3047->SetLineStyle(0);
   Graph_Graph3047->SetMarkerStyle(20);
   Graph_Graph3047->GetXaxis()->SetLabelFont(42);
   Graph_Graph3047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3047->GetXaxis()->SetTitleFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3047->GetYaxis()->SetTitleFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3047);
   
   grae->Draw("2");
   
   Double_t _fx3048[25] = {
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
   Double_t _fy3048[25] = {
   2,
   3,
   3,
   1,
   1,
   0,
   1,
   0,
   0,
   0,
   1,
   0,
   0,
   0,
   0,
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
   Double_t _felx3048[25] = {
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
   Double_t _fely3048[25] = {
   1.29183,
   1.632727,
   1.632727,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3048[25] = {
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
   Double_t _fehy3048[25] = {
   2.63791,
   2.918242,
   2.918242,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(25,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,219);
   Graph_Graph3048->SetMinimum(0);
   Graph_Graph3048->SetMaximum(6.510067);
   Graph_Graph3048->SetDirectory(0);
   Graph_Graph3048->SetStats(0);
   Graph_Graph3048->SetLineStyle(0);
   Graph_Graph3048->SetMarkerStyle(20);
   Graph_Graph3048->GetXaxis()->SetLabelFont(42);
   Graph_Graph3048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3048->GetXaxis()->SetTitleFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3048->GetYaxis()->SetTitleFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3048);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy240 = new TH1F("hframe_copy240","",1000,10,200);
   hframe_copy240->SetMinimum(0);
   hframe_copy240->SetMaximum(19.79893);
   hframe_copy240->SetDirectory(0);
   hframe_copy240->SetStats(0);
   hframe_copy240->SetLineStyle(0);
   hframe_copy240->SetMarkerStyle(20);
   hframe_copy240->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy240->GetXaxis()->SetNdivisions(506);
   hframe_copy240->GetXaxis()->SetLabelFont(42);
   hframe_copy240->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetXaxis()->SetLabelSize(0.05);
   hframe_copy240->GetXaxis()->SetTitleSize(0.06);
   hframe_copy240->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy240->GetXaxis()->SetTitleFont(42);
   hframe_copy240->GetYaxis()->SetTitle("Events");
   hframe_copy240->GetYaxis()->SetLabelFont(42);
   hframe_copy240->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetYaxis()->SetLabelSize(0.05);
   hframe_copy240->GetYaxis()->SetTitleSize(0.06);
   hframe_copy240->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy240->GetYaxis()->SetTitleFont(42);
   hframe_copy240->GetZaxis()->SetLabelFont(42);
   hframe_copy240->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetZaxis()->SetLabelSize(0.05);
   hframe_copy240->GetZaxis()->SetTitleSize(0.06);
   hframe_copy240->GetZaxis()->SetTitleFont(42);
   hframe_copy240->Draw("sameaxis");
   ccwh3l_MET_13TeV_pt3->Modified();
   ccwh3l_MET_13TeV_pt3->cd();
   ccwh3l_MET_13TeV_pt3->SetSelected(ccwh3l_MET_13TeV_pt3);
}
