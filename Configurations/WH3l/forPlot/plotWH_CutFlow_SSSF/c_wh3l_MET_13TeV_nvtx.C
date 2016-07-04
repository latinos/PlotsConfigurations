void c_wh3l_MET_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_nvtx/cc
//=========  (Sun Jul  3 01:21:54 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_nvtx = new TCanvas("ccwh3l_MET_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_MET_13TeV_nvtx->Range(-8,-1.875508,42,12.55148);
   ccwh3l_MET_13TeV_nvtx->SetFillColor(0);
   ccwh3l_MET_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_MET_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_MET_13TeV_nvtx->SetTickx(1);
   ccwh3l_MET_13TeV_nvtx->SetTicky(1);
   ccwh3l_MET_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe161 = new TH1F("hframe161","",1000,0,40);
   hframe161->SetMinimum(0);
   hframe161->SetMaximum(11.83013);
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
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_MET_13TeV_nvtx");
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33","thsBackground_grouped_wh3l_MET_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->SetMinimum(-0.444365);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->SetMaximum(4.774716);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_nvtx_stack_33);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_nvtx162 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_nvtx162","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(4,0.6164532);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(5,-0.1026176);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(6,0.007612532);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(7,1.140215);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(8,3.246703);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(9,2.294763);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(10,2.552488);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(11,1.782417);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(12,2.775389);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(13,1.341873);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(14,1.646924);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(15,0.3305023);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(16,0.8450739);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(17,0.757347);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(19,-0.01054382);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(20,-0.01788288);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinContent(21,-0.03412842);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(4,0.6164532);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(5,0.1823172);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(6,0.4519775);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(7,0.6721409);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(8,1.300646);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(9,0.9704465);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(10,1.089718);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(11,0.781063);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(12,1.159092);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(13,0.6459408);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(14,0.8533978);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(15,0.3000844);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(16,0.5966004);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(17,0.6637975);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(19,0.12699);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(20,0.01788288);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetBinError(21,0.03412842);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_nvtx162->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_MET_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_nvtx163 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_nvtx163","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinContent(5,0.01039136);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinContent(7,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinContent(8,0.01708511);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinContent(10,0.03585889);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinContent(11,0.03179296);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinError(5,0.01039136);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinError(7,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinError(8,0.01708511);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinError(10,0.02265941);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetBinError(11,0.02248916);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_nvtx163->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->Add(new_histo_group_WW_wh3l_MET_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_nvtx164 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_nvtx164","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(2,0.002835222);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(4,0.005849926);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(5,0.01059374);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(6,0.01757293);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(7,0.02318944);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(8,0.0262137);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(9,0.04418895);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(10,0.0408829);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(11,0.03994374);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(12,0.0311506);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(13,0.01646829);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(14,0.01801913);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(15,0.01725834);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(16,0.01243965);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(17,0.009771206);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(18,-0.0004470901);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(19,4.527964e-05);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(20,-0.002413392);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(22,2.225319e-07);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinContent(29,2.247502e-07);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(2,0.002835222);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(4,0.004150186);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(5,0.005422142);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(6,0.007920055);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(7,0.009203345);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(8,0.009667059);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(9,0.01109961);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(10,0.01063506);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(11,0.009965552);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(12,0.008965927);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(13,0.005552467);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(14,0.005745278);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(15,0.00579977);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(16,0.004238895);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(17,0.004443992);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(18,0.003498207);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(19,4.526381e-05);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(20,0.00241591);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(22,2.225319e-07);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetBinError(29,2.247502e-07);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetEntries(198);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_nvtx164->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_MET_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_nvtx165 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_nvtx165","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetBinContent(11,-0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetBinContent(12,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetBinContent(13,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetBinContent(18,0.0522728);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetBinError(11,0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetBinError(12,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetBinError(13,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetBinError(18,0.0522728);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetEntries(4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_nvtx165->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_MET_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetBinContent(9,0.04768794);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetBinContent(12,0.03513683);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetBinContent(13,0.0427135);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetBinError(9,0.04768794);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetBinError(12,0.03513683);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetBinError(13,0.0427135);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetEntries(3);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_nvtx166->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_MET_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_nvtx167 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_nvtx167","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(3,0.00771111);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(5,0.01764608);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(6,0.05332067);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(7,0.03534221);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(8,0.08251444);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(9,0.1557209);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(10,0.1573398);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(11,0.14474);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(12,0.09899421);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(13,0.1410493);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(14,0.1079698);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(15,0.06672539);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(16,0.04448373);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(17,0.0383352);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(18,0.0122384);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(19,0.01411722);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(20,0.001685662);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(21,0.001029402);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(22,0.005250057);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(23,0.0006518398);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(26,6.972719e-06);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinContent(32,1.318469e-07);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(3,0.00771111);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(5,0.01031087);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(6,0.01850164);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(7,0.01374697);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(8,0.02215724);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(9,0.02975303);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(10,0.03018287);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(11,0.02842555);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(12,0.02334492);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(13,0.02638759);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(14,0.02356519);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(15,0.01874506);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(16,0.01451858);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(17,0.01243);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(18,0.00743028);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(19,0.008249081);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(20,0.001393022);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(21,0.001029402);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(22,0.005250057);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(23,0.0006518398);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(26,6.972719e-06);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetBinError(32,1.318469e-07);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetEntries(244);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_nvtx167->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_MET_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(3,0.001773516);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(4,0.01208697);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(5,0.0110747);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(6,0.02759058);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(7,0.03148288);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(8,0.04038856);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(9,0.05169895);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(10,0.04186111);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(11,0.0512088);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(12,0.03730886);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(13,0.03511589);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(14,0.02005255);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(15,0.0180263);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(16,0.01035835);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(17,0.007877031);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(18,0.0049842);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(19,0.004046378);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(20,0.002414209);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(21,0.002308216);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(23,0.0003325587);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(3,0.001143852);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(4,0.004064962);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(5,0.00306461);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(6,0.005997707);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(7,0.005909993);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(8,0.006910332);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(9,0.007304144);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(10,0.006227158);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(11,0.007878418);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(12,0.00615781);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(13,0.006661083);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(14,0.004137382);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(15,0.004021548);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(16,0.003061731);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(17,0.002663432);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(18,0.001536432);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(19,0.001767638);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(20,0.001209104);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(21,0.001289249);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(23,0.000332168);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx168->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_MET_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_MET_13TeV_nvtx");
   thsSignal_grouped_wh3l_MET_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34","thsSignal_grouped_wh3l_MET_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->SetMaximum(0.06204158);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_nvtx_stack_34);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(3,0.001773516);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(4,0.01208697);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(5,0.0110747);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(6,0.02759058);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(7,0.03148288);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(8,0.04038856);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(9,0.05169895);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(10,0.04186111);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(11,0.0512088);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(12,0.03730886);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(13,0.03511589);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(14,0.02005255);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(15,0.0180263);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(16,0.01035835);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(17,0.007877031);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(18,0.0049842);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(19,0.004046378);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(20,0.002414209);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(21,0.002308216);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(23,0.0003325587);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(3,0.001143852);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(4,0.004064962);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(5,0.00306461);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(6,0.005997707);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(7,0.005909993);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(8,0.006910332);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(9,0.007304144);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(10,0.006227158);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(11,0.007878418);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(12,0.00615781);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(13,0.006661083);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(14,0.004137382);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(15,0.004021548);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(16,0.003061731);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(17,0.002663432);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(18,0.001536432);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(19,0.001767638);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(20,0.001209104);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(21,0.001289249);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(23,0.000332168);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_nvtx169->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_MET_13TeV_nvtx->Draw("hist same noclear");
   
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
   0.002835222,
   0.00771111,
   0.6223031,
   -0.06398646,
   0.07850613,
   1.214698,
   3.372516,
   2.542361,
   2.786569,
   1.892774,
   3.051879,
   1.664843,
   1.772913,
   0.4144861,
   0.9019973,
   0.8054534,
   0.06406411,
   0.003618681,
   -0.01861061,
   -0.03309902,
   0.00525028,
   0.0006518398,
   0,
   0,
   6.972719e-06,
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
   0.004011279,
   0.007730108,
   0.6570651,
   0.2117848,
   0.03844488,
   0.8156653,
   1.764451,
   1.329807,
   1.459348,
   1.135578,
   1.653585,
   0.9654561,
   1.054406,
   0.3450282,
   0.6828551,
   0.7305297,
   0.06332705,
   0.1353369,
   0.02270565,
   0.03713158,
   0.005257984,
   0.0006519345,
   0,
   0,
   6.974621e-06,
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
   0.004011406,
   0.007730544,
   0.6570652,
   0.1340876,
   0.4787322,
   0.8156711,
   1.76445,
   1.329795,
   1.459343,
   1.135578,
   1.653584,
   0.9654537,
   1.054404,
   0.3450245,
   0.6828544,
   0.7305288,
   0.0602021,
   0.01921375,
   0.02270296,
   0.03713159,
   0.005258827,
   0.0006519359,
   0,
   0,
   6.974646e-06,
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
   Graph_Graph3033->SetMinimum(-0.8170449);
   Graph_Graph3033->SetMaximum(5.678239);
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
   1,
   2,
   0,
   0,
   3,
   0,
   2,
   1,
   0,
   0,
   0,
   2,
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
   0.8272524,
   1.29183,
   0,
   0,
   1.632727,
   0,
   1.29183,
   0.8272524,
   0,
   0,
   0,
   1.29183,
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
   2.29957,
   2.63791,
   1.147908,
   1.147908,
   2.918242,
   1.147908,
   2.63791,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
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
   Graph_Graph3034->SetMaximum(6.510067);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_nvtx","Data","EPL");
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
   hframe_copy170->SetMaximum(11.83013);
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
   ccwh3l_MET_13TeV_nvtx->Modified();
   ccwh3l_MET_13TeV_nvtx->cd();
   ccwh3l_MET_13TeV_nvtx->SetSelected(ccwh3l_MET_13TeV_nvtx);
}
