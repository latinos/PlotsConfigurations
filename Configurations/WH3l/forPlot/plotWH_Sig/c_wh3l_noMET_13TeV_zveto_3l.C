void c_wh3l_noMET_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_noMET_13TeV_zveto_3l/cc
//=========  (Wed Jun 29 01:51:34 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_noMET_13TeV_zveto_3l = new TCanvas("ccwh3l_noMET_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_noMET_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_noMET_13TeV_zveto_3l->Range(-20,-12.36069,105,82.72153);
   ccwh3l_noMET_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_noMET_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_noMET_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_noMET_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_noMET_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_noMET_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_noMET_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_noMET_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_noMET_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_noMET_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_noMET_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,100);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(77.96742);
   hframe21->SetDirectory(0);
   hframe21->SetStats(0);
   hframe21->SetLineStyle(0);
   hframe21->SetMarkerStyle(20);
   hframe21->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe21->GetXaxis()->SetNdivisions(506);
   hframe21->GetXaxis()->SetLabelFont(42);
   hframe21->GetXaxis()->SetLabelOffset(0.007);
   hframe21->GetXaxis()->SetLabelSize(0.05);
   hframe21->GetXaxis()->SetTitleSize(0.06);
   hframe21->GetXaxis()->SetTitleOffset(0.9);
   hframe21->GetXaxis()->SetTitleFont(42);
   hframe21->GetYaxis()->SetTitle("Events");
   hframe21->GetYaxis()->SetLabelFont(42);
   hframe21->GetYaxis()->SetLabelOffset(0.007);
   hframe21->GetYaxis()->SetLabelSize(0.05);
   hframe21->GetYaxis()->SetTitleSize(0.06);
   hframe21->GetYaxis()->SetTitleOffset(1.25);
   hframe21->GetYaxis()->SetTitleFont(42);
   hframe21->GetZaxis()->SetLabelFont(42);
   hframe21->GetZaxis()->SetLabelOffset(0.007);
   hframe21->GetZaxis()->SetLabelSize(0.05);
   hframe21->GetZaxis()->SetTitleSize(0.06);
   hframe21->GetZaxis()->SetTitleFont(42);
   hframe21->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5 = new TH1F("thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5","thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->SetMinimum(-0.1376538);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->SetMaximum(32.74631);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22 = new TH1D("new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(6,4.493415);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(7,3.530621);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(8,2.881657);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(9,4.223266);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(10,5.643428);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(11,1.435318);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(12,3.557082);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(13,1.077397);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(14,3.205477);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(15,2.076993);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(16,0.9399424);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(17,0.07701998);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinContent(19,5.251655);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(6,2.014212);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(7,1.49199);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(8,1.595198);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(9,1.79408);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(10,2.260267);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(11,1.572972);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(12,1.232249);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(13,0.9707916);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(14,1.410776);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(15,0.9962269);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(16,0.9610543);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(17,0.06756007);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetBinError(19,1.733731);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetEntries(607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23 = new TH1D("new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinContent(7,0.03222474);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinContent(8,0.02302853);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinContent(11,0.0310088);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinContent(12,0.02526495);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinContent(13,0.01273931);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinContent(15,0.04660166);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinContent(19,0.1005294);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinError(7,0.02294487);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinError(8,0.02302853);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinError(11,0.02224331);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinError(12,0.01826006);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinError(13,0.01273931);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinError(15,0.02708211);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetBinError(19,0.03874294);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetEntries(19);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetFillColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->SetLineColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24 = new TH1D("new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(6,0.002047752);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(7,0.001784167);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(8,0.001810379);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(9,0.001525599);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(10,0.0002902478);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(11,0.001048843);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(12,0.0006380157);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(14,0.0004196011);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinContent(19,0.00529066);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(6,0.00118718);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(7,0.001417882);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(8,0.001048971);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(9,0.0009554437);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(10,0.0002902478);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(11,0.0007418759);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(12,0.0006380157);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(14,0.0004196011);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetBinError(19,0.001787603);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetEntries(29);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25 = new TH1D("new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(6,23.94448);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(7,17.19279);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(8,11.60791);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(9,8.860758);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(10,6.977884);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(11,5.478704);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(12,2.773552);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(13,0.8633532);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(14,0.454088);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(15,0.417556);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(16,0.1167461);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(17,0.2271765);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(18,0.1355492);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinContent(19,1.578445);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(6,1.769262);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(7,1.524772);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(8,1.28921);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(9,1.194698);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(10,0.9460354);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(11,0.8990591);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(12,0.5978712);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(13,0.3285928);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(14,0.2161774);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(15,0.2180067);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(16,0.1167461);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(17,0.1607272);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(18,0.1355492);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetBinError(19,0.4556222);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetEntries(1050);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26 = new TH1D("new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(6,0.2890598);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(7,0.5406655);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(8,0.5446034);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(9,0.2152597);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(10,0.2827611);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(11,0.406715);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(12,0.4358103);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(13,0.4419891);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(14,0.02772822);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(15,0.1798055);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(16,0.08644053);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinContent(19,0.485485);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(6,0.1073411);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(7,0.1503791);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(8,0.1486254);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(9,0.09025179);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(10,0.1032833);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(11,0.1301814);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(12,0.1348449);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(13,0.1377115);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(14,0.02772822);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(15,0.08627664);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(16,0.05467818);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetBinError(19,0.1399849);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetEntries(105);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27 = new TH1D("new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(6,2.354652);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(7,1.85781);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(8,1.733753);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(9,1.696919);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(10,1.569532);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(11,1.446399);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(12,1.222253);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(13,1.206028);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(14,1.077842);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(15,1.004878);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(16,1.053512);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(17,0.0915929);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(18,0.1021325);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinContent(19,2.794544);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(6,0.1133181);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(7,0.1005947);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(8,0.09786053);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(9,0.09634505);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(10,0.09336029);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(11,0.08829343);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(12,0.08064978);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(13,0.08078233);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(14,0.07645137);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(15,0.0742648);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(16,0.07595888);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(17,0.02208036);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(18,0.02308441);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetBinError(19,0.1230143);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetEntries(3898);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(6,0.1033115);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(7,0.08688483);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(8,0.1189267);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(9,0.08534338);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(10,0.09478102);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(11,0.06338724);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(12,0.09992918);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(13,0.06232855);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(14,0.04716849);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(15,0.04035351);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(16,0.02499764);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(17,0.002867176);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(18,0.004433233);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinContent(19,0.4057899);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(6,0.0109406);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(7,0.009451627);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(8,0.0114866);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(9,0.009377512);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(10,0.01035925);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(11,0.008755192);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(12,0.01152539);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(13,0.00936966);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(14,0.007741176);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(15,0.007367502);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(16,0.00576492);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(17,0.001940951);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(18,0.0022692);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetBinError(19,0.02112973);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_noMET_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6 = new TH1F("thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6","thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->SetMinimum(0);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->SetMaximum(0.4482656);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(6,0.1033115);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(7,0.08688483);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(8,0.1189267);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(9,0.08534338);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(10,0.09478102);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(11,0.06338724);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(12,0.09992918);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(13,0.06232855);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(14,0.04716849);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(15,0.04035351);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(16,0.02499764);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(17,0.002867176);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(18,0.004433233);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinContent(19,0.4057899);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(6,0.0109406);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(7,0.009451627);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(8,0.0114866);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(9,0.009377512);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(10,0.01035925);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(11,0.008755192);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(12,0.01152539);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(13,0.00936966);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(14,0.007741176);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(15,0.007367502);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(16,0.00576492);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(17,0.001940951);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(18,0.0022692);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetBinError(19,0.02112973);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_noMET_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3005[20] = {
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
   Double_t _fy3005[20] = {
   0,
   0,
   0,
   0,
   0,
   31.08365,
   23.1559,
   16.79276,
   14.99773,
   14.48434,
   8.799193,
   8.014599,
   3.601506,
   4.765554,
   3.725834,
   2.196641,
   0.3957894,
   0.2376817,
   10.21595,
   0};
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
   0,
   0,
   0,
   0,
   0,
   4.439016,
   3.610801,
   3.36909,
   3.557673,
   3.975894,
   2.661329,
   2.423947,
   1.582004,
   2.064031,
   1.581065,
   1.234358,
   0.2521038,
   0.1587053,
   3.101745,
   0};
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
   0,
   0,
   0,
   0,
   0,
   4.436306,
   3.608622,
   3.365907,
   3.555704,
   3.973902,
   2.789867,
   2.423105,
   1.581165,
   2.063998,
   1.580884,
   1.254032,
   0.2521018,
   0.1587017,
   3.100856,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,110);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(39.07196);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("2");
   
   Double_t _fx3006[20] = {
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
   Double_t _fy3006[20] = {
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
   Double_t _felx3006[20] = {
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
   Double_t _fely3006[20] = {
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
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,110);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(1.262698);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineStyle(0);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy30 = new TH1F("hframe_copy30","",1000,0,100);
   hframe_copy30->SetMinimum(0);
   hframe_copy30->SetMaximum(77.96742);
   hframe_copy30->SetDirectory(0);
   hframe_copy30->SetStats(0);
   hframe_copy30->SetLineStyle(0);
   hframe_copy30->SetMarkerStyle(20);
   hframe_copy30->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy30->GetXaxis()->SetNdivisions(506);
   hframe_copy30->GetXaxis()->SetLabelFont(42);
   hframe_copy30->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetXaxis()->SetLabelSize(0.05);
   hframe_copy30->GetXaxis()->SetTitleSize(0.06);
   hframe_copy30->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy30->GetXaxis()->SetTitleFont(42);
   hframe_copy30->GetYaxis()->SetTitle("Events");
   hframe_copy30->GetYaxis()->SetLabelFont(42);
   hframe_copy30->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetYaxis()->SetLabelSize(0.05);
   hframe_copy30->GetYaxis()->SetTitleSize(0.06);
   hframe_copy30->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy30->GetYaxis()->SetTitleFont(42);
   hframe_copy30->GetZaxis()->SetLabelFont(42);
   hframe_copy30->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetZaxis()->SetLabelSize(0.05);
   hframe_copy30->GetZaxis()->SetTitleSize(0.06);
   hframe_copy30->GetZaxis()->SetTitleFont(42);
   hframe_copy30->Draw("sameaxis");
   ccwh3l_noMET_13TeV_zveto_3l->Modified();
   ccwh3l_noMET_13TeV_zveto_3l->cd();
   ccwh3l_noMET_13TeV_zveto_3l->SetSelected(ccwh3l_noMET_13TeV_zveto_3l);
}
