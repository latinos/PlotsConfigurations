void c_wh3l_zg_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 21:05:43 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_mllmin3l = new TCanvas("ccwh3l_zg_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_zg_13TeV_mllmin3l->Range(-28,-15.78666,209.5,105.6492);
   ccwh3l_zg_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_zg_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_zg_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_zg_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_zg_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_zg_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe41 = new TH1F("hframe41","",1000,10,200);
   hframe41->SetMinimum(0);
   hframe41->SetMaximum(99.57738);
   hframe41->SetDirectory(0);
   hframe41->SetStats(0);
   hframe41->SetLineStyle(0);
   hframe41->SetMarkerStyle(20);
   hframe41->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe41->GetXaxis()->SetNdivisions(506);
   hframe41->GetXaxis()->SetLabelFont(42);
   hframe41->GetXaxis()->SetLabelOffset(0.007);
   hframe41->GetXaxis()->SetLabelSize(0.05);
   hframe41->GetXaxis()->SetTitleSize(0.06);
   hframe41->GetXaxis()->SetTitleOffset(0.9);
   hframe41->GetXaxis()->SetTitleFont(42);
   hframe41->GetYaxis()->SetTitle("Events");
   hframe41->GetYaxis()->SetLabelFont(42);
   hframe41->GetYaxis()->SetLabelOffset(0.007);
   hframe41->GetYaxis()->SetLabelSize(0.05);
   hframe41->GetYaxis()->SetTitleSize(0.06);
   hframe41->GetYaxis()->SetTitleOffset(1.25);
   hframe41->GetYaxis()->SetTitleFont(42);
   hframe41->GetZaxis()->SetLabelFont(42);
   hframe41->GetZaxis()->SetLabelOffset(0.007);
   hframe41->GetZaxis()->SetLabelSize(0.05);
   hframe41->GetZaxis()->SetTitleSize(0.06);
   hframe41->GetZaxis()->SetTitleFont(42);
   hframe41->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9","thsBackground_grouped_wh3l_zg_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->SetMinimum(-0.5960226);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->SetMaximum(33.78844);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinContent(1,2.094332);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinContent(2,5.441825);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinContent(3,0.532664);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinContent(4,8.805115);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinContent(5,3.519169);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinContent(6,3.187697);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinError(1,1.45677);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinError(2,1.72486);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinError(3,1.128687);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinError(4,2.789824);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinError(5,1.457301);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetBinError(6,1.490486);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->SetBinContent(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->SetBinError(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetBinContent(2,0.009504272);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetBinContent(3,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetBinContent(4,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetBinError(2,0.005179705);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetBinError(3,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetBinError(4,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l44->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinContent(1,15.88541);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinContent(2,11.72613);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinContent(3,16.03735);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinContent(4,22.82632);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinContent(5,22.29709);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinContent(6,15.06923);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinContent(7,0.1253075);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinError(1,1.54974);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinError(2,1.295249);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinError(3,1.468122);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinError(4,1.867152);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinError(5,1.832564);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinError(6,1.342207);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetBinError(7,0.1253075);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinContent(1,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinContent(3,0.252727);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinContent(4,0.132254);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinContent(5,0.08350528);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinContent(6,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinError(1,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinError(3,0.09576141);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinError(4,0.07652943);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinError(5,0.05910886);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetBinError(6,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l46->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinContent(1,0.3019466);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinContent(2,0.359145);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinContent(3,0.5738182);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinContent(4,0.3911272);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinContent(5,0.1893216);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinContent(6,0.06316562);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinError(1,0.03995352);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinError(2,0.04473542);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinError(3,0.05532363);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinError(4,0.04697528);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinError(5,0.03202421);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetBinError(6,0.01828619);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinContent(1,0.01121612);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinContent(2,0.01953697);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinContent(3,0.02582942);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinContent(4,0.02215445);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinContent(5,0.006857657);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinContent(6,0.003182033);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinError(1,0.003823628);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinError(2,0.00518322);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinError(3,0.005451288);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinError(4,0.00423071);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinError(5,0.002051158);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetBinError(6,0.001336746);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10","thsSignal_grouped_wh3l_zg_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->SetMaximum(0.03284475);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinContent(1,0.01121612);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinContent(2,0.01953697);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinContent(3,0.02582942);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinContent(4,0.02215445);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinContent(5,0.006857657);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinContent(6,0.003182033);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinError(1,0.003823628);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinError(2,0.00518322);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinError(3,0.005451288);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinError(4,0.00423071);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinError(5,0.002051158);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetBinError(6,0.001336746);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l49->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3009[20] = {
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
   Double_t _fy3009[20] = {
   18.36089,
   17.5366,
   17.409,
   32.15731,
   26.08908,
   18.36578,
   0.1253075,
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
   Double_t _felx3009[20] = {
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
   Double_t _fely3009[20] = {
   3.298171,
   3.663537,
   2.309808,
   5.810353,
   3.718403,
   3.164527,
   0.1254049,
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
   Double_t _fehx3009[20] = {
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
   Double_t _fehy3009[20] = {
   3.292569,
   3.660301,
   2.870888,
   5.809579,
   3.714947,
   3.164328,
   0.1253897,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,219);
   Graph_Graph3009->SetMinimum(-3.796796);
   Graph_Graph3009->SetMaximum(41.76359);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("2");
   
   Double_t _fx3010[20] = {
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
   Double_t _fy3010[20] = {
   23,
   13,
   21,
   34,
   27,
   15,
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
   Double_t _felx3010[20] = {
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
   Double_t _fely3010[20] = {
   4.760806,
   3.558726,
   4.545892,
   5.80224,
   5.163869,
   3.829449,
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
   Double_t _fehx3010[20] = {
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
   Double_t _fehy3010[20] = {
   5.865355,
   4.697669,
   5.655298,
   6.888243,
   6.260373,
   4.958839,
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
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,219);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(44.97707);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy50 = new TH1F("hframe_copy50","",1000,10,200);
   hframe_copy50->SetMinimum(0);
   hframe_copy50->SetMaximum(99.57738);
   hframe_copy50->SetDirectory(0);
   hframe_copy50->SetStats(0);
   hframe_copy50->SetLineStyle(0);
   hframe_copy50->SetMarkerStyle(20);
   hframe_copy50->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy50->GetXaxis()->SetNdivisions(506);
   hframe_copy50->GetXaxis()->SetLabelFont(42);
   hframe_copy50->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetXaxis()->SetLabelSize(0.05);
   hframe_copy50->GetXaxis()->SetTitleSize(0.06);
   hframe_copy50->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy50->GetXaxis()->SetTitleFont(42);
   hframe_copy50->GetYaxis()->SetTitle("Events");
   hframe_copy50->GetYaxis()->SetLabelFont(42);
   hframe_copy50->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetYaxis()->SetLabelSize(0.05);
   hframe_copy50->GetYaxis()->SetTitleSize(0.06);
   hframe_copy50->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy50->GetYaxis()->SetTitleFont(42);
   hframe_copy50->GetZaxis()->SetLabelFont(42);
   hframe_copy50->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetZaxis()->SetLabelSize(0.05);
   hframe_copy50->GetZaxis()->SetTitleSize(0.06);
   hframe_copy50->GetZaxis()->SetTitleFont(42);
   hframe_copy50->Draw("sameaxis");
   ccwh3l_zg_13TeV_mllmin3l->Modified();
   ccwh3l_zg_13TeV_mllmin3l->cd();
   ccwh3l_zg_13TeV_mllmin3l->SetSelected(ccwh3l_zg_13TeV_mllmin3l);
}
