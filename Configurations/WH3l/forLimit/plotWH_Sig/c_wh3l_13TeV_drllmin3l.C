void c_wh3l_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_drllmin3l/cc
//=========  (Thu Jun 30 22:29:53 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_drllmin3l = new TCanvas("ccwh3l_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_drllmin3l->Range(-0.8,-4.284729,4.2,28.67472);
   ccwh3l_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe231 = new TH1F("hframe231","",1000,0,4);
   hframe231->SetMinimum(0);
   hframe231->SetMaximum(27.02675);
   hframe231->SetDirectory(0);
   hframe231->SetStats(0);
   hframe231->SetLineStyle(0);
   hframe231->SetMarkerStyle(20);
   hframe231->GetXaxis()->SetTitle("min #Delta R_{ll} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47 = new TH1F("thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47","thsBackground_grouped_wh3l_13TeV_drllmin3l",3,0,4);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetMaximum(11.35124);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_drllmin3l232 = new TH1D("new_histo_group_Fake_wh3l_13TeV_drllmin3l232","histo_Fake",3,0,4);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinContent(1,2.458669);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinContent(2,5.278553);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinContent(3,1.991599);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinError(1,1.403521);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinError(2,1.855392);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinError(3,1.090623);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_drllmin3l233 = new TH1D("new_histo_group_WW_wh3l_13TeV_drllmin3l233","histo_WW",3,0,4);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinContent(1,0.03345312);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinContent(2,0.04104042);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinContent(3,0.0142084);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinError(1,0.02374035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinError(2,0.02405262);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinError(3,0.0142084);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_drllmin3l234 = new TH1D("new_histo_group_VVV_wh3l_13TeV_drllmin3l234","histo_VVV",3,0,4);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinContent(1,0.1268825);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinContent(2,0.1710731);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinContent(3,0.01690699);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinError(1,0.01786739);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinError(2,0.02140873);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinError(3,0.006260997);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_drllmin3l235 = new TH1D("new_histo_group_Vg_wh3l_13TeV_drllmin3l235","histo_Vg",3,0,4);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinContent(1,0.4407703);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinContent(2,1.363073);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinContent(3,0.8443256);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinError(1,0.3017995);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinError(2,0.3600031);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinError(3,0.3229108);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_drllmin3l236 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_drllmin3l236","histo_ZZ",3,0,4);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinContent(1,0.1689127);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinContent(2,0.4304042);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinContent(3,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinError(1,0.0851988);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinError(2,0.1290785);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinError(3,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_drllmin3l237 = new TH1D("new_histo_group_WZ_wh3l_13TeV_drllmin3l237","histo_WZ",3,0,4);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinContent(1,3.719603);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinContent(2,3.256952);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinContent(3,0.4126612);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinError(1,0.1414473);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinError(2,0.1336922);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinError(3,0.04729183);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_drllmin3l238 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_drllmin3l238","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinContent(1,0.516978);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinContent(2,0.2696045);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinContent(3,0.02542528);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinError(1,0.02573687);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinError(2,0.01638665);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinError(3,0.005120081);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetEntries(1320);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48 = new TH1F("thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48","thsSignal_grouped_wh3l_13TeV_drllmin3l",3,0,4);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetMaximum(0.5698506);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_drllmin3l239 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_drllmin3l239","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinContent(1,0.516978);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinContent(2,0.2696045);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinContent(3,0.02542528);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinError(1,0.02573687);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinError(2,0.01638665);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinError(3,0.005120081);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetEntries(1320);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3047[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3047[3] = {
   6.94829,
   10.5411,
   3.306105};
   Double_t _felx3047[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3047[3] = {
   2.165498,
   3.13987,
   1.661992};
   Double_t _fehx3047[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3047[3] = {
   2.164637,
   3.139505,
   1.661942};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,4.4);
   Graph_Graph3047->SetMinimum(0.4404639);
   Graph_Graph3047->SetMaximum(14.88425);
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
   
   Double_t _fx3048[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3048[3] = {
   0,
   0,
   0};
   Double_t _felx3048[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3048[3] = {
   0,
   0,
   0};
   Double_t _fehx3048[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3048[3] = {
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(3,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,4.4);
   Graph_Graph3048->SetMinimum(0);
   Graph_Graph3048->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy240 = new TH1F("hframe_copy240","",1000,0,4);
   hframe_copy240->SetMinimum(0);
   hframe_copy240->SetMaximum(27.02675);
   hframe_copy240->SetDirectory(0);
   hframe_copy240->SetStats(0);
   hframe_copy240->SetLineStyle(0);
   hframe_copy240->SetMarkerStyle(20);
   hframe_copy240->GetXaxis()->SetTitle("min #Delta R_{ll} [GeV]");
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
   ccwh3l_13TeV_drllmin3l->Modified();
   ccwh3l_13TeV_drllmin3l->cd();
   ccwh3l_13TeV_drllmin3l->SetSelected(ccwh3l_13TeV_drllmin3l);
}
