void c_wh3l_MET_JetV_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_drllmin3l/cc
//=========  (Sun Jul  3 01:21:49 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_drllmin3l = new TCanvas("ccwh3l_MET_JetV_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_drllmin3l->Range(-1.2,-1.353194,6.3,9.055993);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe71 = new TH1F("hframe71","",1000,0,6);
   hframe71->SetMinimum(0);
   hframe71->SetMaximum(8.535534);
   hframe71->SetDirectory(0);
   hframe71->SetStats(0);
   hframe71->SetLineStyle(0);
   hframe71->SetMarkerStyle(20);
   hframe71->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe71->GetXaxis()->SetNdivisions(506);
   hframe71->GetXaxis()->SetLabelFont(42);
   hframe71->GetXaxis()->SetLabelOffset(0.007);
   hframe71->GetXaxis()->SetLabelSize(0.05);
   hframe71->GetXaxis()->SetTitleSize(0.06);
   hframe71->GetXaxis()->SetTitleOffset(0.9);
   hframe71->GetXaxis()->SetTitleFont(42);
   hframe71->GetYaxis()->SetTitle("Events");
   hframe71->GetYaxis()->SetLabelFont(42);
   hframe71->GetYaxis()->SetLabelOffset(0.007);
   hframe71->GetYaxis()->SetLabelSize(0.05);
   hframe71->GetYaxis()->SetTitleSize(0.06);
   hframe71->GetYaxis()->SetTitleOffset(1.25);
   hframe71->GetYaxis()->SetTitleFont(42);
   hframe71->GetZaxis()->SetLabelFont(42);
   hframe71->GetZaxis()->SetLabelOffset(0.007);
   hframe71->GetZaxis()->SetLabelSize(0.05);
   hframe71->GetZaxis()->SetTitleSize(0.06);
   hframe71->GetZaxis()->SetTitleFont(42);
   hframe71->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15","thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->SetMinimum(-0.2470429);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->SetMaximum(2.765894);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetBinContent(1,0.08333536);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetBinContent(2,1.657257);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetBinContent(3,1.147332);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetBinError(1,0.3303783);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetBinError(2,0.9769285);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetBinError(3,0.8838662);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l72->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->SetBinContent(2,0.02651546);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->SetBinContent(4,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->SetBinError(2,0.01918247);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->SetBinError(4,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l73->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetBinContent(1,0.02267382);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetBinContent(2,0.0741458);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetBinContent(3,0.0306837);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetBinContent(4,0.002438963);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetBinError(1,0.008697092);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetBinError(2,0.01482988);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetBinError(3,0.008225704);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetBinError(4,0.002438963);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l74->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l75->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->SetBinContent(1,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->SetBinContent(3,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->SetBinError(1,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->SetBinError(3,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l76->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetBinContent(1,0.1151861);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetBinContent(2,0.3685119);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetBinContent(3,0.1808107);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetBinError(1,0.02440598);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetBinError(2,0.04428702);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetBinError(3,0.03166585);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l77->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetBinContent(1,0.1261286);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetBinContent(2,0.1302437);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetBinContent(3,0.02717941);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetBinError(1,0.01259089);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetBinError(2,0.01139766);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetBinError(3,0.004627101);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l78->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16","thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->SetMaximum(0.1487234);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetBinContent(1,0.1261286);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetBinContent(2,0.1302437);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetBinContent(3,0.02717941);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetBinError(1,0.01259089);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetBinError(2,0.01139766);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetBinError(3,0.004627101);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l79->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3015[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3015[5] = {
   0.3086049,
   2.12643,
   1.40154,
   0.01952407,
   0};
   Double_t _felx3015[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3015[5] = {
   0.2074079,
   1.206469,
   1.04706,
   0.01968696,
   0};
   Double_t _fehx3015[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3015[5] = {
   0.4524693,
   1.206458,
   1.047059,
   0.01968561,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,6.6);
   Graph_Graph3015->SetMinimum(-0.333468);
   Graph_Graph3015->SetMaximum(3.666193);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2");
   
   Double_t _fx3016[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3016[5] = {
   2,
   1,
   2,
   0,
   0};
   Double_t _felx3016[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3016[5] = {
   1.29183,
   0.8272524,
   1.29183,
   0,
   0};
   Double_t _fehx3016[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3016[5] = {
   2.63791,
   2.29957,
   2.63791,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,6.6);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(5.101701);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineStyle(0);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,0,6);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(8.535534);
   hframe_copy80->SetDirectory(0);
   hframe_copy80->SetStats(0);
   hframe_copy80->SetLineStyle(0);
   hframe_copy80->SetMarkerStyle(20);
   hframe_copy80->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy80->GetXaxis()->SetNdivisions(506);
   hframe_copy80->GetXaxis()->SetLabelFont(42);
   hframe_copy80->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetXaxis()->SetLabelSize(0.05);
   hframe_copy80->GetXaxis()->SetTitleSize(0.06);
   hframe_copy80->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy80->GetXaxis()->SetTitleFont(42);
   hframe_copy80->GetYaxis()->SetTitle("Events");
   hframe_copy80->GetYaxis()->SetLabelFont(42);
   hframe_copy80->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetYaxis()->SetLabelSize(0.05);
   hframe_copy80->GetYaxis()->SetTitleSize(0.06);
   hframe_copy80->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy80->GetYaxis()->SetTitleFont(42);
   hframe_copy80->GetZaxis()->SetLabelFont(42);
   hframe_copy80->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetZaxis()->SetLabelSize(0.05);
   hframe_copy80->GetZaxis()->SetTitleSize(0.06);
   hframe_copy80->GetZaxis()->SetTitleFont(42);
   hframe_copy80->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_drllmin3l->Modified();
   ccwh3l_MET_JetV_13TeV_drllmin3l->cd();
   ccwh3l_MET_JetV_13TeV_drllmin3l->SetSelected(ccwh3l_MET_JetV_13TeV_drllmin3l);
}
