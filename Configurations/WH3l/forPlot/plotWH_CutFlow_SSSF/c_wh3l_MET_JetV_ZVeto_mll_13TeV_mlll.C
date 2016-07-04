void c_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll/cc
//=========  (Sun Jul  3 01:22:29 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mlll->Range(76,-0.2051016,101,1.372603);
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
   hframe611->SetMaximum(1.293718);
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
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->SetMinimum(-0.002325781);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_123->SetMaximum(1.081471);
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
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(0,-0.2946364);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(2,0.105603);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(8,0.514986);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(39,0.1066257);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinContent(41,2.470047);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(0,0.287696);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(2,0.105603);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(8,0.514986);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(39,0.1066257);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetBinError(41,1.214101);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll612->SetEntries(33);

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
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetBinContent(0,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetBinContent(41,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetBinError(0,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetBinError(41,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll613->SetEntries(2);

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
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(0,0.003638329);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(2,0.000833863);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(3,0.002110594);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(8,0.001598179);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(10,0.001875808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(31,0.001994133);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinContent(41,0.09074221);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(0,0.002574208);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(2,0.000833863);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(3,0.002110594);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(8,0.001598179);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(10,0.001875808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(31,0.001994133);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetBinError(41,0.01627735);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll614->SetEntries(62);

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
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinContent(41,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetBinError(41,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll615->SetEntries(1);

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
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinContent(41,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetBinError(41,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll616->SetEntries(2);

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
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(0,0.08415457);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(2,0.005962193);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(3,0.00355102);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(7,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(10,0.006201025);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(11,0.00484358);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(13,0.004009541);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(14,0.005223083);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(16,0.005599787);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(17,0.001741456);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(18,0.005329017);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(22,0.003668249);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(28,0.01199452);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(29,0.00594491);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(30,0.002697298);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(31,0.003657803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(34,0.006015707);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(36,0.004876467);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(37,0.005630503);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(40,0.004000224);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinContent(41,0.4420733);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(0,0.02140394);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(2,0.005962193);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(3,0.00355102);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(7,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(10,0.006201025);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(11,0.00484358);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(13,0.004009541);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(14,0.005223083);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(16,0.005599787);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(17,0.001741456);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(18,0.005329017);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(22,0.003668249);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(28,0.008488671);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(29,0.00594491);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(30,0.002697298);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(31,0.003657803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(34,0.006015707);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(36,0.004876467);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(37,0.005630503);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(40,0.004000224);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetBinError(41,0.04880479);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll617->SetEntries(128);

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
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(0,0.03706913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(1,0.001619049);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(4,0.0003056084);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(7,0.0006839016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(8,0.0009028082);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(9,0.00147937);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(10,0.001615997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(11,0.0003720735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(12,0.003006798);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(13,0.0001670827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(14,0.001451861);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(15,0.000358745);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(16,0.0019496);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(17,-0.0002858148);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(18,0.001550597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(19,0.0003061784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(20,0.0004491749);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(21,0.001513023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(22,0.0016339);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(24,0.002898642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(25,0.0004140987);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(27,0.001798686);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(28,0.002078047);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(29,0.001919134);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(30,0.001469533);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(31,0.0003844836);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(32,0.003994755);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(34,0.002969826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(35,0.0005998736);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(36,0.0003207646);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(37,0.0001928041);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(39,0.001940039);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(40,0.0004275682);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinContent(41,0.1993886);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(0,0.006315146);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(1,0.001619049);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(4,0.0001925611);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(7,0.0003527997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(8,0.0005363849);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(9,0.001125228);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(10,0.001615997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(11,0.0003182324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(12,0.002078139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(13,0.0001670827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(14,0.001298801);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(15,0.0002601799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(16,0.001611654);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(17,0.002039967);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(18,0.001082738);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(19,0.0003061784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(20,0.0003176741);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(21,0.001513023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(22,0.001095322);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(24,0.001933042);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(25,0.0003343163);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(27,0.001405093);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(28,0.00116594);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(29,0.001364932);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(30,0.001160323);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(31,0.0003844836);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(32,0.002357333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(34,0.001993884);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(35,0.0004242254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(36,0.0003207646);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(37,0.0001928041);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(39,0.001746447);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(40,0.0003037318);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetBinError(41,0.01451924);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll618->SetEntries(512);
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
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->SetMinimum(-0.002325781);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll_stack_124->SetMaximum(0.006669692);
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
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(0,0.03706913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(1,0.001619049);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(4,0.0003056084);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(7,0.0006839016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(8,0.0009028082);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(9,0.00147937);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(10,0.001615997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(11,0.0003720735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(12,0.003006798);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(13,0.0001670827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(14,0.001451861);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(15,0.000358745);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(16,0.0019496);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(17,-0.0002858148);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(18,0.001550597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(19,0.0003061784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(20,0.0004491749);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(21,0.001513023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(22,0.0016339);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(24,0.002898642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(25,0.0004140987);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(27,0.001798686);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(28,0.002078047);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(29,0.001919134);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(30,0.001469533);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(31,0.0003844836);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(32,0.003994755);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(34,0.002969826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(35,0.0005998736);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(36,0.0003207646);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(37,0.0001928041);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(39,0.001940039);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(40,0.0004275682);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinContent(41,0.1993886);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(0,0.006315146);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(1,0.001619049);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(4,0.0001925611);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(7,0.0003527997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(8,0.0005363849);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(9,0.001125228);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(10,0.001615997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(11,0.0003182324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(12,0.002078139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(13,0.0001670827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(14,0.001298801);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(15,0.0002601799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(16,0.001611654);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(17,0.002039967);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(18,0.001082738);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(19,0.0003061784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(20,0.0003176741);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(21,0.001513023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(22,0.001095322);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(24,0.001933042);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(25,0.0003343163);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(27,0.001405093);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(28,0.00116594);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(29,0.001364932);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(30,0.001160323);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(31,0.0003844836);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(32,0.002357333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(34,0.001993884);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(35,0.0004242254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(36,0.0003207646);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(37,0.0001928041);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(39,0.001746447);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(40,0.0003037318);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetBinError(41,0.01451924);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mlll619->SetEntries(512);
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
   0,
   0.112399,
   0.005661615,
   0,
   0,
   0,
   0.005488627,
   0.5165842,
   0,
   0.008076833,
   0.00484358,
   0,
   0.004009541,
   0.005223083,
   0,
   0.005599787,
   0.001741456,
   0.005329018,
   0,
   0,
   0,
   0.003668249,
   0,
   0,
   0,
   0,
   0,
   0.01199452,
   0.00594491,
   0.002697298,
   0.005651935,
   0,
   0,
   0.006015707,
   0,
   0.004876467,
   0.005630503,
   0,
   0.1066257,
   0.004000224};
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
   0,
   0.1183238,
   0.006050412,
   0,
   0,
   0,
   0.005504885,
   0.5471289,
   0,
   0.008294063,
   0.004844662,
   0,
   0.004015323,
   0.005231841,
   0,
   0.005600638,
   0.001741688,
   0.005329929,
   0,
   0,
   0,
   0.003668871,
   0,
   0,
   0,
   0,
   0,
   0.008502865,
   0.005965915,
   0.002697492,
   0.005994403,
   0,
   0,
   0.006039518,
   0,
   0.004877191,
   0.005631764,
   0,
   0.112968,
   0.004012923};
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
   0,
   0.1183236,
   0.006049727,
   0,
   0,
   0,
   0.005490238,
   0.5471289,
   0,
   0.008294078,
   0.004844685,
   0,
   0.004014734,
   0.00523279,
   0,
   0.005600655,
   0.001741695,
   0.005329928,
   0,
   0,
   0,
   0.003668607,
   0,
   0,
   0,
   0,
   0,
   0.008503046,
   0.005956679,
   0.002697492,
   0.005993979,
   0,
   0,
   0.006038594,
   0,
   0.004877078,
   0.005631785,
   0,
   0.112968,
   0.004019879};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3123,_fy3123,_felx3123,_fehx3123,_fely3123,_fehy3123);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3123 = new TH1F("Graph_Graph3123","",100,78,102);
   Graph_Graph3123->SetMinimum(-0.1399705);
   Graph_Graph3123->SetMaximum(1.173139);
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   grae = new TGraphAsymmErrors(40,_fx3124,_fy3124,_felx3124,_fehx3124,_fely3124,_fehy3124);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3124 = new TH1F("Graph_Graph3124","",100,78,102);
   Graph_Graph3124->SetMinimum(0);
   Graph_Graph3124->SetMaximum(1.262698);
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
   hframe_copy620->SetMaximum(1.293718);
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
