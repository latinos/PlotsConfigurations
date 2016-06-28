void c_wh3l_zg_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt2/cc
//=========  (Tue Jun 28 02:23:00 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_pt2 = new TCanvas("ccwh3l_zg_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_zg_13TeV_pt2->Range(-88,-32.73873,524.5,219.0976);
   ccwh3l_zg_13TeV_pt2->SetFillColor(0);
   ccwh3l_zg_13TeV_pt2->SetBorderMode(0);
   ccwh3l_zg_13TeV_pt2->SetBorderSize(2);
   ccwh3l_zg_13TeV_pt2->SetTickx(1);
   ccwh3l_zg_13TeV_pt2->SetTicky(1);
   ccwh3l_zg_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe251 = new TH1F("hframe251","",1000,10,500);
   hframe251->SetMinimum(0);
   hframe251->SetMaximum(206.5058);
   hframe251->SetDirectory(0);
   hframe251->SetStats(0);
   hframe251->SetLineStyle(0);
   hframe251->SetMarkerStyle(20);
   hframe251->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe251->GetXaxis()->SetNdivisions(506);
   hframe251->GetXaxis()->SetLabelFont(42);
   hframe251->GetXaxis()->SetLabelOffset(0.007);
   hframe251->GetXaxis()->SetLabelSize(0.05);
   hframe251->GetXaxis()->SetTitleSize(0.06);
   hframe251->GetXaxis()->SetTitleOffset(0.9);
   hframe251->GetXaxis()->SetTitleFont(42);
   hframe251->GetYaxis()->SetTitle("Events");
   hframe251->GetYaxis()->SetLabelFont(42);
   hframe251->GetYaxis()->SetLabelOffset(0.007);
   hframe251->GetYaxis()->SetLabelSize(0.05);
   hframe251->GetYaxis()->SetTitleSize(0.06);
   hframe251->GetYaxis()->SetTitleOffset(1.25);
   hframe251->GetYaxis()->SetTitleFont(42);
   hframe251->GetZaxis()->SetLabelFont(42);
   hframe251->GetZaxis()->SetLabelOffset(0.007);
   hframe251->GetZaxis()->SetLabelSize(0.05);
   hframe251->GetZaxis()->SetTitleSize(0.06);
   hframe251->GetZaxis()->SetTitleFont(42);
   hframe251->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51","thsBackground_grouped_wh3l_zg_13TeV_pt2",50,10,500);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetMinimum(-1.969443);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetMaximum(77.31954);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt2252 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt2252","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetBinContent(1,-0.6940073);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetBinContent(2,14.24468);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetBinContent(3,10.02369);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetBinContent(4,0.552594);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetBinError(1,1.275436);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetBinError(2,3.190872);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetBinError(3,2.581071);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetBinError(4,0.3476626);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetEntries(442);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt2253 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt2253","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->SetBinContent(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->SetBinError(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WW_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt2254 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt2254","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->SetBinContent(2,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->SetBinError(2,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt2255 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt2255","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinContent(1,12.09518);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinContent(2,58.37716);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinContent(3,28.54158);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinContent(4,1.131822);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinContent(5,0.04775747);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinError(1,1.348284);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinError(2,2.877026);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinError(3,2.03791);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinError(4,0.3973785);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetBinError(5,0.1415242);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetEntries(1327);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt2256 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt2256","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetBinContent(1,0.06815823);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetBinContent(2,0.4861051);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetBinContent(3,0.1820779);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetBinError(1,0.04889743);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetBinError(2,0.1415855);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetBinError(3,0.08368756);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt2257 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt2257","histo_ZZ",50,10,500);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetBinContent(1,0.06815823);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetBinContent(2,0.4861051);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetBinContent(3,0.1820779);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetBinError(1,0.04889743);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetBinError(2,0.1415855);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetBinError(3,0.08368756);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetEntries(20);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt2258 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt2258","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetBinContent(1,0.003289581);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetBinContent(2,0.04429939);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetBinContent(3,0.009849778);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetBinContent(4,0.003365285);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetBinError(1,0.001070718);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetBinError(2,0.007114819);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetBinError(3,0.002892738);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetBinError(4,0.002410604);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt2,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt2");
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52","thsSignal_grouped_wh3l_zg_13TeV_pt2",50,10,500);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetMaximum(0.05398492);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt2259 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt2259","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetBinContent(1,0.003289581);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetBinContent(2,0.04429939);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetBinContent(3,0.009849778);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetBinContent(4,0.003365285);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetBinError(1,0.001070718);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetBinError(2,0.007114819);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetBinError(3,0.002892738);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetBinError(4,0.002410604);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2259->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt2,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3051[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3051[50] = {
   11.72942,
   73.96946,
   39.03945,
   1.72703,
   0.04775747,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3051[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3051[50] = {
   2.73833,
   7.759363,
   5.668719,
   0.786126,
   0.04777488,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3051[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3051[50] = {
   2.16437,
   7.759374,
   5.668715,
   0.7861264,
   0.1415301,
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
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,549);
   Graph_Graph3051->SetMinimum(-8.172902);
   Graph_Graph3051->SetMaximum(89.90172);
   Graph_Graph3051->SetDirectory(0);
   Graph_Graph3051->SetStats(0);
   Graph_Graph3051->SetLineStyle(0);
   Graph_Graph3051->SetMarkerStyle(20);
   Graph_Graph3051->GetXaxis()->SetLabelFont(42);
   Graph_Graph3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3051->GetXaxis()->SetTitleFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3051->GetYaxis()->SetTitleFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3051);
   
   grae->Draw("2");
   
   Double_t _fx3052[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3052[50] = {
   18,
   74,
   36,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3052[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3052[50] = {
   4.202964,
   8.583015,
   5.972111,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3052[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3052[50] = {
   5.321116,
   9.641304,
   7.055691,
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(50,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,549);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(92.00543);
   Graph_Graph3052->SetDirectory(0);
   Graph_Graph3052->SetStats(0);
   Graph_Graph3052->SetLineStyle(0);
   Graph_Graph3052->SetMarkerStyle(20);
   Graph_Graph3052->GetXaxis()->SetLabelFont(42);
   Graph_Graph3052->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3052->GetXaxis()->SetTitleFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3052->GetYaxis()->SetTitleFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3052);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt2","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy260 = new TH1F("hframe_copy260","",1000,10,500);
   hframe_copy260->SetMinimum(0);
   hframe_copy260->SetMaximum(206.5058);
   hframe_copy260->SetDirectory(0);
   hframe_copy260->SetStats(0);
   hframe_copy260->SetLineStyle(0);
   hframe_copy260->SetMarkerStyle(20);
   hframe_copy260->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy260->GetXaxis()->SetNdivisions(506);
   hframe_copy260->GetXaxis()->SetLabelFont(42);
   hframe_copy260->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetXaxis()->SetLabelSize(0.05);
   hframe_copy260->GetXaxis()->SetTitleSize(0.06);
   hframe_copy260->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy260->GetXaxis()->SetTitleFont(42);
   hframe_copy260->GetYaxis()->SetTitle("Events");
   hframe_copy260->GetYaxis()->SetLabelFont(42);
   hframe_copy260->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetYaxis()->SetLabelSize(0.05);
   hframe_copy260->GetYaxis()->SetTitleSize(0.06);
   hframe_copy260->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy260->GetYaxis()->SetTitleFont(42);
   hframe_copy260->GetZaxis()->SetLabelFont(42);
   hframe_copy260->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetZaxis()->SetLabelSize(0.05);
   hframe_copy260->GetZaxis()->SetTitleSize(0.06);
   hframe_copy260->GetZaxis()->SetTitleFont(42);
   hframe_copy260->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt2->Modified();
   ccwh3l_zg_13TeV_pt2->cd();
   ccwh3l_zg_13TeV_pt2->SetSelected(ccwh3l_zg_13TeV_pt2);
}
