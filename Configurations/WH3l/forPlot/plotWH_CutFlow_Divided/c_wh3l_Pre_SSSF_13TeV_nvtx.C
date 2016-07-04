void c_wh3l_Pre_SSSF_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_Pre_SSSF_13TeV_nvtx/cc
//=========  (Sun Jul  3 16:48:30 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_SSSF_13TeV_nvtx = new TCanvas("ccwh3l_Pre_SSSF_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_Pre_SSSF_13TeV_nvtx->Range(-8,-1.422543,42,9.520096);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetFillColor(0);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetTickx(1);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetTicky(1);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,0,40);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(8.972964);
   hframe121->SetDirectory(0);
   hframe121->SetStats(0);
   hframe121->SetLineStyle(0);
   hframe121->SetMarkerStyle(20);
   hframe121->GetXaxis()->SetTitle("nvtx");
   hframe121->GetXaxis()->SetNdivisions(506);
   hframe121->GetXaxis()->SetLabelFont(42);
   hframe121->GetXaxis()->SetLabelOffset(0.007);
   hframe121->GetXaxis()->SetLabelSize(0.05);
   hframe121->GetXaxis()->SetTitleSize(0.06);
   hframe121->GetXaxis()->SetTitleOffset(0.9);
   hframe121->GetXaxis()->SetTitleFont(42);
   hframe121->GetYaxis()->SetTitle("Events");
   hframe121->GetYaxis()->SetLabelFont(42);
   hframe121->GetYaxis()->SetLabelOffset(0.007);
   hframe121->GetYaxis()->SetLabelSize(0.05);
   hframe121->GetYaxis()->SetTitleSize(0.06);
   hframe121->GetYaxis()->SetTitleOffset(1.25);
   hframe121->GetYaxis()->SetTitleFont(42);
   hframe121->GetZaxis()->SetLabelFont(42);
   hframe121->GetZaxis()->SetLabelOffset(0.007);
   hframe121->GetZaxis()->SetLabelSize(0.05);
   hframe121->GetZaxis()->SetTitleSize(0.06);
   hframe121->GetZaxis()->SetTitleFont(42);
   hframe121->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25 = new TH1F("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25","thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->SetMinimum(-0.3734608);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->SetMaximum(4.749386);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122 = new TH1D("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(4,0.6164532);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(5,-0.1026176);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(6,0.08511314);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(7,1.151708);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(8,3.222361);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(9,3.153418);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(10,2.534326);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(11,2.223258);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(12,3.230348);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(13,2.297709);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(14,1.622105);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(15,0.3305023);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(16,0.8073695);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(17,0.757347);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(18,0.2930555);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(19,-0.01054382);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(20,-0.01788288);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinContent(21,-0.03412842);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(4,0.6164532);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(5,0.1823172);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(6,0.4585739);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(7,0.6722392);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(8,1.300864);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(9,1.161752);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(10,1.103344);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(11,0.8998647);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(12,1.205911);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(13,0.9277386);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(14,0.8536412);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(15,0.3000844);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(16,0.5977907);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(17,0.6637975);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(18,0.2930555);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(19,0.12699);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(20,0.01788288);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetBinError(21,0.03412842);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123 = new TH1D("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinContent(5,0.01039136);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinContent(7,0.01595104);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinContent(8,0.01708511);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinContent(9,0.01433758);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinContent(10,0.06841114);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinContent(11,0.04875366);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinContent(12,0.003032596);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinContent(15,0.0175301);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinError(5,0.01039136);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinError(7,0.01595104);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinError(8,0.01708511);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinError(9,0.01433758);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinError(10,0.03230592);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinError(11,0.02816785);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinError(12,0.003032596);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetBinError(15,0.0175301);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Add(new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124 = new TH1D("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(2,0.002835222);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(4,0.009088269);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(5,0.01059374);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(6,0.02044491);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(7,0.02952117);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(8,0.03487877);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(9,0.04923958);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(10,0.04232437);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(11,0.04649644);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(12,0.0311506);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(13,0.02194308);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(14,0.02552368);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(15,0.02302714);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(16,0.01243965);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(17,0.01138402);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(18,-0.0004470901);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(19,4.527964e-05);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(20,-0.002413392);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(22,2.225319e-07);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinContent(29,2.247502e-07);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(2,0.002835222);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(4,0.004876364);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(5,0.005422142);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(6,0.0084247);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(7,0.009992435);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(8,0.01062883);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(9,0.01166008);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(10,0.01088828);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(11,0.01055568);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(12,0.008965927);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(13,0.006696233);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(14,0.007048208);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(15,0.006734121);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(16,0.004238895);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(17,0.004727605);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(18,0.003498207);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(19,4.526381e-05);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(20,0.00241591);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(22,2.225319e-07);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetBinError(29,2.247502e-07);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125 = new TH1D("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(6,-0.1276462);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(7,-0.1093623);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(10,0.1156486);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(11,-0.1061193);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(12,0.1112079);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(13,0.122739);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(15,0.07413695);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(17,0.0133264);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinContent(18,0.1059475);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(6,0.1276462);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(7,0.1093623);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(10,0.1156486);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(11,0.1061193);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(12,0.1112079);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(13,0.122739);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(15,0.07413695);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(17,0.0133264);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetBinError(18,0.07492273);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126 = new TH1D("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetBinContent(7,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetBinContent(9,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetBinContent(12,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetBinContent(13,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetBinError(7,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetBinError(9,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetBinError(12,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetBinError(13,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127 = new TH1D("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(3,0.00771111);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(5,0.02403482);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(6,0.05926738);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(7,0.05805345);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(8,0.1103539);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(9,0.2094184);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(10,0.205279);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(11,0.1786141);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(12,0.1363889);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(13,0.1790031);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(14,0.1132988);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(15,0.07725078);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(16,0.05116968);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(17,0.04011893);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(18,0.01688858);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(19,0.01954662);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(20,0.001685662);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(21,0.001029402);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(22,0.005250057);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(23,0.0006518398);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(26,6.972719e-06);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinContent(32,1.318469e-07);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(3,0.00771111);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(5,0.01212972);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(6,0.01943384);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(7,0.01787251);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(8,0.02544901);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(9,0.03455673);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(10,0.03426302);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(11,0.0313483);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(12,0.02822326);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(13,0.02995223);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(14,0.02416023);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(15,0.02019888);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(16,0.01528429);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(17,0.01255634);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(18,0.00876546);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(19,0.009875509);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(20,0.001393022);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(21,0.001029402);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(22,0.005250057);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(23,0.0006518398);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(26,6.972719e-06);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetBinError(32,1.318469e-07);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(3,0.003942607);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(4,0.01352139);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(5,0.01362195);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(6,0.03261519);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(7,0.03941511);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(8,0.05123204);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(9,0.06228963);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(10,0.0526306);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(11,0.0592724);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(12,0.04192048);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(13,0.04601355);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(14,0.02507868);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(15,0.0243087);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(16,0.01078019);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(17,0.007689077);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(18,0.005189189);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(19,0.004046378);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(20,0.002414209);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(21,0.003658352);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(23,0.0003404562);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(3,0.002452214);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(4,0.004119016);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(5,0.003365473);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(6,0.006619283);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(7,0.006495216);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(8,0.007634494);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(9,0.007996912);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(10,0.00703923);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(11,0.008442179);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(12,0.006498034);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(13,0.007648217);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(14,0.004589026);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(15,0.004551292);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(16,0.003084034);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(17,0.002731116);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(18,0.001550047);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(19,0.001767638);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(20,0.001209104);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(21,0.001572852);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(23,0.0003322619);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26 = new TH1F("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26","thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->SetMaximum(0.07380087);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(3,0.003942607);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(4,0.01352139);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(5,0.01362195);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(6,0.03261519);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(7,0.03941511);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(8,0.05123204);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(9,0.06228963);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(10,0.0526306);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(11,0.0592724);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(12,0.04192048);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(13,0.04601355);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(14,0.02507868);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(15,0.0243087);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(16,0.01078019);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(17,0.007689077);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(18,0.005189189);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(19,0.004046378);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(20,0.002414209);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(21,0.003658352);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(23,0.0003404562);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(3,0.002452214);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(4,0.004119016);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(5,0.003365473);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(6,0.006619283);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(7,0.006495216);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(8,0.007634494);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(9,0.007996912);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(10,0.00703923);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(11,0.008442179);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(12,0.006498034);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(13,0.007648217);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(14,0.004589026);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(15,0.004551292);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(16,0.003084034);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(17,0.002731116);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(18,0.001550047);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(19,0.001767638);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(20,0.001209104);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(21,0.001572852);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(23,0.0003322619);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx129->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3025[40] = {
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
   Double_t _fy3025[40] = {
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
   Double_t _felx3025[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3025[40] = {
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
   Double_t _fehx3025[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3025[40] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,44);
   Graph_Graph3025->SetMinimum(-0.8324205);
   Graph_Graph3025->SetMaximum(5.902531);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("2");
   
   Double_t _fx3026[40] = {
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
   Double_t _fy3026[40] = {
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
   Double_t _felx3026[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3026[40] = {
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
   Double_t _fehx3026[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3026[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,44);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(1.262698);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineStyle(0);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_nvtx","Data","EPL");
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
   
   TH1F *hframe_copy130 = new TH1F("hframe_copy130","",1000,0,40);
   hframe_copy130->SetMinimum(0);
   hframe_copy130->SetMaximum(8.972964);
   hframe_copy130->SetDirectory(0);
   hframe_copy130->SetStats(0);
   hframe_copy130->SetLineStyle(0);
   hframe_copy130->SetMarkerStyle(20);
   hframe_copy130->GetXaxis()->SetTitle("nvtx");
   hframe_copy130->GetXaxis()->SetNdivisions(506);
   hframe_copy130->GetXaxis()->SetLabelFont(42);
   hframe_copy130->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetXaxis()->SetLabelSize(0.05);
   hframe_copy130->GetXaxis()->SetTitleSize(0.06);
   hframe_copy130->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy130->GetXaxis()->SetTitleFont(42);
   hframe_copy130->GetYaxis()->SetTitle("Events");
   hframe_copy130->GetYaxis()->SetLabelFont(42);
   hframe_copy130->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetYaxis()->SetLabelSize(0.05);
   hframe_copy130->GetYaxis()->SetTitleSize(0.06);
   hframe_copy130->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy130->GetYaxis()->SetTitleFont(42);
   hframe_copy130->GetZaxis()->SetLabelFont(42);
   hframe_copy130->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetZaxis()->SetLabelSize(0.05);
   hframe_copy130->GetZaxis()->SetTitleSize(0.06);
   hframe_copy130->GetZaxis()->SetTitleFont(42);
   hframe_copy130->Draw("sameaxis");
   ccwh3l_Pre_SSSF_13TeV_nvtx->Modified();
   ccwh3l_Pre_SSSF_13TeV_nvtx->cd();
   ccwh3l_Pre_SSSF_13TeV_nvtx->SetSelected(ccwh3l_Pre_SSSF_13TeV_nvtx);
}
