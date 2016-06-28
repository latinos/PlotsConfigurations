void c_wh3l_plot_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_mllmin3l/cc
//=========  (Tue Jun 28 13:56:28 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_mllmin3l = new TCanvas("ccwh3l_plot_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_plot_13TeV_mllmin3l->Range(-28,-19.06996,209.5,127.622);
   ccwh3l_plot_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_plot_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_plot_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_plot_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_plot_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_plot_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe301 = new TH1F("hframe301","",1000,10,200);
   hframe301->SetMinimum(0);
   hframe301->SetMaximum(120.2874);
   hframe301->SetDirectory(0);
   hframe301->SetStats(0);
   hframe301->SetLineStyle(0);
   hframe301->SetMarkerStyle(20);
   hframe301->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe301->GetXaxis()->SetNdivisions(506);
   hframe301->GetXaxis()->SetLabelFont(42);
   hframe301->GetXaxis()->SetLabelOffset(0.007);
   hframe301->GetXaxis()->SetLabelSize(0.05);
   hframe301->GetXaxis()->SetTitleSize(0.06);
   hframe301->GetXaxis()->SetTitleOffset(0.9);
   hframe301->GetXaxis()->SetTitleFont(42);
   hframe301->GetYaxis()->SetTitle("Events");
   hframe301->GetYaxis()->SetLabelFont(42);
   hframe301->GetYaxis()->SetLabelOffset(0.007);
   hframe301->GetYaxis()->SetLabelSize(0.05);
   hframe301->GetYaxis()->SetTitleSize(0.06);
   hframe301->GetYaxis()->SetTitleOffset(1.25);
   hframe301->GetYaxis()->SetTitleFont(42);
   hframe301->GetZaxis()->SetLabelFont(42);
   hframe301->GetZaxis()->SetLabelOffset(0.007);
   hframe301->GetZaxis()->SetLabelSize(0.05);
   hframe301->GetZaxis()->SetTitleSize(0.06);
   hframe301->GetZaxis()->SetTitleFont(42);
   hframe301->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_plot_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61","thsBackground_grouped_wh3l_plot_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->SetMinimum(-0.8074016);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->SetMaximum(50.52072);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_mllmin3l_stack_61);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(1,0.3090933);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(2,3.241227);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(3,3.357372);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(4,4.689681);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(5,1.70854);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(6,3.584462);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(7,0.09533476);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(8,1.792163);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(9,1.044069);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(10,0.4626989);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(11,-0.04399218);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(12,0.3114201);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(14,0.2766957);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(15,0.01024054);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(17,-0.0007969784);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinContent(21,0.3070375);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(1,1.116495);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(2,1.38788);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(3,1.423921);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(4,2.09057);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(5,1.261772);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(6,1.745503);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(7,0.6593583);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(8,1.119865);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(9,1.171567);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(10,0.6356148);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(11,0.03869352);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(12,0.3114201);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(14,0.2813675);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(15,0.01024054);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(17,0.0007969784);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetBinError(21,0.358322);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetEntries(455);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l302->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinContent(2,0.01092969);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinContent(4,0.06415329);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinContent(6,0.02906182);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinContent(9,0.01431565);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinError(2,0.01092969);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinError(4,0.0327269);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinError(6,0.02054997);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinError(9,0.01431565);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_mllmin3l303->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_plot_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(1,0.0007633359);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(2,0.003476062);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(3,0.005876386);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(4,0.01387);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(5,0.008799433);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(6,0.01352094);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(7,0.01441463);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(8,0.01550557);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(9,0.08871824);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(10,0.005528996);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(11,0.0003518286);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(12,0.001214604);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(13,0.001899014);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(15,0.0005113052);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(16,0.0004196011);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(20,0.0004281031);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinContent(21,0.0007292442);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(1,0.0007633359);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(2,0.001499425);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(3,0.001882407);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(4,0.003122457);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(5,0.002527029);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(6,0.003031922);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(7,0.003231428);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(8,0.003174064);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(9,0.007952032);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(10,0.002007337);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(11,0.0009024338);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(12,0.0008599527);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(13,0.001026783);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(15,0.0005113052);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(16,0.0004196011);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(20,0.0004281031);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetBinError(21,0.0005588822);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetEntries(351);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l304->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(1,1.134546);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(2,1.150793);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(3,0.7582078);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(4,1.186459);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(5,1.880741);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(6,0.8609876);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(7,-0.01416177);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(8,0.1751672);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(9,0.4554045);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinContent(21,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(1,0.3328812);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(2,0.4004741);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(3,0.31269);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(4,0.3881234);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(5,0.470314);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(6,0.2873305);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(7,0.1626294);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(8,0.178755);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(9,0.2609775);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetBinError(21,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetEntries(107);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l305->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(1,0.4340879);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(2,0.4539343);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(3,0.5534047);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(4,0.8844072);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(5,0.4636834);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(6,0.8372561);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(7,0.9581966);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(8,0.7695482);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(9,3.27946);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinContent(10,0.3433846);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(1,0.1333065);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(2,0.1379252);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(3,0.1562417);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(4,0.1906945);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(5,0.1425952);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(6,0.1903028);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(7,0.1937196);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(8,0.1797601);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(9,0.3656753);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetBinError(10,0.1121151);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetEntries(250);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l306->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(1,3.66632);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(2,5.866702);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(3,8.038164);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(4,9.542405);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(5,9.679376);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(6,9.795864);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(7,9.595936);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(8,12.29647);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(9,42.88168);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(10,3.915716);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(11,0.7671286);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(12,0.437889);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(13,0.3689417);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(14,0.2425813);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(15,0.1398307);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(16,0.1320375);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(17,0.09025413);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(18,0.07832975);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(19,0.04752229);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(20,0.05939343);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinContent(21,0.4715144);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(1,0.1414637);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(2,0.1793348);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(3,0.2092009);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(4,0.2287663);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(5,0.2293862);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(6,0.2307083);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(7,0.2282036);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(8,0.2587143);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(9,0.482096);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(10,0.1454606);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(11,0.06386422);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(12,0.04869425);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(13,0.04545907);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(14,0.03666423);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(15,0.02732592);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(16,0.02682471);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(17,0.02200632);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(18,0.01987559);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(19,0.01611416);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(20,0.01742303);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetBinError(21,0.04997873);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetEntries(24096);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l307->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(1,0.1199381);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(2,0.2356932);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(3,0.2623248);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(4,0.2570899);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(5,0.2194499);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(6,0.1569486);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(7,0.1100577);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(8,0.1155235);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(9,0.3513259);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(10,0.03453607);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinContent(12,0.005734715);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(1,0.01255014);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(2,0.01777446);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(3,0.01819385);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(4,0.0177782);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(5,0.01561443);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(6,0.01301542);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(7,0.01073466);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(8,0.01123821);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(9,0.01932118);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(10,0.00588858);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetBinError(12,0.002794485);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l308->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_plot_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_plot_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62","thsSignal_grouped_wh3l_plot_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->SetMaximum(0.3891794);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_mllmin3l_stack_62);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(1,0.1199381);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(2,0.2356932);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(3,0.2623248);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(4,0.2570899);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(5,0.2194499);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(6,0.1569486);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(7,0.1100577);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(8,0.1155235);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(9,0.3513259);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(10,0.03453607);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinContent(12,0.005734715);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(1,0.01255014);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(2,0.01777446);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(3,0.01819385);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(4,0.0177782);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(5,0.01561443);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(6,0.01301542);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(7,0.01073466);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(8,0.01123821);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(9,0.01932118);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(10,0.00588858);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetBinError(12,0.002794485);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l309->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_plot_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3061[20] = {
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
   Double_t _fy3061[20] = {
   5.560114,
   10.72706,
   12.72915,
   16.38098,
   13.74114,
   15.12115,
   10.64972,
   15.04885,
   47.76365,
   4.741537,
   0.7967426,
   0.7505236,
   0.3708407,
   0.5192769,
   0.1505825,
   0.1324571,
   0.08945715,
   0.07832975,
   0.04752229,
   0.05982153};
   Double_t _felx3061[20] = {
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
   Double_t _fely3061[20] = {
   0.9383858,
   2.330991,
   2.34743,
   3.2544,
   2.168985,
   2.701148,
   0.6842076,
   1.818185,
   2.199977,
   0.7495219,
   0.1766688,
   0.3728684,
   0.04648591,
   0.324168,
   0.03820151,
   0.02724432,
   0.02280455,
   0.01987559,
   0.01611416,
   0.01785114};
   Double_t _fehx3061[20] = {
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
   Double_t _fehy3061[20] = {
   1.743208,
   2.330989,
   2.34743,
   3.2544,
   2.168986,
   2.701148,
   1.099352,
   1.821614,
   2.326112,
   0.9199913,
   0.1772179,
   0.3728685,
   0.04648588,
   0.3286862,
   0.03820151,
   0.02724433,
   0.02280456,
   0.01987559,
   0.01611416,
   0.01785114};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3061,_fy3061,_felx3061,_fehx3061,_fely3061,_fehy3061);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3061 = new TH1F("Graph_Graph3061","",100,0,219);
   Graph_Graph3061->SetMinimum(0);
   Graph_Graph3061->SetMaximum(55.0956);
   Graph_Graph3061->SetDirectory(0);
   Graph_Graph3061->SetStats(0);
   Graph_Graph3061->SetLineStyle(0);
   Graph_Graph3061->SetMarkerStyle(20);
   Graph_Graph3061->GetXaxis()->SetLabelFont(42);
   Graph_Graph3061->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3061->GetXaxis()->SetTitleFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3061->GetYaxis()->SetTitleFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3061);
   
   grae->Draw("2");
   
   Double_t _fx3062[20] = {
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
   Double_t _fy3062[20] = {
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
   Double_t _felx3062[20] = {
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
   Double_t _fely3062[20] = {
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
   Double_t _fehx3062[20] = {
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
   Double_t _fehy3062[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3062,_fy3062,_felx3062,_fehx3062,_fely3062,_fehy3062);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3062 = new TH1F("Graph_Graph3062","",100,0,219);
   Graph_Graph3062->SetMinimum(0);
   Graph_Graph3062->SetMaximum(1.262698);
   Graph_Graph3062->SetDirectory(0);
   Graph_Graph3062->SetStats(0);
   Graph_Graph3062->SetLineStyle(0);
   Graph_Graph3062->SetMarkerStyle(20);
   Graph_Graph3062->GetXaxis()->SetLabelFont(42);
   Graph_Graph3062->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3062->GetXaxis()->SetTitleFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3062->GetYaxis()->SetTitleFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3062);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy310 = new TH1F("hframe_copy310","",1000,10,200);
   hframe_copy310->SetMinimum(0);
   hframe_copy310->SetMaximum(120.2874);
   hframe_copy310->SetDirectory(0);
   hframe_copy310->SetStats(0);
   hframe_copy310->SetLineStyle(0);
   hframe_copy310->SetMarkerStyle(20);
   hframe_copy310->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy310->GetXaxis()->SetNdivisions(506);
   hframe_copy310->GetXaxis()->SetLabelFont(42);
   hframe_copy310->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetXaxis()->SetLabelSize(0.05);
   hframe_copy310->GetXaxis()->SetTitleSize(0.06);
   hframe_copy310->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy310->GetXaxis()->SetTitleFont(42);
   hframe_copy310->GetYaxis()->SetTitle("Events");
   hframe_copy310->GetYaxis()->SetLabelFont(42);
   hframe_copy310->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetYaxis()->SetLabelSize(0.05);
   hframe_copy310->GetYaxis()->SetTitleSize(0.06);
   hframe_copy310->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy310->GetYaxis()->SetTitleFont(42);
   hframe_copy310->GetZaxis()->SetLabelFont(42);
   hframe_copy310->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetZaxis()->SetLabelSize(0.05);
   hframe_copy310->GetZaxis()->SetTitleSize(0.06);
   hframe_copy310->GetZaxis()->SetTitleFont(42);
   hframe_copy310->Draw("sameaxis");
   ccwh3l_plot_13TeV_mllmin3l->Modified();
   ccwh3l_plot_13TeV_mllmin3l->cd();
   ccwh3l_plot_13TeV_mllmin3l->SetSelected(ccwh3l_plot_13TeV_mllmin3l);
}
