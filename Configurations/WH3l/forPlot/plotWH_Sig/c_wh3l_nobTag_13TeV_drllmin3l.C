void c_wh3l_nobTag_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_nobTag_13TeV_drllmin3l/cc
//=========  (Wed Jun 29 01:51:44 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_nobTag_13TeV_drllmin3l = new TCanvas("ccwh3l_nobTag_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_nobTag_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_nobTag_13TeV_drllmin3l->Range(-1.2,-15.52771,6.3,103.9162);
   ccwh3l_nobTag_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_nobTag_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_nobTag_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_nobTag_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_nobTag_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_nobTag_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_nobTag_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_nobTag_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_nobTag_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_nobTag_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_nobTag_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe251 = new TH1F("hframe251","",1000,0,6);
   hframe251->SetMinimum(0);
   hframe251->SetMaximum(97.94405);
   hframe251->SetDirectory(0);
   hframe251->SetStats(0);
   hframe251->SetLineStyle(0);
   hframe251->SetMarkerStyle(20);
   hframe251->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe251->GetXaxis()->SetNdivisions(506);
   hframe251->GetXaxis()->SetLabelFont(42);
   hframe251->GetXaxis()->SetLabelOffset(0.007);
   hframe251->GetXaxis()->SetLabelSize(0.05);
   hframe251->GetXaxis()->SetTitleSize(0.06);
   hframe251->GetXaxis()->SetTitleOffset(0.9);
   hframe251->GetXaxis()->SetTitleFont(42);
   hframe251->GetYaxis()->SetTitle("Events");
   hframe251->GetYaxis()->SetLabelFont(42);
   hframe251->GetYaxis()->SetLabelOffset(0.007);
   hframe251->GetYaxis()->SetLabelSize(0.05);
   hframe251->GetYaxis()->SetTitleSize(0.06);
   hframe251->GetYaxis()->SetTitleOffset(1.25);
   hframe251->GetYaxis()->SetTitleFont(42);
   hframe251->GetZaxis()->SetLabelFont(42);
   hframe251->GetZaxis()->SetLabelOffset(0.007);
   hframe251->GetZaxis()->SetLabelSize(0.05);
   hframe251->GetZaxis()->SetTitleSize(0.06);
   hframe251->GetZaxis()->SetTitleFont(42);
   hframe251->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51 = new TH1F("thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51","thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->SetMinimum(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->SetMaximum(41.1365);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->SetDirectory(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->SetStats(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->SetLineStyle(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_51);
   
   
   TH1D *new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252 = new TH1D("new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetBinContent(1,10.69792);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetBinContent(2,27.71934);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetBinContent(3,8.951389);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetBinContent(4,0.9197365);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetBinError(1,2.507638);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetBinError(2,3.913414);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetBinError(3,2.167638);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetBinError(4,0.6940485);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetEntries(435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetFillColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->SetLineColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253 = new TH1D("new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetBinContent(1,0.1074992);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetBinContent(2,0.08950658);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetBinContent(3,0.05975783);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetBinError(1,0.0424819);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetBinError(2,0.03662871);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetBinError(3,0.03044978);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetEntries(17);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetFillColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->SetLineColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254 = new TH1D("new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetBinContent(1,0.01717191);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetBinContent(2,0.0183749);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetBinContent(3,0.00795892);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetBinError(1,0.003318899);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetBinError(2,0.003332032);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetBinError(3,0.002174797);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetEntries(83);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetFillColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->SetLineColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255 = new TH1D("new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetBinContent(1,1.021428);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetBinContent(2,2.131157);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetBinContent(3,1.1161);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetBinError(1,0.4304196);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetBinError(2,0.4918018);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetBinError(3,0.3595073);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetEntries(69);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetFillColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->SetLineColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256 = new TH1D("new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetBinContent(1,0.4798593);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetBinContent(2,0.9808102);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetBinContent(3,0.1276206);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetBinError(1,0.1363577);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetBinError(2,0.2021025);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetBinError(3,0.06897966);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetEntries(44);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257 = new TH1D("new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetBinContent(1,7.917022);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetBinContent(2,7.769856);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetBinContent(3,2.61505);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetBinContent(4,0.06081031);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetBinError(1,0.2070459);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetBinError(2,0.2055302);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetBinError(3,0.1193211);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetBinError(4,0.01898064);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetEntries(3754);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetFillColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->SetLineColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetBinContent(1,0.7398092);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetBinContent(2,0.4685711);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetBinContent(3,0.06644329);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetBinError(1,0.02975108);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetBinError(2,0.02196517);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetBinError(3,0.007457842);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_nobTag_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52 = new TH1F("thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52","thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->SetMinimum(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->SetMaximum(0.8080383);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->SetDirectory(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->SetStats(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->SetLineStyle(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l_stack_52);
   
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetBinContent(1,0.7398092);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetBinContent(2,0.4685711);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetBinContent(3,0.06644329);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetBinError(1,0.02975108);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetBinError(2,0.02196517);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetBinError(3,0.007457842);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l259->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_nobTag_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3051[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3051[5] = {
   20.2409,
   38.70905,
   12.87788,
   0.9805468,
   0};
   Double_t _felx3051[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3051[5] = {
   5.022872,
   10.85623,
   4.169699,
   0.7823281,
   0};
   Double_t _fehx3051[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3051[5] = {
   5.02191,
   10.85555,
   4.169514,
   0.7823282,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,6.6);
   Graph_Graph3051->SetMinimum(0);
   Graph_Graph3051->SetMaximum(54.52106);
   Graph_Graph3051->SetDirectory(0);
   Graph_Graph3051->SetStats(0);
   Graph_Graph3051->SetLineStyle(0);
   Graph_Graph3051->SetMarkerStyle(20);
   Graph_Graph3051->GetXaxis()->SetLabelFont(42);
   Graph_Graph3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3051->GetXaxis()->SetTitleFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3051->GetYaxis()->SetTitleFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3051);
   
   grae->Draw("2");
   
   Double_t _fx3052[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3052[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3052[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3052[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3052[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3052[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,6.6);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(1.262698);
   Graph_Graph3052->SetDirectory(0);
   Graph_Graph3052->SetStats(0);
   Graph_Graph3052->SetLineStyle(0);
   Graph_Graph3052->SetMarkerStyle(20);
   Graph_Graph3052->GetXaxis()->SetLabelFont(42);
   Graph_Graph3052->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3052->GetXaxis()->SetTitleFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3052->GetYaxis()->SetTitleFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3052);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy260 = new TH1F("hframe_copy260","",1000,0,6);
   hframe_copy260->SetMinimum(0);
   hframe_copy260->SetMaximum(97.94405);
   hframe_copy260->SetDirectory(0);
   hframe_copy260->SetStats(0);
   hframe_copy260->SetLineStyle(0);
   hframe_copy260->SetMarkerStyle(20);
   hframe_copy260->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy260->GetXaxis()->SetNdivisions(506);
   hframe_copy260->GetXaxis()->SetLabelFont(42);
   hframe_copy260->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetXaxis()->SetLabelSize(0.05);
   hframe_copy260->GetXaxis()->SetTitleSize(0.06);
   hframe_copy260->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy260->GetXaxis()->SetTitleFont(42);
   hframe_copy260->GetYaxis()->SetTitle("Events");
   hframe_copy260->GetYaxis()->SetLabelFont(42);
   hframe_copy260->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetYaxis()->SetLabelSize(0.05);
   hframe_copy260->GetYaxis()->SetTitleSize(0.06);
   hframe_copy260->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy260->GetYaxis()->SetTitleFont(42);
   hframe_copy260->GetZaxis()->SetLabelFont(42);
   hframe_copy260->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetZaxis()->SetLabelSize(0.05);
   hframe_copy260->GetZaxis()->SetTitleSize(0.06);
   hframe_copy260->GetZaxis()->SetTitleFont(42);
   hframe_copy260->Draw("sameaxis");
   ccwh3l_nobTag_13TeV_drllmin3l->Modified();
   ccwh3l_nobTag_13TeV_drllmin3l->cd();
   ccwh3l_nobTag_13TeV_drllmin3l->SetSelected(ccwh3l_nobTag_13TeV_drllmin3l);
}
