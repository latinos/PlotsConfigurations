void c_wh3l_zg_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_zveto_3l/cc
//=========  (Tue Jun 28 16:49:12 2016) by ROOT version6.02/13
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
   
   TH1F *hframe225 = new TH1F("hframe225","",1000,0,100);
   hframe225->SetMinimum(0);
   hframe225->SetMaximum(77.74755);
   hframe225->SetDirectory(0);
   hframe225->SetStats(0);
   hframe225->SetLineStyle(0);
   hframe225->SetMarkerStyle(20);
   hframe225->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe225->GetXaxis()->SetNdivisions(506);
   hframe225->GetXaxis()->SetLabelFont(42);
   hframe225->GetXaxis()->SetLabelOffset(0.007);
   hframe225->GetXaxis()->SetLabelSize(0.05);
   hframe225->GetXaxis()->SetTitleSize(0.06);
   hframe225->GetXaxis()->SetTitleOffset(0.9);
   hframe225->GetXaxis()->SetTitleFont(42);
   hframe225->GetYaxis()->SetTitle("Events");
   hframe225->GetYaxis()->SetLabelFont(42);
   hframe225->GetYaxis()->SetLabelOffset(0.007);
   hframe225->GetYaxis()->SetLabelSize(0.05);
   hframe225->GetYaxis()->SetTitleSize(0.06);
   hframe225->GetYaxis()->SetTitleOffset(1.25);
   hframe225->GetYaxis()->SetTitleFont(42);
   hframe225->GetZaxis()->SetLabelFont(42);
   hframe225->GetZaxis()->SetLabelOffset(0.007);
   hframe225->GetZaxis()->SetLabelSize(0.05);
   hframe225->GetZaxis()->SetTitleSize(0.06);
   hframe225->GetZaxis()->SetTitleFont(42);
   hframe225->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29","thsBackground_grouped_wh3l_zg_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->SetMinimum(-1.042601);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->SetMaximum(23.21609);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_29);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(1,0.5886222);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(2,2.016278);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(3,3.623693);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(4,5.35491);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(5,3.545936);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(6,2.333652);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(7,1.637749);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(8,1.269529);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(9,-0.1238853);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(10,1.803785);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(11,0.5514504);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(12,0.08768623);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(13,-0.1376555);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(14,0.4227978);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(15,1.330574);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(16,0.02187888);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinContent(19,-0.1790202);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(1,0.7144929);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(2,1.201651);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(3,1.338663);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(4,1.646106);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(5,1.637096);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(6,1.363652);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(7,1.150718);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(8,1.12823);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(9,0.9187154);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(10,1.457062);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(11,0.7340772);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(12,0.5342493);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(13,0.3182279);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(14,0.7006098);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(15,0.9003287);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(16,0.121066);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetBinError(19,0.1406046);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l226->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->SetBinContent(12,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->SetBinError(12,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->SetBinContent(7,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->SetBinError(7,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(1,0.1875554);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(2,2.01884);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(3,9.910787);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(4,13.94228);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(5,18.19005);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(6,19.2772);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(7,13.76602);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(8,9.005756);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(9,6.592056);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(10,5.737001);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(11,3.306351);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(12,1.717168);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(13,0.4391381);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinContent(19,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(1,0.2590853);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(2,0.5309773);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(3,1.219943);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(4,1.493343);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(5,1.647574);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(6,1.582689);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(7,1.373239);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(8,1.129835);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(9,1.023747);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(10,0.8330676);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(11,0.6676431);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(12,0.4604143);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(13,0.2519346);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetBinError(19,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l229->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(1,0.08510979);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(2,0.04626407);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(3,0.07241748);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(4,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(5,0.1685654);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(7,0.1021226);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(9,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(11,0.02903183);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(12,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(15,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinContent(19,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(1,0.06045014);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(2,0.04391825);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(3,0.05147488);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(4,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(5,0.08456442);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(7,0.06149533);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(9,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(11,0.02903183);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(12,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(15,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetBinError(19,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l230->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(1,0.1081372);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(2,0.06956164);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(3,0.1349889);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(4,0.1589143);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(5,0.2060128);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(6,0.1117944);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(7,0.1144282);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(8,0.1725333);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(9,0.07652345);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(10,0.128902);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(11,0.1330179);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(12,0.1088119);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(13,0.06500818);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(14,0.06771953);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(15,0.07915414);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(16,0.08325053);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinContent(19,0.05976575);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(1,0.02387603);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(2,0.01893197);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(3,0.02669691);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(4,0.02960448);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(5,0.03392439);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(6,0.02428915);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(7,0.0256076);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(8,0.03076577);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(9,0.0202038);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(10,0.02693751);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(11,0.02695983);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(12,0.02419537);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(13,0.01884654);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(14,0.01987719);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(15,0.02136869);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(16,0.02056217);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetBinError(19,0.01698012);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l231->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Draw("hist same");
   
   Double_t _fx3057[20] = {
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
   Double_t _fy3057[20] = {
   0.9694246,
   4.150944,
   13.74189,
   19.48457,
   22.11056,
   21.72264,
   15.61963,
   10.44782,
   6.587992,
   7.669688,
   4.019851,
   1.965656,
   0.3664908,
   0.4905173,
   1.488921,
   0.1051294,
   0,
   0,
   -0.005274147,
   0};
   Double_t _felx3057[20] = {
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
   Double_t _fely3057[20] = {
   0.8784668,
   1.895451,
   2.864797,
   3.59822,
   3.599844,
   3.096077,
   2.683806,
   2.333009,
   2.01429,
   2.384454,
   1.288923,
   0.6266631,
   0.5905741,
   0.4604882,
   1.058135,
   0.0429456,
   0,
   0,
   0.2768418,
   0};
   Double_t _fehx3057[20] = {
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
   Double_t _fehy3057[20] = {
   1.072566,
   1.895451,
   2.864796,
   3.598219,
   3.599845,
   3.096077,
   2.683805,
   2.333008,
   1.224876,
   2.384454,
   1.469831,
   1.072237,
   0.4106903,
   0.7315667,
   1.058135,
   0.1417802,
   0,
   0,
   0.2768418,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3057,_fy3057,_felx3057,_fehx3057,_fely3057,_fehy3057);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3057 = new TH1F("Graph_Graph3057","",100,0,110);
   Graph_Graph3057->SetMinimum(-2.881368);
   Graph_Graph3057->SetMaximum(28.30966);
   Graph_Graph3057->SetDirectory(0);
   Graph_Graph3057->SetStats(0);
   Graph_Graph3057->SetLineStyle(0);
   Graph_Graph3057->SetMarkerStyle(20);
   Graph_Graph3057->GetXaxis()->SetLabelFont(42);
   Graph_Graph3057->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3057->GetXaxis()->SetTitleFont(42);
   Graph_Graph3057->GetYaxis()->SetLabelFont(42);
   Graph_Graph3057->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3057->GetYaxis()->SetTitleFont(42);
   Graph_Graph3057->GetZaxis()->SetLabelFont(42);
   Graph_Graph3057->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3057);
   
   grae->Draw("2");
   
   Double_t _fx3058[20] = {
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
   Double_t _fy3058[20] = {
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
   Double_t _felx3058[20] = {
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
   Double_t _fely3058[20] = {
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
   Double_t _fehx3058[20] = {
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
   Double_t _fehy3058[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3058,_fy3058,_felx3058,_fehx3058,_fely3058,_fehy3058);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3058 = new TH1F("Graph_Graph3058","",100,0,110);
   Graph_Graph3058->SetMinimum(0);
   Graph_Graph3058->SetMaximum(35.3809);
   Graph_Graph3058->SetDirectory(0);
   Graph_Graph3058->SetStats(0);
   Graph_Graph3058->SetLineStyle(0);
   Graph_Graph3058->SetMarkerStyle(20);
   Graph_Graph3058->GetXaxis()->SetLabelFont(42);
   Graph_Graph3058->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3058->GetXaxis()->SetTitleFont(42);
   Graph_Graph3058->GetYaxis()->SetLabelFont(42);
   Graph_Graph3058->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3058->GetYaxis()->SetTitleFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3058);
   
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
   
   TH1F *hframe_copy232 = new TH1F("hframe_copy232","",1000,0,100);
   hframe_copy232->SetMinimum(0);
   hframe_copy232->SetMaximum(77.74755);
   hframe_copy232->SetDirectory(0);
   hframe_copy232->SetStats(0);
   hframe_copy232->SetLineStyle(0);
   hframe_copy232->SetMarkerStyle(20);
   hframe_copy232->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy232->GetXaxis()->SetNdivisions(506);
   hframe_copy232->GetXaxis()->SetLabelFont(42);
   hframe_copy232->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy232->GetXaxis()->SetLabelSize(0.05);
   hframe_copy232->GetXaxis()->SetTitleSize(0.06);
   hframe_copy232->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy232->GetXaxis()->SetTitleFont(42);
   hframe_copy232->GetYaxis()->SetTitle("Events");
   hframe_copy232->GetYaxis()->SetLabelFont(42);
   hframe_copy232->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy232->GetYaxis()->SetLabelSize(0.05);
   hframe_copy232->GetYaxis()->SetTitleSize(0.06);
   hframe_copy232->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy232->GetYaxis()->SetTitleFont(42);
   hframe_copy232->GetZaxis()->SetLabelFont(42);
   hframe_copy232->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy232->GetZaxis()->SetLabelSize(0.05);
   hframe_copy232->GetZaxis()->SetTitleSize(0.06);
   hframe_copy232->GetZaxis()->SetTitleFont(42);
   hframe_copy232->Draw("sameaxis");
   ccwh3l_zg_13TeV_zveto_3l->Modified();
   ccwh3l_zg_13TeV_zveto_3l->cd();
   ccwh3l_zg_13TeV_zveto_3l->SetSelected(ccwh3l_zg_13TeV_zveto_3l);
}
