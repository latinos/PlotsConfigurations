void c_wh3l_zg_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 21:05:42 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_zveto_3l = new TCanvas("ccwh3l_zg_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_zg_13TeV_zveto_3l->Range(-20,-12.32583,105,82.48825);
   ccwh3l_zg_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_zg_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_zg_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_zg_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_zg_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_zg_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,100);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(77.74755);
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
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5","thsBackground_grouped_wh3l_zg_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->SetMinimum(-1.042601);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->SetMaximum(23.1779);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(1,0.5886222);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(2,2.016278);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(3,3.623693);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(4,4.787731);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(5,3.545936);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(6,2.333652);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(7,1.637749);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(8,1.269529);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(9,-0.1238853);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(10,1.803785);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(11,0.5514504);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(12,0.08768623);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(13,-0.1376555);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(14,0.4227978);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(15,1.330574);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(16,0.02187888);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinContent(19,-0.1790202);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(1,0.7144929);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(2,1.201651);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(3,1.338663);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(4,1.545307);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(5,1.637096);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(6,1.363652);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(7,1.150718);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(8,1.12823);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(9,0.9187154);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(10,1.457062);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(11,0.7340772);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(12,0.5342493);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(13,0.3182279);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(14,0.7006098);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(15,0.9003287);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(16,0.121066);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetBinError(19,0.1406046);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->SetBinContent(12,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->SetBinError(12,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinContent(1,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinContent(5,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinContent(6,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinContent(7,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinContent(14,0.005061584);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinContent(19,0.002959082);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinError(1,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinError(5,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinError(6,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinError(7,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinError(14,0.003590729);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetBinError(19,0.002959082);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(1,0.1875554);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(2,2.01884);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(3,9.910787);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(4,13.94228);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(5,18.19005);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(6,19.07971);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(7,13.76602);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(8,9.005756);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(9,6.592056);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(10,5.737001);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(11,3.306351);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(12,1.717168);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(13,0.4391381);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinContent(19,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(1,0.2590853);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(2,0.5309773);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(3,1.219943);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(4,1.493343);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(5,1.647574);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(6,1.575929);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(7,1.373239);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(8,1.129835);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(9,1.023747);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(10,0.8330676);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(11,0.6676431);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(12,0.4604143);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(13,0.2519346);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetBinError(19,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(1,0.08510979);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(2,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(3,0.07241748);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(4,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(5,0.1258098);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(7,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(9,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(11,0.02903183);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(12,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(15,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinContent(19,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(1,0.06045014);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(2,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(3,0.05147488);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(4,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(5,0.07295959);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(7,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(9,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(11,0.02903183);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(12,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(15,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetBinError(19,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(1,0.1081372);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(2,0.06956164);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(3,0.1349889);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(4,0.1589143);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(5,0.2060128);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(6,0.1117944);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(7,0.1144282);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(8,0.1725333);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(9,0.07652345);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(10,0.128902);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(11,0.1330179);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(12,0.1088119);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(13,0.06500818);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(14,0.06771953);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(15,0.07915414);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(16,0.08325053);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinContent(19,0.05976575);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(1,0.02387603);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(2,0.01893197);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(3,0.02669691);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(4,0.02960448);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(5,0.03392439);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(6,0.02428915);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(7,0.0256076);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(8,0.03076577);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(9,0.0202038);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(10,0.02693751);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(11,0.02695983);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(12,0.02419537);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(13,0.01884654);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(14,0.01987719);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(15,0.02136869);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(16,0.02056217);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetBinError(19,0.01698012);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(1,0.004900589);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(2,0.0005895644);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(3,0.004743891);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(4,0.001483875);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(5,0.003906505);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(6,0.006116916);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(7,0.005247301);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(8,0.007980142);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(9,0.006568836);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(10,0.005949948);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(11,0.002932409);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(12,0.005501101);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(13,0.003080642);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(14,0.001699189);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(15,0.0002140619);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(16,0.003076247);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinContent(19,0.02478543);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(1,0.002496186);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(2,0.000410459);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(3,0.002511905);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(4,0.002239556);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(5,0.001576752);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(6,0.002282136);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(7,0.001927353);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(8,0.00329658);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(9,0.002544959);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(10,0.00212722);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(11,0.001214139);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(12,0.002757583);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(13,0.001945412);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(14,0.001510063);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(15,0.0002130834);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(16,0.001974228);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetBinError(19,0.005000618);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_zg_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6","thsSignal_grouped_wh3l_zg_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->SetMinimum(-0.0007556808);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->SetMaximum(0.03127535);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(1,0.004900589);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(2,0.0005895644);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(3,0.004743891);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(4,0.001483875);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(5,0.003906505);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(6,0.006116916);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(7,0.005247301);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(8,0.007980142);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(9,0.006568836);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(10,0.005949948);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(11,0.002932409);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(12,0.005501101);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(13,0.003080642);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(14,0.001699189);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(15,0.0002140619);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(16,0.003076247);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinContent(19,0.02478543);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(1,0.002496186);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(2,0.000410459);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(3,0.002511905);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(4,0.002239556);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(5,0.001576752);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(6,0.002282136);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(7,0.001927353);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(8,0.00329658);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(9,0.002544959);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(10,0.00212722);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(11,0.001214139);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(12,0.002757583);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(13,0.001945412);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(14,0.001510063);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(15,0.0002130834);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(16,0.001974228);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetBinError(19,0.005000618);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->Draw("hist same noclear");
   
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
   0.9715946,
   4.107092,
   13.74189,
   18.91739,
   22.07028,
   21.52766,
   15.56327,
   10.44782,
   6.587992,
   7.669688,
   4.019851,
   1.965656,
   0.3664908,
   0.4955789,
   1.488921,
   0.1051294,
   0,
   0,
   -0.002315065,
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
   0.8870517,
   1.892541,
   2.957344,
   3.579129,
   3.706715,
   3.18176,
   2.722027,
   2.369041,
   2.049341,
   2.432104,
   1.31657,
   0.638384,
   0.5918527,
   0.4702046,
   1.085013,
   0.04338273,
   0,
   0,
   0.2816438,
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
   1.079994,
   1.892641,
   2.957407,
   3.577466,
   3.704431,
   3.181041,
   2.72094,
   2.366088,
   1.279811,
   2.431014,
   1.490954,
   1.078709,
   0.4123361,
   0.7390713,
   1.08501,
   0.1419145,
   0,
   0,
   0.2816439,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,110);
   Graph_Graph3005->SetMinimum(-2.889826);
   Graph_Graph3005->SetMaximum(28.38058);
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
   1,
   2,
   5,
   20,
   26,
   21,
   13,
   14,
   13,
   8,
   3,
   2,
   1,
   2,
   0,
   0,
   0,
   0,
   2,
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
   0.8272524,
   1.29183,
   2.159724,
   4.43453,
   5.066111,
   4.545892,
   3.558726,
   3.696567,
   3.558726,
   2.768432,
   1.632727,
   1.29183,
   0.8272524,
   1.29183,
   0,
   0,
   0,
   0,
   1.29183,
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
   2.29957,
   2.63791,
   3.382539,
   5.546633,
   6.164451,
   5.655298,
   4.697669,
   4.830479,
   4.697669,
   3.94522,
   2.918242,
   2.63791,
   2.29957,
   2.63791,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,110);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(35.3809);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_zveto_3l","Data","EPL");
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
   hframe_copy30->SetMaximum(77.74755);
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
   ccwh3l_zg_13TeV_zveto_3l->Modified();
   ccwh3l_zg_13TeV_zveto_3l->cd();
   ccwh3l_zg_13TeV_zveto_3l->SetSelected(ccwh3l_zg_13TeV_zveto_3l);
}
