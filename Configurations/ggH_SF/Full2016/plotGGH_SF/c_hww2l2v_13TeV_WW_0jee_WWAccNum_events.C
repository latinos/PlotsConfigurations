void c_hww2l2v_13TeV_WW_0jee_WWAccNum_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_WW_0jee_WWAccNum_events/cc
//=========  (Tue Mar 21 11:46:39 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_WW_0jee_WWAccNum_events = new TCanvas("cchww2l2v_13TeV_WW_0jee_WWAccNum_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetHighLightColor(2);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->Range(-0.4,-2109.111,2.1,14114.82);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetFillColor(0);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetBorderMode(0);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetBorderSize(2);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetTickx(1);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetTicky(1);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetFrameBorderMode(0);
   
   TH1F *hframe244 = new TH1F("hframe244","",1000,0,2);
   hframe244->SetMinimum(0);
   hframe244->SetMaximum(13303.62);
   hframe244->SetDirectory(0);
   hframe244->SetStats(0);
   hframe244->SetLineStyle(0);
   hframe244->SetMarkerStyle(20);
   hframe244->GetXaxis()->SetTitle("events");
   hframe244->GetXaxis()->SetNdivisions(506);
   hframe244->GetXaxis()->SetLabelFont(42);
   hframe244->GetXaxis()->SetLabelOffset(0.007);
   hframe244->GetXaxis()->SetLabelSize(0.05);
   hframe244->GetXaxis()->SetTitleSize(0.06);
   hframe244->GetXaxis()->SetTitleOffset(0.9);
   hframe244->GetXaxis()->SetTitleFont(42);
   hframe244->GetYaxis()->SetTitle("Events");
   hframe244->GetYaxis()->SetLabelFont(42);
   hframe244->GetYaxis()->SetLabelOffset(0.007);
   hframe244->GetYaxis()->SetLabelSize(0.05);
   hframe244->GetYaxis()->SetTitleSize(0.06);
   hframe244->GetYaxis()->SetTitleOffset(1.25);
   hframe244->GetYaxis()->SetTitleFont(42);
   hframe244->GetZaxis()->SetLabelFont(42);
   hframe244->GetZaxis()->SetLabelOffset(0.007);
   hframe244->GetZaxis()->SetLabelSize(0.05);
   hframe244->GetZaxis()->SetTitleSize(0.06);
   hframe244->GetZaxis()->SetTitleFont(42);
   hframe244->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->SetName("thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events");
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55","thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->SetMaximum(3180.596);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_55);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->SetBinContent(1,1664.586);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->SetBinError(1,82.39919);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->SetEntries(1413);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events245->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Add(new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246 = new TH1D("new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->SetBinContent(1,255.9072);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->SetBinError(1,3.105297);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->SetEntries(7448);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events246->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Add(new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->SetBinContent(1,850.8497);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->SetBinError(1,12.3937);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->SetEntries(5991);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events247->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Add(new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->SetBinContent(1,1.159985);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->SetBinError(1,0.1845431);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events248->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Add(new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->SetBinContent(1,255.8438);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->SetBinError(1,78.34615);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->SetEntries(10516);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events249->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Add(new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->SetBinContent(1,0.7931132);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->SetBinError(1,0.1212552);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->SetEntries(51);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events250->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events,"");
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->SetName("thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events");
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56","thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->SetMaximum(0.9600868);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events_stack_56);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->SetBinContent(1,0.7931132);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->SetBinError(1,0.1212552);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->SetEntries(51);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events251->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events,"");
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_WWAccNum_events->Draw("hist same noclear");
   
   Double_t _fx3036[1] = {
   1};
   Double_t _fy3036[1] = {
   5249};
   Double_t _felx3036[1] = {
   1};
   Double_t _fely3036[1] = {
   72.44924};
   Double_t _fehx3036[1] = {
   1};
   Double_t _fehy3036[1] = {
   73.45617};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,2.2);
   Graph_Graph3036->SetMinimum(5161.96);
   Graph_Graph3036->SetMaximum(5337.047);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineStyle(0);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_0jee_WWAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"L = 35.9/fb (13 TeV)");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_0jee_WWAccNum_events","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_0jee_WWAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_0jee_WWAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_WWAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_WWAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_WWAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_0jee_WWAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy252 = new TH1F("hframe_copy252","",1000,0,2);
   hframe_copy252->SetMinimum(0);
   hframe_copy252->SetMaximum(13303.62);
   hframe_copy252->SetDirectory(0);
   hframe_copy252->SetStats(0);
   hframe_copy252->SetLineStyle(0);
   hframe_copy252->SetMarkerStyle(20);
   hframe_copy252->GetXaxis()->SetTitle("events");
   hframe_copy252->GetXaxis()->SetNdivisions(506);
   hframe_copy252->GetXaxis()->SetLabelFont(42);
   hframe_copy252->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy252->GetXaxis()->SetLabelSize(0.05);
   hframe_copy252->GetXaxis()->SetTitleSize(0.06);
   hframe_copy252->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy252->GetXaxis()->SetTitleFont(42);
   hframe_copy252->GetYaxis()->SetTitle("Events");
   hframe_copy252->GetYaxis()->SetLabelFont(42);
   hframe_copy252->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy252->GetYaxis()->SetLabelSize(0.05);
   hframe_copy252->GetYaxis()->SetTitleSize(0.06);
   hframe_copy252->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy252->GetYaxis()->SetTitleFont(42);
   hframe_copy252->GetZaxis()->SetLabelFont(42);
   hframe_copy252->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy252->GetZaxis()->SetLabelSize(0.05);
   hframe_copy252->GetZaxis()->SetTitleSize(0.06);
   hframe_copy252->GetZaxis()->SetTitleFont(42);
   hframe_copy252->Draw("sameaxis");
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->Modified();
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->cd();
   cchww2l2v_13TeV_WW_0jee_WWAccNum_events->SetSelected(cchww2l2v_13TeV_WW_0jee_WWAccNum_events);
}
