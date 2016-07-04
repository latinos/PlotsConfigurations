void c_wh3l_zg_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_flagOSSF/cc
//=========  (Sat Jul  2 20:39:45 2016) by ROOT version6.02/13
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
   
   TH1F *hframe163 = new TH1F("hframe163","",1000,0,2);
   hframe163->SetMinimum(0);
   hframe163->SetMaximum(356.1138);
   hframe163->SetDirectory(0);
   hframe163->SetStats(0);
   hframe163->SetLineStyle(0);
   hframe163->SetMarkerStyle(20);
   hframe163->GetXaxis()->SetTitle("flag OSSF");
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
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37","thsBackground_grouped_wh3l_zg_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetMinimum(-0.3196247);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetMaximum(136.6037);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->SetBinContent(1,-0.1790202);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->SetBinContent(2,23.75982);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->SetBinError(1,0.1406046);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->SetBinError(2,4.298823);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF164->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->SetBinContent(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->SetBinError(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF165->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->SetBinContent(1,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->SetBinContent(2,103.8927);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->SetBinError(1,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->SetBinError(2,3.858889);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF166->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->SetBinContent(1,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->SetBinContent(2,0.5535251);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->SetBinError(1,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->SetBinError(2,0.1497149);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF167->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->SetBinContent(1,0.05976575);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->SetBinContent(2,1.818758);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->SetBinError(1,0.01698012);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->SetBinError(2,0.09968216);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF168->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->SetBinContent(1,0.02478543);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->SetBinContent(2,0.06399122);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->SetBinError(1,0.005000618);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->SetBinError(2,0.008371935);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF169->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_zg_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38","thsSignal_grouped_wh3l_zg_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetMaximum(0.07598131);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->SetBinContent(1,0.02478543);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->SetBinContent(2,0.06399122);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->SetBinError(1,0.005000618);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->SetBinError(2,0.008371935);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF170->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3037[2] = {
   0.5,
   1.5};
   Double_t _fy3037[2] = {
   -0.005274147,
   130.0348};
   Double_t _felx3037[2] = {
   0.5,
   0.5};
   Double_t _fely3037[2] = {
   0.2787422,
   12.8223};
   Double_t _fehx3037[2] = {
   0.5,
   0.5};
   Double_t _fehy3037[2] = {
   0.2787423,
   12.79189};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,2.2);
   Graph_Graph3037->SetMinimum(-14.59508);
   Graph_Graph3037->SetMaximum(157.1377);
   Graph_Graph3037->SetDirectory(0);
   Graph_Graph3037->SetStats(0);
   Graph_Graph3037->SetLineStyle(0);
   Graph_Graph3037->SetMarkerStyle(20);
   Graph_Graph3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3037);
   
   grae->Draw("2");
   
   Double_t _fx3038[2] = {
   0.5,
   1.5};
   Double_t _fy3038[2] = {
   2,
   131};
   Double_t _felx3038[2] = {
   0.5,
   0.5};
   Double_t _fely3038[2] = {
   1.29183,
   11.43114};
   Double_t _fehx3038[2] = {
   0.5,
   0.5};
   Double_t _fehy3038[2] = {
   2.63791,
   12.47494};
   grae = new TGraphAsymmErrors(2,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,2.2);
   Graph_Graph3038->SetMinimum(0);
   Graph_Graph3038->SetMaximum(157.7516);
   Graph_Graph3038->SetDirectory(0);
   Graph_Graph3038->SetStats(0);
   Graph_Graph3038->SetLineStyle(0);
   Graph_Graph3038->SetMarkerStyle(20);
   Graph_Graph3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph3038->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3038);
   
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy171 = new TH1F("hframe_copy171","",1000,0,2);
   hframe_copy171->SetMinimum(0);
   hframe_copy171->SetMaximum(356.1138);
   hframe_copy171->SetDirectory(0);
   hframe_copy171->SetStats(0);
   hframe_copy171->SetLineStyle(0);
   hframe_copy171->SetMarkerStyle(20);
   hframe_copy171->GetXaxis()->SetTitle("flag OSSF");
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
   ccwh3l_zg_13TeV_flagOSSF->Modified();
   ccwh3l_zg_13TeV_flagOSSF->cd();
   ccwh3l_zg_13TeV_flagOSSF->SetSelected(ccwh3l_zg_13TeV_flagOSSF);
}
