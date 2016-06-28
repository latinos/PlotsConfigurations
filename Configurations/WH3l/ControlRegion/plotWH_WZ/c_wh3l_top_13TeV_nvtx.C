void c_wh3l_top_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_nvtx/cc
//=========  (Tue Jun 28 02:22:50 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_nvtx = new TCanvas("ccwh3l_top_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_top_13TeV_nvtx->Range(-8,-4.756097,42,31.82927);
   ccwh3l_top_13TeV_nvtx->SetFillColor(0);
   ccwh3l_top_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_top_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_top_13TeV_nvtx->SetTickx(1);
   ccwh3l_top_13TeV_nvtx->SetTicky(1);
   ccwh3l_top_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_top_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_top_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe111 = new TH1F("hframe111","",1000,0,40);
   hframe111->SetMinimum(0);
   hframe111->SetMaximum(30);
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
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_top_13TeV_nvtx");
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_top_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23","thsBackground_grouped_wh3l_top_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->SetMinimum(-0.3728705);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->SetMaximum(8.57746);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_nvtx112 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_nvtx112","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(4,0.7844176);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(5,1.170909);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(6,1.084773);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(7,2.417413);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(8,4.365963);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(9,4.953326);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(10,6.481034);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(11,3.322546);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(12,5.479045);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(13,3.32463);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(14,1.567999);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(15,0.7784946);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(16,1.824101);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(17,0.7665202);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(18,0.8844967);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(19,1.947518);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(20,-0.1949262);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinContent(21,-0.0237869);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(4,0.6389261);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(5,1.012058);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(6,0.8529895);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(7,0.9338032);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(8,1.428545);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(9,1.739809);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(10,1.687975);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(11,1.35845);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(12,1.839782);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(13,1.223533);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(14,0.8801625);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(15,0.769833);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(16,0.9159885);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(17,0.6686114);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(18,0.5560294);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(19,1.062379);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(20,0.1779442);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetBinError(21,0.03566085);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetEntries(340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_nvtx113 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_nvtx113","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinContent(6,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinContent(7,0.03344185);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinContent(9,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinContent(10,0.03794579);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinContent(11,0.05138674);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinContent(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinError(6,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinError(7,0.02367201);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinError(9,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinError(10,0.0241889);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinError(11,0.02982748);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetBinError(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_WW_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_nvtx114 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_nvtx114","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(5,0.002879419);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(6,0.0007555783);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(7,0.002718131);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(8,0.002213972);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(9,0.004623451);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(10,0.003882815);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(11,0.00274574);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(12,0.004112161);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(13,0.001177687);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(14,0.001213095);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(15,0.002363004);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(16,0.0005963906);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(17,0.0001969493);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(18,0.0005571785);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(19,0.0007840396);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(20,0.0005821696);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinContent(21,0.0005360367);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(5,0.001444121);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(6,0.0007555783);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(7,0.001638062);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(8,0.001125684);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(9,0.001769929);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(10,0.001437973);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(11,0.001220061);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(12,0.001636346);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(13,0.0007199534);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(14,0.0007870683);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(15,0.001185611);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(16,0.0005963906);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(17,0.0001969493);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(18,0.0005571785);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(19,0.0006182135);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(20,0.0005076732);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetBinError(21,0.0005360367);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetEntries(61);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_nvtx115 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_nvtx115","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(6,0.236263);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(7,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(8,0.3866942);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(9,0.2141739);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(10,0.2240138);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(11,-0.02947795);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(12,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(13,0.5248905);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(14,0.2195864);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(15,-0.02667202);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(16,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(17,0.1717184);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(18,-0.03456583);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(19,0.1867448);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(20,-0.06531602);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(22,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinContent(24,0.02121818);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(6,0.1672298);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(7,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(8,0.2234768);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(9,0.1842628);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(10,0.2131067);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(11,0.2711764);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(12,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(13,0.2357155);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(14,0.1552956);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(15,0.0753488);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(16,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(17,0.1287231);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(18,0.03456583);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(19,0.1322003);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(20,0.1116284);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(22,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetBinError(24,0.02121818);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetEntries(44);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_nvtx116 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_nvtx116","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(6,0.04596292);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(7,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(8,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(9,0.09945248);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(10,0.09844761);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(11,0.09984485);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(12,0.1377934);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(13,0.216627);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(14,0.04079673);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(15,0.06740005);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(16,0.0854328);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinContent(18,0.06535286);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(6,0.04596292);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(7,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(8,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(9,0.07038258);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(10,0.0602639);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(11,0.06275561);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(12,0.0798559);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(13,0.09507842);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(14,0.04079673);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(15,0.05114202);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(16,0.06043768);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetBinError(18,0.04959418);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetEntries(28);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx116->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_nvtx117 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_nvtx117","histo_ZZ",40,0,40);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(5,0.04332647);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(6,0.04596292);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(7,0.03041933);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(8,0.04314121);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(9,0.09945248);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(10,0.09844761);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(11,0.09984485);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(12,0.1377934);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(13,0.216627);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(14,0.04079673);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(15,0.06740005);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(16,0.0854328);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinContent(18,0.06535286);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(5,0.04332647);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(6,0.04596292);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(7,0.03041933);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(8,0.04314121);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(9,0.07038258);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(10,0.0602639);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(11,0.06275561);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(12,0.0798559);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(13,0.09507842);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(14,0.04079673);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(15,0.05114202);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(16,0.06043768);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetBinError(18,0.04959418);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetEntries(28);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_nvtx118 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_nvtx118","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(3,0.003787383);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(4,0.01306631);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(5,0.01178302);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(6,0.02854756);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(7,0.03248351);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(8,0.0474101);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(9,0.0548362);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(10,0.05044836);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(11,0.06108367);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(12,0.04215157);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(13,0.03853162);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(14,0.01685451);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(15,0.02494945);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(16,0.01124289);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(17,0.009139195);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(18,0.004111944);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(19,0.00291327);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(20,0.004778709);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(21,0.001247271);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(22,0.000615317);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinContent(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(3,0.002202944);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(4,0.004560459);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(5,0.003497837);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(6,0.005712025);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(7,0.005941353);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(8,0.007399115);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(9,0.007074799);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(10,0.007072142);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(11,0.008340412);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(12,0.006385156);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(13,0.005795382);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(14,0.003841615);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(15,0.004659939);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(16,0.002890849);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(17,0.002101983);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(18,0.001268724);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(19,0.001494677);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(20,0.001912682);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(21,0.0005107921);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(22,0.0003635446);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetBinError(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx118->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_top_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_top_13TeV_nvtx");
   thsSignal_grouped_wh3l_top_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_top_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24","thsSignal_grouped_wh3l_top_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->SetMaximum(0.07289529);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_nvtx119 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_nvtx119","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(3,0.003787383);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(4,0.01306631);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(5,0.01178302);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(6,0.02854756);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(7,0.03248351);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(8,0.0474101);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(9,0.0548362);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(10,0.05044836);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(11,0.06108367);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(12,0.04215157);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(13,0.03853162);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(14,0.01685451);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(15,0.02494945);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(16,0.01124289);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(17,0.009139195);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(18,0.004111944);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(19,0.00291327);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(20,0.004778709);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(21,0.001247271);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(22,0.000615317);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinContent(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(3,0.002202944);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(4,0.004560459);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(5,0.003497837);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(6,0.005712025);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(7,0.005941353);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(8,0.007399115);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(9,0.007074799);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(10,0.007072142);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(11,0.008340412);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(12,0.006385156);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(13,0.005795382);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(14,0.003841615);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(15,0.004659939);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(16,0.002890849);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(17,0.002101983);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(18,0.001268724);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(19,0.001494677);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(20,0.001912682);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(21,0.0005107921);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(22,0.0003635446);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetBinError(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx119->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_top_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_top_13TeV_nvtx->Draw("hist same noclear");
   
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
   0.005539373,
   0.01844497,
   0.9055514,
   1.500098,
   1.816835,
   3.318535,
   5.824594,
   6.669163,
   8.032386,
   4.579792,
   6.705215,
   4.741574,
   2.446857,
   1.15775,
   2.250084,
   1.146546,
   1.015141,
   2.207108,
   -0.2021999,
   0.003359277,
   0.07635905,
   0.008504673,
   0.02431853,
   0.001247018,
   0,
   0,
   0,
   0,
   0,
   0,
   1.318469e-07,
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
   0.005539374,
   0.01067377,
   0.7074827,
   1.153979,
   1.179115,
   1.371309,
   2.204188,
   2.575308,
   2.838875,
   2.059057,
   2.666501,
   1.89657,
   1.225495,
   0.9663981,
   1.213732,
   0.8707283,
   0.7118353,
   1.345801,
   0.3101392,
   0.04501604,
   0.07217848,
   0.004428855,
   0.0237037,
   0.001214354,
   0,
   0,
   0,
   0,
   0,
   0,
   1.318477e-07,
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
   0.005539374,
   0.01067377,
   0.7074829,
   1.15398,
   1.179115,
   1.371309,
   2.204188,
   2.575308,
   2.838875,
   1.851269,
   2.666502,
   1.896572,
   1.225495,
   0.9192394,
   1.213732,
   0.8707284,
   0.7118353,
   1.345801,
   0.2648025,
   0.03334541,
   0.07217848,
   0.004428854,
   0.0237037,
   0.001214354,
   0,
   0,
   0,
   0,
   0,
   0,
   1.318477e-07,
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
   Graph_Graph3023->SetMinimum(-1.650699);
   Graph_Graph3023->SetMaximum(12.00962);
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
   2,
   1,
   0,
   3,
   9,
   1,
   6,
   6,
   3,
   4,
   4,
   3,
   1,
   0,
   2,
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
   1.29183,
   0.8272524,
   0,
   1.632727,
   2.943511,
   0.8272524,
   2.379969,
   2.379969,
   1.632727,
   1.914367,
   1.914367,
   1.632727,
   0.8272524,
   0,
   1.29183,
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
   2.63791,
   2.29957,
   1.147908,
   2.918242,
   4.110286,
   2.29957,
   3.583713,
   3.583713,
   2.918242,
   3.162815,
   3.162815,
   2.918242,
   2.29957,
   1.147908,
   2.63791,
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
   Graph_Graph3024->SetMaximum(14.42131);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_nvtx","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_nvtx","Data","EPL");
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
   hframe_copy120->SetMaximum(30);
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
   ccwh3l_top_13TeV_nvtx->Modified();
   ccwh3l_top_13TeV_nvtx->cd();
   ccwh3l_top_13TeV_nvtx->SetSelected(ccwh3l_top_13TeV_nvtx);
}
