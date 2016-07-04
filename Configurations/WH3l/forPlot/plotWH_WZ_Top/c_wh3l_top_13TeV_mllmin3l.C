void c_wh3l_top_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 20:54:37 2016) by ROOT version6.02/13
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
   
   TH1F *hframe171 = new TH1F("hframe171","",1000,10,200);
   hframe171->SetMinimum(0);
   hframe171->SetMaximum(30);
   hframe171->SetDirectory(0);
   hframe171->SetStats(0);
   hframe171->SetLineStyle(0);
   hframe171->SetMarkerStyle(20);
   hframe171->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe171->GetXaxis()->SetNdivisions(506);
   hframe171->GetXaxis()->SetLabelFont(42);
   hframe171->GetXaxis()->SetLabelOffset(0.007);
   hframe171->GetXaxis()->SetLabelSize(0.05);
   hframe171->GetXaxis()->SetTitleSize(0.06);
   hframe171->GetXaxis()->SetTitleOffset(0.9);
   hframe171->GetXaxis()->SetTitleFont(42);
   hframe171->GetYaxis()->SetTitle("Events");
   hframe171->GetYaxis()->SetLabelFont(42);
   hframe171->GetYaxis()->SetLabelOffset(0.007);
   hframe171->GetYaxis()->SetLabelSize(0.05);
   hframe171->GetYaxis()->SetTitleSize(0.06);
   hframe171->GetYaxis()->SetTitleOffset(1.25);
   hframe171->GetYaxis()->SetTitleFont(42);
   hframe171->GetZaxis()->SetLabelFont(42);
   hframe171->GetZaxis()->SetLabelOffset(0.007);
   hframe171->GetZaxis()->SetLabelSize(0.05);
   hframe171->GetZaxis()->SetTitleSize(0.06);
   hframe171->GetZaxis()->SetTitleFont(42);
   hframe171->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_top_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35","thsBackground_grouped_wh3l_top_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->SetMinimum(-0.2136305);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->SetMaximum(9.724478);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(1,1.744435);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(2,4.360227);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(3,7.163975);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(4,6.782456);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(5,4.500451);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(6,6.101518);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(7,0.8142849);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(8,1.253309);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(9,1.78065);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(10,0.06221746);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(11,0.6729458);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(12,0.8881438);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(13,0.4430658);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(14,0.1271613);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(15,0.04210121);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(16,0.7622859);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(17,-0.01875976);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(18,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(20,0.07030044);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinContent(21,0.01904956);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(1,1.122916);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(2,1.71623);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(3,2.097432);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(4,1.832843);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(5,1.589384);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(6,1.696765);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(7,0.4879938);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(8,0.6830737);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(9,0.8856961);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(10,0.2665608);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(11,0.4768716);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(12,0.5161626);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(13,0.2221485);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(14,0.1066825);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(15,0.0746399);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(16,0.6019507);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(17,0.01875976);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(18,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(20,0.07030044);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetBinError(21,0.08512631);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_mllmin3l173 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_mllmin3l173","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinContent(1,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinContent(2,0.03488018);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinContent(4,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinContent(6,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinContent(7,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinContent(13,0.03054333);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinContent(15,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinError(1,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinError(2,0.02485137);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinError(4,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinError(6,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinError(7,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinError(13,0.02182423);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetBinError(15,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(1,0.01649943);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(2,0.02246311);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(3,0.06009075);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(4,0.06547227);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(5,0.05117688);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(6,0.04104687);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(7,0.03193728);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(8,0.01740179);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(9,0.021156);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(10,0.01592529);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(11,0.004112208);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(12,0.03655285);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(13,0.03099253);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(14,0.0201829);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(15,0.01926458);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(16,0.01168591);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(17,0.0125672);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(18,0.009207736);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(19,0.02704902);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(20,0.004274435);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinContent(21,0.05560048);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(1,0.007232193);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(2,0.009156102);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(3,0.01236112);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(4,0.01253042);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(5,0.01134148);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(6,0.01028932);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(7,0.008026053);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(8,0.006355049);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(9,0.007642693);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(10,0.007044465);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(11,0.004143053);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(12,0.009525024);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(13,0.007851021);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(14,0.007559531);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(15,0.007307029);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(16,0.005426744);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(17,0.00503886);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(18,0.004237129);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(19,0.008095802);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(20,0.003031997);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetBinError(21,0.01143208);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetEntries(364);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinContent(1,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinContent(2,0.01895312);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinContent(3,0.1852171);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinContent(4,0.4842011);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinContent(5,0.4044837);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinContent(6,-0.09177828);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinContent(12,0.1819414);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinContent(13,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinError(1,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinError(2,0.1858965);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinError(3,0.1557859);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinError(4,0.2330237);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinError(5,0.1936897);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinError(6,0.1218522);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinError(12,0.1332888);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetBinError(13,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(1,0.09214541);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(2,0.06125498);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(3,0.08998948);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(4,0.08679924);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(5,0.1050518);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(6,0.066695);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(9,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(12,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(13,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinContent(21,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(1,0.06548722);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(2,0.0375437);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(3,0.06434838);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(4,0.06138467);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(5,0.06639606);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(6,0.05056569);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(9,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(12,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(13,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetBinError(21,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(1,1.353596);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(2,1.428959);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(3,1.337983);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(4,1.224233);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(5,0.8545084);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(6,0.5947985);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(7,0.0938064);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(8,0.1035013);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(9,0.06891891);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(10,0.06255002);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(11,0.09471119);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(12,0.3426939);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(13,0.3105168);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(14,0.1508208);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(15,0.1374644);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(16,0.1158106);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(17,0.09648674);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(18,0.05258741);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(19,0.0601822);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(20,0.05115667);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinContent(21,0.3325781);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(1,0.08501058);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(2,0.0876384);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(3,0.0855769);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(4,0.08304499);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(5,0.06887903);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(6,0.05664785);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(7,0.02234337);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(8,0.02402321);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(9,0.01967915);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(10,0.01902766);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(11,0.02228395);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(12,0.04341952);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(13,0.0404916);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(14,0.02860086);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(15,0.02780039);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(16,0.0246422);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(17,0.02246487);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(18,0.01720639);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(19,0.01742306);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(20,0.01604864);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetBinError(21,0.04147411);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(1,0.04744261);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(2,0.07717206);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(3,0.09453767);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(4,0.0746473);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(5,0.05866031);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(6,0.03719978);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(7,0.003419085);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(8,0.002719416);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(9,0.001395556);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(10,0.001801169);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(12,0.001071362);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(1,0.00748086);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(2,0.009420793);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(3,0.009537835);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(4,0.008509196);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(5,0.007439918);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(6,0.005755814);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(7,0.001160371);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(8,0.001173907);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(9,0.0007324707);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(10,0.001324314);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(12,0.0006505119);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_top_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_top_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36","thsSignal_grouped_wh3l_top_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->SetMaximum(0.1092793);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(1,0.04744261);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(2,0.07717206);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(3,0.09453767);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(4,0.0746473);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(5,0.05866031);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(6,0.03719978);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(7,0.003419085);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(8,0.002719416);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(9,0.001395556);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(10,0.001801169);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(12,0.001071362);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(1,0.00748086);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(2,0.009420793);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(3,0.009537835);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(4,0.008509196);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(5,0.007439918);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(6,0.005755814);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(7,0.001160371);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(8,0.001173907);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(9,0.0007324707);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(10,0.001324314);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(12,0.0006505119);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3035[20] = {
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
   Double_t _fy3035[20] = {
   3.322871,
   5.926738,
   8.837255,
   8.661373,
   5.915672,
   6.72823,
   0.9554971,
   1.374212,
   1.914052,
   0.1406928,
   0.7717692,
   1.496996,
   0.958427,
   0.3303998,
   0.2151546,
   0.8897824,
   0.09029417,
   0.1325669,
   0.1404715,
   0.1257315};
   Double_t _felx3035[20] = {
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
   Double_t _fely3035[20] = {
   1.526463,
   2.433915,
   3.482723,
   3.265997,
   2.491719,
   2.893587,
   0.6059172,
   0.8377034,
   1.141698,
   0.09234316,
   0.5556685,
   0.8129669,
   0.4636203,
   0.172903,
   0.09675919,
   0.6861265,
   0.04848114,
   0.09594931,
   0.08538102,
   0.09281575};
   Double_t _fehx3035[20] = {
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
   Double_t _fehy3035[20] = {
   1.52635,
   2.566098,
   3.482677,
   3.265848,
   2.491693,
   2.873386,
   0.6059085,
   0.8376986,
   1.14169,
   0.2938748,
   0.555695,
   0.8128741,
   0.4635748,
   0.1728606,
   0.1284173,
   0.6861486,
   0.04844096,
   0.09593859,
   0.1026879,
   0.09283431};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,219);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(13.54863);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineStyle(0);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2");
   
   Double_t _fx3036[20] = {
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
   Double_t _fy3036[20] = {
   2,
   6,
   9,
   3,
   7,
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
   Double_t _felx3036[20] = {
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
   Double_t _fely3036[20] = {
   1.29183,
   2.379969,
   2.943511,
   1.632727,
   2.581513,
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
   Double_t _fehx3036[20] = {
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
   Double_t _fehy3036[20] = {
   2.63791,
   3.583713,
   4.110286,
   2.918242,
   3.770356,
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
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,219);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(14.42131);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineStyle(0);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,10,200);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(30);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy180->GetXaxis()->SetNdivisions(506);
   hframe_copy180->GetXaxis()->SetLabelFont(42);
   hframe_copy180->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetXaxis()->SetLabelSize(0.05);
   hframe_copy180->GetXaxis()->SetTitleSize(0.06);
   hframe_copy180->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy180->GetXaxis()->SetTitleFont(42);
   hframe_copy180->GetYaxis()->SetTitle("Events");
   hframe_copy180->GetYaxis()->SetLabelFont(42);
   hframe_copy180->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetYaxis()->SetLabelSize(0.05);
   hframe_copy180->GetYaxis()->SetTitleSize(0.06);
   hframe_copy180->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy180->GetYaxis()->SetTitleFont(42);
   hframe_copy180->GetZaxis()->SetLabelFont(42);
   hframe_copy180->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetZaxis()->SetLabelSize(0.05);
   hframe_copy180->GetZaxis()->SetTitleSize(0.06);
   hframe_copy180->GetZaxis()->SetTitleFont(42);
   hframe_copy180->Draw("sameaxis");
   ccwh3l_top_13TeV_mllmin3l->Modified();
   ccwh3l_top_13TeV_mllmin3l->cd();
   ccwh3l_top_13TeV_mllmin3l->SetSelected(ccwh3l_top_13TeV_mllmin3l);
}
