void c_wh3l_MET_JetV_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_nvtx/cc
//=========  (Sun Jul  3 01:21:47 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_nvtx = new TCanvas("ccwh3l_MET_JetV_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_nvtx->Range(-8,-1.353194,42,9.055993);
   ccwh3l_MET_JetV_13TeV_nvtx->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_nvtx->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_nvtx->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,0,40);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(8.535534);
   hframe31->SetDirectory(0);
   hframe31->SetStats(0);
   hframe31->SetLineStyle(0);
   hframe31->SetMarkerStyle(20);
   hframe31->GetXaxis()->SetTitle("nvtx");
   hframe31->GetXaxis()->SetNdivisions(506);
   hframe31->GetXaxis()->SetLabelFont(42);
   hframe31->GetXaxis()->SetLabelOffset(0.007);
   hframe31->GetXaxis()->SetLabelSize(0.05);
   hframe31->GetXaxis()->SetTitleSize(0.06);
   hframe31->GetXaxis()->SetTitleOffset(0.9);
   hframe31->GetXaxis()->SetTitleFont(42);
   hframe31->GetYaxis()->SetTitle("Events");
   hframe31->GetYaxis()->SetLabelFont(42);
   hframe31->GetYaxis()->SetLabelOffset(0.007);
   hframe31->GetYaxis()->SetLabelSize(0.05);
   hframe31->GetYaxis()->SetTitleSize(0.06);
   hframe31->GetYaxis()->SetTitleOffset(1.25);
   hframe31->GetYaxis()->SetTitleFont(42);
   hframe31->GetZaxis()->SetLabelFont(42);
   hframe31->GetZaxis()->SetLabelOffset(0.007);
   hframe31->GetZaxis()->SetLabelSize(0.05);
   hframe31->GetZaxis()->SetTitleSize(0.06);
   hframe31->GetZaxis()->SetTitleFont(42);
   hframe31->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7","thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->SetMinimum(-0.5669007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->SetMaximum(2.455583);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(5,0.08834279);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(6,-0.3140613);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(7,0.07000841);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(8,1.31407);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(9,1.058443);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(10,-0.1381854);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(11,0.02597067);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(12,0.1742475);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(13,0.528474);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(14,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(15,-0.007975492);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinContent(16,-0.04592422);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(5,0.08834279);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(6,0.2528394);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(7,0.1132725);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(8,1.024581);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(9,0.6953118);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(10,0.1091164);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(11,0.1319267);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(12,0.1397717);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(13,0.3974);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(14,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(15,0.007975492);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetBinError(16,0.04515905);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetBinContent(5,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetBinContent(8,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetBinContent(10,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetBinError(5,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetBinError(8,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetBinError(10,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(4,0.002687033);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(5,0.004813978);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(6,5.630438e-05);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(7,0.007837043);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(8,0.01099946);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(9,0.02580874);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(10,0.01525031);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(11,0.02226628);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(12,0.00794119);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(13,0.007776068);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(14,0.0114359);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(15,0.004584258);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(16,0.006040221);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(17,0.004771094);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(18,-0.002370869);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinContent(19,4.527964e-05);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(4,0.002687033);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(5,0.003404795);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(6,0.004043272);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(7,0.007158148);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(8,0.006342201);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(9,0.007854836);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(10,0.005806629);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(11,0.007102649);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(12,0.00497763);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(13,0.003835134);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(14,0.004596907);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(15,0.002963912);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(16,0.003096678);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(17,0.002997224);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(18,0.002951768);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetBinError(19,4.526381e-05);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->SetBinContent(18,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->SetBinError(18,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->SetBinContent(12,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->SetBinContent(13,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->SetBinError(12,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->SetBinError(13,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(3,0.00771111);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(5,0.01764608);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(6,0.01979509);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(7,0.02961784);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(8,0.04593561);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(9,0.0575021);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(10,0.08438008);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(11,0.09494339);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(12,0.04295656);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(13,0.07803289);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(14,0.08288192);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(15,0.04118981);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(16,0.02900133);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(17,0.01591321);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(18,0.006364392);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(19,0.005380294);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(22,0.005250057);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinContent(26,6.972719e-06);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(3,0.00771111);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(5,0.01031087);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(6,0.01080188);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(7,0.01249843);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(8,0.0163243);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(9,0.01823286);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(10,0.0221513);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(11,0.02303573);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(12,0.01502619);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(13,0.01903537);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(14,0.02075366);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(15,0.01462105);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(16,0.01140633);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(17,0.007801572);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(18,0.004550291);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(19,0.005380294);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(22,0.005250057);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetBinError(26,6.972719e-06);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(3,0.001773516);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(4,0.008189463);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(5,0.007664979);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(6,0.01919712);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(7,0.02034286);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(8,0.0267768);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(9,0.03647043);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(10,0.0327242);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(11,0.03317798);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(12,0.02868208);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(13,0.02315929);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(14,0.01240686);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(15,0.01012274);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(16,0.006586974);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(17,0.006990482);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(18,0.003454174);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(19,0.002654126);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(20,0.000909081);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(21,0.001875956);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(23,0.0003325587);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(3,0.001143852);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(4,0.003408097);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(5,0.002700102);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(6,0.005099698);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(7,0.004816807);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(8,0.005623721);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(9,0.006268214);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(10,0.005677992);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(11,0.006487492);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(12,0.005471821);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(13,0.005536668);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(14,0.002913412);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(15,0.002856298);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(16,0.002332789);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(17,0.002595267);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(18,0.001354313);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(19,0.001362779);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(20,0.0006028786);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(21,0.001262095);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(23,0.000332168);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8","thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->SetMaximum(0.04487558);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(3,0.001773516);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(4,0.008189463);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(5,0.007664979);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(6,0.01919712);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(7,0.02034286);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(8,0.0267768);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(9,0.03647043);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(10,0.0327242);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(11,0.03317798);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(12,0.02868208);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(13,0.02315929);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(14,0.01240686);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(15,0.01012274);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(16,0.006586974);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(17,0.006990482);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(18,0.003454174);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(19,0.002654126);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(20,0.000909081);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(21,0.001875956);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(22,5.971996e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(23,0.0003325587);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinContent(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(3,0.001143852);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(4,0.003408097);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(5,0.002700102);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(6,0.005099698);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(7,0.004816807);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(8,0.005623721);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(9,0.006268214);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(10,0.005677992);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(11,0.006487492);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(12,0.005471821);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(13,0.005536668);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(14,0.002913412);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(15,0.002856298);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(16,0.002332789);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(17,0.002595267);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(18,0.001354313);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(19,0.001362779);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(20,0.0006028786);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(21,0.001262095);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(22,5.961453e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(23,0.000332168);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetBinError(27,3.302735e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3007[40] = {
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
   Double_t _fy3007[40] = {
   0,
   0,
   0.00771111,
   0.002687033,
   0.1211942,
   -0.2942099,
   0.1074633,
   1.38809,
   1.141754,
   -0.02243094,
   0.1431803,
   0.260282,
   0.6569965,
   0.2288317,
   0.03779858,
   -0.01088266,
   0.0206843,
   0.05626633,
   0.005425574,
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
   Double_t _felx3007[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3007[40] = {
   0,
   0,
   0.007730108,
   0.003802896,
   0.1167301,
   0.2856912,
   0.09329369,
   1.15951,
   0.8113782,
   0.161419,
   0.06128706,
   0.2044034,
   0.4986301,
   0.1670567,
   0.02613316,
   0.06208634,
   0.01181284,
   0.0599466,
   0.005427961,
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
   Double_t _fehx3007[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3007[40] = {
   0,
   0,
   0.007730544,
   0.003801798,
   0.1167311,
   0.2893751,
   0.1354022,
   1.15951,
   0.8113765,
   0.1614144,
   0.1639226,
   0.2044046,
   0.4986298,
   0.1670522,
   0.02612456,
   0.06208619,
   0.01181171,
   0.05928758,
   0.005428061,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,44);
   Graph_Graph3007->SetMinimum(-0.8926512);
   Graph_Graph3007->SetMaximum(2.86035);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t _fx3008[40] = {
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
   Double_t _fy3008[40] = {
   0,
   0,
   0,
   0,
   0,
   2,
   0,
   0,
   1,
   0,
   1,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3008[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3008[40] = {
   0,
   0,
   0,
   0,
   0,
   1.29183,
   0,
   0,
   0.8272524,
   0,
   0.8272524,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3008[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3008[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,44);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(5.101701);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_nvtx","Data","EPL");
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
   
   TH1F *hframe_copy40 = new TH1F("hframe_copy40","",1000,0,40);
   hframe_copy40->SetMinimum(0);
   hframe_copy40->SetMaximum(8.535534);
   hframe_copy40->SetDirectory(0);
   hframe_copy40->SetStats(0);
   hframe_copy40->SetLineStyle(0);
   hframe_copy40->SetMarkerStyle(20);
   hframe_copy40->GetXaxis()->SetTitle("nvtx");
   hframe_copy40->GetXaxis()->SetNdivisions(506);
   hframe_copy40->GetXaxis()->SetLabelFont(42);
   hframe_copy40->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetXaxis()->SetLabelSize(0.05);
   hframe_copy40->GetXaxis()->SetTitleSize(0.06);
   hframe_copy40->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy40->GetXaxis()->SetTitleFont(42);
   hframe_copy40->GetYaxis()->SetTitle("Events");
   hframe_copy40->GetYaxis()->SetLabelFont(42);
   hframe_copy40->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetYaxis()->SetLabelSize(0.05);
   hframe_copy40->GetYaxis()->SetTitleSize(0.06);
   hframe_copy40->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy40->GetYaxis()->SetTitleFont(42);
   hframe_copy40->GetZaxis()->SetLabelFont(42);
   hframe_copy40->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetZaxis()->SetLabelSize(0.05);
   hframe_copy40->GetZaxis()->SetTitleSize(0.06);
   hframe_copy40->GetZaxis()->SetTitleFont(42);
   hframe_copy40->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_nvtx->Modified();
   ccwh3l_MET_JetV_13TeV_nvtx->cd();
   ccwh3l_MET_JetV_13TeV_nvtx->SetSelected(ccwh3l_MET_JetV_13TeV_nvtx);
}
