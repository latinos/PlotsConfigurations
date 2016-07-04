void c_wh3l_MET_JetV_ZVeto_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_nvtx/cc
//=========  (Sat Jul  2 21:43:52 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_nvtx = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->Range(-8,-2.867954,42,19.19323);
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
   
   TH1F *hframe421 = new TH1F("hframe421","",1000,0,40);
   hframe421->SetMinimum(0);
   hframe421->SetMaximum(18.09017);
   hframe421->SetDirectory(0);
   hframe421->SetStats(0);
   hframe421->SetLineStyle(0);
   hframe421->SetMarkerStyle(20);
   hframe421->GetXaxis()->SetTitle("nvtx");
   hframe421->GetXaxis()->SetNdivisions(506);
   hframe421->GetXaxis()->SetLabelFont(42);
   hframe421->GetXaxis()->SetLabelOffset(0.007);
   hframe421->GetXaxis()->SetLabelSize(0.05);
   hframe421->GetXaxis()->SetTitleSize(0.06);
   hframe421->GetXaxis()->SetTitleOffset(0.9);
   hframe421->GetXaxis()->SetTitleFont(42);
   hframe421->GetYaxis()->SetTitle("Events");
   hframe421->GetYaxis()->SetLabelFont(42);
   hframe421->GetYaxis()->SetLabelOffset(0.007);
   hframe421->GetYaxis()->SetLabelSize(0.05);
   hframe421->GetYaxis()->SetTitleSize(0.06);
   hframe421->GetYaxis()->SetTitleOffset(1.25);
   hframe421->GetYaxis()->SetTitleFont(42);
   hframe421->GetZaxis()->SetLabelFont(42);
   hframe421->GetZaxis()->SetLabelOffset(0.007);
   hframe421->GetZaxis()->SetLabelSize(0.05);
   hframe421->GetZaxis()->SetTitleSize(0.06);
   hframe421->GetZaxis()->SetTitleFont(42);
   hframe421->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->SetMinimum(-0.5354585);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->SetMaximum(3.942148);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_85);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(4,-0.0005887331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(5,-0.2879015);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(6,-0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(7,0.3848701);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(8,0.9039569);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(9,0.7988347);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(10,-0.171863);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(11,2.101819);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(12,1.659368);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(13,0.43827);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(14,1.655807);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(15,0.006384889);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(16,-0.3242804);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(17,0.1358484);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinContent(18,0.3001484);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(4,0.0005887331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(5,0.2348342);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(6,0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(7,0.5391525);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(8,0.6546908);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(9,0.7996716);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(10,0.2768728);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(11,1.110409);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(12,1.095797);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(13,0.2510981);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(14,0.9848221);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(15,0.1839286);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(16,0.211178);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(17,0.1102774);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetBinError(18,0.3099838);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx422->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinContent(6,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinContent(8,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinContent(9,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinError(6,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinError(8,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinError(9,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx423->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(2,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(4,0.002378346);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(5,0.01078976);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(6,0.01248861);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(7,0.02817285);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(8,0.03310712);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(9,0.03614612);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(10,0.03369544);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(11,0.03953687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(12,0.01535167);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(13,0.026409);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(14,0.02666819);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(15,0.01303206);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(16,0.008854938);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(17,0.01430172);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(18,0.001929644);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(19,0.003542776);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(20,0.006524967);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinContent(26,0.0005054904);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(2,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(4,0.002378346);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(5,0.005396106);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(6,0.005544426);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(7,0.008155321);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(8,0.009685111);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(9,0.009872905);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(10,0.009346847);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(11,0.0101453);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(12,0.007149424);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(13,0.008425958);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(14,0.007412241);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(15,0.005344272);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(16,0.005147263);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(17,0.00554072);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(18,0.001132152);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(19,0.003000193);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(20,0.003401716);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetBinError(26,0.0005054904);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx424->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(6,0.2283563);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(7,0.1103645);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(8,0.1257014);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(9,0.2926692);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(10,-0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(11,0.3259333);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(12,0.2262168);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(13,0.3314658);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(14,0.06007751);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(15,0.34708);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(16,0.2870735);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(17,0.1416296);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(18,0.2748712);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(20,0.0510846);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(21,0.07443925);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(23,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinContent(26,2.545572e-06);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(6,0.1614924);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(7,0.1103645);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(8,0.1257014);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(9,0.1731455);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(10,0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(11,0.1894885);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(12,0.159977);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(13,0.2178615);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(14,0.1593412);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(15,0.1832583);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(16,0.167759);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(17,0.1157495);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(18,0.1477147);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(20,0.0510846);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(21,0.05537531);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(23,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetBinError(26,2.545572e-06);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx425->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(7,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(8,0.08704091);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(9,0.0738407);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(11,0.0793975);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(12,0.09480382);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(13,0.08039751);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(14,0.05352081);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(17,0.03554041);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinContent(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(7,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(8,0.06158793);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(9,0.05353437);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(11,0.05830988);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(12,0.06077025);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(13,0.056861);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(14,0.03784829);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(17,0.03554041);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetBinError(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx426->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(3,0.03045362);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(4,0.09462383);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(5,0.181101);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(6,0.5337879);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(7,0.6270213);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(8,1.066009);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(9,0.9681149);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(10,0.9388955);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(11,1.148119);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(12,0.9022471);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(13,0.8284462);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(14,0.5554923);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(15,0.3800888);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(16,0.3131124);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(17,0.1750623);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(18,0.09549153);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(19,0.03717074);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(20,0.05004094);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(21,0.01638732);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(22,0.01711658);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(23,0.009384758);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(24,8.140728e-06);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(25,0.003047687);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(26,0.000347147);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinContent(29,4.913152e-07);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(3,0.0155196);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(4,0.02468431);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(5,0.03287921);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(6,0.05672803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(7,0.06092997);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(8,0.0792752);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(9,0.07382337);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(10,0.0723551);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(11,0.07892553);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(12,0.06855593);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(13,0.06553284);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(14,0.05247442);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(15,0.04286566);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(16,0.03814807);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(17,0.02830279);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(18,0.01948176);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(19,0.0109281);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(20,0.01360311);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(21,0.007160775);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(22,0.007045975);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(23,0.005475324);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(24,6.791678e-06);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(25,0.002248892);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(26,0.0003201634);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetBinError(29,4.913152e-07);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx427->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(3,0.0002886772);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(4,0.01054587);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(5,0.01321902);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(6,0.03206474);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(7,0.0581068);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(8,0.04975033);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(9,0.06556075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(10,0.07145016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(11,0.05962127);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(12,0.0593576);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(13,0.0561711);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(14,0.042135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(15,0.01844817);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(16,0.01486223);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(17,0.01508883);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(18,0.009523088);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(19,0.00168225);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(20,0.00327857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(21,0.002087682);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(22,1.812796e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(23,0.0001149743);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(27,1.885581e-09);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(3,0.0002886772);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(4,0.004199571);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(5,0.003913955);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(6,0.006563857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(7,0.009278525);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(8,0.007517006);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(9,0.008807535);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(10,0.0095469);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(11,0.008321035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(12,0.008121023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(13,0.008147483);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(14,0.006663529);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(15,0.004600653);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(16,0.003957093);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(17,0.004048951);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(18,0.003200701);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(19,0.0008257527);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(20,0.001640981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(21,0.001476899);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(22,1.812796e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(23,0.0001149743);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(27,1.885581e-09);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx428->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->SetMinimum(-1.071867e-06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->SetMaximum(0.08504691);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx_stack_86);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(3,0.0002886772);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(4,0.01054587);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(5,0.01321902);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(6,0.03206474);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(7,0.0581068);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(8,0.04975033);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(9,0.06556075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(10,0.07145016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(11,0.05962127);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(12,0.0593576);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(13,0.0561711);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(14,0.042135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(15,0.01844817);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(16,0.01486223);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(17,0.01508883);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(18,0.009523088);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(19,0.00168225);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(20,0.00327857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(21,0.002087682);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(22,1.812796e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(23,0.0001149743);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(27,1.885581e-09);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(3,0.0002886772);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(4,0.004199571);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(5,0.003913955);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(6,0.006563857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(7,0.009278525);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(8,0.007517006);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(9,0.008807535);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(10,0.0095469);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(11,0.008321035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(12,0.008121023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(13,0.008147483);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(14,0.006663529);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(15,0.004600653);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(16,0.003957093);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(17,0.004048951);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(18,0.003200701);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(19,0.0008257527);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(20,0.001640981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(21,0.001476899);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(22,1.812796e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(23,0.0001149743);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(27,1.885581e-09);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx429->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3085[40] = {
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
   Double_t _fy3085[40] = {
   0,
   0.00270524,
   0.03045362,
   0.09641344,
   -0.09601068,
   0.7891396,
   1.193757,
   2.233964,
   2.18408,
   0.6918586,
   3.694805,
   2.897987,
   1.704988,
   2.351565,
   0.7465858,
   0.2952023,
   0.5023824,
   0.6724408,
   0.04071352,
   0.1076505,
   0.09082657,
   0.01711658,
   0.009514784,
   8.140728e-06,
   0.003047687,
   0.000855183,
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
   Double_t _felx3085[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3085[40] = {
   0,
   0.003826809,
   0.01554513,
   0.02807093,
   0.2914716,
   0.2418839,
   0.6239235,
   1.002415,
   1.159651,
   0.5017701,
   1.6251,
   1.509436,
   0.6221305,
   1.281794,
   0.2395629,
   0.4480744,
   0.2998331,
   0.4804126,
   0.0144429,
   0.06844642,
   0.06281455,
   0.007078112,
   0.00561188,
   6.799965e-06,
   0.002255277,
   0.0009704332,
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
   Double_t _fehx3085[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3085[40] = {
   0,
   0.003826812,
   0.0155393,
   0.02804329,
   0.2914666,
   0.2417789,
   0.77493,
   1.002364,
   1.16038,
   0.3981808,
   1.625027,
   1.509419,
   0.6217512,
   1.371001,
   0.4163037,
   0.4479234,
   0.2997945,
   0.4899809,
   0.01444164,
   0.06844366,
   0.06281326,
   0.007075942,
   0.005610718,
   6.801549e-06,
   0.002253411,
   0.0009704252,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3085,_fy3085,_felx3085,_fehx3085,_fely3085,_fehy3085);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3085 = new TH1F("Graph_Graph3085","",100,0,44);
   Graph_Graph3085->SetMinimum(-0.9582137);
   Graph_Graph3085->SetMaximum(5.890563);
   Graph_Graph3085->SetDirectory(0);
   Graph_Graph3085->SetStats(0);
   Graph_Graph3085->SetLineStyle(0);
   Graph_Graph3085->SetMarkerStyle(20);
   Graph_Graph3085->GetXaxis()->SetLabelFont(42);
   Graph_Graph3085->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3085->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3085->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3085->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3085->GetXaxis()->SetTitleFont(42);
   Graph_Graph3085->GetYaxis()->SetLabelFont(42);
   Graph_Graph3085->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3085->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3085->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3085->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3085->GetYaxis()->SetTitleFont(42);
   Graph_Graph3085->GetZaxis()->SetLabelFont(42);
   Graph_Graph3085->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3085->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3085->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3085->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3085);
   
   grae->Draw("2");
   
   Double_t _fx3086[40] = {
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
   Double_t _fy3086[40] = {
   0,
   0,
   0,
   0,
   2,
   2,
   1,
   1,
   5,
   3,
   1,
   3,
   1,
   1,
   1,
   4,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3086[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3086[40] = {
   0,
   0,
   0,
   0,
   1.29183,
   1.29183,
   0.8272524,
   0.8272524,
   2.159724,
   1.632727,
   0.8272524,
   1.632727,
   0.8272524,
   0.8272524,
   0.8272524,
   1.914367,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3086[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3086[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   2.63791,
   2.29957,
   2.29957,
   3.382539,
   2.918242,
   2.29957,
   2.918242,
   2.29957,
   2.29957,
   2.29957,
   3.162815,
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
   grae = new TGraphAsymmErrors(40,_fx3086,_fy3086,_felx3086,_fehx3086,_fely3086,_fehy3086);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3086 = new TH1F("Graph_Graph3086","",100,0,44);
   Graph_Graph3086->SetMinimum(0);
   Graph_Graph3086->SetMaximum(9.220793);
   Graph_Graph3086->SetDirectory(0);
   Graph_Graph3086->SetStats(0);
   Graph_Graph3086->SetLineStyle(0);
   Graph_Graph3086->SetMarkerStyle(20);
   Graph_Graph3086->GetXaxis()->SetLabelFont(42);
   Graph_Graph3086->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3086->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3086->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3086->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3086->GetXaxis()->SetTitleFont(42);
   Graph_Graph3086->GetYaxis()->SetLabelFont(42);
   Graph_Graph3086->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3086->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3086->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3086->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3086->GetYaxis()->SetTitleFont(42);
   Graph_Graph3086->GetZaxis()->SetLabelFont(42);
   Graph_Graph3086->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3086->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3086->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3086->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3086);
   
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
   
   TH1F *hframe_copy430 = new TH1F("hframe_copy430","",1000,0,40);
   hframe_copy430->SetMinimum(0);
   hframe_copy430->SetMaximum(18.09017);
   hframe_copy430->SetDirectory(0);
   hframe_copy430->SetStats(0);
   hframe_copy430->SetLineStyle(0);
   hframe_copy430->SetMarkerStyle(20);
   hframe_copy430->GetXaxis()->SetTitle("nvtx");
   hframe_copy430->GetXaxis()->SetNdivisions(506);
   hframe_copy430->GetXaxis()->SetLabelFont(42);
   hframe_copy430->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy430->GetXaxis()->SetLabelSize(0.05);
   hframe_copy430->GetXaxis()->SetTitleSize(0.06);
   hframe_copy430->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy430->GetXaxis()->SetTitleFont(42);
   hframe_copy430->GetYaxis()->SetTitle("Events");
   hframe_copy430->GetYaxis()->SetLabelFont(42);
   hframe_copy430->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy430->GetYaxis()->SetLabelSize(0.05);
   hframe_copy430->GetYaxis()->SetTitleSize(0.06);
   hframe_copy430->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy430->GetYaxis()->SetTitleFont(42);
   hframe_copy430->GetZaxis()->SetLabelFont(42);
   hframe_copy430->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy430->GetZaxis()->SetLabelSize(0.05);
   hframe_copy430->GetZaxis()->SetTitleSize(0.06);
   hframe_copy430->GetZaxis()->SetTitleFont(42);
   hframe_copy430->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_nvtx->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_nvtx);
}
