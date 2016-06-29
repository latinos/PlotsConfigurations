void c_wh3l_nobTag_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_nobTag_13TeV_mllmin3l/cc
//=========  (Wed Jun 29 01:51:43 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_nobTag_13TeV_mllmin3l = new TCanvas("ccwh3l_nobTag_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_nobTag_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_nobTag_13TeV_mllmin3l->Range(-28,-5.304058,209.5,35.49639);
   ccwh3l_nobTag_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_nobTag_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_nobTag_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_nobTag_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_nobTag_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_nobTag_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_nobTag_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_nobTag_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_nobTag_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_nobTag_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_nobTag_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe231 = new TH1F("hframe231","",1000,10,200);
   hframe231->SetMinimum(0);
   hframe231->SetMaximum(33.45637);
   hframe231->SetDirectory(0);
   hframe231->SetStats(0);
   hframe231->SetLineStyle(0);
   hframe231->SetMarkerStyle(20);
   hframe231->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe231->GetXaxis()->SetNdivisions(506);
   hframe231->GetXaxis()->SetLabelFont(42);
   hframe231->GetXaxis()->SetLabelOffset(0.007);
   hframe231->GetXaxis()->SetLabelSize(0.05);
   hframe231->GetXaxis()->SetTitleSize(0.06);
   hframe231->GetXaxis()->SetTitleOffset(0.9);
   hframe231->GetXaxis()->SetTitleFont(42);
   hframe231->GetYaxis()->SetTitle("Events");
   hframe231->GetYaxis()->SetLabelFont(42);
   hframe231->GetYaxis()->SetLabelOffset(0.007);
   hframe231->GetYaxis()->SetLabelSize(0.05);
   hframe231->GetYaxis()->SetTitleSize(0.06);
   hframe231->GetYaxis()->SetTitleOffset(1.25);
   hframe231->GetYaxis()->SetTitleFont(42);
   hframe231->GetZaxis()->SetLabelFont(42);
   hframe231->GetZaxis()->SetLabelOffset(0.007);
   hframe231->GetZaxis()->SetLabelSize(0.05);
   hframe231->GetZaxis()->SetTitleSize(0.06);
   hframe231->GetZaxis()->SetTitleFont(42);
   hframe231->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47 = new TH1F("thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47","thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->SetMinimum(-0.2043434);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->SetMaximum(14.05167);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->SetDirectory(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->SetStats(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->SetLineStyle(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_47);
   
   
   TH1D *new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232 = new TH1D("new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(1,2.100943);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(2,6.172159);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(3,8.77175);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(4,9.479117);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(5,6.416071);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(6,7.247435);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(7,0.7922664);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(8,1.141738);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(9,2.108051);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(10,0.06221746);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(11,0.6346824);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(12,1.199564);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(13,0.4430658);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(14,0.403857);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(15,0.05234175);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(16,0.7622859);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(17,-0.01955674);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(18,0.07077175);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(20,0.07030044);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinContent(21,0.326087);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(1,1.437856);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(2,1.94079);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(3,2.275809);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(4,2.351979);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(5,1.81863);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(6,1.989823);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(7,0.5025124);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(8,0.6909021);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(9,0.9587438);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(10,0.2665608);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(11,0.4784042);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(12,0.6028319);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(13,0.2221485);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(14,0.3009133);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(15,0.07533913);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(16,0.6019507);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(17,0.01877668);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(18,0.07077175);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(20,0.07030044);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetBinError(21,0.3682949);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetEntries(435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetFillColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->SetLineColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233 = new TH1D("new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(1,0.0197521);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(2,0.03488018);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(4,0.04680231);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(6,0.03042545);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(7,0.01546857);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(13,0.03054333);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinContent(15,0.01632439);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(1,0.01593713);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(2,0.02485137);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(4,0.02775022);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(6,0.02153937);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(7,0.01546857);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(13,0.02182423);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetBinError(15,0.01632439);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetEntries(17);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetFillColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->SetLineColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l233->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234 = new TH1D("new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(2,0.004423581);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(3,0.004548193);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(4,0.004210793);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(5,0.00593957);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(6,0.004104746);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(7,0.003607599);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(8,0.000980451);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(10,0.0006405607);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(11,0.0010457);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(12,0.001446102);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(13,0.005378506);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(14,0.0009710224);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(15,0.0005113052);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(16,0.0004196011);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(17,0.0007818795);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(18,0.000761464);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(20,0.0009880145);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinContent(21,0.002746641);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(2,0.00169897);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(3,0.001668146);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(4,0.001855011);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(5,0.001910657);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(6,0.001525811);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(7,0.001488978);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(8,0.0007474878);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(10,0.0006405607);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(11,0.0007400568);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(12,0.000876772);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(13,0.001776845);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(14,0.0006905336);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(15,0.0005113052);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(16,0.0004196011);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(17,0.0007818795);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(18,0.000761464);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(20,0.0007048213);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetBinError(21,0.00122324);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetEntries(83);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetFillColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->SetLineColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235 = new TH1D("new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(1,0.4937853);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(2,0.3264643);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(3,0.7457557);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(4,0.9537713);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(5,0.8691856);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(6,0.4940812);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(12,0.1819414);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(13,0.09785095);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinContent(21,0.1058488);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(1,0.2145122);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(2,0.3045737);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(3,0.2892738);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(4,0.3572172);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(5,0.3187903);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(6,0.2571761);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(12,0.1332888);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(13,0.09785095);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetBinError(21,0.1058488);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetEntries(69);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetFillColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->SetLineColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236 = new TH1D("new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(1,0.210626);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(2,0.1832146);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(3,0.2228055);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(4,0.1401143);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(5,0.2008017);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(6,0.250251);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(7,0.02856258);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(8,0.01994686);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(9,0.08860458);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(12,0.1352783);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(13,0.04545766);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinContent(21,0.06262714);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(1,0.09482443);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(2,0.08164396);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(3,0.09334183);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(4,0.07425488);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(5,0.08811737);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(6,0.1049838);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(7,0.02856258);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(8,0.01994686);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(9,0.0626681);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(12,0.07828225);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(13,0.04545766);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetBinError(21,0.04681215);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetEntries(44);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237 = new TH1D("new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(1,2.51818);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(2,2.797719);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(3,2.876523);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(4,2.519234);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(5,1.677983);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(6,1.346855);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(7,0.262767);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(8,0.2320885);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(9,0.1627455);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(10,0.1894289);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(11,0.1651388);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(12,0.672728);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(13,0.6794584);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(14,0.393402);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(15,0.2772951);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(16,0.2478481);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(17,0.1867409);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(18,0.1309172);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(19,0.1077045);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(20,0.1105501);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinContent(21,0.8074314);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(1,0.1162404);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(2,0.122824);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(3,0.1254091);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(4,0.1185247);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(5,0.09563661);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(6,0.08536858);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(7,0.03729594);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(8,0.03547629);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(9,0.02979961);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(10,0.03262362);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(11,0.02953627);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(12,0.06065186);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(13,0.06087772);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(14,0.04650027);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(15,0.03898163);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(16,0.03642531);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(17,0.03144755);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(18,0.02628876);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(19,0.02373245);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(20,0.02368799);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetBinError(21,0.06503171);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetEntries(3754);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetFillColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->SetLineColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(1,0.1502693);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(2,0.246991);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(3,0.2868018);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(4,0.2392973);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(5,0.1912796);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(6,0.1047986);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(7,0.02821842);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(8,0.007544185);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(9,0.005117503);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(10,0.001801169);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(11,0.0001459466);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(12,0.006806076);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(1,0.01377835);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(2,0.01770964);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(3,0.01818901);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(4,0.01616968);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(5,0.01343047);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(6,0.009800066);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(7,0.005560085);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(8,0.001655234);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(9,0.001528614);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(10,0.001324314);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(11,0.0001459466);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(12,0.0028692);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_nobTag_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48 = new TH1F("thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48","thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->SetMinimum(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->SetMaximum(0.3202403);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->SetDirectory(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->SetStats(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->SetLineStyle(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l_stack_48);
   
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(1,0.1502693);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(2,0.246991);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(3,0.2868018);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(4,0.2392973);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(5,0.1912796);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(6,0.1047986);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(7,0.02821842);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(8,0.007544185);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(9,0.005117503);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(10,0.001801169);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(11,0.0001459466);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(12,0.006806076);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(1,0.01377835);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(2,0.01770964);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(3,0.01818901);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(4,0.01616968);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(5,0.01343047);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(6,0.009800066);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(7,0.005560085);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(8,0.001655234);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(9,0.001528614);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(10,0.001324314);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(11,0.0001459466);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(12,0.0028692);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l239->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_nobTag_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3047[20] = {
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
   Double_t _fy3047[20] = {
   5.343287,
   9.51886,
   12.63751,
   13.14325,
   9.169981,
   9.373153,
   1.102672,
   1.394754,
   2.359401,
   0.2664953,
   0.8008668,
   2.190958,
   1.301755,
   0.8304648,
   0.3464725,
   1.010554,
   0.167966,
   0.2024504,
   0.1609448,
   0.1818386};
   Double_t _felx3047[20] = {
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
   Double_t _fely3047[20] = {
   2.02578,
   3.290917,
   4.159904,
   4.429342,
   3.232016,
   3.534324,
   0.6477399,
   0.847247,
   1.284306,
   0.1118935,
   0.5550778,
   0.9716893,
   0.476475,
   0.3971707,
   0.1099155,
   0.6923094,
   0.05174951,
   0.1009691,
   0.07922679,
   0.09790979};
   Double_t _fehx3047[20] = {
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
   Double_t _fehy3047[20] = {
   2.025129,
   3.290956,
   4.159709,
   4.429069,
   3.23197,
   3.534293,
   0.6477399,
   0.8472447,
   1.284306,
   0.3148094,
   0.5550764,
   0.9716347,
   0.4764511,
   0.3971531,
   0.1325738,
   0.692309,
   0.05167233,
   0.1009658,
   0.09731807,
   0.09790312};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,219);
   Graph_Graph3047->SetMinimum(0);
   Graph_Graph3047->SetMaximum(19.32138);
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
   
   Double_t _fx3048[20] = {
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
   Double_t _fy3048[20] = {
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
   Double_t _felx3048[20] = {
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
   Double_t _fely3048[20] = {
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
   Double_t _fehx3048[20] = {
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
   Double_t _fehy3048[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,219);
   Graph_Graph3048->SetMinimum(0);
   Graph_Graph3048->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy240 = new TH1F("hframe_copy240","",1000,10,200);
   hframe_copy240->SetMinimum(0);
   hframe_copy240->SetMaximum(33.45637);
   hframe_copy240->SetDirectory(0);
   hframe_copy240->SetStats(0);
   hframe_copy240->SetLineStyle(0);
   hframe_copy240->SetMarkerStyle(20);
   hframe_copy240->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy240->GetXaxis()->SetNdivisions(506);
   hframe_copy240->GetXaxis()->SetLabelFont(42);
   hframe_copy240->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetXaxis()->SetLabelSize(0.05);
   hframe_copy240->GetXaxis()->SetTitleSize(0.06);
   hframe_copy240->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy240->GetXaxis()->SetTitleFont(42);
   hframe_copy240->GetYaxis()->SetTitle("Events");
   hframe_copy240->GetYaxis()->SetLabelFont(42);
   hframe_copy240->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetYaxis()->SetLabelSize(0.05);
   hframe_copy240->GetYaxis()->SetTitleSize(0.06);
   hframe_copy240->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy240->GetYaxis()->SetTitleFont(42);
   hframe_copy240->GetZaxis()->SetLabelFont(42);
   hframe_copy240->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetZaxis()->SetLabelSize(0.05);
   hframe_copy240->GetZaxis()->SetTitleSize(0.06);
   hframe_copy240->GetZaxis()->SetTitleFont(42);
   hframe_copy240->Draw("sameaxis");
   ccwh3l_nobTag_13TeV_mllmin3l->Modified();
   ccwh3l_nobTag_13TeV_mllmin3l->cd();
   ccwh3l_nobTag_13TeV_mllmin3l->SetSelected(ccwh3l_nobTag_13TeV_mllmin3l);
}
