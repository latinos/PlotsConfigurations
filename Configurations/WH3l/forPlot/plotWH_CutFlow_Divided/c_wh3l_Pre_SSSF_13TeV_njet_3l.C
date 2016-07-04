void c_wh3l_Pre_SSSF_13TeV_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_SSSF_13TeV_njet_3l/cc
//=========  (Sun Jul  3 16:48:29 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_SSSF_13TeV_njet_3l = new TCanvas("ccwh3l_Pre_SSSF_13TeV_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetHighLightColor(2);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->Range(-1.6,-5.07362,8.4,33.95422);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetFillColor(0);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetBorderSize(2);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetTickx(1);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetTicky(1);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetLeftMargin(0.16);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetRightMargin(0.04);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetTopMargin(0.05);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetBottomMargin(0.13);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetFrameBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe101 = new TH1F("hframe101","",1000,0,8);
   hframe101->SetMinimum(0);
   hframe101->SetMaximum(32.00283);
   hframe101->SetDirectory(0);
   hframe101->SetStats(0);
   hframe101->SetLineStyle(0);
   hframe101->SetMarkerStyle(20);
   hframe101->GetXaxis()->SetTitle("N_Jets");
   hframe101->GetXaxis()->SetNdivisions(506);
   hframe101->GetXaxis()->SetLabelFont(42);
   hframe101->GetXaxis()->SetLabelOffset(0.007);
   hframe101->GetXaxis()->SetLabelSize(0.05);
   hframe101->GetXaxis()->SetTitleSize(0.06);
   hframe101->GetXaxis()->SetTitleOffset(0.9);
   hframe101->GetXaxis()->SetTitleFont(42);
   hframe101->GetYaxis()->SetTitle("Events");
   hframe101->GetYaxis()->SetLabelFont(42);
   hframe101->GetYaxis()->SetLabelOffset(0.007);
   hframe101->GetYaxis()->SetLabelSize(0.05);
   hframe101->GetYaxis()->SetTitleSize(0.06);
   hframe101->GetYaxis()->SetTitleOffset(1.25);
   hframe101->GetYaxis()->SetTitleFont(42);
   hframe101->GetZaxis()->SetLabelFont(42);
   hframe101->GetZaxis()->SetLabelOffset(0.007);
   hframe101->GetZaxis()->SetLabelSize(0.05);
   hframe101->GetZaxis()->SetTitleSize(0.06);
   hframe101->GetZaxis()->SetTitleFont(42);
   hframe101->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l = new THStack();
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->SetName("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->SetTitle("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21 = new TH1F("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21","thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->SetMinimum(-0.2552924);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->SetMaximum(14.78771);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->SetStats(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->SetHistogram(thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_21);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102 = new TH1D("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinContent(1,5.134154);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinContent(2,11.79182);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinContent(3,2.639779);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinContent(4,1.700831);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinContent(5,0.3809237);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinContent(6,0.4377831);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinContent(7,0.07460796);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinError(1,1.745788);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinError(2,2.291708);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinError(3,0.9395004);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinError(4,0.8615371);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinError(5,0.2279209);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinError(6,0.4377831);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetBinError(7,0.1069043);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l102->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Add(new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103 = new TH1D("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetBinContent(1,0.09234209);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetBinContent(2,0.06707104);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetBinContent(3,0.01935699);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetBinContent(4,0.01672248);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetBinError(1,0.03811234);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetBinError(2,0.03171135);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetBinError(3,0.01660369);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetBinError(4,0.01672248);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Add(new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104 = new TH1D("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinContent(1,0.1632053);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinContent(2,0.1193898);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinContent(3,0.06348139);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinContent(4,0.01319412);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinContent(5,0.002664773);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinContent(6,0.006140521);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinError(1,0.02111053);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinError(2,0.01797181);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinError(3,0.01321754);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinError(4,0.005049637);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinError(5,0.002108794);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetBinError(6,0.004038);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l104->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Add(new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105 = new TH1D("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetBinContent(1,0.08404853);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetBinContent(2,0.2434763);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetBinContent(3,-0.1276462);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetBinError(1,0.152471);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetBinError(2,0.228184);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetBinError(3,0.1276462);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l105->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Add(new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106 = new TH1D("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->SetBinContent(1,0.1176936);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->SetBinContent(2,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->SetBinError(1,0.06816546);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->SetBinError(2,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l106->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Add(new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107 = new TH1D("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinContent(1,0.8725608);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinContent(2,0.4245484);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinContent(3,0.1177117);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinContent(4,0.06331313);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinContent(5,0.005056175);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinContent(6,0.01183137);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinError(1,0.0686755);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinError(2,0.04888642);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinError(3,0.02538156);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinError(4,0.01864743);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinError(5,0.004005716);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetBinError(6,0.008366517);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l107->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Add(new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinContent(1,0.3554102);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinContent(2,0.1071376);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinContent(3,0.02182819);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinContent(4,0.01452038);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinContent(5,0.0001531101);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinContent(6,0.0009906758);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinError(1,0.01957793);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinError(2,0.01086052);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinError(3,0.004010268);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinError(4,0.00384689);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinError(5,0.0001531101);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetBinError(6,0.0005056758);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l108->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l,"");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l = new THStack();
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->SetName("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->SetTitle("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22 = new TH1F("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22","thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->SetMaximum(0.3937376);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->SetStats(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->SetHistogram(thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l_stack_22);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinContent(1,0.3554102);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinContent(2,0.1071376);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinContent(3,0.02182819);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinContent(4,0.01452038);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinContent(5,0.0001531101);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinContent(6,0.0009906758);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinError(1,0.01957793);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinError(2,0.01086052);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinError(3,0.004010268);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinError(4,0.00384689);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinError(5,0.0001531101);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetBinError(6,0.0005056758);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l109->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l,"");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3021[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3021[8] = {
   6.464005,
   12.694,
   2.712683,
   1.794061,
   0.3886447,
   0.455755,
   0.07460796,
   0};
   Double_t _felx3021[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3021[8] = {
   2.713248,
   4.914924,
   1.455005,
   1.080761,
   0.269354,
   0.4755886,
   0.07904572,
   0};
   Double_t _fehx3021[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3021[8] = {
   2.764658,
   4.914906,
   1.454983,
   1.08076,
   0.2693545,
   0.4755881,
   0.1100473,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,8.8);
   Graph_Graph3021->SetMinimum(-1.782707);
   Graph_Graph3021->SetMaximum(19.37178);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineStyle(0);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("2");
   
   Double_t _fx3022[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3022[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3022[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3022[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3022[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3022[8] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,8.8);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(1.262698);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineStyle(0);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_njet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_njet_3l","Data","EPL");
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
   
   TH1F *hframe_copy110 = new TH1F("hframe_copy110","",1000,0,8);
   hframe_copy110->SetMinimum(0);
   hframe_copy110->SetMaximum(32.00283);
   hframe_copy110->SetDirectory(0);
   hframe_copy110->SetStats(0);
   hframe_copy110->SetLineStyle(0);
   hframe_copy110->SetMarkerStyle(20);
   hframe_copy110->GetXaxis()->SetTitle("N_Jets");
   hframe_copy110->GetXaxis()->SetNdivisions(506);
   hframe_copy110->GetXaxis()->SetLabelFont(42);
   hframe_copy110->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetXaxis()->SetLabelSize(0.05);
   hframe_copy110->GetXaxis()->SetTitleSize(0.06);
   hframe_copy110->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy110->GetXaxis()->SetTitleFont(42);
   hframe_copy110->GetYaxis()->SetTitle("Events");
   hframe_copy110->GetYaxis()->SetLabelFont(42);
   hframe_copy110->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetYaxis()->SetLabelSize(0.05);
   hframe_copy110->GetYaxis()->SetTitleSize(0.06);
   hframe_copy110->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy110->GetYaxis()->SetTitleFont(42);
   hframe_copy110->GetZaxis()->SetLabelFont(42);
   hframe_copy110->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetZaxis()->SetLabelSize(0.05);
   hframe_copy110->GetZaxis()->SetTitleSize(0.06);
   hframe_copy110->GetZaxis()->SetTitleFont(42);
   hframe_copy110->Draw("sameaxis");
   ccwh3l_Pre_SSSF_13TeV_njet_3l->Modified();
   ccwh3l_Pre_SSSF_13TeV_njet_3l->cd();
   ccwh3l_Pre_SSSF_13TeV_njet_3l->SetSelected(ccwh3l_Pre_SSSF_13TeV_njet_3l);
}
