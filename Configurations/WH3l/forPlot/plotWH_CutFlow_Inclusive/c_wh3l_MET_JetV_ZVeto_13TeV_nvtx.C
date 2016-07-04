void c_wh3l_MET_JetV_ZVeto_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_nvtx/cc
//=========  (Sun Jul  3 16:19:13 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_nvtx = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->Range(-8,-1.546495,42,10.34962);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe321 = new TH1F("hframe321","",1000,0,40);
   hframe321->SetMinimum(0);
   hframe321->SetMaximum(9.754812);
   hframe321->SetDirectory(0);
   hframe321->SetStats(0);
   hframe321->SetLineStyle(0);
   hframe321->SetMarkerStyle(20);
   hframe321->GetXaxis()->SetTitle("nvtx");
   hframe321->GetXaxis()->SetNdivisions(506);
   hframe321->GetXaxis()->SetLabelFont(42);
   hframe321->GetXaxis()->SetLabelOffset(0.007);
   hframe321->GetXaxis()->SetLabelSize(0.05);
   hframe321->GetXaxis()->SetTitleSize(0.06);
   hframe321->GetXaxis()->SetTitleOffset(0.9);
   hframe321->GetXaxis()->SetTitleFont(42);
   hframe321->GetYaxis()->SetTitle("Events");
   hframe321->GetYaxis()->SetLabelFont(42);
   hframe321->GetYaxis()->SetLabelOffset(0.007);
   hframe321->GetYaxis()->SetLabelSize(0.05);
   hframe321->GetYaxis()->SetTitleSize(0.06);
   hframe321->GetYaxis()->SetTitleOffset(1.25);
   hframe321->GetYaxis()->SetTitleFont(42);
   hframe321->GetZaxis()->SetLabelFont(42);
   hframe321->GetZaxis()->SetLabelOffset(0.007);
   hframe321->GetZaxis()->SetLabelSize(0.05);
   hframe321->GetZaxis()->SetTitleSize(0.06);
   hframe321->GetZaxis()->SetTitleFont(42);
   hframe321->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->SetMinimum(-0.607647);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->SetMaximum(4.097021);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_65);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(4,-0.0005887331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(5,-0.1995587);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(6,-0.07235692);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(7,0.4548785);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(8,2.218027);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(9,1.86193);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(10,-0.3100484);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(11,2.12779);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(12,1.712039);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(13,0.895392);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(14,1.79032);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(15,0.006384889);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(16,-0.3250522);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(17,0.1358484);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinContent(18,0.3001484);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(4,0.0005887331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(5,0.2509014);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(6,0.07156438);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(7,0.5509229);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(8,1.215889);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(9,1.059675);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(10,0.2975986);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(11,1.118219);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(12,1.097965);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(13,0.4646353);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(14,0.9939661);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(15,0.1839286);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(16,0.2111795);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(17,0.1102774);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetBinError(18,0.3099838);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetEntries(117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx322->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinContent(6,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinContent(8,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinContent(9,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinContent(10,0.0303325);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinError(6,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinError(8,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinError(9,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinError(10,0.02149105);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx323->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(2,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(4,0.005065379);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(5,0.01560374);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(6,0.01254491);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(7,0.03385749);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(8,0.03961944);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(9,0.05690777);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(10,0.04650679);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(11,0.05930229);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(12,0.02531766);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(13,0.03418507);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(14,0.03695732);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(15,0.01761632);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(16,0.01489516);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(17,0.0183263);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(18,-0.0004412249);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(19,0.00358804);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(20,0.006524967);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinContent(26,0.0005054904);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(2,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(4,0.003588409);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(5,0.006380486);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(6,0.006862121);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(7,0.009911716);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(8,0.01113053);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(9,0.01210017);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(10,0.01072996);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(11,0.01212932);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(12,0.008472972);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(13,0.009257701);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(14,0.008646259);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(15,0.006111139);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(16,0.006006974);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(17,0.006255049);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(18,0.00316144);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(19,0.003000534);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(20,0.003401716);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetBinError(26,0.0005054904);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetEntries(250);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx324->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(6,0.2283563);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(7,0.1103645);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(8,0.1257014);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(9,0.2926692);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(10,-0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(11,0.3259333);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(12,0.2262168);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(13,0.3314658);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(14,0.06007751);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(15,0.34708);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(16,0.2870735);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(17,0.1416296);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(18,0.2748712);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(20,0.0510846);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(21,0.07443925);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(23,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinContent(26,2.545572e-06);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(6,0.1614924);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(7,0.1103645);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(8,0.1257014);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(9,0.1731455);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(10,0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(11,0.1894885);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(12,0.159977);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(13,0.2178615);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(14,0.1593412);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(15,0.1832583);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(16,0.167759);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(17,0.1157495);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(18,0.1477147);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(20,0.0510846);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(21,0.05537531);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(23,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetBinError(26,2.545572e-06);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx325->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(7,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(8,0.08704091);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(9,0.0738407);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(11,0.0793975);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(12,0.1299406);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(13,0.123111);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(14,0.05352081);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(17,0.03554041);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinContent(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(7,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(8,0.06158793);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(9,0.05353437);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(11,0.05830988);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(12,0.07019701);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(13,0.07111692);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(14,0.03784829);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(17,0.03554041);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetBinError(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx326->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(3,0.03816473);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(4,0.09462383);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(5,0.1987471);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(6,0.5415882);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(7,0.6476862);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(8,1.083359);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(9,1.009145);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(10,1.012204);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(11,1.220335);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(12,0.9276044);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(13,0.8877814);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(14,0.6175494);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(15,0.4102146);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(16,0.3384455);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(17,0.1892194);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(18,0.1018559);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(19,0.04255104);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(20,0.05004094);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(21,0.01638732);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(22,0.02236664);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(23,0.009384758);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(24,8.140728e-06);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(25,0.003047687);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(26,0.0003541198);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinContent(29,4.913152e-07);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(3,0.01732972);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(4,0.02468431);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(5,0.03445803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(6,0.05712094);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(7,0.06186663);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(8,0.07990746);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(9,0.07544399);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(10,0.07525988);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(11,0.08148818);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(12,0.06940036);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(13,0.06755498);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(14,0.05542955);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(15,0.04464576);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(16,0.0396475);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(17,0.02930577);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(18,0.0200061);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(19,0.01218076);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(20,0.01360311);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(21,0.007160775);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(22,0.008786858);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(23,0.005475324);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(24,6.791678e-06);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(25,0.002248892);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(26,0.0003202393);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetBinError(29,4.913152e-07);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetEntries(1942);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx327->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(3,0.001293747);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(4,0.01718799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(5,0.02031113);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(6,0.04898293);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(7,0.07348345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(8,0.07137351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(9,0.09286969);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(10,0.09957903);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(11,0.08916726);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(12,0.07861781);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(13,0.07739797);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(14,0.05081851);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(15,0.02801913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(16,0.02140022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(17,0.02057246);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(18,0.01220549);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(19,0.004133773);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(20,0.004187651);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(21,0.003849439);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(22,7.784792e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(23,0.000447533);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(27,3.321591e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(3,0.001045706);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(4,0.005235127);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(5,0.004735912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(6,0.008160546);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(7,0.01021812);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(8,0.008996077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(9,0.01028356);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(10,0.01104724);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(11,0.01040319);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(12,0.00912215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(13,0.00977843);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(14,0.007097829);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(15,0.005405541);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(16,0.004593266);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(17,0.004695857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(18,0.003451942);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(19,0.001580502);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(20,0.001748222);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(21,0.001939349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(22,6.230983e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(23,0.0003515035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(27,3.302789e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx328->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->SetMinimum(-1.071867e-06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->SetMaximum(0.1161576);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_66);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(3,0.001293747);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(4,0.01718799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(5,0.02031113);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(6,0.04898293);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(7,0.07348345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(8,0.07137351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(9,0.09286969);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(10,0.09957903);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(11,0.08916726);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(12,0.07861781);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(13,0.07739797);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(14,0.05081851);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(15,0.02801913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(16,0.02140022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(17,0.02057246);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(18,0.01220549);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(19,0.004133773);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(20,0.004187651);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(21,0.003849439);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(22,7.784792e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(23,0.000447533);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(27,3.321591e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(3,0.001045706);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(4,0.005235127);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(5,0.004735912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(6,0.008160546);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(7,0.01021812);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(8,0.008996077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(9,0.01028356);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(10,0.01104724);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(11,0.01040319);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(12,0.00912215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(13,0.00977843);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(14,0.007097829);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(15,0.005405541);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(16,0.004593266);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(17,0.004695857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(18,0.003451942);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(19,0.001580502);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(20,0.001748222);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(21,0.001939349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(22,6.230983e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(23,0.0003515035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(27,3.302789e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx329->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3065[40] = {
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
   Double_t _fy3065[40] = {
   0,
   0.00270524,
   0.03816473,
   0.09910048,
   0.01479216,
   0.7254362,
   1.290115,
   3.571897,
   3.308967,
   0.655917,
   3.812758,
   3.021119,
   2.271935,
   2.558425,
   0.7812958,
   0.3258039,
   0.5205641,
   0.6764343,
   0.04613908,
   0.1076505,
   0.09082657,
   0.02236664,
   0.009514784,
   8.140728e-06,
   0.003047687,
   0.0008621557,
   0,
   0,
   4.913152e-07,
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
   Double_t _felx3065[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3065[40] = {
   0,
   0.003826809,
   0.01737684,
   0.0296242,
   0.3005848,
   0.3149517,
   0.7003935,
   1.701311,
   1.535712,
   0.5424719,
   1.640995,
   1.529484,
   0.890188,
   1.315736,
   0.2424574,
   0.4506039,
   0.3017592,
   0.4829038,
   0.01567985,
   0.06844642,
   0.06281455,
   0.008838949,
   0.00561188,
   6.799965e-06,
   0.002255277,
   0.0009705005,
   0,
   0,
   4.913371e-07,
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
   Double_t _fehx3065[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3065[40] = {
   0,
   0.003826812,
   0.01737045,
   0.02958774,
   0.2510541,
   0.3148626,
   0.7939672,
   1.701278,
   1.535631,
   0.542344,
   1.640904,
   1.529471,
   0.8899025,
   1.403718,
   0.4190454,
   0.4504483,
   0.3017181,
   0.489819,
   0.01567909,
   0.06844366,
   0.06281326,
   0.008838085,
   0.005610718,
   6.801549e-06,
   0.002253411,
   0.0009704909,
   0,
   0,
   4.913374e-07,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3065,_fy3065,_felx3065,_fehx3065,_fely3065,_fehy3065);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3065 = new TH1F("Graph_Graph3065","",100,0,44);
   Graph_Graph3065->SetMinimum(-0.859738);
   Graph_Graph3065->SetMaximum(6.027607);
   Graph_Graph3065->SetDirectory(0);
   Graph_Graph3065->SetStats(0);
   Graph_Graph3065->SetLineStyle(0);
   Graph_Graph3065->SetMarkerStyle(20);
   Graph_Graph3065->GetXaxis()->SetLabelFont(42);
   Graph_Graph3065->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3065->GetXaxis()->SetTitleFont(42);
   Graph_Graph3065->GetYaxis()->SetLabelFont(42);
   Graph_Graph3065->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3065->GetYaxis()->SetTitleFont(42);
   Graph_Graph3065->GetZaxis()->SetLabelFont(42);
   Graph_Graph3065->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3065);
   
   grae->Draw("2");
   
   Double_t _fx3066[40] = {
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
   Double_t _fy3066[40] = {
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
   Double_t _felx3066[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3066[40] = {
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
   Double_t _fehx3066[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3066[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3066,_fy3066,_felx3066,_fehx3066,_fely3066,_fehy3066);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3066 = new TH1F("Graph_Graph3066","",100,0,44);
   Graph_Graph3066->SetMinimum(0);
   Graph_Graph3066->SetMaximum(1.262698);
   Graph_Graph3066->SetDirectory(0);
   Graph_Graph3066->SetStats(0);
   Graph_Graph3066->SetLineStyle(0);
   Graph_Graph3066->SetMarkerStyle(20);
   Graph_Graph3066->GetXaxis()->SetLabelFont(42);
   Graph_Graph3066->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3066->GetXaxis()->SetTitleFont(42);
   Graph_Graph3066->GetYaxis()->SetLabelFont(42);
   Graph_Graph3066->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3066->GetYaxis()->SetTitleFont(42);
   Graph_Graph3066->GetZaxis()->SetLabelFont(42);
   Graph_Graph3066->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3066);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_nvtx","Data","EPL");
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
   
   TH1F *hframe_copy330 = new TH1F("hframe_copy330","",1000,0,40);
   hframe_copy330->SetMinimum(0);
   hframe_copy330->SetMaximum(9.754812);
   hframe_copy330->SetDirectory(0);
   hframe_copy330->SetStats(0);
   hframe_copy330->SetLineStyle(0);
   hframe_copy330->SetMarkerStyle(20);
   hframe_copy330->GetXaxis()->SetTitle("nvtx");
   hframe_copy330->GetXaxis()->SetNdivisions(506);
   hframe_copy330->GetXaxis()->SetLabelFont(42);
   hframe_copy330->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetXaxis()->SetLabelSize(0.05);
   hframe_copy330->GetXaxis()->SetTitleSize(0.06);
   hframe_copy330->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy330->GetXaxis()->SetTitleFont(42);
   hframe_copy330->GetYaxis()->SetTitle("Events");
   hframe_copy330->GetYaxis()->SetLabelFont(42);
   hframe_copy330->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetYaxis()->SetLabelSize(0.05);
   hframe_copy330->GetYaxis()->SetTitleSize(0.06);
   hframe_copy330->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy330->GetYaxis()->SetTitleFont(42);
   hframe_copy330->GetZaxis()->SetLabelFont(42);
   hframe_copy330->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetZaxis()->SetLabelSize(0.05);
   hframe_copy330->GetZaxis()->SetTitleSize(0.06);
   hframe_copy330->GetZaxis()->SetTitleFont(42);
   hframe_copy330->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_nvtx);
}
