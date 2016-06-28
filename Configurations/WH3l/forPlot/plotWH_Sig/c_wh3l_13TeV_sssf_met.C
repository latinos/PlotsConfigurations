void c_wh3l_13TeV_sssf_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_met/cc
//=========  (Tue Jun 28 13:56:19 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_met = new TCanvas("ccwh3l_13TeV_sssf_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_met->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_met->Range(-40,-0.4336226,210,2.901936);
   ccwh3l_13TeV_sssf_met->SetFillColor(0);
   ccwh3l_13TeV_sssf_met->SetBorderMode(0);
   ccwh3l_13TeV_sssf_met->SetBorderSize(2);
   ccwh3l_13TeV_sssf_met->SetTickx(1);
   ccwh3l_13TeV_sssf_met->SetTicky(1);
   ccwh3l_13TeV_sssf_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_met->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_met->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_met->SetFrameBorderMode(0);
   
   TH1F *hframe131 = new TH1F("hframe131","",1000,0,200);
   hframe131->SetMinimum(0);
   hframe131->SetMaximum(2.735158);
   hframe131->SetDirectory(0);
   hframe131->SetStats(0);
   hframe131->SetLineStyle(0);
   hframe131->SetMarkerStyle(20);
   hframe131->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe131->GetXaxis()->SetNdivisions(506);
   hframe131->GetXaxis()->SetLabelFont(42);
   hframe131->GetXaxis()->SetLabelOffset(0.007);
   hframe131->GetXaxis()->SetLabelSize(0.05);
   hframe131->GetXaxis()->SetTitleSize(0.06);
   hframe131->GetXaxis()->SetTitleOffset(0.9);
   hframe131->GetXaxis()->SetTitleFont(42);
   hframe131->GetYaxis()->SetTitle("Events");
   hframe131->GetYaxis()->SetLabelFont(42);
   hframe131->GetYaxis()->SetLabelOffset(0.007);
   hframe131->GetYaxis()->SetLabelSize(0.05);
   hframe131->GetYaxis()->SetTitleSize(0.06);
   hframe131->GetYaxis()->SetTitleOffset(1.25);
   hframe131->GetYaxis()->SetTitleFont(42);
   hframe131->GetZaxis()->SetLabelFont(42);
   hframe131->GetZaxis()->SetLabelOffset(0.007);
   hframe131->GetZaxis()->SetLabelSize(0.05);
   hframe131->GetZaxis()->SetTitleSize(0.06);
   hframe131->GetZaxis()->SetTitleFont(42);
   hframe131->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetName("thsBackground_grouped_wh3l_13TeV_sssf_met");
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27","thsBackground_grouped_wh3l_13TeV_sssf_met",40,0,200);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetMinimum(-0.4897);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetMaximum(1.908931);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_met132 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_met132","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(7,0.1398005);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(8,-0.247154);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(9,-0.1097654);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(11,0.6436369);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(12,0.9745436);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(13,0.383281);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(14,0.5858385);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(15,-0.007540809);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(16,-0.01160807);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(17,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(19,0.06737334);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(20,-0.1034349);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(21,-0.0005605229);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(22,0.1796949);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(23,0.1339182);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(25,-0.1741594);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(26,0.08972475);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(28,-0.006674166);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(7,0.1482372);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(8,0.242546);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(9,0.08112018);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(11,0.6434307);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(12,0.8434855);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(13,0.3840536);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(14,0.5268493);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(15,0.007540809);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(16,0.008306922);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(17,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(19,0.06737334);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(20,0.1034349);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(21,0.0005605229);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(22,0.12926);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(23,0.1345152);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(25,0.1236689);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(26,0.08835359);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(28,0.006674166);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Fake_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_met133 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_met133","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetBinContent(9,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetBinError(9,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_WW_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_met134 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_met134","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(27,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(41,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(27,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(41,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_VVV_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_met135 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_met135","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetBinContent(7,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetBinError(7,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Vg_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_met136 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_met136","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetBinContent(12,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetBinContent(33,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetBinError(12,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetBinError(33,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_met137 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_met137","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(7,0.07284566);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(8,0.08097914);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(9,0.06761621);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(10,0.08179345);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(11,0.04503963);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(12,0.0639946);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(13,0.02452878);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(14,0.06200586);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(15,0.03420971);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(16,0.03424067);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(17,0.007426803);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(19,0.004833103);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(20,0.02114356);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(21,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(29,0.001838737);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(40,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(41,0.011118);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(7,0.02018386);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(8,0.02081386);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(9,0.01859924);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(10,0.02052262);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(11,0.01632149);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(12,0.01840657);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(13,0.01174418);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(14,0.01812446);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(15,0.01355086);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(16,0.01407766);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(17,0.004774667);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(19,0.004833103);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(20,0.01062875);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(21,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(29,0.001838737);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(40,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(41,0.00786224);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_WZ_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_met138 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_met138","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(7,0.01956145);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(8,0.03176251);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(9,0.03428932);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(10,0.02853278);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(11,0.032758);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(12,0.01281156);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(13,0.01269928);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(14,0.01360819);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(15,0.01894099);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(16,0.01403862);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(17,0.011894);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(18,0.01235514);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(19,0.008995511);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(20,0.008309545);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(21,0.004056639);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(22,0.007186472);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(23,0.005757642);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(24,0.003953004);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(25,0.0005110262);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(26,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(27,0.002348849);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(28,0.001481666);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(41,0.002107488);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(7,0.004251344);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(8,0.005704003);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(9,0.006080002);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(10,0.005357557);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(11,0.00592462);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(12,0.003788148);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(13,0.003801153);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(14,0.004366509);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(15,0.004347069);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(16,0.003590716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(17,0.004015193);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(18,0.004100214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(19,0.003324741);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(20,0.003067198);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(21,0.001883477);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(22,0.003135234);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(23,0.002864978);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(24,0.002100841);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(25,0.0003684835);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(26,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(27,0.001823034);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(28,0.001162599);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(41,0.00113601);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_met,"");
   thsBackground_grouped_wh3l_13TeV_sssf_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetName("thsSignal_grouped_wh3l_13TeV_sssf_met");
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28","thsSignal_grouped_wh3l_13TeV_sssf_met",40,0,200);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetMaximum(0.04238779);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_met139 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_met139","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(7,0.01956145);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(8,0.03176251);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(9,0.03428932);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(10,0.02853278);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(11,0.032758);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(12,0.01281156);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(13,0.01269928);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(14,0.01360819);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(15,0.01894099);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(16,0.01403862);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(17,0.011894);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(18,0.01235514);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(19,0.008995511);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(20,0.008309545);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(21,0.004056639);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(22,0.007186472);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(23,0.005757642);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(24,0.003953004);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(25,0.0005110262);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(26,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(27,0.002348849);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(28,0.001481666);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(41,0.002107488);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(7,0.004251344);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(8,0.005704003);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(9,0.006080002);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(10,0.005357557);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(11,0.00592462);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(12,0.003788148);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(13,0.003801153);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(14,0.004366509);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(15,0.004347069);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(16,0.003590716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(17,0.004015193);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(18,0.004100214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(19,0.003324741);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(20,0.003067198);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(21,0.001883477);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(22,0.003135234);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(23,0.002864978);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(24,0.002100841);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(25,0.0003684835);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(26,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(27,0.001823034);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(28,0.001162599);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(41,0.00113601);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_met,"");
   thsSignal_grouped_wh3l_13TeV_sssf_met->Draw("hist same noclear");
   
   Double_t _fx3027[40] = {
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
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3027[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2753103,
   -0.1661748,
   -0.0260251,
   0.08179345,
   0.6886765,
   1.081252,
   0.4078098,
   0.6478444,
   0.0266689,
   0.0226326,
   0.3725426,
   0,
   0.07220644,
   -0.08229134,
   0.00610425,
   0.1796949,
   0.1339182,
   0,
   -0.1741594,
   0.08972475,
   0.0007784473,
   -0.006674166,
   0.001838737,
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
   0.002384166};
   Double_t _felx3027[40] = {
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
   2.5,
   2.5};
   Double_t _fely3027[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2265705,
   0.2735984,
   0.1204337,
   0.02052262,
   0.6874279,
   0.9506781,
   0.4114198,
   0.5726125,
   0.02121265,
   0.02265385,
   0.3857679,
   0,
   0.07498197,
   0.1182092,
   0.007227253,
   0.140051,
   0.1398147,
   0,
   0.1342529,
   0.0923629,
   0.000778731,
   0.006968034,
   0.001838737,
   0,
   0,
   0,
   0.03514964,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002384166};
   Double_t _fehx3027[40] = {
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
   2.5,
   2.5};
   Double_t _fehy3027[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2348665,
   0.2735984,
   0.1204337,
   0.02052262,
   0.6874279,
   0.9506781,
   0.4121617,
   0.5726125,
   0.02121265,
   0.02265386,
   0.3857679,
   0,
   0.07498197,
   0.1182092,
   0.007227253,
   0.140051,
   0.1403866,
   0,
   0.1342529,
   0.0923629,
   0.000778731,
   0.006968034,
   0.001838737,
   0,
   0,
   0,
   0.03514964,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002384166};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,220);
   Graph_Graph3027->SetMinimum(-0.6869436);
   Graph_Graph3027->SetMaximum(2.2791);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineStyle(0);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2");
   
   Double_t _fx3028[40] = {
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
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3028[40] = {
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
   Double_t _felx3028[40] = {
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
   2.5,
   2.5};
   Double_t _fely3028[40] = {
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
   Double_t _fehx3028[40] = {
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
   2.5,
   2.5};
   Double_t _fehy3028[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,220);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.262698);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineStyle(0);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_met","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_met","Data","EPL");
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
   
   TH1F *hframe_copy140 = new TH1F("hframe_copy140","",1000,0,200);
   hframe_copy140->SetMinimum(0);
   hframe_copy140->SetMaximum(2.735158);
   hframe_copy140->SetDirectory(0);
   hframe_copy140->SetStats(0);
   hframe_copy140->SetLineStyle(0);
   hframe_copy140->SetMarkerStyle(20);
   hframe_copy140->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy140->GetXaxis()->SetNdivisions(506);
   hframe_copy140->GetXaxis()->SetLabelFont(42);
   hframe_copy140->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetXaxis()->SetLabelSize(0.05);
   hframe_copy140->GetXaxis()->SetTitleSize(0.06);
   hframe_copy140->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy140->GetXaxis()->SetTitleFont(42);
   hframe_copy140->GetYaxis()->SetTitle("Events");
   hframe_copy140->GetYaxis()->SetLabelFont(42);
   hframe_copy140->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetYaxis()->SetLabelSize(0.05);
   hframe_copy140->GetYaxis()->SetTitleSize(0.06);
   hframe_copy140->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy140->GetYaxis()->SetTitleFont(42);
   hframe_copy140->GetZaxis()->SetLabelFont(42);
   hframe_copy140->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetZaxis()->SetLabelSize(0.05);
   hframe_copy140->GetZaxis()->SetTitleSize(0.06);
   hframe_copy140->GetZaxis()->SetTitleFont(42);
   hframe_copy140->Draw("sameaxis");
   ccwh3l_13TeV_sssf_met->Modified();
   ccwh3l_13TeV_sssf_met->cd();
   ccwh3l_13TeV_sssf_met->SetSelected(ccwh3l_13TeV_sssf_met);
}
