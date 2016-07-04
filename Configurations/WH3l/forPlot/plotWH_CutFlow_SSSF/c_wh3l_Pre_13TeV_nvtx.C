void c_wh3l_Pre_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_nvtx/cc
//=========  (Sun Jul  3 01:22:02 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_nvtx = new TCanvas("ccwh3l_Pre_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_nvtx->Range(-8,-1.875508,42,12.55148);
   ccwh3l_Pre_13TeV_nvtx->SetFillColor(0);
   ccwh3l_Pre_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_Pre_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_Pre_13TeV_nvtx->SetTickx(1);
   ccwh3l_Pre_13TeV_nvtx->SetTicky(1);
   ccwh3l_Pre_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe291 = new TH1F("hframe291","",1000,0,40);
   hframe291->SetMinimum(0);
   hframe291->SetMaximum(11.83013);
   hframe291->SetDirectory(0);
   hframe291->SetStats(0);
   hframe291->SetLineStyle(0);
   hframe291->SetMarkerStyle(20);
   hframe291->GetXaxis()->SetTitle("nvtx");
   hframe291->GetXaxis()->SetNdivisions(506);
   hframe291->GetXaxis()->SetLabelFont(42);
   hframe291->GetXaxis()->SetLabelOffset(0.007);
   hframe291->GetXaxis()->SetLabelSize(0.05);
   hframe291->GetXaxis()->SetTitleSize(0.06);
   hframe291->GetXaxis()->SetTitleOffset(0.9);
   hframe291->GetXaxis()->SetTitleFont(42);
   hframe291->GetYaxis()->SetTitle("Events");
   hframe291->GetYaxis()->SetLabelFont(42);
   hframe291->GetYaxis()->SetLabelOffset(0.007);
   hframe291->GetYaxis()->SetLabelSize(0.05);
   hframe291->GetYaxis()->SetTitleSize(0.06);
   hframe291->GetYaxis()->SetTitleOffset(1.25);
   hframe291->GetYaxis()->SetTitleFont(42);
   hframe291->GetZaxis()->SetLabelFont(42);
   hframe291->GetZaxis()->SetLabelOffset(0.007);
   hframe291->GetZaxis()->SetLabelSize(0.05);
   hframe291->GetZaxis()->SetTitleSize(0.06);
   hframe291->GetZaxis()->SetTitleFont(42);
   hframe291->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_Pre_13TeV_nvtx");
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59","thsBackground_grouped_wh3l_Pre_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->SetMinimum(-0.3734608);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->SetMaximum(4.749386);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_nvtx_stack_59);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(4,0.6164532);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(5,-0.1026176);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(6,0.08511314);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(7,1.151708);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(8,3.222361);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(9,3.153418);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(10,2.534326);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(11,2.223258);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(12,3.230348);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(13,2.297709);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(14,1.622105);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(15,0.3305023);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(16,0.8073695);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(17,0.757347);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(18,0.2930555);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(19,-0.01054382);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(20,-0.01788288);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinContent(21,-0.03412842);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(4,0.6164532);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(5,0.1823172);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(6,0.4585739);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(7,0.6722392);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(8,1.300864);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(9,1.161752);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(10,1.103344);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(11,0.8998647);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(12,1.205911);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(13,0.9277386);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(14,0.8536412);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(15,0.3000844);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(16,0.5977907);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(17,0.6637975);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(18,0.2930555);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(19,0.12699);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(20,0.01788288);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetBinError(21,0.03412842);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nvtx292->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_Pre_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_nvtx293 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_nvtx293","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinContent(5,0.01039136);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinContent(7,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinContent(8,0.01708511);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinContent(9,0.01433758);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinContent(10,0.06841114);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinContent(11,0.04875366);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinContent(12,0.003032596);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinContent(15,0.0175301);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinError(5,0.01039136);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinError(7,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinError(8,0.01708511);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinError(9,0.01433758);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinError(10,0.03230592);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinError(11,0.02816785);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinError(12,0.003032596);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetBinError(15,0.0175301);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nvtx293->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->Add(new_histo_group_WW_wh3l_Pre_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(2,0.002835222);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(4,0.009088269);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(5,0.01059374);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(6,0.02044491);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(7,0.02952117);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(8,0.03487877);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(9,0.04923958);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(10,0.04232437);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(11,0.04649644);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(12,0.0311506);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(13,0.02194308);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(14,0.02552368);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(15,0.02302714);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(16,0.01243965);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(17,0.01138402);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(18,-0.0004470901);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(19,4.527964e-05);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(20,-0.002413392);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(22,2.225319e-07);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinContent(29,2.247502e-07);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(2,0.002835222);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(4,0.004876364);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(5,0.005422142);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(6,0.0084247);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(7,0.009992435);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(8,0.01062883);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(9,0.01166008);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(10,0.01088828);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(11,0.01055568);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(12,0.008965927);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(13,0.006696233);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(14,0.007048208);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(15,0.006734121);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(16,0.004238895);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(17,0.004727605);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(18,0.003498207);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(19,4.526381e-05);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(20,0.00241591);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(22,2.225319e-07);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetBinError(29,2.247502e-07);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nvtx294->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_Pre_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(6,-0.1276462);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(7,-0.1093623);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(10,0.1156486);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(11,-0.1061193);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(12,0.1112079);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(13,0.122739);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(15,0.07413695);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(17,0.0133264);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinContent(18,0.1059475);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(6,0.1276462);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(7,0.1093623);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(10,0.1156486);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(11,0.1061193);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(12,0.1112079);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(13,0.122739);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(15,0.07413695);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(17,0.0133264);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetBinError(18,0.07492273);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nvtx295->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_Pre_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetBinContent(7,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetBinContent(9,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetBinContent(12,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetBinContent(13,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetBinError(7,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetBinError(9,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetBinError(12,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetBinError(13,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx296->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(3,0.00771111);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(5,0.02403482);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(6,0.05926738);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(7,0.05805345);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(8,0.1103539);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(9,0.2094184);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(10,0.205279);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(11,0.1786141);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(12,0.1363889);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(13,0.1790031);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(14,0.1132988);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(15,0.07725078);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(16,0.05116968);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(17,0.04011893);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(18,0.01688858);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(19,0.01954662);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(20,0.001685662);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(21,0.001029402);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(22,0.005250057);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(23,0.0006518398);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(26,6.972719e-06);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinContent(32,1.318469e-07);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(3,0.00771111);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(5,0.01212972);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(6,0.01943384);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(7,0.01787251);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(8,0.02544901);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(9,0.03455673);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(10,0.03426302);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(11,0.0313483);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(12,0.02822326);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(13,0.02995223);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(14,0.02416023);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(15,0.02019888);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(16,0.01528429);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(17,0.01255634);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(18,0.00876546);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(19,0.009875509);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(20,0.001393022);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(21,0.001029402);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(22,0.005250057);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(23,0.0006518398);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(26,6.972719e-06);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetBinError(32,1.318469e-07);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nvtx297->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_Pre_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(3,0.003942607);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(4,0.01352139);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(5,0.01362195);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(6,0.03261519);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(7,0.03941511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(8,0.05123204);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(9,0.06228963);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(10,0.0526306);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(11,0.0592724);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(12,0.04192048);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(13,0.04601355);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(14,0.02507868);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(15,0.0243087);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(16,0.01078019);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(17,0.007689077);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(18,0.005189189);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(19,0.004046378);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(20,0.002414209);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(21,0.003658352);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(23,0.0003404562);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(3,0.002452214);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(4,0.004119016);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(5,0.003365473);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(6,0.006619283);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(7,0.006495216);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(8,0.007634494);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(9,0.007996912);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(10,0.00703923);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(11,0.008442179);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(12,0.006498034);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(13,0.007648217);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(14,0.004589026);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(15,0.004551292);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(16,0.003084034);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(17,0.002731116);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(18,0.001550047);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(19,0.001767638);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(20,0.001209104);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(21,0.001572852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(23,0.0003322619);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx298->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_Pre_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_Pre_13TeV_nvtx");
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60","thsSignal_grouped_wh3l_Pre_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->SetMaximum(0.07380087);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_nvtx_stack_60);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(3,0.003942607);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(4,0.01352139);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(5,0.01362195);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(6,0.03261519);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(7,0.03941511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(8,0.05123204);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(9,0.06228963);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(10,0.0526306);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(11,0.0592724);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(12,0.04192048);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(13,0.04601355);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(14,0.02507868);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(15,0.0243087);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(16,0.01078019);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(17,0.007689077);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(18,0.005189189);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(19,0.004046378);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(20,0.002414209);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(21,0.003658352);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(23,0.0003404562);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(3,0.002452214);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(4,0.004119016);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(5,0.003365473);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(6,0.006619283);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(7,0.006495216);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(8,0.007634494);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(9,0.007996912);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(10,0.00703923);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(11,0.008442179);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(12,0.006498034);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(13,0.007648217);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(14,0.004589026);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(15,0.004551292);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(16,0.003084034);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(17,0.002731116);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(18,0.001550047);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(19,0.001767638);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(20,0.001209104);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(21,0.001572852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(23,0.0003322619);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx299->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_Pre_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3059[40] = {
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
   Double_t _fy3059[40] = {
   0,
   0.002835222,
   0.00771111,
   0.6255414,
   -0.05759771,
   0.03717926,
   1.185715,
   3.384679,
   3.474102,
   2.965989,
   2.391003,
   3.547265,
   2.664107,
   1.760928,
   0.5224473,
   0.8709789,
   0.8221763,
   0.4154444,
   0.009048077,
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
   Double_t _felx3059[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3059[40] = {
   0,
   0.004011279,
   0.007730108,
   0.6577772,
   0.2135768,
   0.2434383,
   0.954964,
   1.762563,
   1.683276,
   1.571491,
   1.328728,
   1.79402,
   1.387015,
   1.051628,
   0.4349763,
   0.6790217,
   0.7433695,
   0.3938683,
   0.1369632,
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
   Double_t _fehx3059[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3059[40] = {
   0,
   0.004011406,
   0.007730544,
   0.6577772,
   0.135837,
   0.6151916,
   0.9549628,
   1.762561,
   1.683262,
   1.571481,
   1.328725,
   1.79402,
   1.387012,
   1.051624,
   0.4349704,
   0.6790208,
   0.7433683,
   0.3909084,
   0.02081496,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3059,_fy3059,_felx3059,_fehx3059,_fely3059,_fehy3059);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3059 = new TH1F("Graph_Graph3059","",100,0,44);
   Graph_Graph3059->SetMinimum(-0.8324205);
   Graph_Graph3059->SetMaximum(5.902531);
   Graph_Graph3059->SetDirectory(0);
   Graph_Graph3059->SetStats(0);
   Graph_Graph3059->SetLineStyle(0);
   Graph_Graph3059->SetMarkerStyle(20);
   Graph_Graph3059->GetXaxis()->SetLabelFont(42);
   Graph_Graph3059->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3059->GetXaxis()->SetTitleFont(42);
   Graph_Graph3059->GetYaxis()->SetLabelFont(42);
   Graph_Graph3059->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3059->GetYaxis()->SetTitleFont(42);
   Graph_Graph3059->GetZaxis()->SetLabelFont(42);
   Graph_Graph3059->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3059);
   
   grae->Draw("2");
   
   Double_t _fx3060[40] = {
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
   Double_t _fy3060[40] = {
   0,
   0,
   0,
   0,
   1,
   2,
   0,
   0,
   3,
   1,
   2,
   1,
   0,
   1,
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
   Double_t _felx3060[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3060[40] = {
   0,
   0,
   0,
   0,
   0.8272524,
   1.29183,
   0,
   0,
   1.632727,
   0.8272524,
   1.29183,
   0.8272524,
   0,
   0.8272524,
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
   Double_t _fehx3060[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3060[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   2.63791,
   1.147908,
   1.147908,
   2.918242,
   2.29957,
   2.63791,
   2.29957,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(40,_fx3060,_fy3060,_felx3060,_fehx3060,_fely3060,_fehy3060);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3060 = new TH1F("Graph_Graph3060","",100,0,44);
   Graph_Graph3060->SetMinimum(0);
   Graph_Graph3060->SetMaximum(6.510067);
   Graph_Graph3060->SetDirectory(0);
   Graph_Graph3060->SetStats(0);
   Graph_Graph3060->SetLineStyle(0);
   Graph_Graph3060->SetMarkerStyle(20);
   Graph_Graph3060->GetXaxis()->SetLabelFont(42);
   Graph_Graph3060->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3060->GetXaxis()->SetTitleFont(42);
   Graph_Graph3060->GetYaxis()->SetLabelFont(42);
   Graph_Graph3060->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3060->GetYaxis()->SetTitleFont(42);
   Graph_Graph3060->GetZaxis()->SetLabelFont(42);
   Graph_Graph3060->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3060);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_nvtx","Data","EPL");
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
   
   TH1F *hframe_copy300 = new TH1F("hframe_copy300","",1000,0,40);
   hframe_copy300->SetMinimum(0);
   hframe_copy300->SetMaximum(11.83013);
   hframe_copy300->SetDirectory(0);
   hframe_copy300->SetStats(0);
   hframe_copy300->SetLineStyle(0);
   hframe_copy300->SetMarkerStyle(20);
   hframe_copy300->GetXaxis()->SetTitle("nvtx");
   hframe_copy300->GetXaxis()->SetNdivisions(506);
   hframe_copy300->GetXaxis()->SetLabelFont(42);
   hframe_copy300->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy300->GetXaxis()->SetLabelSize(0.05);
   hframe_copy300->GetXaxis()->SetTitleSize(0.06);
   hframe_copy300->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy300->GetXaxis()->SetTitleFont(42);
   hframe_copy300->GetYaxis()->SetTitle("Events");
   hframe_copy300->GetYaxis()->SetLabelFont(42);
   hframe_copy300->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy300->GetYaxis()->SetLabelSize(0.05);
   hframe_copy300->GetYaxis()->SetTitleSize(0.06);
   hframe_copy300->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy300->GetYaxis()->SetTitleFont(42);
   hframe_copy300->GetZaxis()->SetLabelFont(42);
   hframe_copy300->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy300->GetZaxis()->SetLabelSize(0.05);
   hframe_copy300->GetZaxis()->SetTitleSize(0.06);
   hframe_copy300->GetZaxis()->SetTitleFont(42);
   hframe_copy300->Draw("sameaxis");
   ccwh3l_Pre_13TeV_nvtx->Modified();
   ccwh3l_Pre_13TeV_nvtx->cd();
   ccwh3l_Pre_13TeV_nvtx->SetSelected(ccwh3l_Pre_13TeV_nvtx);
}
