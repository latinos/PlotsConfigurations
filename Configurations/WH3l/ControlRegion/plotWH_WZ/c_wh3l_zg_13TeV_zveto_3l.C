void c_wh3l_zg_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 20:39:45 2016) by ROOT version6.02/13
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
   
   TH1F *hframe172 = new TH1F("hframe172","",1000,0,100);
   hframe172->SetMinimum(0);
   hframe172->SetMaximum(77.74755);
   hframe172->SetDirectory(0);
   hframe172->SetStats(0);
   hframe172->SetLineStyle(0);
   hframe172->SetMarkerStyle(20);
   hframe172->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe172->GetXaxis()->SetNdivisions(506);
   hframe172->GetXaxis()->SetLabelFont(42);
   hframe172->GetXaxis()->SetLabelOffset(0.007);
   hframe172->GetXaxis()->SetLabelSize(0.05);
   hframe172->GetXaxis()->SetTitleSize(0.06);
   hframe172->GetXaxis()->SetTitleOffset(0.9);
   hframe172->GetXaxis()->SetTitleFont(42);
   hframe172->GetYaxis()->SetTitle("Events");
   hframe172->GetYaxis()->SetLabelFont(42);
   hframe172->GetYaxis()->SetLabelOffset(0.007);
   hframe172->GetYaxis()->SetLabelSize(0.05);
   hframe172->GetYaxis()->SetTitleSize(0.06);
   hframe172->GetYaxis()->SetTitleOffset(1.25);
   hframe172->GetYaxis()->SetTitleFont(42);
   hframe172->GetZaxis()->SetLabelFont(42);
   hframe172->GetZaxis()->SetLabelOffset(0.007);
   hframe172->GetZaxis()->SetLabelSize(0.05);
   hframe172->GetZaxis()->SetTitleSize(0.06);
   hframe172->GetZaxis()->SetTitleFont(42);
   hframe172->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39","thsBackground_grouped_wh3l_zg_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->SetMinimum(-1.042601);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->SetMaximum(23.1753);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_zveto_3l_stack_39);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(1,0.5886222);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(2,2.016278);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(3,3.623693);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(4,4.787731);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(5,3.545936);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(6,2.333652);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(7,1.637749);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(8,1.269529);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(9,-0.1238853);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(10,1.803785);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(11,0.5514504);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(12,0.08768623);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(13,-0.1376555);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(14,0.4227978);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(15,1.330574);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(16,0.02187888);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinContent(19,-0.1790202);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(1,0.7144929);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(2,1.201651);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(3,1.338663);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(4,1.545307);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(5,1.637096);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(6,1.363652);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(7,1.150718);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(8,1.12823);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(9,0.9187154);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(10,1.457062);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(11,0.7340772);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(12,0.5342493);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(13,0.3182279);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(14,0.7006098);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(15,0.9003287);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(16,0.121066);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetBinError(19,0.1406046);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->SetBinContent(12,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->SetBinError(12,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_zveto_3l174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(1,0.1875554);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(2,2.01884);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(3,9.910787);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(4,13.94228);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(5,18.19005);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(6,19.07971);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(7,13.76602);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(8,9.005756);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(9,6.592056);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(10,5.737001);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(11,3.306351);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(12,1.717168);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(13,0.4391381);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinContent(19,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(1,0.2590853);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(2,0.5309773);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(3,1.219943);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(4,1.493343);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(5,1.647574);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(6,1.575929);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(7,1.373239);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(8,1.129835);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(9,1.023747);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(10,0.8330676);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(11,0.6676431);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(12,0.4604143);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(13,0.2519346);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetBinError(19,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(1,0.08510979);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(2,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(3,0.07241748);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(4,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(5,0.1258098);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(7,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(9,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(11,0.02903183);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(12,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(15,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinContent(19,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(1,0.06045014);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(2,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(3,0.05147488);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(4,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(5,0.07295959);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(7,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(9,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(11,0.02903183);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(12,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(15,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetBinError(19,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(1,0.1081372);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(2,0.06956164);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(3,0.1349889);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(4,0.1589143);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(5,0.2060128);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(6,0.1117944);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(7,0.1144282);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(8,0.1725333);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(9,0.07652345);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(10,0.128902);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(11,0.1330179);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(12,0.1088119);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(13,0.06500818);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(14,0.06771953);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(15,0.07915414);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(16,0.08325053);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinContent(19,0.05976575);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(1,0.02387603);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(2,0.01893197);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(3,0.02669691);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(4,0.02960448);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(5,0.03392439);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(6,0.02428915);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(7,0.0256076);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(8,0.03076577);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(9,0.0202038);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(10,0.02693751);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(11,0.02695983);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(12,0.02419537);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(13,0.01884654);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(14,0.01987719);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(15,0.02136869);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(16,0.02056217);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetBinError(19,0.01698012);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(1,0.004900589);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(2,0.0005895644);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(3,0.004743891);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(4,0.001483875);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(5,0.003906505);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(6,0.006116916);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(7,0.005247301);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(8,0.007980142);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(9,0.006568836);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(10,0.005949948);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(11,0.002932409);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(12,0.005501101);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(13,0.003080642);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(14,0.001699189);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(15,0.0002140619);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(16,0.003076247);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinContent(19,0.02478543);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(1,0.002496186);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(2,0.000410459);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(3,0.002511905);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(4,0.002239556);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(5,0.001576752);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(6,0.002282136);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(7,0.001927353);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(8,0.00329658);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(9,0.002544959);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(10,0.00212722);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(11,0.001214139);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(12,0.002757583);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(13,0.001945412);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(14,0.001510063);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(15,0.0002130834);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(16,0.001974228);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetBinError(19,0.005000618);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_zg_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40","thsSignal_grouped_wh3l_zg_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->SetMinimum(-0.0007556808);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->SetMaximum(0.03127535);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_zveto_3l_stack_40);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(1,0.004900589);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(2,0.0005895644);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(3,0.004743891);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(4,0.001483875);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(5,0.003906505);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(6,0.006116916);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(7,0.005247301);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(8,0.007980142);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(9,0.006568836);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(10,0.005949948);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(11,0.002932409);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(12,0.005501101);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(13,0.003080642);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(14,0.001699189);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(15,0.0002140619);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(16,0.003076247);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinContent(19,0.02478543);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(1,0.002496186);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(2,0.000410459);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(3,0.002511905);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(4,0.002239556);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(5,0.001576752);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(6,0.002282136);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(7,0.001927353);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(8,0.00329658);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(9,0.002544959);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(10,0.00212722);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(11,0.001214139);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(12,0.002757583);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(13,0.001945412);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(14,0.001510063);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(15,0.0002130834);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(16,0.001974228);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetBinError(19,0.005000618);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_zg_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3039[20] = {
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
   Double_t _fy3039[20] = {
   0.9694246,
   4.107092,
   13.74189,
   18.91739,
   22.06781,
   21.52515,
   15.56396,
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
   Double_t _felx3039[20] = {
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
   Double_t _fely3039[20] = {
   0.8849372,
   1.892541,
   2.957344,
   3.579129,
   3.704416,
   3.179384,
   2.721384,
   2.369041,
   2.049341,
   2.432104,
   1.31657,
   0.638384,
   0.5918527,
   0.4667695,
   1.085013,
   0.04338273,
   0,
   0,
   0.2787422,
   0};
   Double_t _fehx3039[20] = {
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
   Double_t _fehy3039[20] = {
   1.077861,
   1.892641,
   2.957407,
   3.577466,
   3.702142,
   3.178672,
   2.720295,
   2.366088,
   1.279811,
   2.431014,
   1.490954,
   1.078709,
   0.4123361,
   0.7355357,
   1.08501,
   0.1419145,
   0,
   0,
   0.2787423,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,0,110);
   Graph_Graph3039->SetMinimum(-2.889413);
   Graph_Graph3039->SetMaximum(28.37534);
   Graph_Graph3039->SetDirectory(0);
   Graph_Graph3039->SetStats(0);
   Graph_Graph3039->SetLineStyle(0);
   Graph_Graph3039->SetMarkerStyle(20);
   Graph_Graph3039->GetXaxis()->SetLabelFont(42);
   Graph_Graph3039->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3039->GetXaxis()->SetTitleFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3039->GetYaxis()->SetTitleFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3039);
   
   grae->Draw("2");
   
   Double_t _fx3040[20] = {
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
   Double_t _fy3040[20] = {
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
   Double_t _felx3040[20] = {
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
   Double_t _fely3040[20] = {
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
   Double_t _fehx3040[20] = {
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
   Double_t _fehy3040[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","",100,0,110);
   Graph_Graph3040->SetMinimum(0);
   Graph_Graph3040->SetMaximum(35.3809);
   Graph_Graph3040->SetDirectory(0);
   Graph_Graph3040->SetStats(0);
   Graph_Graph3040->SetLineStyle(0);
   Graph_Graph3040->SetMarkerStyle(20);
   Graph_Graph3040->GetXaxis()->SetLabelFont(42);
   Graph_Graph3040->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3040->GetXaxis()->SetTitleFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3040->GetYaxis()->SetTitleFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3040);
   
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
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,0,100);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(77.74755);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy180->GetXaxis()->SetNdivisions(506);
   hframe_copy180->GetXaxis()->SetLabelFont(42);
   hframe_copy180->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetXaxis()->SetLabelSize(0.05);
   hframe_copy180->GetXaxis()->SetTitleSize(0.06);
   hframe_copy180->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy180->GetXaxis()->SetTitleFont(42);
   hframe_copy180->GetYaxis()->SetTitle("Events");
   hframe_copy180->GetYaxis()->SetLabelFont(42);
   hframe_copy180->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetYaxis()->SetLabelSize(0.05);
   hframe_copy180->GetYaxis()->SetTitleSize(0.06);
   hframe_copy180->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy180->GetYaxis()->SetTitleFont(42);
   hframe_copy180->GetZaxis()->SetLabelFont(42);
   hframe_copy180->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetZaxis()->SetLabelSize(0.05);
   hframe_copy180->GetZaxis()->SetTitleSize(0.06);
   hframe_copy180->GetZaxis()->SetTitleFont(42);
   hframe_copy180->Draw("sameaxis");
   ccwh3l_zg_13TeV_zveto_3l->Modified();
   ccwh3l_zg_13TeV_zveto_3l->cd();
   ccwh3l_zg_13TeV_zveto_3l->SetSelected(ccwh3l_zg_13TeV_zveto_3l);
}
