void c_wh3l_MET_JetV_ZVeto_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_events/cc
//=========  (Sat Jul  2 21:43:59 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_events = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->Range(-0.4,-11.89024,2.1,79.57317);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe501 = new TH1F("hframe501","",1000,0,2);
   hframe501->SetMinimum(0);
   hframe501->SetMaximum(75);
   hframe501->SetDirectory(0);
   hframe501->SetStats(0);
   hframe501->SetLineStyle(0);
   hframe501->SetMarkerStyle(20);
   hframe501->GetXaxis()->SetTitle("events");
   hframe501->GetXaxis()->SetNdivisions(506);
   hframe501->GetXaxis()->SetLabelFont(42);
   hframe501->GetXaxis()->SetLabelOffset(0.007);
   hframe501->GetXaxis()->SetLabelSize(0.05);
   hframe501->GetXaxis()->SetTitleSize(0.06);
   hframe501->GetXaxis()->SetTitleOffset(0.9);
   hframe501->GetXaxis()->SetTitleFont(42);
   hframe501->GetYaxis()->SetTitle("Events");
   hframe501->GetYaxis()->SetLabelFont(42);
   hframe501->GetYaxis()->SetLabelOffset(0.007);
   hframe501->GetYaxis()->SetLabelSize(0.05);
   hframe501->GetYaxis()->SetTitleSize(0.06);
   hframe501->GetYaxis()->SetTitleOffset(1.25);
   hframe501->GetYaxis()->SetTitleFont(42);
   hframe501->GetZaxis()->SetLabelFont(42);
   hframe501->GetZaxis()->SetLabelOffset(0.007);
   hframe501->GetZaxis()->SetLabelSize(0.05);
   hframe501->GetZaxis()->SetTitleSize(0.06);
   hframe501->GetZaxis()->SetTitleFont(42);
   hframe501->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->SetMaximum(21.8877);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_101);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->SetBinContent(1,7.599876);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->SetBinError(1,2.268032);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events502->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->SetBinContent(1,0.07257783);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->SetBinError(1,0.03292453);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events503->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->SetBinContent(1,0.3161408);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->SetBinError(1,0.02838708);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events504->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->SetBinContent(1,2.754018);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->SetBinError(1,0.5797935);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events505->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->SetBinContent(1,0.5478704);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->SetBinError(1,0.1468272);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events506->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->SetBinContent(1,8.97157);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->SetBinError(1,0.2207319);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events507->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->SetBinContent(1,0.5833763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->SetBinError(1,0.02650363);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events508->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->SetMaximum(0.640374);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_102);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->SetBinContent(1,0.5833763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->SetBinError(1,0.02650363);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events509->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3101[1] = {
   1};
   Double_t _fy3101[1] = {
   20.26205};
   Double_t _felx3101[1] = {
   1};
   Double_t _fely3101[1] = {
   4.261179};
   Double_t _fehx3101[1] = {
   1};
   Double_t _fehy3101[1] = {
   4.25877};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3101,_fy3101,_felx3101,_fehx3101,_fely3101,_fehy3101);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3101 = new TH1F("Graph_Graph3101","",100,0,2.2);
   Graph_Graph3101->SetMinimum(15.14888);
   Graph_Graph3101->SetMaximum(25.37282);
   Graph_Graph3101->SetDirectory(0);
   Graph_Graph3101->SetStats(0);
   Graph_Graph3101->SetLineStyle(0);
   Graph_Graph3101->SetMarkerStyle(20);
   Graph_Graph3101->GetXaxis()->SetLabelFont(42);
   Graph_Graph3101->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3101->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3101->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3101->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3101->GetXaxis()->SetTitleFont(42);
   Graph_Graph3101->GetYaxis()->SetLabelFont(42);
   Graph_Graph3101->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3101->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3101->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3101->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3101->GetYaxis()->SetTitleFont(42);
   Graph_Graph3101->GetZaxis()->SetLabelFont(42);
   Graph_Graph3101->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3101->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3101->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3101->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3101);
   
   grae->Draw("2");
   
   Double_t _fx3102[1] = {
   1};
   Double_t _fy3102[1] = {
   25};
   Double_t _felx3102[1] = {
   1};
   Double_t _fely3102[1] = {
   4.966428};
   Double_t _fehx3102[1] = {
   1};
   Double_t _fehy3102[1] = {
   6.066714};
   grae = new TGraphAsymmErrors(1,_fx3102,_fy3102,_felx3102,_fehx3102,_fely3102,_fehy3102);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3102 = new TH1F("Graph_Graph3102","",100,0,2.2);
   Graph_Graph3102->SetMinimum(18.93026);
   Graph_Graph3102->SetMaximum(32.17003);
   Graph_Graph3102->SetDirectory(0);
   Graph_Graph3102->SetStats(0);
   Graph_Graph3102->SetLineStyle(0);
   Graph_Graph3102->SetMarkerStyle(20);
   Graph_Graph3102->GetXaxis()->SetLabelFont(42);
   Graph_Graph3102->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3102->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3102->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3102->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3102->GetXaxis()->SetTitleFont(42);
   Graph_Graph3102->GetYaxis()->SetLabelFont(42);
   Graph_Graph3102->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3102->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3102->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3102->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3102->GetYaxis()->SetTitleFont(42);
   Graph_Graph3102->GetZaxis()->SetLabelFont(42);
   Graph_Graph3102->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3102->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3102->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3102->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3102);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy510 = new TH1F("hframe_copy510","",1000,0,2);
   hframe_copy510->SetMinimum(0);
   hframe_copy510->SetMaximum(75);
   hframe_copy510->SetDirectory(0);
   hframe_copy510->SetStats(0);
   hframe_copy510->SetLineStyle(0);
   hframe_copy510->SetMarkerStyle(20);
   hframe_copy510->GetXaxis()->SetTitle("events");
   hframe_copy510->GetXaxis()->SetNdivisions(506);
   hframe_copy510->GetXaxis()->SetLabelFont(42);
   hframe_copy510->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy510->GetXaxis()->SetLabelSize(0.05);
   hframe_copy510->GetXaxis()->SetTitleSize(0.06);
   hframe_copy510->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy510->GetXaxis()->SetTitleFont(42);
   hframe_copy510->GetYaxis()->SetTitle("Events");
   hframe_copy510->GetYaxis()->SetLabelFont(42);
   hframe_copy510->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy510->GetYaxis()->SetLabelSize(0.05);
   hframe_copy510->GetYaxis()->SetTitleSize(0.06);
   hframe_copy510->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy510->GetYaxis()->SetTitleFont(42);
   hframe_copy510->GetZaxis()->SetLabelFont(42);
   hframe_copy510->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy510->GetZaxis()->SetLabelSize(0.05);
   hframe_copy510->GetZaxis()->SetTitleSize(0.06);
   hframe_copy510->GetZaxis()->SetTitleFont(42);
   hframe_copy510->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_events->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_events->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_events);
}
