void c_wh3l_13TeV_sssf_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_pt3/cc
//=========  (Wed Jun 29 01:34:26 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_pt3 = new TCanvas("ccwh3l_13TeV_sssf_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_pt3->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_pt3->Range(-28,-1.177279,209.5,7.878713);
   ccwh3l_13TeV_sssf_pt3->SetFillColor(0);
   ccwh3l_13TeV_sssf_pt3->SetBorderMode(0);
   ccwh3l_13TeV_sssf_pt3->SetBorderSize(2);
   ccwh3l_13TeV_sssf_pt3->SetTickx(1);
   ccwh3l_13TeV_sssf_pt3->SetTicky(1);
   ccwh3l_13TeV_sssf_pt3->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_pt3->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_pt3->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_pt3->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt3->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe671 = new TH1F("hframe671","",1000,10,200);
   hframe671->SetMinimum(0);
   hframe671->SetMaximum(7.425913);
   hframe671->SetDirectory(0);
   hframe671->SetStats(0);
   hframe671->SetLineStyle(0);
   hframe671->SetMarkerStyle(20);
   hframe671->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe671->GetXaxis()->SetNdivisions(506);
   hframe671->GetXaxis()->SetLabelFont(42);
   hframe671->GetXaxis()->SetLabelOffset(0.007);
   hframe671->GetXaxis()->SetLabelSize(0.05);
   hframe671->GetXaxis()->SetTitleSize(0.06);
   hframe671->GetXaxis()->SetTitleOffset(0.9);
   hframe671->GetXaxis()->SetTitleFont(42);
   hframe671->GetYaxis()->SetTitle("Events");
   hframe671->GetYaxis()->SetLabelFont(42);
   hframe671->GetYaxis()->SetLabelOffset(0.007);
   hframe671->GetYaxis()->SetLabelSize(0.05);
   hframe671->GetYaxis()->SetTitleSize(0.06);
   hframe671->GetYaxis()->SetTitleOffset(1.25);
   hframe671->GetYaxis()->SetTitleFont(42);
   hframe671->GetZaxis()->SetLabelFont(42);
   hframe671->GetZaxis()->SetLabelOffset(0.007);
   hframe671->GetZaxis()->SetLabelSize(0.05);
   hframe671->GetZaxis()->SetTitleSize(0.06);
   hframe671->GetZaxis()->SetTitleFont(42);
   hframe671->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->SetName("thsBackground_grouped_wh3l_13TeV_sssf_pt3");
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135","thsBackground_grouped_wh3l_13TeV_sssf_pt3",25,10,200);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->SetMinimum(-0.3520574);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->SetMaximum(3.947669);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_pt3_stack_135);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_pt3672 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_pt3672","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinContent(1,2.471154);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinContent(2,0.3877939);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinContent(3,-0.02176431);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinContent(4,-0.2112765);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinContent(5,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinError(1,1.28853);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinError(2,0.2585541);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinError(3,0.1460137);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinError(4,0.1407809);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetBinError(5,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt3672->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_Fake_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_pt3673 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_pt3673","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->SetBinContent(1,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->SetBinContent(2,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->SetBinError(1,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->SetBinError(2,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt3673->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_WW_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_pt3674 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_pt3674","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->SetBinContent(1,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->SetBinContent(7,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->SetBinError(1,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->SetBinError(7,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt3674->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_VVV_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_pt3675 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_pt3675","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt3675->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_Vg_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->SetBinContent(1,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->SetBinContent(4,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->SetBinError(1,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->SetBinError(4,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt3676->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_pt3677 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_pt3677","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinContent(1,0.2754922);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinContent(2,0.1852761);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinContent(3,0.1272343);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinContent(4,0.02626564);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinContent(5,0.005519799);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinContent(6,0.002874792);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinError(1,0.03911032);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinError(2,0.03109962);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinError(3,0.02610442);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinError(4,0.01088964);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinError(5,0.005519799);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetBinError(6,0.002874792);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt3677->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_WZ_wh3l_13TeV_sssf_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(1,0.1118298);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(2,0.08513799);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(3,0.04025344);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(4,0.02678533);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(5,0.01365665);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(6,0.003455574);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(7,0.002339709);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(8,0.00472215);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(9,0.0008811597);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(10,0.0001696153);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(11,0.0002044925);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(1,0.01084444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(2,0.009834547);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(3,0.006560087);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(4,0.005677534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(5,0.003907255);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(6,0.001763178);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(7,0.001225187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(8,0.002577924);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(9,0.0008811597);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(10,0.0001696153);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(11,0.0002044925);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3678->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt3,"");
   thsBackground_grouped_wh3l_13TeV_sssf_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->SetName("thsSignal_grouped_wh3l_13TeV_sssf_pt3");
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136","thsSignal_grouped_wh3l_13TeV_sssf_pt3",25,10,200);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->SetMaximum(0.1288079);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_pt3_stack_136);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(1,0.1118298);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(2,0.08513799);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(3,0.04025344);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(4,0.02678533);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(5,0.01365665);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(6,0.003455574);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(7,0.002339709);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(8,0.00472215);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(9,0.0008811597);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(10,0.0001696153);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(11,0.0002044925);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(1,0.01084444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(2,0.009834547);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(3,0.006560087);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(4,0.005677534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(5,0.003907255);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(6,0.001763178);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(7,0.001225187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(8,0.002577924);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(9,0.0008811597);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(10,0.0001696153);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(11,0.0002044925);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt3679->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt3,"");
   thsSignal_grouped_wh3l_13TeV_sssf_pt3->Draw("hist same noclear");
   
   Double_t _fx3135[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3135[25] = {
   2.858536,
   0.5834614,
   0.1054699,
   -0.149874,
   0.2816424,
   0.002874793,
   0.0005490761,
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
   Double_t _felx3135[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3135[25] = {
   1.679517,
   0.3293408,
   0.1722956,
   0.2009158,
   0.2977621,
   0.002874892,
   0.0005492953,
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
   Double_t _fehx3135[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3135[25] = {
   1.679491,
   0.3293371,
   0.04850372,
   0.200916,
   0.2977621,
   0.002874892,
   0.0005492954,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3135,_fy3135,_felx3135,_fehx3135,_fely3135,_fehy3135);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3135 = new TH1F("Graph_Graph3135","",100,0,219);
   Graph_Graph3135->SetMinimum(-0.8396715);
   Graph_Graph3135->SetMaximum(5.026908);
   Graph_Graph3135->SetDirectory(0);
   Graph_Graph3135->SetStats(0);
   Graph_Graph3135->SetLineStyle(0);
   Graph_Graph3135->SetMarkerStyle(20);
   Graph_Graph3135->GetXaxis()->SetLabelFont(42);
   Graph_Graph3135->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3135->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3135->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3135->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3135->GetXaxis()->SetTitleFont(42);
   Graph_Graph3135->GetYaxis()->SetLabelFont(42);
   Graph_Graph3135->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3135->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3135->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3135->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3135->GetYaxis()->SetTitleFont(42);
   Graph_Graph3135->GetZaxis()->SetLabelFont(42);
   Graph_Graph3135->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3135->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3135->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3135->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3135);
   
   grae->Draw("2");
   
   Double_t _fx3136[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3136[25] = {
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
   Double_t _felx3136[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3136[25] = {
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
   Double_t _fehx3136[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3136[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3136,_fy3136,_felx3136,_fehx3136,_fely3136,_fehy3136);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3136 = new TH1F("Graph_Graph3136","",100,0,219);
   Graph_Graph3136->SetMinimum(0);
   Graph_Graph3136->SetMaximum(1.262698);
   Graph_Graph3136->SetDirectory(0);
   Graph_Graph3136->SetStats(0);
   Graph_Graph3136->SetLineStyle(0);
   Graph_Graph3136->SetMarkerStyle(20);
   Graph_Graph3136->GetXaxis()->SetLabelFont(42);
   Graph_Graph3136->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3136->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3136->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3136->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3136->GetXaxis()->SetTitleFont(42);
   Graph_Graph3136->GetYaxis()->SetLabelFont(42);
   Graph_Graph3136->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3136->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3136->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3136->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3136->GetYaxis()->SetTitleFont(42);
   Graph_Graph3136->GetZaxis()->SetLabelFont(42);
   Graph_Graph3136->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3136->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3136->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3136->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3136);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt3","Data","EPL");
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
   
   TH1F *hframe_copy680 = new TH1F("hframe_copy680","",1000,10,200);
   hframe_copy680->SetMinimum(0);
   hframe_copy680->SetMaximum(7.425913);
   hframe_copy680->SetDirectory(0);
   hframe_copy680->SetStats(0);
   hframe_copy680->SetLineStyle(0);
   hframe_copy680->SetMarkerStyle(20);
   hframe_copy680->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy680->GetXaxis()->SetNdivisions(506);
   hframe_copy680->GetXaxis()->SetLabelFont(42);
   hframe_copy680->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy680->GetXaxis()->SetLabelSize(0.05);
   hframe_copy680->GetXaxis()->SetTitleSize(0.06);
   hframe_copy680->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy680->GetXaxis()->SetTitleFont(42);
   hframe_copy680->GetYaxis()->SetTitle("Events");
   hframe_copy680->GetYaxis()->SetLabelFont(42);
   hframe_copy680->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy680->GetYaxis()->SetLabelSize(0.05);
   hframe_copy680->GetYaxis()->SetTitleSize(0.06);
   hframe_copy680->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy680->GetYaxis()->SetTitleFont(42);
   hframe_copy680->GetZaxis()->SetLabelFont(42);
   hframe_copy680->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy680->GetZaxis()->SetLabelSize(0.05);
   hframe_copy680->GetZaxis()->SetTitleSize(0.06);
   hframe_copy680->GetZaxis()->SetTitleFont(42);
   hframe_copy680->Draw("sameaxis");
   ccwh3l_13TeV_sssf_pt3->Modified();
   ccwh3l_13TeV_sssf_pt3->cd();
   ccwh3l_13TeV_sssf_pt3->SetSelected(ccwh3l_13TeV_sssf_pt3);
}
