void c_wh3l_Pre_SSSF_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_SSSF_13TeV_zveto_3l/cc
//=========  (Sun Jul  3 16:48:29 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_SSSF_13TeV_zveto_3l = new TCanvas("ccwh3l_Pre_SSSF_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->Range(-20,-9.941746,105,66.53323);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe111 = new TH1F("hframe111","",1000,0,100);
   hframe111->SetMinimum(0);
   hframe111->SetMaximum(62.70948);
   hframe111->SetDirectory(0);
   hframe111->SetStats(0);
   hframe111->SetLineStyle(0);
   hframe111->SetMarkerStyle(20);
   hframe111->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe111->GetXaxis()->SetNdivisions(506);
   hframe111->GetXaxis()->SetLabelFont(42);
   hframe111->GetXaxis()->SetLabelOffset(0.007);
   hframe111->GetXaxis()->SetLabelSize(0.05);
   hframe111->GetXaxis()->SetTitleSize(0.06);
   hframe111->GetXaxis()->SetTitleOffset(0.9);
   hframe111->GetXaxis()->SetTitleFont(42);
   hframe111->GetYaxis()->SetTitle("Events");
   hframe111->GetYaxis()->SetLabelFont(42);
   hframe111->GetYaxis()->SetLabelOffset(0.007);
   hframe111->GetYaxis()->SetLabelSize(0.05);
   hframe111->GetYaxis()->SetTitleSize(0.06);
   hframe111->GetYaxis()->SetTitleOffset(1.25);
   hframe111->GetYaxis()->SetTitleFont(42);
   hframe111->GetZaxis()->SetLabelFont(42);
   hframe111->GetZaxis()->SetLabelOffset(0.007);
   hframe111->GetZaxis()->SetLabelSize(0.05);
   hframe111->GetZaxis()->SetTitleSize(0.06);
   hframe111->GetZaxis()->SetTitleFont(42);
   hframe111->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23 = new TH1F("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23","thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->SetMinimum(-0.102791);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->SetMaximum(26.61798);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->SetStats(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_23);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112 = new TH1D("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->SetBinContent(19,22.1599);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->SetBinError(19,3.190554);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113 = new TH1D("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->SetBinContent(19,0.1954926);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->SetBinError(19,0.05489521);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114 = new TH1D("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->SetBinContent(19,0.3680759);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->SetBinError(19,0.03145783);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115 = new TH1D("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->SetBinContent(19,0.1998786);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->SetBinError(19,0.3026696);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116 = new TH1D("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->SetBinContent(19,0.1653816);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->SetBinError(19,0.08319056);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l116->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117 = new TH1D("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->SetBinContent(19,1.495022);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->SetBinError(19,0.09046657);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->SetBinContent(19,0.5000402);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->SetBinError(19,0.02307393);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l118->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24 = new TH1F("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24","thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->SetMaximum(0.5492699);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->SetStats(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l_stack_24);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->SetBinContent(19,0.5000402);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->SetBinError(19,0.02307393);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l119->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3023[20] = {
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
   Double_t _fy3023[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   24.58375,
   0};
   Double_t _felx3023[20] = {
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
   Double_t _fely3023[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.580038,
   0};
   Double_t _fehx3023[20] = {
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
   Double_t _fehy3023[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.624183,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,110);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(36.52873);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t _fx3024[20] = {
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
   Double_t _fy3024[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3024[20] = {
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
   Double_t _fely3024[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3024[20] = {
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
   Double_t _fehy3024[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,110);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(1.262698);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy120 = new TH1F("hframe_copy120","",1000,0,100);
   hframe_copy120->SetMinimum(0);
   hframe_copy120->SetMaximum(62.70948);
   hframe_copy120->SetDirectory(0);
   hframe_copy120->SetStats(0);
   hframe_copy120->SetLineStyle(0);
   hframe_copy120->SetMarkerStyle(20);
   hframe_copy120->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy120->GetXaxis()->SetNdivisions(506);
   hframe_copy120->GetXaxis()->SetLabelFont(42);
   hframe_copy120->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetXaxis()->SetLabelSize(0.05);
   hframe_copy120->GetXaxis()->SetTitleSize(0.06);
   hframe_copy120->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy120->GetXaxis()->SetTitleFont(42);
   hframe_copy120->GetYaxis()->SetTitle("Events");
   hframe_copy120->GetYaxis()->SetLabelFont(42);
   hframe_copy120->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetYaxis()->SetLabelSize(0.05);
   hframe_copy120->GetYaxis()->SetTitleSize(0.06);
   hframe_copy120->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy120->GetYaxis()->SetTitleFont(42);
   hframe_copy120->GetZaxis()->SetLabelFont(42);
   hframe_copy120->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetZaxis()->SetLabelSize(0.05);
   hframe_copy120->GetZaxis()->SetTitleSize(0.06);
   hframe_copy120->GetZaxis()->SetTitleFont(42);
   hframe_copy120->Draw("sameaxis");
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->Modified();
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->cd();
   ccwh3l_Pre_SSSF_13TeV_zveto_3l->SetSelected(ccwh3l_Pre_SSSF_13TeV_zveto_3l);
}
