void c_wh3l_13TeV_sssf_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_mllmin3l/cc
//=========  (Wed Jun 29 22:36:13 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_mllmin3l = new TCanvas("ccwh3l_13TeV_sssf_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_mllmin3l->Range(-28,-0.4943883,209.5,3.308599);
   ccwh3l_13TeV_sssf_mllmin3l->SetFillColor(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_sssf_mllmin3l->SetTickx(1);
   ccwh3l_13TeV_sssf_mllmin3l->SetTicky(1);
   ccwh3l_13TeV_sssf_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_mllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_mllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,10,200);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(3.118449);
   hframe121->SetDirectory(0);
   hframe121->SetStats(0);
   hframe121->SetLineStyle(0);
   hframe121->SetMarkerStyle(20);
   hframe121->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe121->GetXaxis()->SetNdivisions(506);
   hframe121->GetXaxis()->SetLabelFont(42);
   hframe121->GetXaxis()->SetLabelOffset(0.007);
   hframe121->GetXaxis()->SetLabelSize(0.05);
   hframe121->GetXaxis()->SetTitleSize(0.06);
   hframe121->GetXaxis()->SetTitleOffset(0.9);
   hframe121->GetXaxis()->SetTitleFont(42);
   hframe121->GetYaxis()->SetTitle("Events");
   hframe121->GetYaxis()->SetLabelFont(42);
   hframe121->GetYaxis()->SetLabelOffset(0.007);
   hframe121->GetYaxis()->SetLabelSize(0.05);
   hframe121->GetYaxis()->SetTitleSize(0.06);
   hframe121->GetYaxis()->SetTitleOffset(1.25);
   hframe121->GetYaxis()->SetTitleFont(42);
   hframe121->GetZaxis()->SetLabelFont(42);
   hframe121->GetZaxis()->SetLabelOffset(0.007);
   hframe121->GetZaxis()->SetLabelSize(0.05);
   hframe121->GetZaxis()->SetTitleSize(0.06);
   hframe121->GetZaxis()->SetTitleFont(42);
   hframe121->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l");
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25","thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->SetMinimum(-0.2146851);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->SetMaximum(1.691718);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(1,-0.07907178);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(2,-0.1063105);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(3,0.5387493);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(4,0.4633326);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(5,1.088571);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(6,0.7652338);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(7,-0.02201848);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(8,-0.1109757);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinContent(9,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(1,0.07907178);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(2,0.0795514);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(3,0.7023943);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(4,0.5170052);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(5,0.5225895);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(6,0.7998523);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(7,0.1199198);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(8,0.1037094);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetBinError(9,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->SetBinContent(8,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->SetBinError(8,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->SetBinContent(4,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->SetBinError(4,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->SetBinContent(2,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->SetBinError(2,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->SetBinContent(3,0.07785033);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->SetBinError(3,0.05530859);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(1,0.01853837);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(2,0.0417047);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(3,0.1429881);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(4,0.188531);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(5,0.1103692);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(6,0.05018871);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(7,0.03372228);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(8,0.01825283);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinContent(9,0.01836765);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(1,0.009526513);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(2,0.01477391);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(3,0.02788436);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(4,0.03306691);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(5,0.02301822);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(6,0.01568207);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(7,0.01390479);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(8,0.009707654);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetBinError(9,0.009603792);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(1,0.02790645);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(2,0.0525289);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(3,0.04821619);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(4,0.05020717);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(5,0.04843984);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(6,0.02897656);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(7,0.01875275);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(8,0.005147506);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(9,0.003059901);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinContent(10,0.0003164354);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(1,0.006249941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(2,0.008418096);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(3,0.007427463);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(4,0.007137659);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(5,0.006783433);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(6,0.004878336);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(7,0.004407582);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(8,0.001690661);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(9,0.00126864);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetBinError(10,0.0003164354);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l");
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26","thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->SetMaximum(0.06399435);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(1,0.02790645);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(2,0.0525289);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(3,0.04821619);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(4,0.05020717);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(5,0.04843984);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(6,0.02897656);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(7,0.01875275);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(8,0.005147506);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(9,0.003059901);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinContent(10,0.0003164354);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(1,0.006249941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(2,0.008418096);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(3,0.007427463);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(4,0.007137659);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(5,0.006783433);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(6,0.004878336);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(7,0.004407582);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(8,0.001690661);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(9,0.00126864);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetBinError(10,0.0003164354);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l129->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3025[20] = {
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
   Double_t _fy3025[20] = {
   -0.06053341,
   -0.01233297,
   0.7757119,
   0.6526421,
   1.19894,
   0.8154225,
   0.0117038,
   -0.08233152,
   0.3834835,
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
   Double_t _felx3025[20] = {
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
   Double_t _fely3025[20] = {
   0.09282273,
   0.1514048,
   0.6654234,
   0.5229944,
   0.6654748,
   0.8255693,
   0.1340469,
   0.1297595,
   0.3959107,
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
   Double_t _fehx3025[20] = {
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
   Double_t _fehy3025[20] = {
   0.09282117,
   0.151339,
   0.8236489,
   0.5742571,
   0.6654748,
   0.8583887,
   0.03674284,
   0.1297596,
   0.3959107,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,219);
   Graph_Graph3025->SetMinimum(-0.4197416);
   Graph_Graph3025->SetMaximum(2.072065);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("2");
   
   Double_t _fx3026[20] = {
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
   Double_t _fy3026[20] = {
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
   Double_t _felx3026[20] = {
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
   Double_t _fely3026[20] = {
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
   Double_t _fehx3026[20] = {
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
   Double_t _fehy3026[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,219);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(1.262698);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineStyle(0);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy130 = new TH1F("hframe_copy130","",1000,10,200);
   hframe_copy130->SetMinimum(0);
   hframe_copy130->SetMaximum(3.118449);
   hframe_copy130->SetDirectory(0);
   hframe_copy130->SetStats(0);
   hframe_copy130->SetLineStyle(0);
   hframe_copy130->SetMarkerStyle(20);
   hframe_copy130->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy130->GetXaxis()->SetNdivisions(506);
   hframe_copy130->GetXaxis()->SetLabelFont(42);
   hframe_copy130->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetXaxis()->SetLabelSize(0.05);
   hframe_copy130->GetXaxis()->SetTitleSize(0.06);
   hframe_copy130->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy130->GetXaxis()->SetTitleFont(42);
   hframe_copy130->GetYaxis()->SetTitle("Events");
   hframe_copy130->GetYaxis()->SetLabelFont(42);
   hframe_copy130->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetYaxis()->SetLabelSize(0.05);
   hframe_copy130->GetYaxis()->SetTitleSize(0.06);
   hframe_copy130->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy130->GetYaxis()->SetTitleFont(42);
   hframe_copy130->GetZaxis()->SetLabelFont(42);
   hframe_copy130->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetZaxis()->SetLabelSize(0.05);
   hframe_copy130->GetZaxis()->SetTitleSize(0.06);
   hframe_copy130->GetZaxis()->SetTitleFont(42);
   hframe_copy130->Draw("sameaxis");
   ccwh3l_13TeV_sssf_mllmin3l->Modified();
   ccwh3l_13TeV_sssf_mllmin3l->cd();
   ccwh3l_13TeV_sssf_mllmin3l->SetSelected(ccwh3l_13TeV_sssf_mllmin3l);
}
