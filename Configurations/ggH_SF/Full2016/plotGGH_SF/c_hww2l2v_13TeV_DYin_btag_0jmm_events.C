void c_hww2l2v_13TeV_DYin_btag_0jmm_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_btag_0jmm_events/cc
//=========  (Tue Mar 21 11:46:31 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_btag_0jmm_events = new TCanvas("cchww2l2v_13TeV_DYin_btag_0jmm_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->Range(-0.4,-1397.453,2.1,9352.185);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetFrameBorderMode(0);
   
   TH1F *hframe163 = new TH1F("hframe163","",1000,0,2);
   hframe163->SetMinimum(0);
   hframe163->SetMaximum(8814.703);
   hframe163->SetDirectory(0);
   hframe163->SetStats(0);
   hframe163->SetLineStyle(0);
   hframe163->SetMarkerStyle(20);
   hframe163->GetXaxis()->SetTitle("events");
   hframe163->GetXaxis()->SetNdivisions(506);
   hframe163->GetXaxis()->SetLabelFont(42);
   hframe163->GetXaxis()->SetLabelOffset(0.007);
   hframe163->GetXaxis()->SetLabelSize(0.05);
   hframe163->GetXaxis()->SetTitleSize(0.06);
   hframe163->GetXaxis()->SetTitleOffset(0.9);
   hframe163->GetXaxis()->SetTitleFont(42);
   hframe163->GetYaxis()->SetTitle("Events");
   hframe163->GetYaxis()->SetLabelFont(42);
   hframe163->GetYaxis()->SetLabelOffset(0.007);
   hframe163->GetYaxis()->SetLabelSize(0.05);
   hframe163->GetYaxis()->SetTitleSize(0.06);
   hframe163->GetYaxis()->SetTitleOffset(1.25);
   hframe163->GetYaxis()->SetTitleFont(42);
   hframe163->GetZaxis()->SetLabelFont(42);
   hframe163->GetZaxis()->SetLabelOffset(0.007);
   hframe163->GetZaxis()->SetLabelSize(0.05);
   hframe163->GetZaxis()->SetTitleSize(0.06);
   hframe163->GetZaxis()->SetTitleFont(42);
   hframe163->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37","thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->SetMaximum(1736.244);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_37);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->SetBinContent(1,1450.144);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->SetBinError(1,93.35244);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->SetEntries(1491);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events164->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->SetBinContent(1,107.4924);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->SetBinError(1,2.108643);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->SetEntries(2940);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events165->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->SetBinContent(1,18.16653);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->SetBinError(1,1.97137);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->SetEntries(139);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events166->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->SetBinContent(1,0.1934236);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->SetBinError(1,0.06219726);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->SetEntries(44);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events167->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->SetBinContent(1,77.332);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->SetBinError(1,2.016674);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->SetEntries(15058);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events168->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->SetBinContent(1,0.2376372);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->SetBinError(1,0.07279825);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->SetEntries(22);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events169->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38","thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->SetMaximum(0.3259572);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events_stack_38);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->SetBinContent(1,0.2376372);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->SetBinError(1,0.07279825);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->SetEntries(22);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events170->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jmm_events->Draw("hist same noclear");
   
   Double_t _fx3026[1] = {
   1};
   Double_t _fy3026[1] = {
   3467};
   Double_t _felx3026[1] = {
   1};
   Double_t _fely3026[1] = {
   58.87967};
   Double_t _fehx3026[1] = {
   1};
   Double_t _fehy3026[1] = {
   59.88819};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,2.2);
   Graph_Graph3026->SetMinimum(3396.244);
   Graph_Graph3026->SetMaximum(3538.765);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_btag_0jmm_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_btag_0jmm_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy171 = new TH1F("hframe_copy171","",1000,0,2);
   hframe_copy171->SetMinimum(0);
   hframe_copy171->SetMaximum(8814.703);
   hframe_copy171->SetDirectory(0);
   hframe_copy171->SetStats(0);
   hframe_copy171->SetLineStyle(0);
   hframe_copy171->SetMarkerStyle(20);
   hframe_copy171->GetXaxis()->SetTitle("events");
   hframe_copy171->GetXaxis()->SetNdivisions(506);
   hframe_copy171->GetXaxis()->SetLabelFont(42);
   hframe_copy171->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy171->GetXaxis()->SetLabelSize(0.05);
   hframe_copy171->GetXaxis()->SetTitleSize(0.06);
   hframe_copy171->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy171->GetXaxis()->SetTitleFont(42);
   hframe_copy171->GetYaxis()->SetTitle("Events");
   hframe_copy171->GetYaxis()->SetLabelFont(42);
   hframe_copy171->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy171->GetYaxis()->SetLabelSize(0.05);
   hframe_copy171->GetYaxis()->SetTitleSize(0.06);
   hframe_copy171->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy171->GetYaxis()->SetTitleFont(42);
   hframe_copy171->GetZaxis()->SetLabelFont(42);
   hframe_copy171->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy171->GetZaxis()->SetLabelSize(0.05);
   hframe_copy171->GetZaxis()->SetTitleSize(0.06);
   hframe_copy171->GetZaxis()->SetTitleFont(42);
   hframe_copy171->Draw("sameaxis");
   cchww2l2v_13TeV_DYin_btag_0jmm_events->Modified();
   cchww2l2v_13TeV_DYin_btag_0jmm_events->cd();
   cchww2l2v_13TeV_DYin_btag_0jmm_events->SetSelected(cchww2l2v_13TeV_DYin_btag_0jmm_events);
}
