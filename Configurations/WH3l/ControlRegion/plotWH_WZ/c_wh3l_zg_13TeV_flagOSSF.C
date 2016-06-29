void c_wh3l_zg_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_flagOSSF/cc
//=========  (Tue Jun 28 16:49:12 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_flagOSSF = new TCanvas("ccwh3l_zg_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_zg_13TeV_flagOSSF->Range(-0.4,-56.45707,2.1,377.8281);
   ccwh3l_zg_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_zg_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_zg_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_zg_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_zg_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_zg_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe217 = new TH1F("hframe217","",1000,0,2);
   hframe217->SetMinimum(0);
   hframe217->SetMaximum(356.1138);
   hframe217->SetDirectory(0);
   hframe217->SetStats(0);
   hframe217->SetLineStyle(0);
   hframe217->SetMarkerStyle(20);
   hframe217->GetXaxis()->SetTitle("flag OSSF");
   hframe217->GetXaxis()->SetNdivisions(506);
   hframe217->GetXaxis()->SetLabelFont(42);
   hframe217->GetXaxis()->SetLabelOffset(0.007);
   hframe217->GetXaxis()->SetLabelSize(0.05);
   hframe217->GetXaxis()->SetTitleSize(0.06);
   hframe217->GetXaxis()->SetTitleOffset(0.9);
   hframe217->GetXaxis()->SetTitleFont(42);
   hframe217->GetYaxis()->SetTitle("Events");
   hframe217->GetYaxis()->SetLabelFont(42);
   hframe217->GetYaxis()->SetLabelOffset(0.007);
   hframe217->GetYaxis()->SetLabelSize(0.05);
   hframe217->GetYaxis()->SetTitleSize(0.06);
   hframe217->GetYaxis()->SetTitleOffset(1.25);
   hframe217->GetYaxis()->SetTitleFont(42);
   hframe217->GetZaxis()->SetLabelFont(42);
   hframe217->GetZaxis()->SetLabelOffset(0.007);
   hframe217->GetZaxis()->SetLabelSize(0.05);
   hframe217->GetZaxis()->SetTitleSize(0.06);
   hframe217->GetZaxis()->SetTitleFont(42);
   hframe217->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28","thsBackground_grouped_wh3l_zg_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->SetMinimum(-0.3196247);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->SetMaximum(137.4888);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_28);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->SetBinContent(1,-0.1790202);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->SetBinContent(2,24.327);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->SetBinError(1,0.1406046);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->SetBinError(2,4.336077);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF218->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->SetBinContent(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->SetBinError(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF219->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->SetBinContent(2,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->SetBinError(2,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF220->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->SetBinContent(1,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->SetBinContent(2,104.0902);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->SetBinError(1,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->SetBinError(2,3.861654);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF221->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->SetBinContent(1,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->SetBinContent(2,0.6964979);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->SetBinError(1,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->SetBinError(2,0.1668938);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->SetBinContent(1,0.05976575);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->SetBinContent(2,1.818758);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->SetBinError(1,0.01698012);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->SetBinError(2,0.09968216);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Draw("hist same");
   
   Double_t _fx3055[2] = {
   0.5,
   1.5};
   Double_t _fy3055[2] = {
   -0.005274147,
   130.9417};
   Double_t _felx3055[2] = {
   0.5,
   0.5};
   Double_t _fely3055[2] = {
   0.2768418,
   11.53661};
   Double_t _fehx3055[2] = {
   0.5,
   0.5};
   Double_t _fehy3055[2] = {
   0.2768418,
   11.53662};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3055,_fy3055,_felx3055,_fehx3055,_fely3055,_fehy3055);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3055 = new TH1F("Graph_Graph3055","",100,0,2.2);
   Graph_Graph3055->SetMinimum(-14.55816);
   Graph_Graph3055->SetMaximum(156.7544);
   Graph_Graph3055->SetDirectory(0);
   Graph_Graph3055->SetStats(0);
   Graph_Graph3055->SetLineStyle(0);
   Graph_Graph3055->SetMarkerStyle(20);
   Graph_Graph3055->GetXaxis()->SetLabelFont(42);
   Graph_Graph3055->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3055->GetXaxis()->SetTitleFont(42);
   Graph_Graph3055->GetYaxis()->SetLabelFont(42);
   Graph_Graph3055->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3055->GetYaxis()->SetTitleFont(42);
   Graph_Graph3055->GetZaxis()->SetLabelFont(42);
   Graph_Graph3055->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3055);
   
   grae->Draw("2");
   
   Double_t _fx3056[2] = {
   0.5,
   1.5};
   Double_t _fy3056[2] = {
   2,
   131};
   Double_t _felx3056[2] = {
   0.5,
   0.5};
   Double_t _fely3056[2] = {
   1.29183,
   11.43114};
   Double_t _fehx3056[2] = {
   0.5,
   0.5};
   Double_t _fehy3056[2] = {
   2.63791,
   12.47494};
   grae = new TGraphAsymmErrors(2,_fx3056,_fy3056,_felx3056,_fehx3056,_fely3056,_fehy3056);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3056 = new TH1F("Graph_Graph3056","",100,0,2.2);
   Graph_Graph3056->SetMinimum(0);
   Graph_Graph3056->SetMaximum(157.7516);
   Graph_Graph3056->SetDirectory(0);
   Graph_Graph3056->SetStats(0);
   Graph_Graph3056->SetLineStyle(0);
   Graph_Graph3056->SetMarkerStyle(20);
   Graph_Graph3056->GetXaxis()->SetLabelFont(42);
   Graph_Graph3056->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3056->GetXaxis()->SetTitleFont(42);
   Graph_Graph3056->GetYaxis()->SetLabelFont(42);
   Graph_Graph3056->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3056->GetYaxis()->SetTitleFont(42);
   Graph_Graph3056->GetZaxis()->SetLabelFont(42);
   Graph_Graph3056->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3056);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy224 = new TH1F("hframe_copy224","",1000,0,2);
   hframe_copy224->SetMinimum(0);
   hframe_copy224->SetMaximum(356.1138);
   hframe_copy224->SetDirectory(0);
   hframe_copy224->SetStats(0);
   hframe_copy224->SetLineStyle(0);
   hframe_copy224->SetMarkerStyle(20);
   hframe_copy224->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy224->GetXaxis()->SetNdivisions(506);
   hframe_copy224->GetXaxis()->SetLabelFont(42);
   hframe_copy224->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy224->GetXaxis()->SetLabelSize(0.05);
   hframe_copy224->GetXaxis()->SetTitleSize(0.06);
   hframe_copy224->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy224->GetXaxis()->SetTitleFont(42);
   hframe_copy224->GetYaxis()->SetTitle("Events");
   hframe_copy224->GetYaxis()->SetLabelFont(42);
   hframe_copy224->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy224->GetYaxis()->SetLabelSize(0.05);
   hframe_copy224->GetYaxis()->SetTitleSize(0.06);
   hframe_copy224->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy224->GetYaxis()->SetTitleFont(42);
   hframe_copy224->GetZaxis()->SetLabelFont(42);
   hframe_copy224->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy224->GetZaxis()->SetLabelSize(0.05);
   hframe_copy224->GetZaxis()->SetTitleSize(0.06);
   hframe_copy224->GetZaxis()->SetTitleFont(42);
   hframe_copy224->Draw("sameaxis");
   ccwh3l_zg_13TeV_flagOSSF->Modified();
   ccwh3l_zg_13TeV_flagOSSF->cd();
   ccwh3l_zg_13TeV_flagOSSF->SetSelected(ccwh3l_zg_13TeV_flagOSSF);
}
