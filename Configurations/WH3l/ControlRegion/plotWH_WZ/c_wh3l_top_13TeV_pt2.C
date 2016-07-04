void c_wh3l_top_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt2/cc
//=========  (Sat Jul  2 20:39:44 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt2 = new TCanvas("ccwh3l_top_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt2->Range(-28,-4.318777,209.5,28.90259);
   ccwh3l_top_13TeV_pt2->SetFillColor(0);
   ccwh3l_top_13TeV_pt2->SetBorderMode(0);
   ccwh3l_top_13TeV_pt2->SetBorderSize(2);
   ccwh3l_top_13TeV_pt2->SetTickx(1);
   ccwh3l_top_13TeV_pt2->SetTicky(1);
   ccwh3l_top_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_top_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_top_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe145 = new TH1F("hframe145","",1000,10,200);
   hframe145->SetMinimum(0);
   hframe145->SetMaximum(27.24152);
   hframe145->SetDirectory(0);
   hframe145->SetStats(0);
   hframe145->SetLineStyle(0);
   hframe145->SetMarkerStyle(20);
   hframe145->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe145->GetXaxis()->SetNdivisions(506);
   hframe145->GetXaxis()->SetLabelFont(42);
   hframe145->GetXaxis()->SetLabelOffset(0.007);
   hframe145->GetXaxis()->SetLabelSize(0.05);
   hframe145->GetXaxis()->SetTitleSize(0.06);
   hframe145->GetXaxis()->SetTitleOffset(0.9);
   hframe145->GetXaxis()->SetTitleFont(42);
   hframe145->GetYaxis()->SetTitle("Events");
   hframe145->GetYaxis()->SetLabelFont(42);
   hframe145->GetYaxis()->SetLabelOffset(0.007);
   hframe145->GetYaxis()->SetLabelSize(0.05);
   hframe145->GetYaxis()->SetTitleSize(0.06);
   hframe145->GetYaxis()->SetTitleOffset(1.25);
   hframe145->GetYaxis()->SetTitleFont(42);
   hframe145->GetZaxis()->SetLabelFont(42);
   hframe145->GetZaxis()->SetLabelOffset(0.007);
   hframe145->GetZaxis()->SetLabelSize(0.05);
   hframe145->GetZaxis()->SetTitleSize(0.06);
   hframe145->GetZaxis()->SetTitleFont(42);
   hframe145->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetName("thsBackground_grouped_wh3l_top_13TeV_pt2");
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33","thsBackground_grouped_wh3l_top_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetMinimum(-0.08775089);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetMaximum(11.89329);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt2146 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt2146","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(1,1.275971);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(2,6.549017);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(3,9.151488);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(4,6.201354);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(5,5.992556);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(6,2.271698);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(7,2.087063);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(8,1.076916);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(9,1.294057);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(10,0.9450397);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(11,0.04874358);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(12,0.5268109);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(13,0.120094);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(14,-0.03738869);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(17,0.07161654);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(20,0.0378228);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(21,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinContent(26,0.01020004);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(1,1.094999);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(2,2.132297);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(3,2.175451);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(4,1.822882);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(5,1.597414);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(6,1.114212);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(7,0.9485757);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(8,0.8051697);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(9,0.6303309);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(10,0.4417781);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(11,0.07788171);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(12,0.3369795);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(13,0.0884581);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(14,0.03738869);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(17,0.07161654);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(20,0.0378228);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(21,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetBinError(26,0.01017042);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2146->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Fake_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt2147 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt2147","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(2,0.03290312);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(4,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(5,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(6,0.03780478);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(8,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(11,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(12,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(14,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinContent(16,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(2,0.02332429);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(4,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(5,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(6,0.02674989);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(8,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(11,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(12,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(14,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetBinError(16,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt2147->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2147->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_WW_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt2148 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt2148","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(1,-0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(2,0.3822979);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(3,0.2559279);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(4,0.1149633);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(5,0.1699419);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(6,0.1950669);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(7,0.02657535);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(8,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(12,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinContent(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(1,0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(2,0.1889865);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(3,0.2431629);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(4,0.2027142);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(5,0.1498782);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(6,0.1424647);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(7,0.02657535);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(8,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(12,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetBinError(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2148->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Vg_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt2149 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt2149","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(1,0.0507196);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(2,0.09319035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(3,0.1219885);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(4,0.1250242);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(5,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(6,0.09056495);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(8,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(10,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(13,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinContent(18,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(1,0.0507196);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(2,0.06629982);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(3,0.06207944);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(4,0.07231337);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(5,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(6,0.0640536);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(8,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(10,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(13,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetBinError(18,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2149->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt2150 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt2150","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(1,0.3130518);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(2,1.449646);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(3,1.307755);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(4,1.076074);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(5,0.9069638);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(6,0.7437623);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(7,0.5488224);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(8,0.369439);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(9,0.3249186);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(10,0.3198793);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(11,0.1945363);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(12,0.227635);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(13,0.1935492);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(14,0.1245054);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(15,0.1133932);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(16,0.09425646);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(17,0.05793895);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(18,0.05621181);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(19,0.07744278);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(20,0.04934057);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(21,0.02956037);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(22,0.03689207);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(23,0.03549644);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(24,0.02065475);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(25,0.04176364);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinContent(26,0.1543736);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(1,0.04081529);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(2,0.08896418);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(3,0.08440971);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(4,0.07681783);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(5,0.07070441);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(6,0.06376535);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(7,0.05468944);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(8,0.04443438);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(9,0.04183146);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(10,0.04202825);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(11,0.03181355);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(12,0.03439296);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(13,0.03237695);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(14,0.02694406);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(15,0.02482748);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(16,0.02249811);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(17,0.01836413);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(18,0.01638466);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(19,0.02035843);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(20,0.0161939);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(21,0.01242721);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(22,0.01442838);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(23,0.0145182);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(24,0.01049345);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(25,0.01478964);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetBinError(26,0.02789132);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2150->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_WZ_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt2151 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt2151","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(1,0.0119678);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(2,0.06161654);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(3,0.05944746);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(4,0.06198578);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(5,0.05412487);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(6,0.05460613);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(7,0.02754819);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(8,0.01665685);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(9,0.0121373);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(10,0.01019774);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(11,0.00959493);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(12,0.007162079);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(13,0.002885127);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(14,0.001941609);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(15,0.002762479);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(16,0.001336293);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(17,0.002366651);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(18,0.0001972938);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(19,0.0027539);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(20,0.0008784106);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(21,0.001715176);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(23,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinContent(26,0.001749602);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(1,0.003956338);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(2,0.008258979);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(3,0.007490433);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(4,0.007764987);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(5,0.007335836);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(6,0.007478731);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(7,0.005511711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(8,0.003659888);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(9,0.00331193);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(10,0.003289461);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(11,0.002895086);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(12,0.002515249);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(13,0.00136489);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(14,0.001084653);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(15,0.001397741);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(16,0.001088815);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(17,0.001065367);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(18,0.0001967997);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(19,0.001878666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(20,0.0005180628);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(21,0.001715176);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(23,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetBinError(26,0.001603817);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2151->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt2,"");
   thsBackground_grouped_wh3l_top_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetName("thsSignal_grouped_wh3l_top_13TeV_pt2");
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_top_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34","thsSignal_grouped_wh3l_top_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetMaximum(0.0733693);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt2152 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt2152","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(1,0.0119678);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(2,0.06161654);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(3,0.05944746);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(4,0.06198578);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(5,0.05412487);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(6,0.05460613);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(7,0.02754819);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(8,0.01665685);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(9,0.0121373);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(10,0.01019774);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(11,0.00959493);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(12,0.007162079);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(13,0.002885127);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(14,0.001941609);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(15,0.002762479);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(16,0.001336293);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(17,0.002366651);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(18,0.0001972938);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(19,0.0027539);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(20,0.0008784106);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(21,0.001715176);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(23,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinContent(26,0.001749602);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(1,0.003956338);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(2,0.008258979);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(3,0.007490433);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(4,0.007764987);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(5,0.007335836);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(6,0.007478731);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(7,0.005511711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(8,0.003659888);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(9,0.00331193);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(10,0.003289461);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(11,0.002895086);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(12,0.002515249);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(13,0.00136489);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(14,0.001084653);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(15,0.001397741);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(16,0.001088815);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(17,0.001065367);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(18,0.0001967997);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(19,0.001878666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(20,0.0005180628);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(21,0.001715176);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(23,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetBinError(26,0.001603817);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2152->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt2,"");
   thsSignal_grouped_wh3l_top_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3033[25] = {
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
   Double_t _fy3033[25] = {
   1.616607,
   8.507054,
   10.83716,
   7.521864,
   7.133077,
   3.338897,
   2.662461,
   1.612806,
   1.618976,
   1.285367,
   0.2587485,
   0.8353916,
   0.3556875,
   0.1046075,
   0.1133932,
   0.107309,
   0.1295555,
   0.1016695,
   0.1752937,
   0.08716337,
   0.1003321,
   0.03689207,
   0.03549644,
   0.02065475,
   0.04176364};
   Double_t _felx3033[25] = {
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
   Double_t _fely3033[25] = {
   1.289719,
   3.393164,
   4.104144,
   3.014732,
   2.817869,
   1.619971,
   1.26266,
   1.083791,
   0.8105694,
   0.6031292,
   0.0977378,
   0.4885452,
   0.1686334,
   0.08297852,
   0.02514877,
   0.03570872,
   0.09344181,
   0.06199409,
   0.118489,
   0.05566442,
   0.08682401,
   0.01445693,
   0.01461823,
   0.01054363,
   0.01484482};
   Double_t _fehx3033[25] = {
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
   Double_t _fehy3033[25] = {
   1.289713,
   3.393131,
   4.104161,
   3.076124,
   2.817862,
   1.619957,
   1.262652,
   1.083787,
   0.8105643,
   0.6031264,
   0.1264591,
   0.4885421,
   0.1684268,
   0.08297063,
   0.02507978,
   0.03570081,
   0.09343583,
   0.06195368,
   0.1185057,
   0.05566087,
   0.08682633,
   0.0144537,
   0.01461035,
   0.01051058,
   0.01484486};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,219);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(16.43444);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineStyle(0);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("2");
   
   Double_t _fx3034[25] = {
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
   Double_t _fy3034[25] = {
   1,
   8,
   3,
   7,
   3,
   5,
   5,
   6,
   1,
   0,
   1,
   0,
   0,
   1,
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
   Double_t _felx3034[25] = {
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
   Double_t _fely3034[25] = {
   0.8272524,
   2.768432,
   1.632727,
   2.581513,
   1.632727,
   2.159724,
   2.159724,
   2.379969,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0.8272524,
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
   Double_t _fehx3034[25] = {
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
   Double_t _fehy3034[25] = {
   2.29957,
   3.94522,
   2.918242,
   3.770356,
   2.918242,
   3.382539,
   3.382539,
   3.583713,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,219);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(13.13974);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineStyle(0);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy153 = new TH1F("hframe_copy153","",1000,10,200);
   hframe_copy153->SetMinimum(0);
   hframe_copy153->SetMaximum(27.24152);
   hframe_copy153->SetDirectory(0);
   hframe_copy153->SetStats(0);
   hframe_copy153->SetLineStyle(0);
   hframe_copy153->SetMarkerStyle(20);
   hframe_copy153->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy153->GetXaxis()->SetNdivisions(506);
   hframe_copy153->GetXaxis()->SetLabelFont(42);
   hframe_copy153->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy153->GetXaxis()->SetLabelSize(0.05);
   hframe_copy153->GetXaxis()->SetTitleSize(0.06);
   hframe_copy153->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy153->GetXaxis()->SetTitleFont(42);
   hframe_copy153->GetYaxis()->SetTitle("Events");
   hframe_copy153->GetYaxis()->SetLabelFont(42);
   hframe_copy153->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy153->GetYaxis()->SetLabelSize(0.05);
   hframe_copy153->GetYaxis()->SetTitleSize(0.06);
   hframe_copy153->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy153->GetYaxis()->SetTitleFont(42);
   hframe_copy153->GetZaxis()->SetLabelFont(42);
   hframe_copy153->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy153->GetZaxis()->SetLabelSize(0.05);
   hframe_copy153->GetZaxis()->SetTitleSize(0.06);
   hframe_copy153->GetZaxis()->SetTitleFont(42);
   hframe_copy153->Draw("sameaxis");
   ccwh3l_top_13TeV_pt2->Modified();
   ccwh3l_top_13TeV_pt2->cd();
   ccwh3l_top_13TeV_pt2->SetSelected(ccwh3l_top_13TeV_pt2);
}
