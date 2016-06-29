void c_wh3l_13TeV_sssf_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_drllmin3l/cc
//=========  (Wed Jun 29 01:34:25 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_drllmin3l = new TCanvas("ccwh3l_13TeV_sssf_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_drllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_drllmin3l->Range(-1.2,-0.8638045,6.3,5.780846);
   ccwh3l_13TeV_sssf_drllmin3l->SetFillColor(0);
   ccwh3l_13TeV_sssf_drllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_sssf_drllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_sssf_drllmin3l->SetTickx(1);
   ccwh3l_13TeV_sssf_drllmin3l->SetTicky(1);
   ccwh3l_13TeV_sssf_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_drllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_drllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe651 = new TH1F("hframe651","",1000,0,6);
   hframe651->SetMinimum(0);
   hframe651->SetMaximum(5.448613);
   hframe651->SetDirectory(0);
   hframe651->SetStats(0);
   hframe651->SetLineStyle(0);
   hframe651->SetMarkerStyle(20);
   hframe651->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe651->GetXaxis()->SetNdivisions(506);
   hframe651->GetXaxis()->SetLabelFont(42);
   hframe651->GetXaxis()->SetLabelOffset(0.007);
   hframe651->GetXaxis()->SetLabelSize(0.05);
   hframe651->GetXaxis()->SetTitleSize(0.06);
   hframe651->GetXaxis()->SetTitleOffset(0.9);
   hframe651->GetXaxis()->SetTitleFont(42);
   hframe651->GetYaxis()->SetTitle("Events");
   hframe651->GetYaxis()->SetLabelFont(42);
   hframe651->GetYaxis()->SetLabelOffset(0.007);
   hframe651->GetYaxis()->SetLabelSize(0.05);
   hframe651->GetYaxis()->SetTitleSize(0.06);
   hframe651->GetYaxis()->SetTitleOffset(1.25);
   hframe651->GetYaxis()->SetTitleFont(42);
   hframe651->GetZaxis()->SetLabelFont(42);
   hframe651->GetZaxis()->SetLabelOffset(0.007);
   hframe651->GetZaxis()->SetLabelSize(0.05);
   hframe651->GetZaxis()->SetTitleSize(0.06);
   hframe651->GetZaxis()->SetTitleFont(42);
   hframe651->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l");
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131","thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->SetMinimum(-0.2470429);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->SetMaximum(2.765894);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_131);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetBinContent(1,0.08333536);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetBinContent(2,1.657257);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetBinContent(3,1.161438);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetBinError(1,0.3303783);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetBinError(2,0.9769285);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetBinError(3,0.8837441);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l652->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->SetBinContent(2,0.02651546);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->SetBinError(2,0.01918247);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l653->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->SetBinContent(1,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->SetBinContent(2,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->SetBinError(1,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->SetBinError(2,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l654->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l655->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->SetBinContent(1,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->SetBinContent(3,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->SetBinError(1,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->SetBinError(3,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l656->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetBinContent(1,0.1151861);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetBinContent(2,0.362889);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetBinContent(3,0.1445878);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetBinError(1,0.02440598);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetBinError(2,0.0439286);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetBinError(3,0.02846379);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l657->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetBinContent(1,0.1306634);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetBinContent(2,0.1320058);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetBinContent(3,0.02717941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetBinError(1,0.01278611);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetBinError(2,0.01149561);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetBinError(3,0.004627101);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l658->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l");
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132","thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->SetMaximum(0.1506765);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_132);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetBinContent(1,0.1306634);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetBinContent(2,0.1320058);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetBinContent(3,0.02717941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetBinError(1,0.01278611);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetBinError(2,0.01149561);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetBinError(3,0.004627101);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l659->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3131[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3131[5] = {
   0.2864802,
   2.047439,
   1.34874,
   0,
   0};
   Double_t _felx3131[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3131[5] = {
   0.198068,
   1.191599,
   1.037868,
   0,
   0};
   Double_t _fehx3131[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3131[5] = {
   0.443758,
   1.191596,
   1.037868,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3131,_fy3131,_felx3131,_fehx3131,_fely3131,_fehy3131);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3131 = new TH1F("Graph_Graph3131","",100,0,6.6);
   Graph_Graph3131->SetMinimum(0);
   Graph_Graph3131->SetMaximum(3.562939);
   Graph_Graph3131->SetDirectory(0);
   Graph_Graph3131->SetStats(0);
   Graph_Graph3131->SetLineStyle(0);
   Graph_Graph3131->SetMarkerStyle(20);
   Graph_Graph3131->GetXaxis()->SetLabelFont(42);
   Graph_Graph3131->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3131->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3131->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3131->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3131->GetXaxis()->SetTitleFont(42);
   Graph_Graph3131->GetYaxis()->SetLabelFont(42);
   Graph_Graph3131->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3131->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3131->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3131->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3131->GetYaxis()->SetTitleFont(42);
   Graph_Graph3131->GetZaxis()->SetLabelFont(42);
   Graph_Graph3131->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3131->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3131->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3131->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3131);
   
   grae->Draw("2");
   
   Double_t _fx3132[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3132[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3132[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3132[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3132[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3132[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3132,_fy3132,_felx3132,_fehx3132,_fely3132,_fehy3132);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3132 = new TH1F("Graph_Graph3132","",100,0,6.6);
   Graph_Graph3132->SetMinimum(0);
   Graph_Graph3132->SetMaximum(1.262698);
   Graph_Graph3132->SetDirectory(0);
   Graph_Graph3132->SetStats(0);
   Graph_Graph3132->SetLineStyle(0);
   Graph_Graph3132->SetMarkerStyle(20);
   Graph_Graph3132->GetXaxis()->SetLabelFont(42);
   Graph_Graph3132->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3132->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3132->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3132->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3132->GetXaxis()->SetTitleFont(42);
   Graph_Graph3132->GetYaxis()->SetLabelFont(42);
   Graph_Graph3132->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3132->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3132->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3132->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3132->GetYaxis()->SetTitleFont(42);
   Graph_Graph3132->GetZaxis()->SetLabelFont(42);
   Graph_Graph3132->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3132->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3132->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3132->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3132);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy660 = new TH1F("hframe_copy660","",1000,0,6);
   hframe_copy660->SetMinimum(0);
   hframe_copy660->SetMaximum(5.448613);
   hframe_copy660->SetDirectory(0);
   hframe_copy660->SetStats(0);
   hframe_copy660->SetLineStyle(0);
   hframe_copy660->SetMarkerStyle(20);
   hframe_copy660->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy660->GetXaxis()->SetNdivisions(506);
   hframe_copy660->GetXaxis()->SetLabelFont(42);
   hframe_copy660->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy660->GetXaxis()->SetLabelSize(0.05);
   hframe_copy660->GetXaxis()->SetTitleSize(0.06);
   hframe_copy660->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy660->GetXaxis()->SetTitleFont(42);
   hframe_copy660->GetYaxis()->SetTitle("Events");
   hframe_copy660->GetYaxis()->SetLabelFont(42);
   hframe_copy660->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy660->GetYaxis()->SetLabelSize(0.05);
   hframe_copy660->GetYaxis()->SetTitleSize(0.06);
   hframe_copy660->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy660->GetYaxis()->SetTitleFont(42);
   hframe_copy660->GetZaxis()->SetLabelFont(42);
   hframe_copy660->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy660->GetZaxis()->SetLabelSize(0.05);
   hframe_copy660->GetZaxis()->SetTitleSize(0.06);
   hframe_copy660->GetZaxis()->SetTitleFont(42);
   hframe_copy660->Draw("sameaxis");
   ccwh3l_13TeV_sssf_drllmin3l->Modified();
   ccwh3l_13TeV_sssf_drllmin3l->cd();
   ccwh3l_13TeV_sssf_drllmin3l->SetSelected(ccwh3l_13TeV_sssf_drllmin3l);
}
