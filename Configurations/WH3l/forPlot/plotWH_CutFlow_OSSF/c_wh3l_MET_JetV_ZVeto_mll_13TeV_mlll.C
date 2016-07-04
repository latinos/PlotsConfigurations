void c_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll/cc
//=========  (Sat Jul  2 21:44:09 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Range(76,-0.7926829,101,5.304878);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe611 = new TH1F("hframe611","",1000,80,100);
   hframe611->SetMinimum(0);
   hframe611->SetMaximum(5);
   hframe611->SetDirectory(0);
   hframe611->SetStats(0);
   hframe611->SetLineStyle(0);
   hframe611->SetMarkerStyle(20);
   hframe611->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe611->GetXaxis()->SetNdivisions(506);
   hframe611->GetXaxis()->SetLabelFont(42);
   hframe611->GetXaxis()->SetLabelOffset(0.007);
   hframe611->GetXaxis()->SetLabelSize(0.05);
   hframe611->GetXaxis()->SetTitleSize(0.06);
   hframe611->GetXaxis()->SetTitleOffset(0.9);
   hframe611->GetXaxis()->SetTitleFont(42);
   hframe611->GetYaxis()->SetTitle("Events");
   hframe611->GetYaxis()->SetLabelFont(42);
   hframe611->GetYaxis()->SetLabelOffset(0.007);
   hframe611->GetYaxis()->SetLabelSize(0.05);
   hframe611->GetYaxis()->SetTitleSize(0.06);
   hframe611->GetYaxis()->SetTitleOffset(1.25);
   hframe611->GetYaxis()->SetTitleFont(42);
   hframe611->GetZaxis()->SetLabelFont(42);
   hframe611->GetZaxis()->SetLabelOffset(0.007);
   hframe611->GetZaxis()->SetLabelSize(0.05);
   hframe611->GetZaxis()->SetTitleSize(0.06);
   hframe611->GetZaxis()->SetTitleFont(42);
   hframe611->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll",40,80,100);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->SetMinimum(-0.4972561);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->SetMaximum(1.205948);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612","histo_Fake",40,80,100);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(0,1.582746);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(3,0.2873519);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(8,0.06884333);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(11,0.1211799);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(16,0.1007265);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(20,-0.2070938);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(21,0.0005732524);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(24,0.574261);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(33,-0.004068306);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(41,0.7477429);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(0,1.040125);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(3,0.2873519);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(8,0.110472);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(11,0.1211799);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(16,0.1007265);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(20,0.2901622);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(21,0.0005732524);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(24,0.574261);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(33,0.004068306);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(41,0.5968474);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613","histo_WW",40,80,100);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetBinContent(41,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetBinError(41,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614","histo_VVV",40,80,100);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(0,0.01604766);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(3,0.002780202);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(5,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(17,0.002354171);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(18,0.002721118);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(29,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(35,0.002293505);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(36,0.002294977);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(38,0.0004297153);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(39,0.0006127095);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(41,0.04898066);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(0,0.005885249);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(3,0.002780202);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(5,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(17,0.002354171);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(18,0.002721118);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(29,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(35,0.002293505);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(36,0.002294977);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(38,0.0004297153);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(39,0.0006127095);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(41,0.01130765);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetEntries(41);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615","histo_Vg",40,80,100);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(0,0.2089006);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(5,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(17,0.1324027);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(20,-0.1065842);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(21,0.1207149);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(22,0.09276484);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(23,0.1242263);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(24,0.02505771);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(25,0.04938154);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(26,0.1123769);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(28,0.2404875);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(30,0.113046);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(32,0.1013396);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(41,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(0,0.1344756);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(5,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(17,0.1114396);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(20,0.1065842);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(21,0.1207149);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(22,0.09276484);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(23,0.1242263);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(24,0.02505771);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(25,0.04938154);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(26,0.1123769);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(28,0.1702254);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(30,0.113046);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(32,0.1013396);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(41,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetEntries(18);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616","histo_ZZ",40,80,100);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinContent(0,0.1184806);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinContent(2,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinContent(10,0.05083565);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinContent(41,0.05567881);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinError(0,0.06857912);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinError(2,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinError(10,0.05083565);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinError(41,0.03938412);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetEntries(7);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617","histo_WZ",40,80,100);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(0,1.508986);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(1,0.01719715);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(2,0.02386936);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(3,0.02067585);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(4,0.02616083);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(5,0.0115812);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(6,0.02592575);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(7,0.02054716);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(8,0.02708666);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(9,0.01373691);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(10,0.02190734);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(11,0.01868543);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(12,0.06618905);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(13,0.02067181);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(14,0.02235511);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(15,0.01683487);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(16,0.01644097);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(17,0.01016967);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(18,0.02448457);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(19,0.01115708);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(20,0.01660326);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(21,0.01751744);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(22,0.01754616);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(23,0.02251598);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(24,0.01237326);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(25,0.01537963);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(26,0.01313245);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(27,0.02869329);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(28,0.01838592);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(30,0.02293068);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(31,0.006222784);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(32,0.0234243);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(33,0.01774884);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(34,0.0064349);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(35,0.008995354);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(36,0.01522451);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(37,0.01660194);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(38,0.02244466);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(39,0.005877456);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(40,0.02538982);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(41,1.829471);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(0,0.09057552);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(1,0.01001205);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(2,0.01201059);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(3,0.0106121);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(4,0.01192243);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(5,0.008237954);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(6,0.01169052);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(7,0.01069085);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(8,0.01111386);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(9,0.008642583);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(10,0.01116137);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(11,0.009759489);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(12,0.01963595);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(13,0.01076613);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(14,0.01044792);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(15,0.009833079);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(16,0.009171596);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(17,0.007195691);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(18,0.0112058);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(19,0.006895268);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(20,0.009653929);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(21,0.009234602);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(22,0.0102105);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(23,0.01065175);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(24,0.008844395);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(25,0.008488116);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(26,0.007916983);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(27,0.01295004);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(28,0.009747372);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(30,0.01103947);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(31,0.006222784);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(32,0.01130953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(33,0.00941394);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(34,0.005046049);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(35,0.006470149);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(36,0.008812691);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(37,0.009585611);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(38,0.01135379);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(39,0.005877456);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(40,0.0117817);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(41,0.09983116);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetEntries(837);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(0,0.1189761);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(1,0.003373166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(2,0.002207408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(3,0.004160317);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(4,0.001616107);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(5,0.004731408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(6,0.003014618);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(7,0.001623224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(8,0.002750204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(9,0.0007912996);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(10,0.002861219);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(11,0.002029497);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(12,-0.0001372302);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(13,0.000197036);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(14,0.0003525208);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(15,0.0003431568);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(16,0.0007502668);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(17,0.0001383723);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(18,0.001827972);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(19,0.002607697);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(21,0.001761999);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(22,0.001779661);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(23,0.001206539);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(24,0.001917098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(25,0.0002237969);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(26,0.003250023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(27,0.001924708);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(28,0.001609596);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(29,0.0003102735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(30,-0.001201869);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(32,0.001605592);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(33,0.001636962);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(34,0.0002665287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(35,0.0004039734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(36,0.002933726);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(37,0.002146709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(38,0.00120072);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(39,0.001591367);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(40,0.001020594);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(41,0.1772302);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(0,0.01257102);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(1,0.001954892);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(2,0.001399918);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(3,0.002090003);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(4,0.001147912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(5,0.002655098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(6,0.001618824);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(7,0.001531333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(8,0.002178674);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(9,0.0005673694);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(10,0.001624928);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(11,0.001466386);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(12,0.001893349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(13,0.000197036);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(14,0.001752657);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(15,0.0002441302);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(16,0.0004495115);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(17,0.0001383723);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(18,0.00153642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(19,0.001317523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(21,0.001761999);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(22,0.001551493);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(23,0.001019704);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(24,0.001465764);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(25,0.001502692);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(26,0.002299965);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(27,0.001924708);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(28,0.001235178);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(29,0.0003102735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(30,0.001201869);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(32,0.001408592);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(33,0.001157949);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(34,0.0002665287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(35,0.0002862202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(36,0.002077469);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(37,0.001290698);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(38,0.0006060166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(39,0.001374362);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(40,0.0005834075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(41,0.01508525);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll",40,80,100);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->SetMinimum(-0.002403739);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->SetMaximum(0.007755831);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(0,0.1189761);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(1,0.003373166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(2,0.002207408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(3,0.004160317);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(4,0.001616107);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(5,0.004731408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(6,0.003014618);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(7,0.001623224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(8,0.002750204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(9,0.0007912996);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(10,0.002861219);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(11,0.002029497);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(12,-0.0001372302);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(13,0.000197036);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(14,0.0003525208);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(15,0.0003431568);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(16,0.0007502668);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(17,0.0001383723);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(18,0.001827972);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(19,0.002607697);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(21,0.001761999);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(22,0.001779661);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(23,0.001206539);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(24,0.001917098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(25,0.0002237969);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(26,0.003250023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(27,0.001924708);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(28,0.001609596);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(29,0.0003102735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(30,-0.001201869);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(32,0.001605592);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(33,0.001636962);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(34,0.0002665287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(35,0.0004039734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(36,0.002933726);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(37,0.002146709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(38,0.00120072);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(39,0.001591367);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(40,0.001020594);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(41,0.1772302);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(0,0.01257102);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(1,0.001954892);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(2,0.001399918);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(3,0.002090003);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(4,0.001147912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(5,0.002655098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(6,0.001618824);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(7,0.001531333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(8,0.002178674);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(9,0.0005673694);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(10,0.001624928);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(11,0.001466386);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(12,0.001893349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(13,0.000197036);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(14,0.001752657);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(15,0.0002441302);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(16,0.0004495115);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(17,0.0001383723);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(18,0.00153642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(19,0.001317523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(21,0.001761999);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(22,0.001551493);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(23,0.001019704);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(24,0.001465764);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(25,0.001502692);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(26,0.002299965);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(27,0.001924708);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(28,0.001235178);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(29,0.0003102735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(30,0.001201869);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(32,0.001408592);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(33,0.001157949);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(34,0.0002665287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(35,0.0002862202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(36,0.002077469);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(37,0.001290698);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(38,0.0006060166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(39,0.001374362);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(40,0.0005834075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(41,0.01508525);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3123[40] = {
   80.25,
   80.75,
   81.25,
   81.75,
   82.25,
   82.75,
   83.25,
   83.75,
   84.25,
   84.75,
   85.25,
   85.75,
   86.25,
   86.75,
   87.25,
   87.75,
   88.25,
   88.75,
   89.25,
   89.75,
   90.25,
   90.75,
   91.25,
   91.75,
   92.25,
   92.75,
   93.25,
   93.75,
   94.25,
   94.75,
   95.25,
   95.75,
   96.25,
   96.75,
   97.25,
   97.75,
   98.25,
   98.75,
   99.25,
   99.75};
   Double_t _fy3123[40] = {
   0.01719715,
   0.05027321,
   0.3108079,
   0.02616083,
   0.01441647,
   0.02592575,
   0.02054716,
   0.09593,
   0.01373691,
   0.07274298,
   0.1398653,
   0.06618905,
   0.02067181,
   0.02235511,
   0.01683487,
   0.1171675,
   0.1449265,
   0.02720569,
   0.01115708,
   -0.2970747,
   0.1388056,
   0.110311,
   0.1467423,
   0.6116919,
   0.06476117,
   0.1255093,
   0.02869329,
   0.2588734,
   0.002135687,
   0.1359767,
   0.006222784,
   0.1247639,
   0.01368053,
   0.0064349,
   0.01128886,
   0.01751949,
   0.01660194,
   0.02287438,
   0.006490165,
   0.02538982};
   Double_t _felx3123[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fely3123[40] = {
   0.01024671,
   0.03859542,
   0.3171288,
   0.01198239,
   0.01140704,
   0.01173856,
   0.01077449,
   0.08351669,
   0.008663356,
   0.06211176,
   0.1376447,
   0.01978917,
   0.01078974,
   0.01057325,
   0.009836624,
   0.1154157,
   0.1212309,
   0.01429758,
   0.006909796,
   0.4128249,
   0.1306884,
   0.1030174,
   0.134973,
   0.6405324,
   0.05794416,
   0.1203698,
   0.01302665,
   0.1809243,
   0.003021227,
   0.1247877,
   0.006247032,
   0.1128598,
   0.013577,
   0.005062371,
   0.009079761,
   0.0114169,
   0.009602266,
   0.01183742,
   0.006491396,
   0.01180077};
   Double_t _fehx3123[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fehy3123[40] = {
   0.01018505,
   0.03857749,
   0.317129,
   0.01198801,
   0.01140486,
   0.01174917,
   0.01076808,
   0.1239558,
   0.0086649,
   0.06211355,
   0.1376459,
   0.01974773,
   0.01079089,
   0.01058892,
   0.009836707,
   0.1154157,
   0.1212313,
   0.0142898,
   0.00691047,
   0.3313709,
   0.13069,
   0.1030187,
   0.1349708,
   0.6405313,
   0.05794276,
   0.1203707,
   0.01301784,
   0.1809872,
   0.003021207,
   0.1245027,
   0.006245884,
   0.1128408,
   0.01357443,
   0.00506918,
   0.009084493,
   0.01140314,
   0.009593064,
   0.01183815,
   0.006491591,
   0.01179798};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3123,_fy3123,_felx3123,_fehx3123,_fely3123,_fehy3123);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3123 = new TH1F("Graph_Graph3123","",100,78,102);
   Graph_Graph3123->SetMinimum(-0.9061119);
   Graph_Graph3123->SetMaximum(1.448435);
   Graph_Graph3123->SetDirectory(0);
   Graph_Graph3123->SetStats(0);
   Graph_Graph3123->SetLineStyle(0);
   Graph_Graph3123->SetMarkerStyle(20);
   Graph_Graph3123->GetXaxis()->SetLabelFont(42);
   Graph_Graph3123->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3123->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3123->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3123->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3123->GetXaxis()->SetTitleFont(42);
   Graph_Graph3123->GetYaxis()->SetLabelFont(42);
   Graph_Graph3123->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3123->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3123->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3123->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3123->GetYaxis()->SetTitleFont(42);
   Graph_Graph3123->GetZaxis()->SetLabelFont(42);
   Graph_Graph3123->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3123->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3123->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3123->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3123);
   
   grae->Draw("2");
   
   Double_t _fx3124[40] = {
   80.25,
   80.75,
   81.25,
   81.75,
   82.25,
   82.75,
   83.25,
   83.75,
   84.25,
   84.75,
   85.25,
   85.75,
   86.25,
   86.75,
   87.25,
   87.75,
   88.25,
   88.75,
   89.25,
   89.75,
   90.25,
   90.75,
   91.25,
   91.75,
   92.25,
   92.75,
   93.25,
   93.75,
   94.25,
   94.75,
   95.25,
   95.75,
   96.25,
   96.75,
   97.25,
   97.75,
   98.25,
   98.75,
   99.25,
   99.75};
   Double_t _fy3124[40] = {
   0,
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
   Double_t _felx3124[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fely3124[40] = {
   0,
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
   Double_t _fehx3124[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fehy3124[40] = {
   1.147908,
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
   grae = new TGraphAsymmErrors(40,_fx3124,_fy3124,_felx3124,_fehx3124,_fely3124,_fehy3124);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3124 = new TH1F("Graph_Graph3124","",100,78,102);
   Graph_Graph3124->SetMinimum(0);
   Graph_Graph3124->SetMaximum(3.629527);
   Graph_Graph3124->SetDirectory(0);
   Graph_Graph3124->SetStats(0);
   Graph_Graph3124->SetLineStyle(0);
   Graph_Graph3124->SetMarkerStyle(20);
   Graph_Graph3124->GetXaxis()->SetLabelFont(42);
   Graph_Graph3124->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3124->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3124->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3124->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3124->GetXaxis()->SetTitleFont(42);
   Graph_Graph3124->GetYaxis()->SetLabelFont(42);
   Graph_Graph3124->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3124->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3124->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3124->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3124->GetYaxis()->SetTitleFont(42);
   Graph_Graph3124->GetZaxis()->SetLabelFont(42);
   Graph_Graph3124->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3124->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3124->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3124->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3124);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy620 = new TH1F("hframe_copy620","",1000,80,100);
   hframe_copy620->SetMinimum(0);
   hframe_copy620->SetMaximum(5);
   hframe_copy620->SetDirectory(0);
   hframe_copy620->SetStats(0);
   hframe_copy620->SetLineStyle(0);
   hframe_copy620->SetMarkerStyle(20);
   hframe_copy620->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy620->GetXaxis()->SetNdivisions(506);
   hframe_copy620->GetXaxis()->SetLabelFont(42);
   hframe_copy620->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy620->GetXaxis()->SetLabelSize(0.05);
   hframe_copy620->GetXaxis()->SetTitleSize(0.06);
   hframe_copy620->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy620->GetXaxis()->SetTitleFont(42);
   hframe_copy620->GetYaxis()->SetTitle("Events");
   hframe_copy620->GetYaxis()->SetLabelFont(42);
   hframe_copy620->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy620->GetYaxis()->SetLabelSize(0.05);
   hframe_copy620->GetYaxis()->SetTitleSize(0.06);
   hframe_copy620->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy620->GetYaxis()->SetTitleFont(42);
   hframe_copy620->GetZaxis()->SetLabelFont(42);
   hframe_copy620->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy620->GetZaxis()->SetLabelSize(0.05);
   hframe_copy620->GetZaxis()->SetTitleSize(0.06);
   hframe_copy620->GetZaxis()->SetTitleFont(42);
   hframe_copy620->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll);
}
