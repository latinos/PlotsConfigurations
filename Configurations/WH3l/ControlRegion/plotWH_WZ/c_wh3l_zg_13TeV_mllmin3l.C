void c_wh3l_zg_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 20:39:47 2016) by ROOT version6.02/13
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
   
   TH1F *hframe190 = new TH1F("hframe190","",1000,10,200);
   hframe190->SetMinimum(0);
   hframe190->SetMaximum(99.57738);
   hframe190->SetDirectory(0);
   hframe190->SetStats(0);
   hframe190->SetLineStyle(0);
   hframe190->SetMarkerStyle(20);
   hframe190->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe190->GetXaxis()->SetNdivisions(506);
   hframe190->GetXaxis()->SetLabelFont(42);
   hframe190->GetXaxis()->SetLabelOffset(0.007);
   hframe190->GetXaxis()->SetLabelSize(0.05);
   hframe190->GetXaxis()->SetTitleSize(0.06);
   hframe190->GetXaxis()->SetTitleOffset(0.9);
   hframe190->GetXaxis()->SetTitleFont(42);
   hframe190->GetYaxis()->SetTitle("Events");
   hframe190->GetYaxis()->SetLabelFont(42);
   hframe190->GetYaxis()->SetLabelOffset(0.007);
   hframe190->GetYaxis()->SetLabelSize(0.05);
   hframe190->GetYaxis()->SetTitleSize(0.06);
   hframe190->GetYaxis()->SetTitleOffset(1.25);
   hframe190->GetYaxis()->SetTitleFont(42);
   hframe190->GetZaxis()->SetLabelFont(42);
   hframe190->GetZaxis()->SetLabelOffset(0.007);
   hframe190->GetZaxis()->SetLabelSize(0.05);
   hframe190->GetZaxis()->SetTitleSize(0.06);
   hframe190->GetZaxis()->SetTitleFont(42);
   hframe190->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43","thsBackground_grouped_wh3l_zg_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetMinimum(-0.5960226);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetMaximum(33.78581);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinContent(1,2.094332);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinContent(2,5.441825);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinContent(3,0.532664);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinContent(4,8.805115);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinContent(5,3.519169);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinContent(6,3.187697);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinError(1,1.45677);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinError(2,1.72486);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinError(3,1.128687);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinError(4,2.789824);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinError(5,1.457301);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetBinError(6,1.490486);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l191->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->SetBinContent(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->SetBinError(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinContent(1,15.88541);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinContent(2,11.72613);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinContent(3,16.03735);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinContent(4,22.82632);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinContent(5,22.29709);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinContent(6,15.06923);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinContent(7,0.1253075);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinError(1,1.54974);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinError(2,1.295249);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinError(3,1.468122);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinError(4,1.867152);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinError(5,1.832564);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinError(6,1.342207);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetBinError(7,0.1253075);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinContent(1,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinContent(3,0.252727);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinContent(4,0.132254);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinContent(5,0.08350528);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinContent(6,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinError(1,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinError(3,0.09576141);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinError(4,0.07652943);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinError(5,0.05910886);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetBinError(6,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinContent(1,0.3019466);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinContent(2,0.359145);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinContent(3,0.5738182);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinContent(4,0.3911272);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinContent(5,0.1893216);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinContent(6,0.06316562);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinError(1,0.03995352);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinError(2,0.04473542);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinError(3,0.05532363);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinError(4,0.04697528);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinError(5,0.03202421);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetBinError(6,0.01828619);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinContent(1,0.01121612);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinContent(2,0.01953697);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinContent(3,0.02582942);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinContent(4,0.02215445);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinContent(5,0.006857657);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinContent(6,0.003182033);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinError(1,0.003823628);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinError(2,0.00518322);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinError(3,0.005451288);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinError(4,0.00423071);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinError(5,0.002051158);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetBinError(6,0.001336746);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44","thsSignal_grouped_wh3l_zg_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetMaximum(0.03284475);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinContent(1,0.01121612);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinContent(2,0.01953697);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinContent(3,0.02582942);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinContent(4,0.02215445);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinContent(5,0.006857657);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinContent(6,0.003182033);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinError(1,0.003823628);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinError(2,0.00518322);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinError(3,0.005451288);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinError(4,0.00423071);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinError(5,0.002051158);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetBinError(6,0.001336746);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l197->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3043[20] = {
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
   Double_t _fy3043[20] = {
   18.36089,
   17.5271,
   17.40652,
   32.15481,
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
   Double_t _felx3043[20] = {
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
   Double_t _fely3043[20] = {
   3.298171,
   3.65911,
   2.307449,
   5.808261,
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
   Double_t _fehx3043[20] = {
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
   Double_t _fehy3043[20] = {
   3.292569,
   3.655875,
   2.868479,
   5.807489,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3043,_fy3043,_felx3043,_fehx3043,_fely3043,_fehy3043);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3043 = new TH1F("Graph_Graph3043","",100,0,219);
   Graph_Graph3043->SetMinimum(-3.796337);
   Graph_Graph3043->SetMaximum(41.75854);
   Graph_Graph3043->SetDirectory(0);
   Graph_Graph3043->SetStats(0);
   Graph_Graph3043->SetLineStyle(0);
   Graph_Graph3043->SetMarkerStyle(20);
   Graph_Graph3043->GetXaxis()->SetLabelFont(42);
   Graph_Graph3043->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3043->GetXaxis()->SetTitleFont(42);
   Graph_Graph3043->GetYaxis()->SetLabelFont(42);
   Graph_Graph3043->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3043->GetYaxis()->SetTitleFont(42);
   Graph_Graph3043->GetZaxis()->SetLabelFont(42);
   Graph_Graph3043->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3043);
   
   grae->Draw("2");
   
   Double_t _fx3044[20] = {
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
   Double_t _fy3044[20] = {
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
   Double_t _felx3044[20] = {
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
   Double_t _fely3044[20] = {
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
   Double_t _fehx3044[20] = {
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
   Double_t _fehy3044[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3044,_fy3044,_felx3044,_fehx3044,_fely3044,_fehy3044);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3044 = new TH1F("Graph_Graph3044","",100,0,219);
   Graph_Graph3044->SetMinimum(0);
   Graph_Graph3044->SetMaximum(44.97707);
   Graph_Graph3044->SetDirectory(0);
   Graph_Graph3044->SetStats(0);
   Graph_Graph3044->SetLineStyle(0);
   Graph_Graph3044->SetMarkerStyle(20);
   Graph_Graph3044->GetXaxis()->SetLabelFont(42);
   Graph_Graph3044->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3044->GetXaxis()->SetTitleFont(42);
   Graph_Graph3044->GetYaxis()->SetLabelFont(42);
   Graph_Graph3044->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3044->GetYaxis()->SetTitleFont(42);
   Graph_Graph3044->GetZaxis()->SetLabelFont(42);
   Graph_Graph3044->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3044);
   
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
   
   TH1F *hframe_copy198 = new TH1F("hframe_copy198","",1000,10,200);
   hframe_copy198->SetMinimum(0);
   hframe_copy198->SetMaximum(99.57738);
   hframe_copy198->SetDirectory(0);
   hframe_copy198->SetStats(0);
   hframe_copy198->SetLineStyle(0);
   hframe_copy198->SetMarkerStyle(20);
   hframe_copy198->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy198->GetXaxis()->SetNdivisions(506);
   hframe_copy198->GetXaxis()->SetLabelFont(42);
   hframe_copy198->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy198->GetXaxis()->SetLabelSize(0.05);
   hframe_copy198->GetXaxis()->SetTitleSize(0.06);
   hframe_copy198->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy198->GetXaxis()->SetTitleFont(42);
   hframe_copy198->GetYaxis()->SetTitle("Events");
   hframe_copy198->GetYaxis()->SetLabelFont(42);
   hframe_copy198->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy198->GetYaxis()->SetLabelSize(0.05);
   hframe_copy198->GetYaxis()->SetTitleSize(0.06);
   hframe_copy198->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy198->GetYaxis()->SetTitleFont(42);
   hframe_copy198->GetZaxis()->SetLabelFont(42);
   hframe_copy198->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy198->GetZaxis()->SetLabelSize(0.05);
   hframe_copy198->GetZaxis()->SetTitleSize(0.06);
   hframe_copy198->GetZaxis()->SetTitleFont(42);
   hframe_copy198->Draw("sameaxis");
   ccwh3l_zg_13TeV_mllmin3l->Modified();
   ccwh3l_zg_13TeV_mllmin3l->cd();
   ccwh3l_zg_13TeV_mllmin3l->SetSelected(ccwh3l_zg_13TeV_mllmin3l);
}
