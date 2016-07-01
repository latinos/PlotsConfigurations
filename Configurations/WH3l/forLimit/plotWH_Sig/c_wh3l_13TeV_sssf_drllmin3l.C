void c_wh3l_13TeV_sssf_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_drllmin3l/cc
//=========  (Thu Jun 30 22:29:47 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_drllmin3l = new TCanvas("ccwh3l_13TeV_sssf_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_drllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_drllmin3l->Range(-0.8,-0.9753552,4.2,6.527378);
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
   
   TH1F *hframe141 = new TH1F("hframe141","",1000,0,4);
   hframe141->SetMinimum(0);
   hframe141->SetMaximum(6.152241);
   hframe141->SetDirectory(0);
   hframe141->SetStats(0);
   hframe141->SetLineStyle(0);
   hframe141->SetMarkerStyle(20);
   hframe141->GetXaxis()->SetTitle("min #Delta R_{ll} [GeV]");
   hframe141->GetXaxis()->SetNdivisions(506);
   hframe141->GetXaxis()->SetLabelFont(42);
   hframe141->GetXaxis()->SetLabelOffset(0.007);
   hframe141->GetXaxis()->SetLabelSize(0.05);
   hframe141->GetXaxis()->SetTitleSize(0.06);
   hframe141->GetXaxis()->SetTitleOffset(0.9);
   hframe141->GetXaxis()->SetTitleFont(42);
   hframe141->GetYaxis()->SetTitle("Events");
   hframe141->GetYaxis()->SetLabelFont(42);
   hframe141->GetYaxis()->SetLabelOffset(0.007);
   hframe141->GetYaxis()->SetLabelSize(0.05);
   hframe141->GetYaxis()->SetTitleSize(0.06);
   hframe141->GetYaxis()->SetTitleOffset(1.25);
   hframe141->GetYaxis()->SetTitleFont(42);
   hframe141->GetZaxis()->SetLabelFont(42);
   hframe141->GetZaxis()->SetLabelOffset(0.007);
   hframe141->GetZaxis()->SetLabelSize(0.05);
   hframe141->GetZaxis()->SetTitleSize(0.06);
   hframe141->GetZaxis()->SetTitleFont(42);
   hframe141->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l");
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29","thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l",3,0,4);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->SetMaximum(3.099632);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l_stack_29);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142","histo_Fake",3,0,4);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetBinContent(1,0.6651342);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetBinContent(2,1.800078);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetBinContent(3,0.4374133);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetBinError(1,0.6155485);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetBinError(2,1.151952);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetBinError(3,0.3723564);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l142->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143","histo_WW",3,0,4);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->SetBinContent(2,0.02651546);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->SetBinError(2,0.01918247);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l143->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_WW_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144","histo_VVV",3,0,4);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetBinContent(1,0.02752441);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetBinContent(2,0.06752677);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetBinContent(3,0.007741939);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetBinError(1,0.009349514);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetBinError(2,0.01338928);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetBinError(3,0.004482395);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l144->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145","histo_Vg",3,0,4);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l145->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146","histo_ZZ",3,0,4);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->SetBinContent(1,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->SetBinContent(2,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->SetBinError(1,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->SetBinError(2,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l146->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147","histo_WZ",3,0,4);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetBinContent(1,0.1526596);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetBinContent(2,0.4029255);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetBinContent(3,0.06707777);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetBinError(1,0.0283131);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetBinError(2,0.04671483);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetBinError(3,0.01875245);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l147->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_sssf_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetBinContent(1,0.1496493);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetBinContent(2,0.1211367);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetBinContent(3,0.01276565);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetBinError(1,0.01361082);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetBinError(2,0.01067522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetBinError(3,0.003260725);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l148->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_sssf_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l");
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30","thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l",3,0,4);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->SetMaximum(0.1714232);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l_stack_30);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetBinContent(1,0.1496493);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetBinContent(2,0.1211367);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetBinContent(3,0.01276565);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetBinError(1,0.01361082);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetBinError(2,0.01067522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetBinError(3,0.003260725);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l149->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_drllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_sssf_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3029[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3029[3] = {
   0.9327278,
   2.33976,
   0.512233};
   Double_t _felx3029[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3029[3] = {
   0.7769086,
   1.422911,
   0.4242652};
   Double_t _fehx3029[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3029[3] = {
   0.7768821,
   1.422902,
   0.4242646};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,4.4);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(4.130131);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineStyle(0);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("2");
   
   Double_t _fx3030[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3030[3] = {
   0,
   0,
   0};
   Double_t _felx3030[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3030[3] = {
   0,
   0,
   0};
   Double_t _fehx3030[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3030[3] = {
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(3,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,4.4);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(1.262698);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineStyle(0);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetLabelFont(42);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3030->GetXaxis()->SetTitleFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3030->GetYaxis()->SetTitleFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3030);
   
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
   
   TH1F *hframe_copy150 = new TH1F("hframe_copy150","",1000,0,4);
   hframe_copy150->SetMinimum(0);
   hframe_copy150->SetMaximum(6.152241);
   hframe_copy150->SetDirectory(0);
   hframe_copy150->SetStats(0);
   hframe_copy150->SetLineStyle(0);
   hframe_copy150->SetMarkerStyle(20);
   hframe_copy150->GetXaxis()->SetTitle("min #Delta R_{ll} [GeV]");
   hframe_copy150->GetXaxis()->SetNdivisions(506);
   hframe_copy150->GetXaxis()->SetLabelFont(42);
   hframe_copy150->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetXaxis()->SetLabelSize(0.05);
   hframe_copy150->GetXaxis()->SetTitleSize(0.06);
   hframe_copy150->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy150->GetXaxis()->SetTitleFont(42);
   hframe_copy150->GetYaxis()->SetTitle("Events");
   hframe_copy150->GetYaxis()->SetLabelFont(42);
   hframe_copy150->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetYaxis()->SetLabelSize(0.05);
   hframe_copy150->GetYaxis()->SetTitleSize(0.06);
   hframe_copy150->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy150->GetYaxis()->SetTitleFont(42);
   hframe_copy150->GetZaxis()->SetLabelFont(42);
   hframe_copy150->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetZaxis()->SetLabelSize(0.05);
   hframe_copy150->GetZaxis()->SetTitleSize(0.06);
   hframe_copy150->GetZaxis()->SetTitleFont(42);
   hframe_copy150->Draw("sameaxis");
   ccwh3l_13TeV_sssf_drllmin3l->Modified();
   ccwh3l_13TeV_sssf_drllmin3l->cd();
   ccwh3l_13TeV_sssf_drllmin3l->SetSelected(ccwh3l_13TeV_sssf_drllmin3l);
}
