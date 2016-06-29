void c_wh3l_13TeV_sssf_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_pt2/cc
//=========  (Wed Jun 29 01:34:26 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_pt2 = new TCanvas("ccwh3l_13TeV_sssf_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_pt2->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_pt2->Range(-28,-0.5539634,209.5,3.707294);
   ccwh3l_13TeV_sssf_pt2->SetFillColor(0);
   ccwh3l_13TeV_sssf_pt2->SetBorderMode(0);
   ccwh3l_13TeV_sssf_pt2->SetBorderSize(2);
   ccwh3l_13TeV_sssf_pt2->SetTickx(1);
   ccwh3l_13TeV_sssf_pt2->SetTicky(1);
   ccwh3l_13TeV_sssf_pt2->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_pt2->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_pt2->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_pt2->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt2->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe681 = new TH1F("hframe681","",1000,10,200);
   hframe681->SetMinimum(0);
   hframe681->SetMaximum(3.494231);
   hframe681->SetDirectory(0);
   hframe681->SetStats(0);
   hframe681->SetLineStyle(0);
   hframe681->SetMarkerStyle(20);
   hframe681->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe681->GetXaxis()->SetNdivisions(506);
   hframe681->GetXaxis()->SetLabelFont(42);
   hframe681->GetXaxis()->SetLabelOffset(0.007);
   hframe681->GetXaxis()->SetLabelSize(0.05);
   hframe681->GetXaxis()->SetTitleSize(0.06);
   hframe681->GetXaxis()->SetTitleOffset(0.9);
   hframe681->GetXaxis()->SetTitleFont(42);
   hframe681->GetYaxis()->SetTitle("Events");
   hframe681->GetYaxis()->SetLabelFont(42);
   hframe681->GetYaxis()->SetLabelOffset(0.007);
   hframe681->GetYaxis()->SetLabelSize(0.05);
   hframe681->GetYaxis()->SetTitleSize(0.06);
   hframe681->GetYaxis()->SetTitleOffset(1.25);
   hframe681->GetYaxis()->SetTitleFont(42);
   hframe681->GetZaxis()->SetLabelFont(42);
   hframe681->GetZaxis()->SetLabelOffset(0.007);
   hframe681->GetZaxis()->SetLabelSize(0.05);
   hframe681->GetZaxis()->SetTitleSize(0.06);
   hframe681->GetZaxis()->SetTitleFont(42);
   hframe681->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_pt2 = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->SetName("thsBackground_grouped_wh3l_13TeV_sssf_pt2");
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_pt2");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137","thsBackground_grouped_wh3l_13TeV_sssf_pt2",25,10,200);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->SetMinimum(-0.4900019);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->SetMaximum(2.234425);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_137);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_pt2682 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_pt2682","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinContent(2,0.5315295);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinContent(3,-0.1796619);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinContent(4,1.170661);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinContent(5,0.1035289);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinContent(6,0.9195533);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinContent(7,-0.008697041);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinContent(8,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinError(2,0.419973);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinError(3,0.31034);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinError(4,0.9573621);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinError(5,0.1780403);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinError(6,0.7001762);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinError(7,0.007585042);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetBinError(8,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2682->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_Fake_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_pt2683 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_pt2683","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->SetBinContent(4,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->SetBinError(4,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2683->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_WW_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_pt2684 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_pt2684","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->SetBinContent(2,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->SetBinContent(9,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->SetBinError(2,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->SetBinError(9,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2684->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_VVV_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_pt2685 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_pt2685","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->SetBinContent(4,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->SetBinError(4,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2685->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_Vg_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->SetBinContent(2,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->SetBinContent(7,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->SetBinError(2,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->SetBinError(7,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2686->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_pt2687 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_pt2687","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(1,0.05830142);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(2,0.1452895);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(3,0.1212991);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(4,0.1158263);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(5,0.05546958);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(6,0.04050875);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(7,0.03273749);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(8,0.01609509);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(9,0.006153808);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(10,0.003593794);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(11,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(12,0.004728666);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(14,0.011118);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinContent(17,0.005827953);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(1,0.01806022);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(2,0.02823911);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(3,0.02475323);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(4,0.02497046);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(5,0.01690675);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(6,0.01470334);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(7,0.01346836);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(8,0.009524);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(9,0.006153808);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(10,0.003593794);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(11,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(12,0.004728666);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(14,0.00786224);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetBinError(17,0.005827953);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2687->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_WZ_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(1,0.01264166);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(2,0.04660306);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(3,0.0548711);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(4,0.04854039);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(5,0.05142534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(6,0.01590773);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(7,0.01024667);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(8,0.01083929);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(9,0.00937648);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(10,0.008985016);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(11,0.004717868);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(12,0.002483983);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(13,0.005483022);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(17,0.001219663);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(19,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(20,0.0001701444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinContent(26,0.0009009495);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(1,0.00373365);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(2,0.006623917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(3,0.007725956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(4,0.007850194);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(5,0.007516995);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(6,0.00390255);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(7,0.002802975);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(8,0.003517269);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(9,0.003206063);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(10,0.003808746);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(11,0.002359426);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(12,0.001677719);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(13,0.002822296);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(17,0.001027735);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(19,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(20,0.0001701444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetBinError(26,0.0005355324);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2688->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt2,"");
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_pt2 = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->SetName("thsSignal_grouped_wh3l_13TeV_sssf_pt2");
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_pt2");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138","thsSignal_grouped_wh3l_13TeV_sssf_pt2",25,10,200);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->SetMaximum(0.06572691);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_138);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(1,0.01264166);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(2,0.04660306);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(3,0.0548711);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(4,0.04854039);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(5,0.05142534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(6,0.01590773);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(7,0.01024667);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(8,0.01083929);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(9,0.00937648);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(10,0.008985016);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(11,0.004717868);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(12,0.002483983);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(13,0.005483022);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(17,0.001219663);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(19,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(20,0.0001701444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinContent(26,0.0009009495);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(1,0.00373365);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(2,0.006623917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(3,0.007725956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(4,0.007850194);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(5,0.007516995);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(6,0.00390255);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(7,0.002802975);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(8,0.003517269);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(9,0.003206063);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(10,0.003808746);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(11,0.002359426);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(12,0.001677719);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(13,0.002822296);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(17,0.001027735);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(19,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(20,0.0001701444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetBinError(26,0.0005355324);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2689->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt2,"");
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->Draw("hist same noclear");
   
   Double_t _fx3137[25] = {
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
   Double_t _fy3137[25] = {
   0.05830142,
   0.7364351,
   -0.05836273,
   1.349152,
   0.1589985,
   0.960062,
   0.05917728,
   0.381211,
   0.006702884,
   0.003593794,
   0.005713332,
   0.004728666,
   0,
   0.011118,
   0,
   0,
   0.005827953,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3137[25] = {
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
   Double_t _fely3137[25] = {
   0.0185311,
   0.5409058,
   0.340967,
   1.122471,
   0.1257716,
   0.7839877,
   0.05630118,
   0.3958352,
   0.006704088,
   0.00359586,
   0.005720973,
   0.004734323,
   0,
   0.007884298,
   0,
   0,
   0.005834735,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3137[25] = {
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
   Double_t _fehy3137[25] = {
   0.01851039,
   0.5409037,
   0.2139103,
   1.122463,
   0.1982872,
   0.7839878,
   0.05630246,
   0.3958352,
   0.006704094,
   0.003595993,
   0.005717632,
   0.004733237,
   0,
   0.007867256,
   0,
   0,
   0.005831321,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3137,_fy3137,_felx3137,_fehx3137,_fely3137,_fehy3137);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3137 = new TH1F("Graph_Graph3137","",100,0,219);
   Graph_Graph3137->SetMinimum(-0.6864242);
   Graph_Graph3137->SetMaximum(2.758709);
   Graph_Graph3137->SetDirectory(0);
   Graph_Graph3137->SetStats(0);
   Graph_Graph3137->SetLineStyle(0);
   Graph_Graph3137->SetMarkerStyle(20);
   Graph_Graph3137->GetXaxis()->SetLabelFont(42);
   Graph_Graph3137->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3137->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3137->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3137->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3137->GetXaxis()->SetTitleFont(42);
   Graph_Graph3137->GetYaxis()->SetLabelFont(42);
   Graph_Graph3137->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3137->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3137->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3137->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3137->GetYaxis()->SetTitleFont(42);
   Graph_Graph3137->GetZaxis()->SetLabelFont(42);
   Graph_Graph3137->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3137->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3137->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3137->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3137);
   
   grae->Draw("2");
   
   Double_t _fx3138[25] = {
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
   Double_t _fy3138[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3138[25] = {
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
   Double_t _fely3138[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3138[25] = {
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
   Double_t _fehy3138[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3138,_fy3138,_felx3138,_fehx3138,_fely3138,_fehy3138);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3138 = new TH1F("Graph_Graph3138","",100,0,219);
   Graph_Graph3138->SetMinimum(0);
   Graph_Graph3138->SetMaximum(1.262698);
   Graph_Graph3138->SetDirectory(0);
   Graph_Graph3138->SetStats(0);
   Graph_Graph3138->SetLineStyle(0);
   Graph_Graph3138->SetMarkerStyle(20);
   Graph_Graph3138->GetXaxis()->SetLabelFont(42);
   Graph_Graph3138->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3138->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3138->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3138->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3138->GetXaxis()->SetTitleFont(42);
   Graph_Graph3138->GetYaxis()->SetLabelFont(42);
   Graph_Graph3138->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3138->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3138->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3138->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3138->GetYaxis()->SetTitleFont(42);
   Graph_Graph3138->GetZaxis()->SetLabelFont(42);
   Graph_Graph3138->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3138->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3138->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3138->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3138);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt2","Data","EPL");
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
   
   TH1F *hframe_copy690 = new TH1F("hframe_copy690","",1000,10,200);
   hframe_copy690->SetMinimum(0);
   hframe_copy690->SetMaximum(3.494231);
   hframe_copy690->SetDirectory(0);
   hframe_copy690->SetStats(0);
   hframe_copy690->SetLineStyle(0);
   hframe_copy690->SetMarkerStyle(20);
   hframe_copy690->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy690->GetXaxis()->SetNdivisions(506);
   hframe_copy690->GetXaxis()->SetLabelFont(42);
   hframe_copy690->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy690->GetXaxis()->SetLabelSize(0.05);
   hframe_copy690->GetXaxis()->SetTitleSize(0.06);
   hframe_copy690->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy690->GetXaxis()->SetTitleFont(42);
   hframe_copy690->GetYaxis()->SetTitle("Events");
   hframe_copy690->GetYaxis()->SetLabelFont(42);
   hframe_copy690->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy690->GetYaxis()->SetLabelSize(0.05);
   hframe_copy690->GetYaxis()->SetTitleSize(0.06);
   hframe_copy690->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy690->GetYaxis()->SetTitleFont(42);
   hframe_copy690->GetZaxis()->SetLabelFont(42);
   hframe_copy690->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy690->GetZaxis()->SetLabelSize(0.05);
   hframe_copy690->GetZaxis()->SetTitleSize(0.06);
   hframe_copy690->GetZaxis()->SetTitleFont(42);
   hframe_copy690->Draw("sameaxis");
   ccwh3l_13TeV_sssf_pt2->Modified();
   ccwh3l_13TeV_sssf_pt2->cd();
   ccwh3l_13TeV_sssf_pt2->SetSelected(ccwh3l_13TeV_sssf_pt2);
}
