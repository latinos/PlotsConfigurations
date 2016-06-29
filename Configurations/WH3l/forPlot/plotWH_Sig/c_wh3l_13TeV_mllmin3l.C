void c_wh3l_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_mllmin3l/cc
//=========  (Wed Jun 29 01:51:48 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_mllmin3l = new TCanvas("ccwh3l_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_mllmin3l->Range(-28,-1.861533,209.5,12.45795);
   ccwh3l_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe331 = new TH1F("hframe331","",1000,10,200);
   hframe331->SetMinimum(0);
   hframe331->SetMaximum(11.74198);
   hframe331->SetDirectory(0);
   hframe331->SetStats(0);
   hframe331->SetLineStyle(0);
   hframe331->SetMarkerStyle(20);
   hframe331->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe331->GetXaxis()->SetNdivisions(506);
   hframe331->GetXaxis()->SetLabelFont(42);
   hframe331->GetXaxis()->SetLabelOffset(0.007);
   hframe331->GetXaxis()->SetLabelSize(0.05);
   hframe331->GetXaxis()->SetTitleSize(0.06);
   hframe331->GetXaxis()->SetTitleOffset(0.9);
   hframe331->GetXaxis()->SetTitleFont(42);
   hframe331->GetYaxis()->SetTitle("Events");
   hframe331->GetYaxis()->SetLabelFont(42);
   hframe331->GetYaxis()->SetLabelOffset(0.007);
   hframe331->GetYaxis()->SetLabelSize(0.05);
   hframe331->GetYaxis()->SetTitleSize(0.06);
   hframe331->GetYaxis()->SetTitleOffset(1.25);
   hframe331->GetYaxis()->SetTitleFont(42);
   hframe331->GetZaxis()->SetLabelFont(42);
   hframe331->GetZaxis()->SetLabelOffset(0.007);
   hframe331->GetZaxis()->SetLabelSize(0.05);
   hframe331->GetZaxis()->SetTitleSize(0.06);
   hframe331->GetZaxis()->SetTitleFont(42);
   hframe331->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67 = new TH1F("thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67","thsBackground_grouped_wh3l_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->SetMinimum(-0.5415397);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->SetMaximum(4.931632);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_67);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_mllmin3l332 = new TH1D("new_histo_group_Fake_wh3l_13TeV_mllmin3l332","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(1,0.3565084);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(2,1.811932);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(3,1.607775);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(4,2.696661);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(5,1.91562);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(6,1.145918);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(7,-0.02201848);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(8,-0.1115714);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinContent(9,0.3274007);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(1,0.8980481);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(2,0.9062131);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(3,0.883223);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(4,1.473938);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(5,0.8838968);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(6,1.039414);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(7,0.1199198);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(8,0.1037111);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetBinError(9,0.3670586);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_mllmin3l332->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_mllmin3l333 = new TH1D("new_histo_group_WW_wh3l_13TeV_mllmin3l333","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinContent(4,0.0285913);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinContent(6,0.01447441);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinError(4,0.02093881);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinError(6,0.01447441);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l333->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_mllmin3l334 = new TH1D("new_histo_group_VVV_wh3l_13TeV_mllmin3l334","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinContent(2,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinContent(3,0.001338787);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinContent(4,0.001903903);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinContent(5,0.001259243);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinContent(7,0.001875758);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinContent(8,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinContent(10,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinError(2,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinError(3,0.0009470446);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinError(4,0.001061702);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinError(5,0.000890444);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinError(7,0.001087065);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinError(8,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetBinError(10,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l334->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_mllmin3l335 = new TH1D("new_histo_group_Vg_wh3l_13TeV_mllmin3l335","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinContent(1,0.3820383);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinContent(2,0.3075112);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinContent(3,0.4384879);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinContent(4,0.4695703);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinContent(5,0.4647019);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinContent(6,0.5858595);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinError(1,0.1831067);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinError(2,0.2412625);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinError(3,0.2109827);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinError(4,0.2707473);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinError(5,0.2532026);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetBinError(6,0.2264765);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_mllmin3l335->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_mllmin3l336 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_mllmin3l336","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinContent(1,0.1184806);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinContent(2,0.0779526);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinContent(3,0.132816);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinContent(4,0.05331504);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinContent(5,0.09574984);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinContent(6,0.09445183);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinContent(7,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinContent(9,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinError(1,0.06857912);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinError(2,0.0576159);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinError(3,0.06761644);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinError(4,0.04178168);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinError(5,0.05793301);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinError(6,0.06701456);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinError(7,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetBinError(9,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_mllmin3l336->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_mllmin3l337 = new TH1D("new_histo_group_WZ_wh3l_13TeV_mllmin3l337","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(1,1.164584);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(2,1.364976);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(3,1.53854);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(4,1.289302);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(5,0.8178967);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(6,0.752057);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(7,0.1689606);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(8,0.1285872);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(9,0.09382656);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinContent(10,0.07048525);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(1,0.07927825);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(2,0.08597056);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(3,0.09167351);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(4,0.08437508);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(5,0.06611298);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(6,0.06386561);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(7,0.02986237);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(8,0.02610465);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(9,0.02237739);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetBinError(10,0.0198639);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_mllmin3l337->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_mllmin3l338 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_mllmin3l338","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(1,0.0981454);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(2,0.1672389);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(3,0.1884069);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(4,0.1574482);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(5,0.1272001);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(6,0.06441054);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(7,0.02479933);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(8,0.004353786);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinContent(9,0.003721946);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(1,0.01125005);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(2,0.01496239);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(3,0.0153626);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(4,0.01352289);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(5,0.01093513);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(6,0.007745052);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(7,0.005437654);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(8,0.001067668);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetBinError(9,0.001341696);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l338->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68 = new TH1F("thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68","thsSignal_grouped_wh3l_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->SetMaximum(0.2139579);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_68);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_mllmin3l339 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_mllmin3l339","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(1,0.0981454);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(2,0.1672389);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(3,0.1884069);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(4,0.1574482);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(5,0.1272001);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(6,0.06441054);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(7,0.02479933);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(8,0.004353786);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinContent(9,0.003721946);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(1,0.01125005);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(2,0.01496239);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(3,0.0153626);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(4,0.01352289);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(5,0.01093513);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(6,0.007745052);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(7,0.005437654);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(8,0.001067668);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetBinError(9,0.001341696);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l339->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3067[20] = {
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
   Double_t _fy3067[20] = {
   2.036915,
   3.562985,
   3.735081,
   4.539344,
   3.295228,
   2.59276,
   0.1773804,
   0.01770363,
   0.4665054,
   0.08533421,
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
   Double_t _felx3067[20] = {
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
   Double_t _fely3067[20] = {
   0.7208495,
   1.442257,
   1.393519,
   2.116034,
   1.429668,
   1.467701,
   0.1796602,
   0.1362463,
   0.411346,
   0.03477317,
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
   Double_t _fehx3067[20] = {
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
   Double_t _fehy3067[20] = {
   1.254163,
   1.4422,
   1.393266,
   2.115982,
   1.429629,
   1.467677,
   0.08203612,
   0.1362438,
   0.4495693,
   0.03477089,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3067,_fy3067,_felx3067,_fehx3067,_fely3067,_fehy3067);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3067 = new TH1F("Graph_Graph3067","",100,0,219);
   Graph_Graph3067->SetMinimum(-0.7959295);
   Graph_Graph3067->SetMaximum(7.332712);
   Graph_Graph3067->SetDirectory(0);
   Graph_Graph3067->SetStats(0);
   Graph_Graph3067->SetLineStyle(0);
   Graph_Graph3067->SetMarkerStyle(20);
   Graph_Graph3067->GetXaxis()->SetLabelFont(42);
   Graph_Graph3067->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3067->GetXaxis()->SetTitleFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3067->GetYaxis()->SetTitleFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3067);
   
   grae->Draw("2");
   
   Double_t _fx3068[20] = {
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
   Double_t _fy3068[20] = {
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
   Double_t _felx3068[20] = {
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
   Double_t _fely3068[20] = {
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
   Double_t _fehx3068[20] = {
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
   Double_t _fehy3068[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3068,_fy3068,_felx3068,_fehx3068,_fely3068,_fehy3068);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3068 = new TH1F("Graph_Graph3068","",100,0,219);
   Graph_Graph3068->SetMinimum(0);
   Graph_Graph3068->SetMaximum(1.262698);
   Graph_Graph3068->SetDirectory(0);
   Graph_Graph3068->SetStats(0);
   Graph_Graph3068->SetLineStyle(0);
   Graph_Graph3068->SetMarkerStyle(20);
   Graph_Graph3068->GetXaxis()->SetLabelFont(42);
   Graph_Graph3068->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3068->GetXaxis()->SetTitleFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3068->GetYaxis()->SetTitleFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3068);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy340 = new TH1F("hframe_copy340","",1000,10,200);
   hframe_copy340->SetMinimum(0);
   hframe_copy340->SetMaximum(11.74198);
   hframe_copy340->SetDirectory(0);
   hframe_copy340->SetStats(0);
   hframe_copy340->SetLineStyle(0);
   hframe_copy340->SetMarkerStyle(20);
   hframe_copy340->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy340->GetXaxis()->SetNdivisions(506);
   hframe_copy340->GetXaxis()->SetLabelFont(42);
   hframe_copy340->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetXaxis()->SetLabelSize(0.05);
   hframe_copy340->GetXaxis()->SetTitleSize(0.06);
   hframe_copy340->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy340->GetXaxis()->SetTitleFont(42);
   hframe_copy340->GetYaxis()->SetTitle("Events");
   hframe_copy340->GetYaxis()->SetLabelFont(42);
   hframe_copy340->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetYaxis()->SetLabelSize(0.05);
   hframe_copy340->GetYaxis()->SetTitleSize(0.06);
   hframe_copy340->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy340->GetYaxis()->SetTitleFont(42);
   hframe_copy340->GetZaxis()->SetLabelFont(42);
   hframe_copy340->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetZaxis()->SetLabelSize(0.05);
   hframe_copy340->GetZaxis()->SetTitleSize(0.06);
   hframe_copy340->GetZaxis()->SetTitleFont(42);
   hframe_copy340->Draw("sameaxis");
   ccwh3l_13TeV_mllmin3l->Modified();
   ccwh3l_13TeV_mllmin3l->cd();
   ccwh3l_13TeV_mllmin3l->SetSelected(ccwh3l_13TeV_mllmin3l);
}
