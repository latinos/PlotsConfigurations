void c_wh3l_top_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_nvtx/cc
//=========  (Sat Jul  2 20:39:41 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_nvtx = new TCanvas("ccwh3l_top_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_top_13TeV_nvtx->Range(-8,-4.291755,42,28.72174);
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
   
   TH1F *hframe100 = new TH1F("hframe100","",1000,0,40);
   hframe100->SetMinimum(0);
   hframe100->SetMaximum(27.07107);
   hframe100->SetDirectory(0);
   hframe100->SetStats(0);
   hframe100->SetLineStyle(0);
   hframe100->SetMarkerStyle(20);
   hframe100->GetXaxis()->SetTitle("nvtx");
   hframe100->GetXaxis()->SetNdivisions(506);
   hframe100->GetXaxis()->SetLabelFont(42);
   hframe100->GetXaxis()->SetLabelOffset(0.007);
   hframe100->GetXaxis()->SetLabelSize(0.05);
   hframe100->GetXaxis()->SetTitleSize(0.06);
   hframe100->GetXaxis()->SetTitleOffset(0.9);
   hframe100->GetXaxis()->SetTitleFont(42);
   hframe100->GetYaxis()->SetTitle("Events");
   hframe100->GetYaxis()->SetLabelFont(42);
   hframe100->GetYaxis()->SetLabelOffset(0.007);
   hframe100->GetYaxis()->SetLabelSize(0.05);
   hframe100->GetYaxis()->SetTitleSize(0.06);
   hframe100->GetYaxis()->SetTitleOffset(1.25);
   hframe100->GetYaxis()->SetTitleFont(42);
   hframe100->GetZaxis()->SetLabelFont(42);
   hframe100->GetZaxis()->SetLabelOffset(0.007);
   hframe100->GetZaxis()->SetLabelSize(0.05);
   hframe100->GetZaxis()->SetTitleSize(0.06);
   hframe100->GetZaxis()->SetTitleFont(42);
   hframe100->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_top_13TeV_nvtx");
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_top_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23","thsBackground_grouped_wh3l_top_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->SetMinimum(-0.3728705);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_23->SetMaximum(8.293654);
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
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_nvtx101 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_nvtx101","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(4,0.7844176);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(5,0.4817881);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(6,0.5340729);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(7,2.417413);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(8,4.424692);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(9,4.012117);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(10,6.274678);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(11,3.010404);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(12,5.652659);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(13,3.328951);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(14,1.569888);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(15,0.7600147);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(16,1.824101);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(17,0.7665202);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(18,0.4502278);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(19,1.6206);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(20,-0.1949262);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinContent(21,-0.0237869);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(4,0.6389261);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(5,0.7411969);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(6,0.6513988);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(7,0.9338032);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(8,1.427337);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(9,1.59048);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(10,1.624041);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(11,1.322102);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(12,1.833231);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(13,1.22352);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(14,0.8705191);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(15,0.7696112);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(16,0.9159885);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(17,0.6686114);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(18,0.347245);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(19,1.010828);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(20,0.1779442);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetBinError(21,0.03566085);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx101->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_nvtx102 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_nvtx102","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinContent(6,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinContent(7,0.03344185);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinContent(9,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinContent(10,0.03794579);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinContent(11,0.05138674);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinContent(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinError(6,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinError(7,0.02367201);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinError(9,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinError(10,0.0241889);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinError(11,0.02982748);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetBinError(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx102->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_WW_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_nvtx103 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_nvtx103","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(6,0.1234096);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(7,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(8,0.1360246);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(9,0.1102867);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(10,0.2246828);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(11,-0.1083158);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(12,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(13,0.122739);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(14,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(15,-0.02667202);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(16,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(17,0.1507712);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(18,-0.03456583);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(19,0.1867448);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(20,0.02051306);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(22,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinContent(24,0.02121818);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(6,0.1234096);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(7,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(8,0.1360246);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(9,0.1102867);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(10,0.1385151);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(11,0.1962324);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(12,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(13,0.122739);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(14,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(15,0.0753488);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(16,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(17,0.1270073);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(18,0.03456583);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(19,0.1322003);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(20,0.02051306);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(22,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetBinError(24,0.02121818);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_nvtx104 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_nvtx104","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinContent(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinContent(7,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinContent(9,0.09945248);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinContent(10,0.06297012);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinContent(11,0.09984485);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinContent(12,0.0863626);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinContent(13,0.216627);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinContent(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinError(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinError(7,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinError(9,0.07038258);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinError(10,0.04871432);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinError(11,0.06275561);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinError(12,0.06108874);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinError(13,0.09507842);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetBinError(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx104->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_nvtx105 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_nvtx105","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(2,0.005539373);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(3,0.01844497);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(4,0.1033777);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(5,0.2524153);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(6,0.4196089);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(7,0.6910947);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(8,0.9620517);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(9,1.292346);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(10,1.087783);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(11,1.002895);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(12,0.9024233);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(13,0.5978715);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(14,0.5589494);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(15,0.2956798);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(16,0.2598807);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(17,0.1859968);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(18,0.08009003);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(19,0.06729);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(20,0.04191911);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(21,0.02298955);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(22,0.009369092);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(23,0.008504672);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(24,9.515839e-05);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(25,0.001247018);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinContent(32,1.318469e-07);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(2,0.005539373);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(3,0.01067376);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(4,0.02634141);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(5,0.04011252);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(6,0.05094674);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(7,0.06413074);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(8,0.07395319);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(9,0.08633945);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(10,0.07790332);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(11,0.07364339);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(12,0.0687811);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(13,0.05476641);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(14,0.05197297);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(15,0.0376033);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(16,0.03350785);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(17,0.02860729);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(18,0.01777018);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(19,0.01647839);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(20,0.01234776);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(21,0.007413011);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(22,0.005790702);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(23,0.004428854);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(24,9.515839e-05);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(25,0.001214354);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetBinError(32,1.318469e-07);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx105->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_nvtx106 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_nvtx106","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(3,0.003457402);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(4,0.01137301);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(5,0.01088832);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(6,0.02327855);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(7,0.02722376);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(8,0.03990923);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(9,0.04987855);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(10,0.04569241);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(11,0.05613632);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(12,0.0347994);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(13,0.03396207);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(14,0.01579558);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(15,0.0232589);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(16,0.009466649);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(17,0.007836122);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(18,0.003407441);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(19,0.00291327);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(20,0.00472443);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(21,0.001134273);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(22,0.000615317);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinContent(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(3,0.00217809);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(4,0.004307611);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(5,0.003440062);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(6,0.005057979);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(7,0.00524901);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(8,0.006700172);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(9,0.006870089);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(10,0.006668983);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(11,0.00815565);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(12,0.005881139);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(13,0.005250004);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(14,0.003796725);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(15,0.004568092);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(16,0.002651921);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(17,0.001955089);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(18,0.001055148);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(19,0.001494677);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(20,0.001911911);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(21,0.0004981366);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(22,0.0003635446);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetBinError(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx106->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_top_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_top_13TeV_nvtx");
   thsSignal_grouped_wh3l_top_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_top_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24","thsSignal_grouped_wh3l_top_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_24->SetMaximum(0.06750656);
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
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_nvtx107 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_nvtx107","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(3,0.003457402);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(4,0.01137301);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(5,0.01088832);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(6,0.02327855);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(7,0.02722376);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(8,0.03990923);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(9,0.04987855);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(10,0.04569241);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(11,0.05613632);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(12,0.0347994);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(13,0.03396207);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(14,0.01579558);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(15,0.0232589);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(16,0.009466649);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(17,0.007836122);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(18,0.003407441);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(19,0.00291327);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(20,0.00472443);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(21,0.001134273);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(22,0.000615317);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinContent(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(3,0.00217809);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(4,0.004307611);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(5,0.003440062);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(6,0.005057979);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(7,0.00524901);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(8,0.006700172);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(9,0.006870089);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(10,0.006668983);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(11,0.00815565);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(12,0.005881139);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(13,0.005250004);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(14,0.003796725);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(15,0.004568092);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(16,0.002651921);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(17,0.001955089);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(18,0.001055148);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(19,0.001494677);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(20,0.001911911);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(21,0.0004981366);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(22,0.0003635446);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetBinError(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx107->GetZaxis()->SetTitleFont(42);
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
   0.8877953,
   0.7775298,
   1.091709,
   3.280947,
   5.522768,
   5.531819,
   7.688059,
   4.056215,
   6.748244,
   4.266189,
   2.240585,
   1.029022,
   2.197736,
   1.116341,
   0.4957519,
   1.874635,
   -0.1324941,
   -0.0007973489,
   0.07569668,
   0.008504673,
   0.02131334,
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
   0.005539902,
   0.01071409,
   0.7196981,
   0.5899431,
   0.7470791,
   1.436695,
   2.254002,
   2.343297,
   2.913267,
   1.987376,
   2.863627,
   1.896533,
   1.171366,
   0.912645,
   1.240281,
   0.8793635,
   0.4295418,
   1.290873,
   0.2215907,
   0.0438847,
   0.0722129,
   0.004440079,
   0.02133534,
   0.001222285,
   0,
   0,
   0,
   0,
   0,
   0,
   1.320359e-07,
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
   0.00553991,
   0.01069039,
   0.7196984,
   0.8417621,
   0.8611135,
   1.436693,
   2.253976,
   2.343249,
   2.913289,
   1.913347,
   2.863587,
   1.896517,
   1.171359,
   0.8753405,
   1.240272,
   0.8793042,
   0.4295378,
   1.290875,
   0.2215902,
   0.03230915,
   0.07222134,
   0.004440349,
   0.02133629,
   0.001223263,
   0,
   0,
   0,
   0,
   0,
   0,
   1.319964e-07,
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
   Graph_Graph3023->SetMinimum(-1.449628);
   Graph_Graph3023->SetMaximum(11.69689);
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
   8,
   1,
   6,
   5,
   3,
   2,
   3,
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
   2.768432,
   0.8272524,
   2.379969,
   2.159724,
   1.632727,
   1.29183,
   1.632727,
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
   3.94522,
   2.29957,
   3.583713,
   3.382539,
   2.918242,
   2.63791,
   2.918242,
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
   Graph_Graph3024->SetMaximum(13.13974);
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
   
   leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   TH1F *hframe_copy108 = new TH1F("hframe_copy108","",1000,0,40);
   hframe_copy108->SetMinimum(0);
   hframe_copy108->SetMaximum(27.07107);
   hframe_copy108->SetDirectory(0);
   hframe_copy108->SetStats(0);
   hframe_copy108->SetLineStyle(0);
   hframe_copy108->SetMarkerStyle(20);
   hframe_copy108->GetXaxis()->SetTitle("nvtx");
   hframe_copy108->GetXaxis()->SetNdivisions(506);
   hframe_copy108->GetXaxis()->SetLabelFont(42);
   hframe_copy108->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy108->GetXaxis()->SetLabelSize(0.05);
   hframe_copy108->GetXaxis()->SetTitleSize(0.06);
   hframe_copy108->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy108->GetXaxis()->SetTitleFont(42);
   hframe_copy108->GetYaxis()->SetTitle("Events");
   hframe_copy108->GetYaxis()->SetLabelFont(42);
   hframe_copy108->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy108->GetYaxis()->SetLabelSize(0.05);
   hframe_copy108->GetYaxis()->SetTitleSize(0.06);
   hframe_copy108->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy108->GetYaxis()->SetTitleFont(42);
   hframe_copy108->GetZaxis()->SetLabelFont(42);
   hframe_copy108->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy108->GetZaxis()->SetLabelSize(0.05);
   hframe_copy108->GetZaxis()->SetTitleSize(0.06);
   hframe_copy108->GetZaxis()->SetTitleFont(42);
   hframe_copy108->Draw("sameaxis");
   ccwh3l_top_13TeV_nvtx->Modified();
   ccwh3l_top_13TeV_nvtx->cd();
   ccwh3l_top_13TeV_nvtx->SetSelected(ccwh3l_top_13TeV_nvtx);
}
