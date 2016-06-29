void c_wh3l_top_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_nvtx/cc
//=========  (Tue Jun 28 16:49:06 2016) by ROOT version6.02/13
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
   
   TH1F *hframe161 = new TH1F("hframe161","",1000,0,40);
   hframe161->SetMinimum(0);
   hframe161->SetMaximum(27.07107);
   hframe161->SetDirectory(0);
   hframe161->SetStats(0);
   hframe161->SetLineStyle(0);
   hframe161->SetMarkerStyle(20);
   hframe161->GetXaxis()->SetTitle("nvtx");
   hframe161->GetXaxis()->SetNdivisions(506);
   hframe161->GetXaxis()->SetLabelFont(42);
   hframe161->GetXaxis()->SetLabelOffset(0.007);
   hframe161->GetXaxis()->SetLabelSize(0.05);
   hframe161->GetXaxis()->SetTitleSize(0.06);
   hframe161->GetXaxis()->SetTitleOffset(0.9);
   hframe161->GetXaxis()->SetTitleFont(42);
   hframe161->GetYaxis()->SetTitle("Events");
   hframe161->GetYaxis()->SetLabelFont(42);
   hframe161->GetYaxis()->SetLabelOffset(0.007);
   hframe161->GetYaxis()->SetLabelSize(0.05);
   hframe161->GetYaxis()->SetTitleSize(0.06);
   hframe161->GetYaxis()->SetTitleOffset(1.25);
   hframe161->GetYaxis()->SetTitleFont(42);
   hframe161->GetZaxis()->SetLabelFont(42);
   hframe161->GetZaxis()->SetLabelOffset(0.007);
   hframe161->GetZaxis()->SetLabelSize(0.05);
   hframe161->GetZaxis()->SetTitleSize(0.06);
   hframe161->GetZaxis()->SetTitleFont(42);
   hframe161->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_top_13TeV_nvtx");
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_top_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21","thsBackground_grouped_wh3l_top_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->SetMinimum(-0.3728705);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->SetMaximum(8.293654);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_21);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_nvtx162 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_nvtx162","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(4,0.7844176);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(5,0.4817881);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(6,0.5340729);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(7,2.417413);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(8,4.424692);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(9,4.012117);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(10,6.274678);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(11,3.010404);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(12,5.652659);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(13,3.328951);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(14,1.569888);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(15,0.7600147);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(16,1.824101);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(17,0.7665202);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(18,0.4502278);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(19,1.6206);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(20,-0.1949262);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinContent(21,-0.0237869);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(4,0.6389261);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(5,0.7411969);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(6,0.6513988);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(7,0.9338032);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(8,1.427337);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(9,1.59048);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(10,1.624041);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(11,1.322102);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(12,1.833231);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(13,1.22352);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(14,0.8705191);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(15,0.7696112);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(16,0.9159885);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(17,0.6686114);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(18,0.347245);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(19,1.010828);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(20,0.1779442);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetBinError(21,0.03566085);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_nvtx162->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_nvtx163 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_nvtx163","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinContent(6,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinContent(7,0.03344185);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinContent(9,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinContent(10,0.03794579);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinContent(11,0.05138674);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinContent(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinError(6,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinError(7,0.02367201);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinError(9,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinError(10,0.0241889);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinError(11,0.02982748);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetBinError(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_nvtx163->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_WW_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_nvtx164 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_nvtx164","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(5,0.002879419);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(6,0.0007555783);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(7,0.002718131);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(8,0.002213972);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(9,0.004623451);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(10,0.003326744);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(11,0.002018502);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(12,0.003442718);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(13,0.001177687);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(14,0.001213095);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(15,0.002363004);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(16,0.0005963906);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(17,0.0001969493);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(18,0.0005571785);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(19,0.0007840396);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(20,0.0005821696);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(21,0.0005360367);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(5,0.001444121);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(6,0.0007555783);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(7,0.001638062);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(8,0.001125684);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(9,0.001769929);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(10,0.001326104);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(11,0.0009796292);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(12,0.001493143);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(13,0.0007199534);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(14,0.0007870683);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(15,0.001185611);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(16,0.0005963906);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(17,0.0001969493);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(18,0.0005571785);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(19,0.0006182135);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(20,0.0005076732);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(21,0.0005360367);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_nvtx165 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_nvtx165","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(6,0.1234096);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(7,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(8,0.2580753);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(9,0.1102867);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(10,0.2246828);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(11,-0.1083158);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(12,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(13,0.122739);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(14,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(15,-0.02667202);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(16,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(17,0.1507712);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(18,-0.03456583);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(19,0.1867448);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(20,0.02051306);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(22,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(24,0.02121818);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(6,0.1234096);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(7,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(8,0.1827541);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(9,0.1102867);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(10,0.1385151);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(11,0.1962324);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(12,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(13,0.122739);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(14,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(15,0.0753488);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(16,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(17,0.1270073);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(18,0.03456583);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(19,0.1322003);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(20,0.02051306);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(22,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(24,0.02121818);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_nvtx166 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_nvtx166","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(6,0.04596292);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(7,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(8,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(9,0.09945248);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(10,0.06297012);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(11,0.09984485);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(12,0.0863626);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(13,0.216627);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(14,0.04079673);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(15,0.06740005);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(16,0.0854328);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(18,0.01994686);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(6,0.04596292);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(7,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(8,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(9,0.07038258);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(10,0.04871432);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(11,0.06275561);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(12,0.06108874);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(13,0.09507842);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(14,0.04079673);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(15,0.05114202);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(16,0.06043768);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(18,0.01994686);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_top_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_nvtx167 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_nvtx167","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(2,0.005539373);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(3,0.01844497);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(4,0.1033777);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(5,0.2524153);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(6,0.4196089);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(7,0.6910947);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(8,0.9620517);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(9,1.292346);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(10,1.093481);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(11,1.002895);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(12,0.9057623);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(13,0.5978715);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(14,0.5645273);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(15,0.2994629);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(16,0.2598807);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(17,0.1859968);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(18,0.08009003);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(19,0.06729);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(20,0.04191911);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(21,0.02298955);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(22,0.009369092);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(23,0.008504672);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(24,9.515839e-05);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(25,0.001247018);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(32,1.318469e-07);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(2,0.005539373);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(3,0.01067376);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(4,0.02634141);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(5,0.04011252);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(6,0.05094674);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(7,0.06413074);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(8,0.07395319);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(9,0.08633945);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(10,0.07811144);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(11,0.07364339);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(12,0.06886209);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(13,0.05476641);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(14,0.05227143);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(15,0.03779313);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(16,0.03350785);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(17,0.02860729);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(18,0.01777018);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(19,0.01647839);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(20,0.01234776);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(21,0.007413011);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(22,0.005790702);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(23,0.004428854);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(24,9.515839e-05);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(25,0.001214354);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(32,1.318469e-07);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_top_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Draw("hist same");
   
   Double_t _fx3041[40] = {
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
   Double_t _fy3041[40] = {
   0,
   0.005539373,
   0.01844497,
   0.8877953,
   0.7804093,
   1.138428,
   3.283665,
   5.690174,
   5.536442,
   7.697084,
   4.058233,
   6.755026,
   4.267366,
   2.288173,
   1.102569,
   2.242339,
   1.116538,
   0.516256,
   1.875419,
   -0.1319119,
   -0.0002613121,
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
   Double_t _felx3041[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3041[40] = {
   0,
   0.005539374,
   0.01067377,
   0.705662,
   0.5848152,
   0.7862794,
   1.369955,
   2.179252,
   2.229672,
   2.685209,
   1.912245,
   2.677081,
   1.799427,
   1.174677,
   0.9531572,
   1.213286,
   0.868484,
   0.4412653,
   1.25789,
   0.2192557,
   0.0441899,
   0.07214073,
   0.004428855,
   0.02132104,
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
   Double_t _fehx3041[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3041[40] = {
   0,
   0.005539374,
   0.01067377,
   0.7056621,
   0.8386303,
   0.9014586,
   1.369955,
   2.179252,
   2.229672,
   2.68521,
   1.835222,
   2.677082,
   1.799428,
   1.174676,
   0.9152593,
   1.213285,
   0.8684841,
   0.4412655,
   1.25789,
   0.2192557,
   0.03252836,
   0.07214073,
   0.004428854,
   0.02132104,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3041,_fy3041,_felx3041,_fehx3041,_fely3041,_fehy3041);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3041 = new TH1F("Graph_Graph3041","",100,0,44);
   Graph_Graph3041->SetMinimum(-1.424514);
   Graph_Graph3041->SetMaximum(11.45564);
   Graph_Graph3041->SetDirectory(0);
   Graph_Graph3041->SetStats(0);
   Graph_Graph3041->SetLineStyle(0);
   Graph_Graph3041->SetMarkerStyle(20);
   Graph_Graph3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph3041->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3041);
   
   grae->Draw("2");
   
   Double_t _fx3042[40] = {
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
   Double_t _fy3042[40] = {
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
   Double_t _felx3042[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3042[40] = {
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
   Double_t _fehx3042[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3042[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3042,_fy3042,_felx3042,_fehx3042,_fely3042,_fehy3042);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","",100,0,44);
   Graph_Graph3042->SetMinimum(0);
   Graph_Graph3042->SetMaximum(13.13974);
   Graph_Graph3042->SetDirectory(0);
   Graph_Graph3042->SetStats(0);
   Graph_Graph3042->SetLineStyle(0);
   Graph_Graph3042->SetMarkerStyle(20);
   Graph_Graph3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph3042->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3042);
   
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
   
   TH1F *hframe_copy168 = new TH1F("hframe_copy168","",1000,0,40);
   hframe_copy168->SetMinimum(0);
   hframe_copy168->SetMaximum(27.07107);
   hframe_copy168->SetDirectory(0);
   hframe_copy168->SetStats(0);
   hframe_copy168->SetLineStyle(0);
   hframe_copy168->SetMarkerStyle(20);
   hframe_copy168->GetXaxis()->SetTitle("nvtx");
   hframe_copy168->GetXaxis()->SetNdivisions(506);
   hframe_copy168->GetXaxis()->SetLabelFont(42);
   hframe_copy168->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy168->GetXaxis()->SetLabelSize(0.05);
   hframe_copy168->GetXaxis()->SetTitleSize(0.06);
   hframe_copy168->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy168->GetXaxis()->SetTitleFont(42);
   hframe_copy168->GetYaxis()->SetTitle("Events");
   hframe_copy168->GetYaxis()->SetLabelFont(42);
   hframe_copy168->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy168->GetYaxis()->SetLabelSize(0.05);
   hframe_copy168->GetYaxis()->SetTitleSize(0.06);
   hframe_copy168->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy168->GetYaxis()->SetTitleFont(42);
   hframe_copy168->GetZaxis()->SetLabelFont(42);
   hframe_copy168->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy168->GetZaxis()->SetLabelSize(0.05);
   hframe_copy168->GetZaxis()->SetTitleSize(0.06);
   hframe_copy168->GetZaxis()->SetTitleFont(42);
   hframe_copy168->Draw("sameaxis");
   ccwh3l_top_13TeV_nvtx->Modified();
   ccwh3l_top_13TeV_nvtx->cd();
   ccwh3l_top_13TeV_nvtx->SetSelected(ccwh3l_top_13TeV_nvtx);
}
