void c_wh3l_wz_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 20:54:26 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_zveto_3l = new TCanvas("ccwh3l_wz_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_zveto_3l->Range(-20,-53.97391,105,361.21);
   ccwh3l_wz_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_wz_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_wz_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_wz_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_wz_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_wz_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,100);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(340.4508);
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5","thsBackground_grouped_wh3l_wz_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->SetMinimum(-0.6592924);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->SetMaximum(108.4185);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinContent(1,7.630437);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinContent(2,0.3812846);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinContent(3,2.102353);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinContent(4,0.6579952);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinContent(5,-0.1936938);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinError(1,2.872801);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinError(2,1.001575);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinError(3,1.078301);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinError(4,0.6609701);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetBinError(5,0.4655986);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->SetBinContent(1,0.04987764);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->SetBinContent(5,0.02551711);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->SetBinError(1,0.02894052);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->SetBinError(5,0.01822775);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinContent(1,0.3845323);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinContent(2,0.0767087);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinContent(3,0.04235903);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinContent(4,0.04557108);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinContent(5,0.03240002);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinError(1,0.02514461);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinError(2,0.01238971);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinError(3,0.01026977);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinError(4,0.009573255);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetBinError(5,0.01066727);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinContent(1,1.585114);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinContent(2,0.359364);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinContent(3,0.5328983);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinContent(4,1.096138);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinContent(5,1.41424);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinError(1,0.4777896);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinError(2,0.2213816);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinError(3,0.23687);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinError(4,0.3478079);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetBinError(5,0.41864);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinContent(1,5.260219);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinContent(2,0.9828467);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinContent(3,0.4122734);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinContent(4,0.07847158);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinContent(5,0.06931598);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinError(1,0.4661092);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinError(2,0.200245);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinError(3,0.1522521);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinError(4,0.05571412);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetBinError(5,0.05004546);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinContent(1,87.72253);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinContent(2,12.72651);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinContent(3,4.288334);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinContent(4,2.233008);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinContent(5,1.632858);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinError(1,0.6909023);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinError(2,0.2627317);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinError(3,0.1520976);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinError(4,0.1090673);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetBinError(5,0.09463752);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinContent(1,0.6229593);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinContent(2,0.1245154);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinContent(3,0.05500727);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinContent(4,0.04305257);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinContent(5,0.04798927);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinError(1,0.02717862);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinError(2,0.01198938);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinError(3,0.007849315);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinError(4,0.006794082);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetBinError(5,0.007406042);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_wz_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6","thsSignal_grouped_wh3l_wz_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->SetMaximum(0.6826449);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinContent(1,0.6229593);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinContent(2,0.1245154);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinContent(3,0.05500727);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinContent(4,0.04305257);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinContent(5,0.04798927);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinError(1,0.02717862);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinError(2,0.01198938);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinError(3,0.007849315);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinError(4,0.006794082);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetBinError(5,0.007406042);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->Draw("hist same noclear");
   
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
   102.6327,
   14.52671,
   7.378218,
   4.111183,
   2.980637,
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
   5.699347,
   1.14082,
   1.79544,
   1.206559,
   1.064044,
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
   5.674967,
   1.735057,
   1.794957,
   1.209295,
   0.7940122,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,110);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(119.1384);
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
   125,
   24,
   8,
   4,
   4,
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
   11.1656,
   4.864704,
   2.768432,
   1.914367,
   1.914367,
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
   12.21044,
   5.967054,
   3.94522,
   3.162815,
   3.162815,
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
   Graph_Graph3006->SetMaximum(150.9315);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_zveto_3l","Data","EPL");
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
   hframe_copy30->SetMaximum(340.4508);
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
   ccwh3l_wz_13TeV_zveto_3l->Modified();
   ccwh3l_wz_13TeV_zveto_3l->cd();
   ccwh3l_wz_13TeV_zveto_3l->SetSelected(ccwh3l_wz_13TeV_zveto_3l);
}
