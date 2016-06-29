void c_wh3l_top_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_drllmin3l/cc
//=========  (Tue Jun 28 16:49:08 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_drllmin3l = new TCanvas("ccwh3l_top_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_top_13TeV_drllmin3l->Range(-1.2,-10.46936,6.3,70.0642);
   ccwh3l_top_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_top_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_top_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_top_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_top_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_top_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_top_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_top_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe185 = new TH1F("hframe185","",1000,0,6);
   hframe185->SetMinimum(0);
   hframe185->SetMaximum(66.03753);
   hframe185->SetDirectory(0);
   hframe185->SetStats(0);
   hframe185->SetLineStyle(0);
   hframe185->SetMarkerStyle(20);
   hframe185->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe185->GetXaxis()->SetNdivisions(506);
   hframe185->GetXaxis()->SetLabelFont(42);
   hframe185->GetXaxis()->SetLabelOffset(0.007);
   hframe185->GetXaxis()->SetLabelSize(0.05);
   hframe185->GetXaxis()->SetTitleSize(0.06);
   hframe185->GetXaxis()->SetTitleOffset(0.9);
   hframe185->GetXaxis()->SetTitleFont(42);
   hframe185->GetYaxis()->SetTitle("Events");
   hframe185->GetYaxis()->SetLabelFont(42);
   hframe185->GetYaxis()->SetLabelOffset(0.007);
   hframe185->GetYaxis()->SetLabelSize(0.05);
   hframe185->GetYaxis()->SetTitleSize(0.06);
   hframe185->GetYaxis()->SetTitleOffset(1.25);
   hframe185->GetYaxis()->SetTitleFont(42);
   hframe185->GetZaxis()->SetLabelFont(42);
   hframe185->GetZaxis()->SetLabelOffset(0.007);
   hframe185->GetZaxis()->SetLabelSize(0.05);
   hframe185->GetZaxis()->SetTitleSize(0.06);
   hframe185->GetZaxis()->SetTitleFont(42);
   hframe185->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_top_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24","thsBackground_grouped_wh3l_top_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->SetMinimum(0);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->SetMaximum(27.73576);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_drllmin3l_stack_24);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetBinContent(1,9.248765);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetBinContent(2,21.74688);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetBinContent(3,5.743846);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetBinContent(4,0.9543408);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetBinError(1,2.232288);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetBinError(2,3.432436);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetBinError(3,1.621808);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetBinError(4,0.6931853);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_drllmin3l186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_drllmin3l187 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_drllmin3l187","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetBinContent(1,0.07404612);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetBinContent(2,0.05890807);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetBinContent(3,0.03510752);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetBinError(1,0.03522935);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetBinError(2,0.02953248);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetBinError(3,0.02482492);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_drllmin3l187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetBinContent(1,0.01345461);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetBinContent(2,0.01318496);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetBinContent(3,0.003345496);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetBinError(1,0.002947925);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetBinError(2,0.002806757);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetBinError(3,0.001514812);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_drllmin3l188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetBinContent(1,0.7430855);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetBinContent(2,0.6612947);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetBinContent(3,0.1102867);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetBinError(1,0.3307507);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetBinError(2,0.3140952);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetBinError(3,0.1102867);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_drllmin3l189->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetBinContent(1,0.3408963);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetBinContent(2,0.5422839);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetBinContent(3,0.05850328);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetBinError(1,0.1161147);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetBinError(2,0.1530501);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetBinError(3,0.04729257);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l190->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetBinContent(1,4.669654);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetBinContent(2,3.392459);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetBinContent(3,0.8023008);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetBinContent(4,0.02184727);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetBinError(1,0.159337);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetBinError(2,0.1359838);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetBinError(3,0.06555434);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetBinError(4,0.01092681);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_drllmin3l191->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_top_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_top_13TeV_drllmin3l->Draw("hist same");
   
   Double_t _fx3047[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3047[5] = {
   15.0899,
   26.41501,
   6.753389,
   0.9761881,
   0};
   Double_t _felx3047[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3047[5] = {
   3.996848,
   7.688462,
   2.543813,
   0.760094,
   0};
   Double_t _fehx3047[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3047[5] = {
   3.996848,
   7.688458,
   2.543813,
   0.760094,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,6.6);
   Graph_Graph3047->SetMinimum(0);
   Graph_Graph3047->SetMaximum(37.51382);
   Graph_Graph3047->SetDirectory(0);
   Graph_Graph3047->SetStats(0);
   Graph_Graph3047->SetLineStyle(0);
   Graph_Graph3047->SetMarkerStyle(20);
   Graph_Graph3047->GetXaxis()->SetLabelFont(42);
   Graph_Graph3047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3047->GetXaxis()->SetTitleFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3047->GetYaxis()->SetTitleFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3047);
   
   grae->Draw("2");
   
   Double_t _fx3048[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3048[5] = {
   17,
   21,
   4,
   0,
   0};
   Double_t _felx3048[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3048[5] = {
   4.082258,
   4.545892,
   1.914367,
   0,
   0};
   Double_t _fehx3048[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3048[5] = {
   5.203825,
   5.655298,
   3.162815,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,6.6);
   Graph_Graph3048->SetMinimum(0);
   Graph_Graph3048->SetMaximum(29.32083);
   Graph_Graph3048->SetDirectory(0);
   Graph_Graph3048->SetStats(0);
   Graph_Graph3048->SetLineStyle(0);
   Graph_Graph3048->SetMarkerStyle(20);
   Graph_Graph3048->GetXaxis()->SetLabelFont(42);
   Graph_Graph3048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3048->GetXaxis()->SetTitleFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3048->GetYaxis()->SetTitleFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3048);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy192 = new TH1F("hframe_copy192","",1000,0,6);
   hframe_copy192->SetMinimum(0);
   hframe_copy192->SetMaximum(66.03753);
   hframe_copy192->SetDirectory(0);
   hframe_copy192->SetStats(0);
   hframe_copy192->SetLineStyle(0);
   hframe_copy192->SetMarkerStyle(20);
   hframe_copy192->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy192->GetXaxis()->SetNdivisions(506);
   hframe_copy192->GetXaxis()->SetLabelFont(42);
   hframe_copy192->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy192->GetXaxis()->SetLabelSize(0.05);
   hframe_copy192->GetXaxis()->SetTitleSize(0.06);
   hframe_copy192->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy192->GetXaxis()->SetTitleFont(42);
   hframe_copy192->GetYaxis()->SetTitle("Events");
   hframe_copy192->GetYaxis()->SetLabelFont(42);
   hframe_copy192->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy192->GetYaxis()->SetLabelSize(0.05);
   hframe_copy192->GetYaxis()->SetTitleSize(0.06);
   hframe_copy192->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy192->GetYaxis()->SetTitleFont(42);
   hframe_copy192->GetZaxis()->SetLabelFont(42);
   hframe_copy192->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy192->GetZaxis()->SetLabelSize(0.05);
   hframe_copy192->GetZaxis()->SetTitleSize(0.06);
   hframe_copy192->GetZaxis()->SetTitleFont(42);
   hframe_copy192->Draw("sameaxis");
   ccwh3l_top_13TeV_drllmin3l->Modified();
   ccwh3l_top_13TeV_drllmin3l->cd();
   ccwh3l_top_13TeV_drllmin3l->SetSelected(ccwh3l_top_13TeV_drllmin3l);
}
