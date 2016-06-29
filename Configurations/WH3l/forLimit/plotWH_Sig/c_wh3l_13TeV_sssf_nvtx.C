void c_wh3l_13TeV_sssf_nvtx()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_nvtx/cc
//=========  (Wed Jun 29 22:36:13 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_nvtx = new TCanvas("ccwh3l_13TeV_sssf_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_nvtx->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_nvtx->Range(-8,-0.5446904,42,3.645236);
   ccwh3l_13TeV_sssf_nvtx->SetFillColor(0);
   ccwh3l_13TeV_sssf_nvtx->SetBorderMode(0);
   ccwh3l_13TeV_sssf_nvtx->SetBorderSize(2);
   ccwh3l_13TeV_sssf_nvtx->SetTickx(1);
   ccwh3l_13TeV_sssf_nvtx->SetTicky(1);
   ccwh3l_13TeV_sssf_nvtx->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_nvtx->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_nvtx->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_nvtx->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_nvtx->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_nvtx->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_nvtx->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe111 = new TH1F("hframe111","",1000,0,40);
   hframe111->SetMinimum(0);
   hframe111->SetMaximum(3.435739);
   hframe111->SetDirectory(0);
   hframe111->SetStats(0);
   hframe111->SetLineStyle(0);
   hframe111->SetMarkerStyle(20);
   hframe111->GetXaxis()->SetTitle("nvtx");
   hframe111->GetXaxis()->SetNdivisions(506);
   hframe111->GetXaxis()->SetLabelFont(42);
   hframe111->GetXaxis()->SetLabelOffset(0.007);
   hframe111->GetXaxis()->SetLabelSize(0.05);
   hframe111->GetXaxis()->SetTitleSize(0.06);
   hframe111->GetXaxis()->SetTitleOffset(0.9);
   hframe111->GetXaxis()->SetTitleFont(42);
   hframe111->GetYaxis()->SetTitle("Events");
   hframe111->GetYaxis()->SetLabelFont(42);
   hframe111->GetYaxis()->SetLabelOffset(0.007);
   hframe111->GetYaxis()->SetLabelSize(0.05);
   hframe111->GetYaxis()->SetTitleSize(0.06);
   hframe111->GetYaxis()->SetTitleOffset(1.25);
   hframe111->GetYaxis()->SetTitleFont(42);
   hframe111->GetZaxis()->SetLabelFont(42);
   hframe111->GetZaxis()->SetLabelOffset(0.007);
   hframe111->GetZaxis()->SetLabelSize(0.05);
   hframe111->GetZaxis()->SetTitleSize(0.06);
   hframe111->GetZaxis()->SetTitleFont(42);
   hframe111->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_nvtx = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->SetName("thsBackground_grouped_wh3l_13TeV_sssf_nvtx");
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23","thsBackground_grouped_wh3l_13TeV_sssf_nvtx",40,0,40);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->SetMinimum(-0.5669007);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->SetMaximum(2.455583);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_nvtx_stack_23);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(5,0.08834279);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(6,-0.3140613);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(7,0.07000841);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(8,1.31407);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(9,1.058443);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(10,-0.1381854);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(11,0.02597067);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(12,0.1889496);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(13,0.528474);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(14,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(15,-0.007975492);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinContent(16,-0.04592422);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(5,0.08834279);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(6,0.2528394);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(7,0.1132725);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(8,1.024581);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(9,0.6953118);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(10,0.1091164);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(11,0.1319267);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(12,0.1389963);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(13,0.3974);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(14,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(15,0.007975492);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetBinError(16,0.04515905);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nvtx112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->Add(new_histo_group_Fake_wh3l_13TeV_sssf_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_nvtx113 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_nvtx113","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->SetBinContent(5,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->SetBinContent(10,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->SetBinError(5,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->SetBinError(10,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nvtx113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->Add(new_histo_group_WW_wh3l_13TeV_sssf_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->SetBinContent(13,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->SetBinError(13,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nvtx114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->Add(new_histo_group_VVV_wh3l_13TeV_sssf_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->SetBinContent(18,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->SetBinError(18,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nvtx115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->Add(new_histo_group_Vg_wh3l_13TeV_sssf_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->SetBinContent(12,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->SetBinContent(13,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->SetBinError(12,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->SetBinError(13,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx116->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(3,0.00771111);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(5,0.01764608);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(6,0.01979509);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(7,0.02588803);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(8,0.03344902);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(9,0.0575021);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(10,0.07939136);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(11,0.08470147);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(12,0.04295656);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(13,0.07325701);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(14,0.07725896);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(15,0.04118981);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(16,0.02900133);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(17,0.01591321);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(18,0.006364392);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(19,0.005380294);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(22,0.005250057);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinContent(26,6.972719e-06);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(3,0.00771111);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(5,0.01031087);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(6,0.01080188);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(7,0.01192892);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(8,0.01373043);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(9,0.01823286);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(10,0.02158223);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(11,0.02185572);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(12,0.01502619);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(13,0.01842651);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(14,0.01997741);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(15,0.01462105);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(16,0.01140633);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(17,0.007801572);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(18,0.004550291);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(19,0.005380294);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(22,0.005250057);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetBinError(26,6.972719e-06);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nvtx117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->Add(new_histo_group_WZ_wh3l_13TeV_sssf_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(3,0.001773516);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(4,0.008189463);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(5,0.007664979);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(6,0.01919712);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(7,0.02034286);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(8,0.0267768);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(9,0.03647043);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(10,0.0327242);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(11,0.03317798);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(12,0.02868208);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(13,0.02315929);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(14,0.01240686);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(15,0.01012274);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(16,0.006586974);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(17,0.006990482);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(18,0.003454174);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(19,0.002654126);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(20,0.000909081);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(21,0.001875956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(23,0.0003325587);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(3,0.001143852);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(4,0.003408097);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(5,0.002700102);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(6,0.005099698);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(7,0.004816807);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(8,0.005623721);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(9,0.006268214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(10,0.005677992);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(11,0.006487492);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(12,0.005471821);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(13,0.005536668);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(14,0.002913412);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(15,0.002856298);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(16,0.002332789);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(17,0.002595267);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(18,0.001354313);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(19,0.001362779);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(20,0.0006028786);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(21,0.001262095);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(23,0.000332168);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx118->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx,"");
   thsBackground_grouped_wh3l_13TeV_sssf_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx->SetName("thsSignal_grouped_wh3l_13TeV_sssf_nvtx");
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24","thsSignal_grouped_wh3l_13TeV_sssf_nvtx",40,0,40);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->SetMaximum(0.04487558);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_nvtx_stack_24);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(3,0.001773516);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(4,0.008189463);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(5,0.007664979);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(6,0.01919712);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(7,0.02034286);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(8,0.0267768);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(9,0.03647043);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(10,0.0327242);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(11,0.03317798);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(12,0.02868208);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(13,0.02315929);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(14,0.01240686);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(15,0.01012274);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(16,0.006586974);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(17,0.006990482);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(18,0.003454174);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(19,0.002654126);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(20,0.000909081);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(21,0.001875956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(23,0.0003325587);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(3,0.001143852);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(4,0.003408097);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(5,0.002700102);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(6,0.005099698);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(7,0.004816807);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(8,0.005623721);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(9,0.006268214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(10,0.005677992);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(11,0.006487492);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(12,0.005471821);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(13,0.005536668);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(14,0.002913412);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(15,0.002856298);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(16,0.002332789);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(17,0.002595267);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(18,0.001354313);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(19,0.001362779);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(20,0.0006028786);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(21,0.001262095);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(23,0.000332168);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx119->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx,"");
   thsSignal_grouped_wh3l_13TeV_sssf_nvtx->Draw("hist same noclear");
   
   Double_t _fx3023[40] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5};
   Double_t _fy3023[40] = {
   0,
   0,
   0.00771111,
   0,
   0.1163802,
   -0.2942663,
   0.09589644,
   1.347519,
   1.115945,
   -0.04266998,
   0.1106721,
   0.267043,
   0.645223,
   0.2117728,
   0.03321432,
   -0.01692288,
   0.01591321,
   0.0586372,
   0.005380294,
   0,
   0,
   0.005250058,
   0,
   0,
   0,
   6.972719e-06,
   0,
   0,
   0,
   0,
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
   Double_t _felx3023[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3023[40] = {
   0,
   0,
   0.007730108,
   0,
   0.1133501,
   0.2856392,
   0.08553352,
   1.135617,
   0.8039842,
   0.1546182,
   0.04886641,
   0.2004023,
   0.4951748,
   0.1615144,
   0.02278002,
   0.05880661,
   0.007808919,
   0.05695748,
   0.00538252,
   0,
   0,
   0.005257763,
   0,
   0,
   0,
   6.974621e-06,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3023[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3023[40] = {
   0,
   0,
   0.007730544,
   0,
   0.1133513,
   0.285639,
   0.1275829,
   1.135617,
   0.8039836,
   0.1546164,
   0.1541045,
   0.2004045,
   0.4951751,
   0.1615114,
   0.02277761,
   0.05880655,
   0.007809162,
   0.05687467,
   0.005382622,
   0,
   0,
   0.005258604,
   0,
   0,
   0,
   6.974646e-06,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,44);
   Graph_Graph3023->SetMinimum(-0.8862096);
   Graph_Graph3023->SetMaximum(2.78944);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t _fx3024[40] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5};
   Double_t _fy3024[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3024[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3024[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3024[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3024[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,44);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(1.262698);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_nvtx","Data","EPL");
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
   
   TH1F *hframe_copy120 = new TH1F("hframe_copy120","",1000,0,40);
   hframe_copy120->SetMinimum(0);
   hframe_copy120->SetMaximum(3.435739);
   hframe_copy120->SetDirectory(0);
   hframe_copy120->SetStats(0);
   hframe_copy120->SetLineStyle(0);
   hframe_copy120->SetMarkerStyle(20);
   hframe_copy120->GetXaxis()->SetTitle("nvtx");
   hframe_copy120->GetXaxis()->SetNdivisions(506);
   hframe_copy120->GetXaxis()->SetLabelFont(42);
   hframe_copy120->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetXaxis()->SetLabelSize(0.05);
   hframe_copy120->GetXaxis()->SetTitleSize(0.06);
   hframe_copy120->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy120->GetXaxis()->SetTitleFont(42);
   hframe_copy120->GetYaxis()->SetTitle("Events");
   hframe_copy120->GetYaxis()->SetLabelFont(42);
   hframe_copy120->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetYaxis()->SetLabelSize(0.05);
   hframe_copy120->GetYaxis()->SetTitleSize(0.06);
   hframe_copy120->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy120->GetYaxis()->SetTitleFont(42);
   hframe_copy120->GetZaxis()->SetLabelFont(42);
   hframe_copy120->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetZaxis()->SetLabelSize(0.05);
   hframe_copy120->GetZaxis()->SetTitleSize(0.06);
   hframe_copy120->GetZaxis()->SetTitleFont(42);
   hframe_copy120->Draw("sameaxis");
   ccwh3l_13TeV_sssf_nvtx->Modified();
   ccwh3l_13TeV_sssf_nvtx->cd();
   ccwh3l_13TeV_sssf_nvtx->SetSelected(ccwh3l_13TeV_sssf_nvtx);
}
