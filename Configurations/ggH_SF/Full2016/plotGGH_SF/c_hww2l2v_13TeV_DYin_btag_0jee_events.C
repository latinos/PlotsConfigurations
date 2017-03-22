void c_hww2l2v_13TeV_DYin_btag_0jee_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_btag_0jee_events/cc
//=========  (Tue Mar 21 11:46:28 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_btag_0jee_events = new TCanvas("cchww2l2v_13TeV_DYin_btag_0jee_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_btag_0jee_events->Range(-0.4,-393.9762,2.1,2636.61);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetFrameBorderMode(0);
   
   TH1F *hframe127 = new TH1F("hframe127","",1000,0,2);
   hframe127->SetMinimum(0);
   hframe127->SetMaximum(2485.081);
   hframe127->SetDirectory(0);
   hframe127->SetStats(0);
   hframe127->SetLineStyle(0);
   hframe127->SetMarkerStyle(20);
   hframe127->GetXaxis()->SetTitle("events");
   hframe127->GetXaxis()->SetNdivisions(506);
   hframe127->GetXaxis()->SetLabelFont(42);
   hframe127->GetXaxis()->SetLabelOffset(0.007);
   hframe127->GetXaxis()->SetLabelSize(0.05);
   hframe127->GetXaxis()->SetTitleSize(0.06);
   hframe127->GetXaxis()->SetTitleOffset(0.9);
   hframe127->GetXaxis()->SetTitleFont(42);
   hframe127->GetYaxis()->SetTitle("Events");
   hframe127->GetYaxis()->SetLabelFont(42);
   hframe127->GetYaxis()->SetLabelOffset(0.007);
   hframe127->GetYaxis()->SetLabelSize(0.05);
   hframe127->GetYaxis()->SetTitleSize(0.06);
   hframe127->GetYaxis()->SetTitleOffset(1.25);
   hframe127->GetYaxis()->SetTitleFont(42);
   hframe127->GetZaxis()->SetLabelFont(42);
   hframe127->GetZaxis()->SetLabelOffset(0.007);
   hframe127->GetZaxis()->SetLabelSize(0.05);
   hframe127->GetZaxis()->SetTitleSize(0.06);
   hframe127->GetZaxis()->SetTitleFont(42);
   hframe127->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29","thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->SetMaximum(602.4635);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_29);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->SetBinContent(1,507.7023);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->SetBinError(1,54.14837);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->SetEntries(585);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->SetBinContent(1,35.22134);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->SetBinError(1,1.131333);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->SetEntries(1073);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events129->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->SetBinContent(1,5.524694);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->SetBinError(1,0.9834141);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->SetEntries(45);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events130->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->SetBinContent(1,0.1223752);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->SetBinError(1,0.0573061);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->SetEntries(23);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events131->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->SetBinContent(1,25.00848);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->SetBinError(1,1.037614);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->SetEntries(5578);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->SetBinContent(1,0.1955504);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->SetBinError(1,0.05819787);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->SetEntries(18);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30","thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->SetMaximum(0.2664357);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events_stack_30);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->SetBinContent(1,0.1955504);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->SetBinError(1,0.05819787);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->SetEntries(18);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events134->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jee_events->Draw("hist same noclear");
   
   Double_t _fx3021[1] = {
   1};
   Double_t _fy3021[1] = {
   963};
   Double_t _felx3021[1] = {
   1};
   Double_t _fely3021[1] = {
   31.02752};
   Double_t _fehx3021[1] = {
   1};
   Double_t _fehy3021[1] = {
   32.04368};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,2.2);
   Graph_Graph3021->SetMinimum(925.6654);
   Graph_Graph3021->SetMaximum(1001.351);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineStyle(0);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_btag_0jee_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_btag_0jee_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy135 = new TH1F("hframe_copy135","",1000,0,2);
   hframe_copy135->SetMinimum(0);
   hframe_copy135->SetMaximum(2485.081);
   hframe_copy135->SetDirectory(0);
   hframe_copy135->SetStats(0);
   hframe_copy135->SetLineStyle(0);
   hframe_copy135->SetMarkerStyle(20);
   hframe_copy135->GetXaxis()->SetTitle("events");
   hframe_copy135->GetXaxis()->SetNdivisions(506);
   hframe_copy135->GetXaxis()->SetLabelFont(42);
   hframe_copy135->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy135->GetXaxis()->SetLabelSize(0.05);
   hframe_copy135->GetXaxis()->SetTitleSize(0.06);
   hframe_copy135->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy135->GetXaxis()->SetTitleFont(42);
   hframe_copy135->GetYaxis()->SetTitle("Events");
   hframe_copy135->GetYaxis()->SetLabelFont(42);
   hframe_copy135->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy135->GetYaxis()->SetLabelSize(0.05);
   hframe_copy135->GetYaxis()->SetTitleSize(0.06);
   hframe_copy135->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy135->GetYaxis()->SetTitleFont(42);
   hframe_copy135->GetZaxis()->SetLabelFont(42);
   hframe_copy135->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy135->GetZaxis()->SetLabelSize(0.05);
   hframe_copy135->GetZaxis()->SetTitleSize(0.06);
   hframe_copy135->GetZaxis()->SetTitleFont(42);
   hframe_copy135->Draw("sameaxis");
   cchww2l2v_13TeV_DYin_btag_0jee_events->Modified();
   cchww2l2v_13TeV_DYin_btag_0jee_events->cd();
   cchww2l2v_13TeV_DYin_btag_0jee_events->SetSelected(cchww2l2v_13TeV_DYin_btag_0jee_events);
}
