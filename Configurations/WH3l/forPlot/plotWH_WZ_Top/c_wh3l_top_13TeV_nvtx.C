void c_wh3l_top_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_nvtx/cc
//=========  (Sat Jul  2 20:54:36 2016) by ROOT version6.02/13
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
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33","thsBackground_grouped_wh3l_top_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->SetMinimum(-0.3728705);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->SetMaximum(8.293654);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_nvtx_stack_33);
   
   
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
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(2,0.002835222);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(3,0.004327373);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(4,0.003162893);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(5,0.01810098);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(6,0.02863949);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(7,0.05270573);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(8,0.06942164);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(9,0.08542355);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(10,0.07244503);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(11,0.03935979);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(12,0.062197);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(13,0.02993188);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(14,0.02242928);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(15,0.05086054);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(16,0.01925729);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(17,0.01103988);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(18,0.004902502);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(19,0.0007840396);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(20,-0.003701102);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(21,0.0005360367);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(22,2.225319e-07);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(23,1.567565e-10);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinContent(29,2.247502e-07);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(2,0.002835222);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(3,0.003194538);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(4,0.003162893);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(5,0.008249217);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(6,0.00839073);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(7,0.01199778);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(8,0.01326772);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(9,0.01494837);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(10,0.01325244);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(11,0.01029023);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(12,0.01193991);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(13,0.009444461);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(14,0.006930177);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(15,0.01006298);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(16,0.006069318);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(17,0.004732819);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(18,0.00273409);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(19,0.0006182135);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(20,0.003390233);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(21,0.0005360367);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(22,2.225319e-07);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(23,1.567565e-10);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetBinError(29,2.247502e-07);
   new_histo_group_VVV_wh3l_top_13TeV_nvtx164->SetEntries(364);

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
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinContent(8,0.1360246);
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
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetBinError(8,0.1360246);
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
   new_histo_group_Vg_wh3l_top_13TeV_nvtx165->SetEntries(25);

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
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(7,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(9,0.09945248);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(10,0.06297012);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(11,0.09984485);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(12,0.0863626);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(13,0.216627);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinContent(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(7,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(9,0.07038258);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(10,0.04871432);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(11,0.06275561);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(12,0.06108874);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(13,0.09507842);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetBinError(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_nvtx166->SetEntries(18);

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
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(10,1.087783);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(11,1.002895);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(12,0.9024233);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(13,0.5978715);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(14,0.5589494);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinContent(15,0.2956798);
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
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(10,0.07790332);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(11,0.07364339);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(12,0.0687811);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(13,0.05476641);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(14,0.05197297);
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetBinError(15,0.0376033);
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
   new_histo_group_WZ_wh3l_top_13TeV_nvtx167->SetEntries(1805);

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
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_nvtx168 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_nvtx168","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(3,0.003457402);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(4,0.01137301);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(5,0.01088832);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(6,0.02327855);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(7,0.02722376);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(8,0.03990923);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(9,0.04987855);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(10,0.04569241);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(11,0.05613632);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(12,0.0347994);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(13,0.03396207);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(14,0.01579558);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(15,0.0232589);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(16,0.009466649);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(17,0.007836122);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(18,0.003407441);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(19,0.00291327);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(20,0.00472443);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(21,0.001134273);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(22,0.000615317);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinContent(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(3,0.00217809);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(4,0.004307611);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(5,0.003440062);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(6,0.005057979);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(7,0.00524901);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(8,0.006700172);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(9,0.006870089);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(10,0.006668983);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(11,0.00815565);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(12,0.005881139);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(13,0.005250004);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(14,0.003796725);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(15,0.004568092);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(16,0.002651921);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(17,0.001955089);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(18,0.001055148);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(19,0.001494677);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(20,0.001911911);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(21,0.0004981366);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(22,0.0003635446);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetBinError(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx168->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_top_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_top_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_top_13TeV_nvtx");
   thsSignal_grouped_wh3l_top_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_top_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34","thsSignal_grouped_wh3l_top_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->SetMaximum(0.06750656);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_nvtx_stack_34);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_nvtx169 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_nvtx169","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(3,0.003457402);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(4,0.01137301);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(5,0.01088832);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(6,0.02327855);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(7,0.02722376);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(8,0.03990923);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(9,0.04987855);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(10,0.04569241);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(11,0.05613632);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(12,0.0347994);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(13,0.03396207);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(14,0.01579558);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(15,0.0232589);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(16,0.009466649);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(17,0.007836122);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(18,0.003407441);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(19,0.00291327);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(20,0.00472443);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(21,0.001134273);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(22,0.000615317);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinContent(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(3,0.00217809);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(4,0.004307611);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(5,0.003440062);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(6,0.005057979);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(7,0.00524901);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(8,0.006700172);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(9,0.006870089);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(10,0.006668983);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(11,0.00815565);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(12,0.005881139);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(13,0.005250004);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(14,0.003796725);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(15,0.004568092);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(16,0.002651921);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(17,0.001955089);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(18,0.001055148);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(19,0.001494677);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(20,0.001911911);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(21,0.0004981366);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(22,0.0003635446);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(23,1.37751e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(24,0.0001899635);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(25,7.072603e-13);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetBinError(28,2.400476e-05);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_nvtx169->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_top_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_top_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3033[40] = {
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
   Double_t _fy3033[40] = {
   0,
   0.008374595,
   0.02277235,
   0.8909582,
   0.7956308,
   1.120349,
   3.333652,
   5.59219,
   5.617242,
   7.760504,
   4.095575,
   6.810441,
   4.296121,
   2.263014,
   1.079883,
   2.216993,
   1.127381,
   0.5006545,
   1.875419,
   -0.1361952,
   -0.0002613121,
   0.07569689,
   0.008504673,
   0.02131334,
   0.001247018,
   0,
   0,
   0,
   2.247502e-07,
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
   Double_t _felx3033[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3033[40] = {
   0,
   0.008843317,
   0.01456636,
   0.7226301,
   0.598088,
   0.7557516,
   1.447323,
   2.264725,
   2.356748,
   2.922906,
   1.996436,
   2.872941,
   1.904221,
   1.177712,
   0.9235888,
   1.245626,
   0.8839451,
   0.4321061,
   1.291428,
   0.2248591,
   0.04441271,
   0.07221311,
   0.004440079,
   0.02133534,
   0.001222285,
   0,
   0,
   0,
   3.179741e-07,
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
   Double_t _fehx3033[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3033[40] = {
   0,
   0.008842009,
   0.01453848,
   0.72263,
   0.850031,
   0.8697705,
   1.447293,
   2.264685,
   2.356645,
   2.922936,
   1.922387,
   2.872889,
   1.904222,
   1.17767,
   0.8862652,
   1.245633,
   0.8838813,
   0.432107,
   1.291431,
   0.2248574,
   0.03282955,
   0.07222157,
   0.004440349,
   0.02133629,
   0.001223263,
   0,
   0,
   0,
   3.179776e-07,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,44);
   Graph_Graph3033->SetMinimum(-1.465504);
   Graph_Graph3033->SetMaximum(11.78789);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineStyle(0);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("2");
   
   Double_t _fx3034[40] = {
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
   Double_t _fy3034[40] = {
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
   Double_t _felx3034[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3034[40] = {
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
   Double_t _fehx3034[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3034[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,44);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(13.13974);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineStyle(0);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3034);
   
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
   
   TH1F *hframe_copy170 = new TH1F("hframe_copy170","",1000,0,40);
   hframe_copy170->SetMinimum(0);
   hframe_copy170->SetMaximum(27.07107);
   hframe_copy170->SetDirectory(0);
   hframe_copy170->SetStats(0);
   hframe_copy170->SetLineStyle(0);
   hframe_copy170->SetMarkerStyle(20);
   hframe_copy170->GetXaxis()->SetTitle("nvtx");
   hframe_copy170->GetXaxis()->SetNdivisions(506);
   hframe_copy170->GetXaxis()->SetLabelFont(42);
   hframe_copy170->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetXaxis()->SetLabelSize(0.05);
   hframe_copy170->GetXaxis()->SetTitleSize(0.06);
   hframe_copy170->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy170->GetXaxis()->SetTitleFont(42);
   hframe_copy170->GetYaxis()->SetTitle("Events");
   hframe_copy170->GetYaxis()->SetLabelFont(42);
   hframe_copy170->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetYaxis()->SetLabelSize(0.05);
   hframe_copy170->GetYaxis()->SetTitleSize(0.06);
   hframe_copy170->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy170->GetYaxis()->SetTitleFont(42);
   hframe_copy170->GetZaxis()->SetLabelFont(42);
   hframe_copy170->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetZaxis()->SetLabelSize(0.05);
   hframe_copy170->GetZaxis()->SetTitleSize(0.06);
   hframe_copy170->GetZaxis()->SetTitleFont(42);
   hframe_copy170->Draw("sameaxis");
   ccwh3l_top_13TeV_nvtx->Modified();
   ccwh3l_top_13TeV_nvtx->cd();
   ccwh3l_top_13TeV_nvtx->SetSelected(ccwh3l_top_13TeV_nvtx);
}
