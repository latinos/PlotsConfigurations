void c_wh3l_wz_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_mllmin3l/cc
//=========  (Tue Jun 28 16:49:00 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_mllmin3l = new TCanvas("ccwh3l_wz_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_mllmin3l->Range(-28,-24.73813,209.5,165.5552);
   ccwh3l_wz_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_wz_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_wz_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_wz_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_wz_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_wz_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe97 = new TH1F("hframe97","",1000,10,200);
   hframe97->SetMinimum(0);
   hframe97->SetMaximum(156.0405);
   hframe97->SetDirectory(0);
   hframe97->SetStats(0);
   hframe97->SetLineStyle(0);
   hframe97->SetMarkerStyle(20);
   hframe97->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe97->GetXaxis()->SetNdivisions(506);
   hframe97->GetXaxis()->SetLabelFont(42);
   hframe97->GetXaxis()->SetLabelOffset(0.007);
   hframe97->GetXaxis()->SetLabelSize(0.05);
   hframe97->GetXaxis()->SetTitleSize(0.06);
   hframe97->GetXaxis()->SetTitleOffset(0.9);
   hframe97->GetXaxis()->SetTitleFont(42);
   hframe97->GetYaxis()->SetTitle("Events");
   hframe97->GetYaxis()->SetLabelFont(42);
   hframe97->GetYaxis()->SetLabelOffset(0.007);
   hframe97->GetYaxis()->SetLabelSize(0.05);
   hframe97->GetYaxis()->SetTitleSize(0.06);
   hframe97->GetYaxis()->SetTitleOffset(1.25);
   hframe97->GetYaxis()->SetTitleFont(42);
   hframe97->GetZaxis()->SetLabelFont(42);
   hframe97->GetZaxis()->SetLabelOffset(0.007);
   hframe97->GetZaxis()->SetLabelSize(0.05);
   hframe97->GetZaxis()->SetTitleSize(0.06);
   hframe97->GetZaxis()->SetTitleFont(42);
   hframe97->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13","thsBackground_grouped_wh3l_wz_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->SetMinimum(-1.107521);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->SetMaximum(49.662);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(1,-0.04741513);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(2,1.429295);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(3,1.749597);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(4,1.99302);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(5,-0.2070794);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(6,2.438544);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(7,0.1173532);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(8,1.903734);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(9,0.7166687);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(10,0.4626989);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinContent(11,-0.005728715);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(1,0.6633781);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(2,1.051184);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(3,1.116901);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(4,1.482562);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(5,0.9004413);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(6,1.402284);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(7,0.6483614);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(8,1.115052);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(9,1.112582);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(10,0.6356148);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetBinError(11,0.00575287);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l98->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetBinContent(2,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetBinContent(4,0.03556199);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetBinContent(6,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetBinContent(9,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetBinError(2,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetBinError(4,0.02515185);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetBinError(6,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetBinError(9,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l99->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(1,0.0007633359);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(2,0.002863352);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(3,0.004537599);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(4,0.0119661);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(5,0.00754019);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(6,0.01352094);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(7,0.01253887);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(8,0.01481774);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(9,0.08871824);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(10,0.004888436);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinContent(11,0.0003518286);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(1,0.0007633359);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(2,0.001368525);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(3,0.001626826);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(4,0.002936414);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(5,0.002364949);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(6,0.003031922);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(7,0.003043093);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(8,0.00309864);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(9,0.007952032);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(10,0.001902389);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetBinError(11,0.0009024338);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l100->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(1,0.7525076);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(2,0.8432823);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(3,0.3197199);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(4,0.7168892);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(5,1.41604);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(6,0.2751281);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(7,-0.01416177);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(8,0.1751672);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(9,0.4554045);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(1,0.2779961);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(2,0.3196435);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(3,0.2307842);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(4,0.278093);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(5,0.3963379);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(6,0.1768254);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(7,0.1626294);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(8,0.178755);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(9,0.2609775);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l101->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(1,0.3156072);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(2,0.3759817);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(3,0.4205887);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(4,0.8310922);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(5,0.3679335);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(6,0.7428043);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(7,0.929634);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(8,0.7695482);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(9,3.234182);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinContent(10,0.3433846);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(1,0.1143133);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(2,0.1253146);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(3,0.1408527);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(4,0.186061);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(5,0.1302964);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(6,0.1781129);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(7,0.1916023);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(8,0.1797601);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(9,0.3628613);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetBinError(10,0.1121151);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l102->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(1,2.501736);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(2,4.501726);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(3,6.499624);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(4,8.253102);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(5,8.861479);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(6,9.043807);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(7,9.426976);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(8,12.16788);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(9,42.78785);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(10,3.788837);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(11,0.6967011);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinContent(12,0.1078549);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(1,0.117162);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(2,0.157385);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(3,0.1880452);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(4,0.2126379);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(5,0.2196523);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(6,0.2216923);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(7,0.2262413);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(8,0.2573939);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(9,0.4815763);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(10,0.1430264);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(11,0.06085081);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetBinError(12,0.02403616);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Draw("hist same");
   
   Double_t _fx3025[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3025[20] = {
   3.523199,
   7.164078,
   8.994066,
   11.84163,
   10.44591,
   12.52839,
   10.47234,
   15.03115,
   47.29714,
   4.599809,
   0.7645785,
   0.1078549,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3025[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3025[20] = {
   1.174054,
   1.720449,
   1.758492,
   2.268095,
   1.650972,
   2.12653,
   0.7022012,
   1.822468,
   1.859677,
   0.7330665,
   0.1402345,
   0.02403616,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3025[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3025[20] = {
   0.558578,
   1.720448,
   1.758493,
   2.268093,
   0.9589686,
   2.12653,
   1.084271,
   1.825874,
   2.252898,
   0.9034359,
   0.1407609,
   0.02403616,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,219);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(54.50504);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("2");
   
   Double_t _fx3026[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3026[20] = {
   6,
   6,
   10,
   17,
   17,
   12,
   15,
   20,
   55,
   9,
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
   Double_t _felx3026[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3026[20] = {
   2.379969,
   2.379969,
   3.108748,
   4.082258,
   4.082258,
   3.415326,
   3.829449,
   4.43453,
   7.393726,
   2.943511,
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
   Double_t _fehx3026[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3026[20] = {
   3.583713,
   3.583713,
   4.267035,
   5.203825,
   5.203825,
   4.559911,
   4.958839,
   5.546633,
   8.461342,
   4.110286,
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
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,219);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(69.80748);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy104 = new TH1F("hframe_copy104","",1000,10,200);
   hframe_copy104->SetMinimum(0);
   hframe_copy104->SetMaximum(156.0405);
   hframe_copy104->SetDirectory(0);
   hframe_copy104->SetStats(0);
   hframe_copy104->SetLineStyle(0);
   hframe_copy104->SetMarkerStyle(20);
   hframe_copy104->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy104->GetXaxis()->SetNdivisions(506);
   hframe_copy104->GetXaxis()->SetLabelFont(42);
   hframe_copy104->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy104->GetXaxis()->SetLabelSize(0.05);
   hframe_copy104->GetXaxis()->SetTitleSize(0.06);
   hframe_copy104->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy104->GetXaxis()->SetTitleFont(42);
   hframe_copy104->GetYaxis()->SetTitle("Events");
   hframe_copy104->GetYaxis()->SetLabelFont(42);
   hframe_copy104->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy104->GetYaxis()->SetLabelSize(0.05);
   hframe_copy104->GetYaxis()->SetTitleSize(0.06);
   hframe_copy104->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy104->GetYaxis()->SetTitleFont(42);
   hframe_copy104->GetZaxis()->SetLabelFont(42);
   hframe_copy104->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy104->GetZaxis()->SetLabelSize(0.05);
   hframe_copy104->GetZaxis()->SetTitleSize(0.06);
   hframe_copy104->GetZaxis()->SetTitleFont(42);
   hframe_copy104->Draw("sameaxis");
   ccwh3l_wz_13TeV_mllmin3l->Modified();
   ccwh3l_wz_13TeV_mllmin3l->cd();
   ccwh3l_wz_13TeV_mllmin3l->SetSelected(ccwh3l_wz_13TeV_mllmin3l);
}
