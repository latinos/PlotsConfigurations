void c_wh3l_top_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_mllmin3l/cc
//=========  (Tue Jun 28 16:49:06 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_mllmin3l = new TCanvas("ccwh3l_top_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_top_13TeV_mllmin3l->Range(-28,-4.756097,209.5,31.82927);
   ccwh3l_top_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_top_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_top_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_top_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_top_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_top_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_top_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_top_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe169 = new TH1F("hframe169","",1000,10,200);
   hframe169->SetMinimum(0);
   hframe169->SetMaximum(30);
   hframe169->SetDirectory(0);
   hframe169->SetStats(0);
   hframe169->SetLineStyle(0);
   hframe169->SetMarkerStyle(20);
   hframe169->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe169->GetXaxis()->SetNdivisions(506);
   hframe169->GetXaxis()->SetLabelFont(42);
   hframe169->GetXaxis()->SetLabelOffset(0.007);
   hframe169->GetXaxis()->SetLabelSize(0.05);
   hframe169->GetXaxis()->SetTitleSize(0.06);
   hframe169->GetXaxis()->SetTitleOffset(0.9);
   hframe169->GetXaxis()->SetTitleFont(42);
   hframe169->GetYaxis()->SetTitle("Events");
   hframe169->GetYaxis()->SetLabelFont(42);
   hframe169->GetYaxis()->SetLabelOffset(0.007);
   hframe169->GetYaxis()->SetLabelSize(0.05);
   hframe169->GetYaxis()->SetTitleSize(0.06);
   hframe169->GetYaxis()->SetTitleOffset(1.25);
   hframe169->GetYaxis()->SetTitleFont(42);
   hframe169->GetZaxis()->SetLabelFont(42);
   hframe169->GetZaxis()->SetLabelOffset(0.007);
   hframe169->GetZaxis()->SetLabelSize(0.05);
   hframe169->GetZaxis()->SetTitleSize(0.06);
   hframe169->GetZaxis()->SetTitleFont(42);
   hframe169->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_top_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22","thsBackground_grouped_wh3l_top_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->SetMinimum(-0.2136305);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->SetMaximum(9.724478);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_22);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(1,1.744435);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(2,4.360227);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(3,7.163975);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(4,6.782456);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(5,4.500451);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(6,6.101518);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(7,0.8142849);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(8,1.253309);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(9,1.78065);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(10,0.06221746);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(11,0.6729458);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(12,0.8881438);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(13,0.4430658);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(14,0.1271613);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(15,0.04210121);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(16,0.7622859);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(17,-0.01875976);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(18,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(20,0.07030044);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinContent(21,0.01904956);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(1,1.122916);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(2,1.71623);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(3,2.097432);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(4,1.832843);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(5,1.589384);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(6,1.696765);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(7,0.4879938);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(8,0.6830737);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(9,0.8856961);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(10,0.2665608);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(11,0.4768716);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(12,0.5161626);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(13,0.2221485);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(14,0.1066825);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(15,0.0746399);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(16,0.6019507);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(17,0.01875976);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(18,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(20,0.07030044);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetBinError(21,0.08512631);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l170->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_mllmin3l171 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_mllmin3l171","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinContent(1,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinContent(2,0.03488018);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinContent(4,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinContent(6,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinContent(7,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinContent(13,0.03054333);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinContent(15,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinError(1,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinError(2,0.02485137);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinError(4,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinError(6,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinError(7,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinError(13,0.02182423);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetBinError(15,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l171->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(2,0.003810872);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(3,0.003209406);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(4,0.00230689);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(5,0.004680327);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(6,0.004104746);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(7,0.00173184);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(8,0.0002926199);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(11,0.0010457);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(12,0.0002314976);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(13,0.003479492);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(14,0.0009710224);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(17,0.0007818795);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(20,0.0005599114);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinContent(21,0.002017397);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(2,0.00158464);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(3,0.00137325);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(4,0.001521136);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(5,0.001690479);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(6,0.001525811);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(7,0.001017519);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(8,0.0002926199);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(11,0.0007400568);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(12,0.000170911);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(13,0.001450136);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(14,0.0006905336);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(17,0.0007818795);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(20,0.0005599114);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetBinError(21,0.001088103);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinContent(1,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinContent(2,0.01895312);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinContent(3,0.3072678);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinContent(4,0.4842011);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinContent(5,0.4044837);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinContent(6,-0.09177828);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinContent(12,0.1819414);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinContent(13,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinError(1,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinError(2,0.1858965);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinError(3,0.1979031);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinError(4,0.2330237);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinError(5,0.1936897);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinError(6,0.1218522);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinError(12,0.1332888);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetBinError(13,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(1,0.09214541);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(2,0.105262);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(3,0.08998948);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(4,0.08679924);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(5,0.1050518);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(6,0.1557991);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(8,0.01994686);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(9,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(12,0.1352783);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(13,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinContent(21,0.06262714);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(1,0.06548722);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(2,0.05784587);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(3,0.06434838);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(4,0.06138467);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(5,0.06639606);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(6,0.08081239);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(8,0.01994686);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(9,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(12,0.07828225);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(13,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetBinError(21,0.04681215);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(1,1.353596);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(2,1.432743);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(3,1.337983);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(4,1.229931);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(5,0.8600863);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(6,0.5947985);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(7,0.0938064);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(8,0.1035013);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(9,0.06891891);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(10,0.06255002);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(11,0.09471119);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(12,0.3426939);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(13,0.3105168);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(14,0.1508208);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(15,0.1374644);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(16,0.1158106);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(17,0.09648674);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(18,0.05258741);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(19,0.0601822);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(20,0.05115667);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinContent(21,0.335917);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(1,0.08501058);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(2,0.08772002);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(3,0.0855769);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(4,0.08324025);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(5,0.06910451);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(6,0.05664785);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(7,0.02234337);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(8,0.02402321);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(9,0.01967915);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(10,0.01902766);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(11,0.02228395);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(12,0.04341952);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(13,0.0404916);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(14,0.02860086);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(15,0.02780039);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(16,0.0246422);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(17,0.02246487);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(18,0.01720639);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(19,0.01742306);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(20,0.01604864);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetBinError(21,0.0416083);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_top_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Draw("hist same");
   
   Double_t _fx3043[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3043[20] = {
   3.306372,
   5.955876,
   8.902425,
   8.603906,
   5.874753,
   6.780393,
   0.9252917,
   1.37705,
   1.892896,
   0.1247675,
   0.7687027,
   1.548289,
   0.930914,
   0.311188,
   0.19589,
   0.8780965,
   0.07850886,
   0.1241206,
   0.1134225,
   0.122017};
   Double_t _felx3043[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3043[20] = {
   1.484898,
   2.312667,
   3.256557,
   3.018991,
   2.34744,
   2.691745,
   0.5807051,
   0.8187729,
   1.088761,
   0.08336164,
   0.5391222,
   0.8160924,
   0.4493586,
   0.1633844,
   0.08714746,
   0.6670204,
   0.04238189,
   0.09124417,
   0.072446,
   0.08943161};
   Double_t _fehx3043[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3043[20] = {
   1.484898,
   2.45216,
   3.256557,
   3.018992,
   2.34744,
   2.669773,
   0.5807052,
   0.8187728,
   1.088761,
   0.2861978,
   0.5391221,
   0.8160926,
   0.4493586,
   0.1633843,
   0.1194354,
   0.6670204,
   0.04238189,
   0.09124418,
   0.09060474,
   0.0894316};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3043,_fy3043,_felx3043,_fehx3043,_fely3043,_fehy3043);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3043 = new TH1F("Graph_Graph3043","",100,0,219);
   Graph_Graph3043->SetMinimum(0);
   Graph_Graph3043->SetMaximum(13.37162);
   Graph_Graph3043->SetDirectory(0);
   Graph_Graph3043->SetStats(0);
   Graph_Graph3043->SetLineStyle(0);
   Graph_Graph3043->SetMarkerStyle(20);
   Graph_Graph3043->GetXaxis()->SetLabelFont(42);
   Graph_Graph3043->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3043->GetXaxis()->SetTitleFont(42);
   Graph_Graph3043->GetYaxis()->SetLabelFont(42);
   Graph_Graph3043->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3043->GetYaxis()->SetTitleFont(42);
   Graph_Graph3043->GetZaxis()->SetLabelFont(42);
   Graph_Graph3043->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3043);
   
   grae->Draw("2");
   
   Double_t _fx3044[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3044[20] = {
   2,
   6,
   9,
   3,
   8,
   3,
   0,
   2,
   1,
   1,
   0,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   1,
   0};
   Double_t _felx3044[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3044[20] = {
   1.29183,
   2.379969,
   2.943511,
   1.632727,
   2.768432,
   1.632727,
   0,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0.8272524,
   0.8272524,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   0};
   Double_t _fehx3044[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3044[20] = {
   2.63791,
   3.583713,
   4.110286,
   2.918242,
   3.94522,
   2.918242,
   1.147908,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   2.29957,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3044,_fy3044,_felx3044,_fehx3044,_fely3044,_fehy3044);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3044 = new TH1F("Graph_Graph3044","",100,0,219);
   Graph_Graph3044->SetMinimum(0);
   Graph_Graph3044->SetMaximum(14.42131);
   Graph_Graph3044->SetDirectory(0);
   Graph_Graph3044->SetStats(0);
   Graph_Graph3044->SetLineStyle(0);
   Graph_Graph3044->SetMarkerStyle(20);
   Graph_Graph3044->GetXaxis()->SetLabelFont(42);
   Graph_Graph3044->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3044->GetXaxis()->SetTitleFont(42);
   Graph_Graph3044->GetYaxis()->SetLabelFont(42);
   Graph_Graph3044->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3044->GetYaxis()->SetTitleFont(42);
   Graph_Graph3044->GetZaxis()->SetLabelFont(42);
   Graph_Graph3044->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3044);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy176 = new TH1F("hframe_copy176","",1000,10,200);
   hframe_copy176->SetMinimum(0);
   hframe_copy176->SetMaximum(30);
   hframe_copy176->SetDirectory(0);
   hframe_copy176->SetStats(0);
   hframe_copy176->SetLineStyle(0);
   hframe_copy176->SetMarkerStyle(20);
   hframe_copy176->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy176->GetXaxis()->SetNdivisions(506);
   hframe_copy176->GetXaxis()->SetLabelFont(42);
   hframe_copy176->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy176->GetXaxis()->SetLabelSize(0.05);
   hframe_copy176->GetXaxis()->SetTitleSize(0.06);
   hframe_copy176->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy176->GetXaxis()->SetTitleFont(42);
   hframe_copy176->GetYaxis()->SetTitle("Events");
   hframe_copy176->GetYaxis()->SetLabelFont(42);
   hframe_copy176->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy176->GetYaxis()->SetLabelSize(0.05);
   hframe_copy176->GetYaxis()->SetTitleSize(0.06);
   hframe_copy176->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy176->GetYaxis()->SetTitleFont(42);
   hframe_copy176->GetZaxis()->SetLabelFont(42);
   hframe_copy176->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy176->GetZaxis()->SetLabelSize(0.05);
   hframe_copy176->GetZaxis()->SetTitleSize(0.06);
   hframe_copy176->GetZaxis()->SetTitleFont(42);
   hframe_copy176->Draw("sameaxis");
   ccwh3l_top_13TeV_mllmin3l->Modified();
   ccwh3l_top_13TeV_mllmin3l->cd();
   ccwh3l_top_13TeV_mllmin3l->SetSelected(ccwh3l_top_13TeV_mllmin3l);
}
