void c_wh3l_MET_JetV_ZVeto_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_events/cc
//=========  (Sun Jul  3 16:19:17 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_events = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_events->Range(-0.4,-9.818101,2.1,65.70575);
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
   
   TH1F *hframe381 = new TH1F("hframe381","",1000,0,2);
   hframe381->SetMinimum(0);
   hframe381->SetMaximum(61.92956);
   hframe381->SetDirectory(0);
   hframe381->SetStats(0);
   hframe381->SetLineStyle(0);
   hframe381->SetMarkerStyle(20);
   hframe381->GetXaxis()->SetTitle("events");
   hframe381->GetXaxis()->SetNdivisions(506);
   hframe381->GetXaxis()->SetLabelFont(42);
   hframe381->GetXaxis()->SetLabelOffset(0.007);
   hframe381->GetXaxis()->SetLabelSize(0.05);
   hframe381->GetXaxis()->SetTitleSize(0.06);
   hframe381->GetXaxis()->SetTitleOffset(0.9);
   hframe381->GetXaxis()->SetTitleFont(42);
   hframe381->GetYaxis()->SetTitle("Events");
   hframe381->GetYaxis()->SetLabelFont(42);
   hframe381->GetYaxis()->SetLabelOffset(0.007);
   hframe381->GetYaxis()->SetLabelSize(0.05);
   hframe381->GetYaxis()->SetTitleSize(0.06);
   hframe381->GetYaxis()->SetTitleOffset(1.25);
   hframe381->GetYaxis()->SetTitleFont(42);
   hframe381->GetZaxis()->SetLabelFont(42);
   hframe381->GetZaxis()->SetLabelOffset(0.007);
   hframe381->GetZaxis()->SetLabelSize(0.05);
   hframe381->GetZaxis()->SetTitleSize(0.06);
   hframe381->GetZaxis()->SetTitleFont(42);
   hframe381->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->SetMaximum(26.01042);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_77);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->SetBinContent(1,10.59515);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->SetBinError(1,2.628293);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->SetEntries(117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events382->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->SetBinContent(1,0.08870193);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->SetBinError(1,0.03666076);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events383->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->SetBinContent(1,0.4295882);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->SetBinError(1,0.03338302);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->SetEntries(250);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events384->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->SetBinContent(1,2.754018);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->SetBinError(1,0.5797935);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events385->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->SetBinContent(1,0.6257207);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->SetBinError(1,0.1568989);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events386->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->SetBinContent(1,9.462664);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->SetBinError(1,0.2265887);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->SetEntries(1942);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events387->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->SetBinContent(1,0.815978);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->SetBinError(1,0.03101323);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events388->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->SetMaximum(0.8893408);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events_stack_78);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->SetBinContent(1,0.815978);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->SetBinError(1,0.03101323);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events389->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_events,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3077[1] = {
   1};
   Double_t _fy3077[1] = {
   23.95585};
   Double_t _felx3077[1] = {
   1};
   Double_t _fely3077[1] = {
   5.25481};
   Double_t _fehx3077[1] = {
   1};
   Double_t _fehy3077[1] = {
   5.252579};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3077,_fy3077,_felx3077,_fehx3077,_fely3077,_fehy3077);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3077 = new TH1F("Graph_Graph3077","",100,0,2.2);
   Graph_Graph3077->SetMinimum(17.6503);
   Graph_Graph3077->SetMaximum(30.25916);
   Graph_Graph3077->SetDirectory(0);
   Graph_Graph3077->SetStats(0);
   Graph_Graph3077->SetLineStyle(0);
   Graph_Graph3077->SetMarkerStyle(20);
   Graph_Graph3077->GetXaxis()->SetLabelFont(42);
   Graph_Graph3077->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3077->GetXaxis()->SetTitleFont(42);
   Graph_Graph3077->GetYaxis()->SetLabelFont(42);
   Graph_Graph3077->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3077->GetYaxis()->SetTitleFont(42);
   Graph_Graph3077->GetZaxis()->SetLabelFont(42);
   Graph_Graph3077->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3077);
   
   grae->Draw("2");
   
   Double_t _fx3078[1] = {
   1};
   Double_t _fy3078[1] = {
   0};
   Double_t _felx3078[1] = {
   1};
   Double_t _fely3078[1] = {
   0};
   Double_t _fehx3078[1] = {
   1};
   Double_t _fehy3078[1] = {
   1.147908};
   grae = new TGraphAsymmErrors(1,_fx3078,_fy3078,_felx3078,_fehx3078,_fely3078,_fehy3078);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3078 = new TH1F("Graph_Graph3078","",100,0,2.2);
   Graph_Graph3078->SetMinimum(0);
   Graph_Graph3078->SetMaximum(1.262698);
   Graph_Graph3078->SetDirectory(0);
   Graph_Graph3078->SetStats(0);
   Graph_Graph3078->SetLineStyle(0);
   Graph_Graph3078->SetMarkerStyle(20);
   Graph_Graph3078->GetXaxis()->SetLabelFont(42);
   Graph_Graph3078->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3078->GetXaxis()->SetTitleFont(42);
   Graph_Graph3078->GetYaxis()->SetLabelFont(42);
   Graph_Graph3078->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3078->GetYaxis()->SetTitleFont(42);
   Graph_Graph3078->GetZaxis()->SetLabelFont(42);
   Graph_Graph3078->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3078);
   
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
   
   TH1F *hframe_copy390 = new TH1F("hframe_copy390","",1000,0,2);
   hframe_copy390->SetMinimum(0);
   hframe_copy390->SetMaximum(61.92956);
   hframe_copy390->SetDirectory(0);
   hframe_copy390->SetStats(0);
   hframe_copy390->SetLineStyle(0);
   hframe_copy390->SetMarkerStyle(20);
   hframe_copy390->GetXaxis()->SetTitle("events");
   hframe_copy390->GetXaxis()->SetNdivisions(506);
   hframe_copy390->GetXaxis()->SetLabelFont(42);
   hframe_copy390->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetXaxis()->SetLabelSize(0.05);
   hframe_copy390->GetXaxis()->SetTitleSize(0.06);
   hframe_copy390->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy390->GetXaxis()->SetTitleFont(42);
   hframe_copy390->GetYaxis()->SetTitle("Events");
   hframe_copy390->GetYaxis()->SetLabelFont(42);
   hframe_copy390->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetYaxis()->SetLabelSize(0.05);
   hframe_copy390->GetYaxis()->SetTitleSize(0.06);
   hframe_copy390->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy390->GetYaxis()->SetTitleFont(42);
   hframe_copy390->GetZaxis()->SetLabelFont(42);
   hframe_copy390->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetZaxis()->SetLabelSize(0.05);
   hframe_copy390->GetZaxis()->SetTitleSize(0.06);
   hframe_copy390->GetZaxis()->SetTitleFont(42);
   hframe_copy390->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_events->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_events->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_events->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_events);
}
