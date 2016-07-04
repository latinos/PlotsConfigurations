void c_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l/cc
//=========  (Sun Jul  3 01:22:27 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Range(-1.2,-1.353194,6.3,9.055993);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe591 = new TH1F("hframe591","",1000,0,6);
   hframe591->SetMinimum(0);
   hframe591->SetMaximum(8.535534);
   hframe591->SetDirectory(0);
   hframe591->SetStats(0);
   hframe591->SetLineStyle(0);
   hframe591->SetMarkerStyle(20);
   hframe591->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe591->GetXaxis()->SetNdivisions(506);
   hframe591->GetXaxis()->SetLabelFont(42);
   hframe591->GetXaxis()->SetLabelOffset(0.007);
   hframe591->GetXaxis()->SetLabelSize(0.05);
   hframe591->GetXaxis()->SetTitleSize(0.06);
   hframe591->GetXaxis()->SetTitleOffset(0.9);
   hframe591->GetXaxis()->SetTitleFont(42);
   hframe591->GetYaxis()->SetTitle("Events");
   hframe591->GetYaxis()->SetLabelFont(42);
   hframe591->GetYaxis()->SetLabelOffset(0.007);
   hframe591->GetYaxis()->SetLabelSize(0.05);
   hframe591->GetYaxis()->SetTitleSize(0.06);
   hframe591->GetYaxis()->SetTitleOffset(1.25);
   hframe591->GetYaxis()->SetTitleFont(42);
   hframe591->GetZaxis()->SetLabelFont(42);
   hframe591->GetZaxis()->SetLabelOffset(0.007);
   hframe591->GetZaxis()->SetLabelSize(0.05);
   hframe591->GetZaxis()->SetTitleSize(0.06);
   hframe591->GetZaxis()->SetTitleFont(42);
   hframe591->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->SetMinimum(-0.2470429);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->SetMaximum(2.765894);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_119);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetBinContent(1,0.08333536);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetBinContent(2,1.657257);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetBinContent(3,1.162034);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetBinError(1,0.3303783);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetBinError(2,0.9769285);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetBinError(3,0.8837439);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l592->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->SetBinContent(2,0.02651546);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->SetBinError(2,0.01918247);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l593->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetBinContent(1,0.02267382);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetBinContent(2,0.06884787);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetBinContent(3,0.01127143);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetBinError(1,0.008697092);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetBinError(2,0.01356934);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetBinError(3,0.005197292);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l594->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l595->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->SetBinContent(1,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->SetBinContent(3,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->SetBinError(1,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->SetBinError(3,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l596->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetBinContent(1,0.1151861);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetBinContent(2,0.362889);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetBinContent(3,0.1445878);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetBinError(1,0.02440598);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetBinError(2,0.0439286);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetBinError(3,0.02846379);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l597->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetBinContent(1,0.1261286);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetBinContent(2,0.1302437);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetBinContent(3,0.02717941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetBinError(1,0.01259089);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetBinError(2,0.01139766);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetBinError(3,0.004627101);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l598->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->SetMaximum(0.1487234);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l_stack_120);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetBinContent(1,0.1261286);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetBinContent(2,0.1302437);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetBinContent(3,0.02717941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetBinError(1,0.01259089);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetBinError(2,0.01139766);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetBinError(3,0.004627101);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l599->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3119[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3119[5] = {
   0.3086049,
   2.115509,
   1.360607,
   0,
   0};
   Double_t _felx3119[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3119[5] = {
   0.2074079,
   1.204738,
   1.042796,
   0,
   0};
   Double_t _fehx3119[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3119[5] = {
   0.4524693,
   1.204729,
   1.042796,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3119,_fy3119,_felx3119,_fehx3119,_fely3119,_fehy3119);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3119 = new TH1F("Graph_Graph3119","",100,0,6.6);
   Graph_Graph3119->SetMinimum(0);
   Graph_Graph3119->SetMaximum(3.652261);
   Graph_Graph3119->SetDirectory(0);
   Graph_Graph3119->SetStats(0);
   Graph_Graph3119->SetLineStyle(0);
   Graph_Graph3119->SetMarkerStyle(20);
   Graph_Graph3119->GetXaxis()->SetLabelFont(42);
   Graph_Graph3119->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3119->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3119->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3119->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3119->GetXaxis()->SetTitleFont(42);
   Graph_Graph3119->GetYaxis()->SetLabelFont(42);
   Graph_Graph3119->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3119->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3119->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3119->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3119->GetYaxis()->SetTitleFont(42);
   Graph_Graph3119->GetZaxis()->SetLabelFont(42);
   Graph_Graph3119->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3119->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3119->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3119->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3119);
   
   grae->Draw("2");
   
   Double_t _fx3120[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3120[5] = {
   2,
   1,
   1,
   0,
   0};
   Double_t _felx3120[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3120[5] = {
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0};
   Double_t _fehx3120[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3120[5] = {
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3120,_fy3120,_felx3120,_fehx3120,_fely3120,_fehy3120);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3120 = new TH1F("Graph_Graph3120","",100,0,6.6);
   Graph_Graph3120->SetMinimum(0);
   Graph_Graph3120->SetMaximum(5.101701);
   Graph_Graph3120->SetDirectory(0);
   Graph_Graph3120->SetStats(0);
   Graph_Graph3120->SetLineStyle(0);
   Graph_Graph3120->SetMarkerStyle(20);
   Graph_Graph3120->GetXaxis()->SetLabelFont(42);
   Graph_Graph3120->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3120->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3120->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3120->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3120->GetXaxis()->SetTitleFont(42);
   Graph_Graph3120->GetYaxis()->SetLabelFont(42);
   Graph_Graph3120->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3120->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3120->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3120->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3120->GetYaxis()->SetTitleFont(42);
   Graph_Graph3120->GetZaxis()->SetLabelFont(42);
   Graph_Graph3120->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3120->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3120->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3120->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3120);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy600 = new TH1F("hframe_copy600","",1000,0,6);
   hframe_copy600->SetMinimum(0);
   hframe_copy600->SetMaximum(8.535534);
   hframe_copy600->SetDirectory(0);
   hframe_copy600->SetStats(0);
   hframe_copy600->SetLineStyle(0);
   hframe_copy600->SetMarkerStyle(20);
   hframe_copy600->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy600->GetXaxis()->SetNdivisions(506);
   hframe_copy600->GetXaxis()->SetLabelFont(42);
   hframe_copy600->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy600->GetXaxis()->SetLabelSize(0.05);
   hframe_copy600->GetXaxis()->SetTitleSize(0.06);
   hframe_copy600->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy600->GetXaxis()->SetTitleFont(42);
   hframe_copy600->GetYaxis()->SetTitle("Events");
   hframe_copy600->GetYaxis()->SetLabelFont(42);
   hframe_copy600->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy600->GetYaxis()->SetLabelSize(0.05);
   hframe_copy600->GetYaxis()->SetTitleSize(0.06);
   hframe_copy600->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy600->GetYaxis()->SetTitleFont(42);
   hframe_copy600->GetZaxis()->SetLabelFont(42);
   hframe_copy600->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy600->GetZaxis()->SetLabelSize(0.05);
   hframe_copy600->GetZaxis()->SetTitleSize(0.06);
   hframe_copy600->GetZaxis()->SetTitleFont(42);
   hframe_copy600->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_drllmin3l);
}
