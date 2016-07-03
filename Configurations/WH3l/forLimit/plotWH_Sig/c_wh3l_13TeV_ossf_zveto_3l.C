void c_wh3l_13TeV_ossf_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_zveto_3l/cc
//=========  (Thu Jun 30 22:29:41 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_zveto_3l = new TCanvas("ccwh3l_13TeV_ossf_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_zveto_3l->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_zveto_3l->Range(-20,-1.088904,105,7.287281);
   ccwh3l_13TeV_ossf_zveto_3l->SetFillColor(0);
   ccwh3l_13TeV_ossf_zveto_3l->SetBorderMode(0);
   ccwh3l_13TeV_ossf_zveto_3l->SetBorderSize(2);
   ccwh3l_13TeV_ossf_zveto_3l->SetTickx(1);
   ccwh3l_13TeV_ossf_zveto_3l->SetTicky(1);
   ccwh3l_13TeV_ossf_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_zveto_3l->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_zveto_3l->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe11 = new TH1F("hframe11","",1000,0,100);
   hframe11->SetMinimum(0);
   hframe11->SetMaximum(6.868471);
   hframe11->SetDirectory(0);
   hframe11->SetStats(0);
   hframe11->SetLineStyle(0);
   hframe11->SetMarkerStyle(20);
   hframe11->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe11->GetXaxis()->SetNdivisions(506);
   hframe11->GetXaxis()->SetLabelFont(42);
   hframe11->GetXaxis()->SetLabelOffset(0.007);
   hframe11->GetXaxis()->SetLabelSize(0.05);
   hframe11->GetXaxis()->SetTitleSize(0.06);
   hframe11->GetXaxis()->SetTitleOffset(0.9);
   hframe11->GetXaxis()->SetTitleFont(42);
   hframe11->GetYaxis()->SetTitle("Events");
   hframe11->GetYaxis()->SetLabelFont(42);
   hframe11->GetYaxis()->SetLabelOffset(0.007);
   hframe11->GetYaxis()->SetLabelSize(0.05);
   hframe11->GetYaxis()->SetTitleSize(0.06);
   hframe11->GetYaxis()->SetTitleOffset(1.25);
   hframe11->GetYaxis()->SetTitleFont(42);
   hframe11->GetZaxis()->SetLabelFont(42);
   hframe11->GetZaxis()->SetLabelOffset(0.007);
   hframe11->GetZaxis()->SetLabelSize(0.05);
   hframe11->GetZaxis()->SetTitleSize(0.06);
   hframe11->GetZaxis()->SetTitleFont(42);
   hframe11->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->SetName("thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l");
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3","thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->SetMinimum(-0.5896294);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->SetMaximum(2.884758);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l_stack_3);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(7,0.2729209);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(9,0.8033053);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(10,0.8009671);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(16,-0.3063235);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinContent(19,0.5399615);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(7,0.2511714);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(9,0.8305977);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(10,0.7975911);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(16,0.2833059);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetBinError(19,0.562992);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l12->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->Add(new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinContent(19,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetBinError(19,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->Add(new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(6,0.03382351);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(7,0.02125849);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(8,0.03470191);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(9,0.01984508);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(10,0.00994201);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(11,0.02147453);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(12,0.01650746);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(13,0.01991765);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(14,0.006534619);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(15,0.01040778);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(16,0.004313373);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(17,0.00181366);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(18,0.005070793);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinContent(19,0.01752171);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(6,0.008841684);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(7,0.007452619);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(8,0.009187758);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(9,0.007429445);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(10,0.006351027);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(11,0.007199567);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(12,0.006046504);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(13,0.007078369);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(14,0.003787243);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(15,0.00468216);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(16,0.00487416);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(17,0.00181366);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(18,0.003587291);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetBinError(19,0.006290248);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetEntries(127);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l14->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->Add(new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->Add(new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinContent(19,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetBinError(19,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l16->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(6,1.003038);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(7,0.7592491);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(8,0.7267044);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(9,0.7066543);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(10,0.635128);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(11,0.5566121);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(12,0.5001476);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(13,0.4922324);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(14,0.385523);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(15,0.3529219);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(16,0.3902687);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(17,0.009517326);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(18,0.0131633);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinContent(19,0.3892182);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(6,0.07352977);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(7,0.06414133);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(8,0.0631772);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(9,0.06197327);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(10,0.05979633);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(11,0.05498297);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(12,0.05210945);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(13,0.05181482);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(14,0.04521306);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(15,0.04396975);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(16,0.04573766);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(17,0.006799546);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(18,0.009323936);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetBinError(19,0.04547684);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->Add(new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(6,0.06447969);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(15,0.02821149);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinContent(19,0.03251118);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(6,0.008798867);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(15,0.005904418);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetBinError(19,0.006599585);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l18->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l,"");
   thsBackground_grouped_wh3l_13TeV_ossf_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l->SetName("thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l");
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4","thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->SetMaximum(0.09192924);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l_stack_4);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(6,0.06447969);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(15,0.02821149);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinContent(19,0.03251118);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(6,0.008798867);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(15,0.005904418);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetBinError(19,0.006599585);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l19->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l,"");
   thsSignal_grouped_wh3l_13TeV_ossf_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3003[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3003[20] = {
   0,
   0,
   0,
   0,
   0,
   2.682909,
   1.637375,
   2.194839,
   1.718328,
   1.792332,
   1.7808,
   1.169764,
   0.951637,
   1.715377,
   0.3633296,
   0.08825863,
   0.01133099,
   0.01823409,
   1.006454,
   0};
   Double_t _felx3003[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3003[20] = {
   0,
   0,
   0,
   0,
   0,
   0.9026343,
   0.6568114,
   1.16465,
   1.060606,
   1.084442,
   1.1372,
   0.6153628,
   0.4674974,
   0.9638609,
   0.05321592,
   0.3506843,
   0.008816663,
   0.01388149,
   0.6786982,
   0};
   Double_t _fehx3003[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3003[20] = {
   0,
   0,
   0,
   0,
   0,
   1.372695,
   0.6567308,
   1.164615,
   1.086888,
   1.084382,
   1.237557,
   0.6153285,
   0.5419375,
   0.9638482,
   0.05294904,
   0.3512134,
   0.008820421,
   0.0138694,
   0.7008209,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,110);
   Graph_Graph3003->SetMinimum(-0.6942286);
   Graph_Graph3003->SetMaximum(4.487407);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2");
   
   Double_t _fx3004[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3004[20] = {
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
   Double_t _felx3004[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3004[20] = {
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
   Double_t _fehx3004[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3004[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,110);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(1.262698);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineStyle(0);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy20 = new TH1F("hframe_copy20","",1000,0,100);
   hframe_copy20->SetMinimum(0);
   hframe_copy20->SetMaximum(6.868471);
   hframe_copy20->SetDirectory(0);
   hframe_copy20->SetStats(0);
   hframe_copy20->SetLineStyle(0);
   hframe_copy20->SetMarkerStyle(20);
   hframe_copy20->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy20->GetXaxis()->SetNdivisions(506);
   hframe_copy20->GetXaxis()->SetLabelFont(42);
   hframe_copy20->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetXaxis()->SetLabelSize(0.05);
   hframe_copy20->GetXaxis()->SetTitleSize(0.06);
   hframe_copy20->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy20->GetXaxis()->SetTitleFont(42);
   hframe_copy20->GetYaxis()->SetTitle("Events");
   hframe_copy20->GetYaxis()->SetLabelFont(42);
   hframe_copy20->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetYaxis()->SetLabelSize(0.05);
   hframe_copy20->GetYaxis()->SetTitleSize(0.06);
   hframe_copy20->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy20->GetYaxis()->SetTitleFont(42);
   hframe_copy20->GetZaxis()->SetLabelFont(42);
   hframe_copy20->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetZaxis()->SetLabelSize(0.05);
   hframe_copy20->GetZaxis()->SetTitleSize(0.06);
   hframe_copy20->GetZaxis()->SetTitleFont(42);
   hframe_copy20->Draw("sameaxis");
   ccwh3l_13TeV_ossf_zveto_3l->Modified();
   ccwh3l_13TeV_ossf_zveto_3l->cd();
   ccwh3l_13TeV_ossf_zveto_3l->SetSelected(ccwh3l_13TeV_ossf_zveto_3l);
}
