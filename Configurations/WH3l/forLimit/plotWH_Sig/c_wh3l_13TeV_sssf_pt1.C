void c_wh3l_13TeV_sssf_pt1()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_pt1/cc
//=========  (Wed Jun 29 22:36:16 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_pt1 = new TCanvas("ccwh3l_13TeV_sssf_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_pt1->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_pt1->Range(-88,-0.4251514,524.5,2.845244);
   ccwh3l_13TeV_sssf_pt1->SetFillColor(0);
   ccwh3l_13TeV_sssf_pt1->SetBorderMode(0);
   ccwh3l_13TeV_sssf_pt1->SetBorderSize(2);
   ccwh3l_13TeV_sssf_pt1->SetTickx(1);
   ccwh3l_13TeV_sssf_pt1->SetTicky(1);
   ccwh3l_13TeV_sssf_pt1->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_pt1->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_pt1->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_pt1->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe171 = new TH1F("hframe171","",1000,10,500);
   hframe171->SetMinimum(0);
   hframe171->SetMaximum(2.681724);
   hframe171->SetDirectory(0);
   hframe171->SetStats(0);
   hframe171->SetLineStyle(0);
   hframe171->SetMarkerStyle(20);
   hframe171->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe171->GetXaxis()->SetNdivisions(506);
   hframe171->GetXaxis()->SetLabelFont(42);
   hframe171->GetXaxis()->SetLabelOffset(0.007);
   hframe171->GetXaxis()->SetLabelSize(0.05);
   hframe171->GetXaxis()->SetTitleSize(0.06);
   hframe171->GetXaxis()->SetTitleOffset(0.9);
   hframe171->GetXaxis()->SetTitleFont(42);
   hframe171->GetYaxis()->SetTitle("Events");
   hframe171->GetYaxis()->SetLabelFont(42);
   hframe171->GetYaxis()->SetLabelOffset(0.007);
   hframe171->GetYaxis()->SetLabelSize(0.05);
   hframe171->GetYaxis()->SetTitleSize(0.06);
   hframe171->GetYaxis()->SetTitleOffset(1.25);
   hframe171->GetYaxis()->SetTitleFont(42);
   hframe171->GetZaxis()->SetLabelFont(42);
   hframe171->GetZaxis()->SetLabelOffset(0.007);
   hframe171->GetZaxis()->SetLabelSize(0.05);
   hframe171->GetZaxis()->SetTitleSize(0.06);
   hframe171->GetZaxis()->SetTitleFont(42);
   hframe171->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_pt1 = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetName("thsBackground_grouped_wh3l_13TeV_sssf_pt1");
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_pt1");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35","thsBackground_grouped_wh3l_13TeV_sssf_pt1",50,10,500);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetMinimum(-0.6071986);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetMaximum(1.835987);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_pt1172 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_pt1172","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(2,0.08673888);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(3,-0.3157732);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(4,0.5064501);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(5,0.2712217);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(6,0.7530828);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(7,1.008753);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(8,0.4643462);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(10,-0.006707157);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(19,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(2,0.1247511);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(3,0.2914254);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(4,0.5359448);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(5,0.2761661);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(6,0.8016522);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(7,0.7398059);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(8,0.415269);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(10,0.006707157);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(19,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Fake_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_pt1173 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_pt1173","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetBinContent(5,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetBinError(5,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_WW_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_pt1174 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_pt1174","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetBinContent(12,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetBinError(12,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_VVV_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_pt1175 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_pt1175","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetBinContent(5,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetBinError(5,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Vg_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetBinContent(6,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetBinError(6,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_pt1177 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_pt1177","histo_WZ",50,10,500);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(2,0.03943742);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(3,0.1036513);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(4,0.1269764);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(5,0.1071868);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(6,0.07502071);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(7,0.04473389);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(8,0.0208566);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(9,0.001838737);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(10,0.04300985);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(12,0.01068012);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(13,0.00834103);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(14,0.005629369);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(15,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(16,0.005827953);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(17,0.01184797);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(18,0.005246641);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(21,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(2,0.01419849);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(3,0.02348567);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(4,0.02499094);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(5,0.02439358);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(6,0.020744);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(7,0.01482104);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(8,0.01044292);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(9,0.001838737);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(10,0.01649862);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(12,0.006797004);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(13,0.006416267);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(14,0.005629369);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(15,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(16,0.005827953);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(17,0.008400375);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(18,0.005246641);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(21,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_WZ_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(2,0.008112175);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(3,0.03368541);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(4,0.03323961);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(5,0.0439163);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(6,0.04457257);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(7,0.01920314);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(8,0.02381926);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(9,0.01555958);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(10,0.008526947);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(11,0.01135249);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(12,0.003256125);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(13,0.01378029);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(14,0.007322075);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(15,0.005716573);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(16,0.002800204);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(17,0.0006518375);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(18,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(19,0.00182608);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(20,0.001868845);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(21,0.0002307214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(22,0.0006872514);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(23,0.0005684409);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(24,0.0008696309);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(26,0.0003836048);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(32,0.0001195055);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(34,0.0002107362);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(35,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(39,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(42,0.0002091304);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(46,0.0002757727);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(2,0.002423532);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(3,0.006177237);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(4,0.005445581);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(5,0.00673228);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(6,0.00722281);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(7,0.00472561);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(8,0.006163079);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(9,0.003840933);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(10,0.003175628);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(11,0.003303052);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(12,0.001105917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(13,0.004211642);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(14,0.003313939);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(15,0.0024363);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(16,0.001251213);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(17,0.0003823783);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(18,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(19,0.001007702);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(20,0.001669111);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(21,0.0002307214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(22,0.0004888399);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(23,0.0004145686);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(24,0.0005102096);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(26,0.0003424913);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(32,0.0001195055);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(34,0.0002107362);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(35,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(39,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(42,0.0002091304);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(46,0.0002134529);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt1,"");
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_pt1 = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetName("thsSignal_grouped_wh3l_13TeV_sssf_pt1");
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_pt1");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36","thsSignal_grouped_wh3l_13TeV_sssf_pt1",50,10,500);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetMaximum(0.05438515);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(2,0.008112175);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(3,0.03368541);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(4,0.03323961);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(5,0.0439163);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(6,0.04457257);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(7,0.01920314);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(8,0.02381926);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(9,0.01555958);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(10,0.008526947);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(11,0.01135249);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(12,0.003256125);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(13,0.01378029);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(14,0.007322075);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(15,0.005716573);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(16,0.002800204);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(17,0.0006518375);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(18,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(19,0.00182608);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(20,0.001868845);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(21,0.0002307214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(22,0.0006872514);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(23,0.0005684409);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(24,0.0008696309);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(26,0.0003836048);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(32,0.0001195055);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(34,0.0002107362);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(35,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(39,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(42,0.0002091304);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(46,0.0002757727);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(2,0.002423532);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(3,0.006177237);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(4,0.005445581);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(5,0.00673228);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(6,0.00722281);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(7,0.00472561);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(8,0.006163079);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(9,0.003840933);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(10,0.003175628);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(11,0.003303052);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(12,0.001105917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(13,0.004211642);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(14,0.003313939);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(15,0.0024363);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(16,0.001251213);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(17,0.0003823783);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(18,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(19,0.001007702);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(20,0.001669111);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(21,0.0002307214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(22,0.0004888399);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(23,0.0004145686);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(24,0.0005102096);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(26,0.0003424913);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(32,0.0001195055);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(34,0.0002107362);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(35,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(39,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(42,0.0002091304);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(46,0.0002134529);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt1,"");
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->Draw("hist same noclear");
   
   Double_t _fx3035[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3035[50] = {
   0,
   0.1261763,
   -0.1959978,
   0.6334265,
   0.4410726,
   0.870817,
   1.053487,
   0.4852028,
   0.001838737,
   0.03630269,
   0,
   0.01145857,
   0.00834103,
   0.00562937,
   0.006664773,
   0.005827953,
   0.01184797,
   0.005246641,
   0.1345139,
   0,
   0.005713332,
   0,
   0,
   0,
   0,
   0.03513683,
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
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3035[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3035[50] = {
   0,
   0.1054506,
   0.3490388,
   0.5602322,
   0.3707062,
   0.858035,
   0.8331367,
   0.4556795,
   0.001839675,
   0.0233867,
   0,
   0.007581307,
   0.00645246,
   0.005631911,
   0.00666865,
   0.005834735,
   0.008414057,
   0.00524912,
   0.1425149,
   0,
   0.005720973,
   0,
   0,
   0,
   0,
   0.03516259,
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
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3035[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3035[50] = {
   0,
   0.1422648,
   0.3490339,
   0.5882857,
   0.3754617,
   0.9043787,
   0.833137,
   0.4556795,
   0.001839739,
   0.02337041,
   0,
   0.007580485,
   0.006455255,
   0.005632123,
   0.006668883,
   0.005831321,
   0.008402969,
   0.005249275,
   0.1425149,
   0,
   0.005717632,
   0,
   0,
   0,
   0,
   0.03516361,
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
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,549);
   Graph_Graph3035->SetMinimum(-0.7882027);
   Graph_Graph3035->SetMaximum(2.12979);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineStyle(0);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2");
   
   Double_t _fx3036[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3036[50] = {
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
   Double_t _felx3036[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3036[50] = {
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
   Double_t _fehx3036[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3036[50] = {
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
   grae = new TGraphAsymmErrors(50,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,549);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.262698);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineStyle(0);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt1","Data","EPL");
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
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,10,500);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(2.681724);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
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
   ccwh3l_13TeV_sssf_pt1->Modified();
   ccwh3l_13TeV_sssf_pt1->cd();
   ccwh3l_13TeV_sssf_pt1->SetSelected(ccwh3l_13TeV_sssf_pt1);
}
