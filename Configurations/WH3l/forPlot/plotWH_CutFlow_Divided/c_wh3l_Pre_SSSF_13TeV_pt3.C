void c_wh3l_Pre_SSSF_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_Pre_SSSF_13TeV_pt3/cc
//=========  (Sun Jul  3 16:48:33 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_SSSF_13TeV_pt3 = new TCanvas("ccwh3l_Pre_SSSF_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_Pre_SSSF_13TeV_pt3->Range(-7.999999,-2.021295,104.5,13.52713);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetFillColor(0);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetBorderSize(2);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetTickx(1);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetTicky(1);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe171 = new TH1F("hframe171","",1000,10,100);
   hframe171->SetMinimum(0);
   hframe171->SetMaximum(12.74971);
   hframe171->SetDirectory(0);
   hframe171->SetStats(0);
   hframe171->SetLineStyle(0);
   hframe171->SetMarkerStyle(20);
   hframe171->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->SetName("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35 = new TH1F("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35","thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3",25,10,100);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->SetMinimum(-0.3204271);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->SetMaximum(6.527268);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172 = new TH1D("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172","histo_Fake",25,10,100);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(1,4.331573);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(2,3.534662);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(3,4.770083);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(4,0.856507);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(5,4.0367);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(6,1.433241);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(7,0.389098);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(8,1.153956);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(9,0.770223);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(10,0.1234426);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(11,0.2761226);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(12,0.4514225);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(13,0.07605479);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(14,-0.02848158);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinContent(22,-0.01470217);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(1,1.656988);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(2,1.377753);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(3,1.446363);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(4,0.4808891);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(5,1.2919);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(6,0.7067615);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(7,0.4469198);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(8,0.6217652);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(9,0.5081312);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(10,0.1035149);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(11,0.2761226);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(12,0.3273028);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(13,0.06666477);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(14,0.02848158);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetBinError(22,0.01470217);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->Add(new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173 = new TH1D("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173","histo_WW",25,10,100);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinContent(1,0.03349427);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinContent(2,0.08233088);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinContent(3,0.01483974);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinContent(8,0.01595104);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinContent(11,0.01672248);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinContent(12,0.03215418);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinError(1,0.02178874);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinError(2,0.03687576);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinError(3,0.01130347);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinError(8,0.01595104);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinError(11,0.01672248);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetBinError(12,0.02273913);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->Add(new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174 = new TH1D("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174","histo_VVV",25,10,100);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(1,0.02517459);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(2,0.04222696);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(3,0.03023155);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(4,0.03197154);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(5,0.03868238);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(6,0.0407845);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(7,0.03068198);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(8,0.007567201);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(9,0.02001027);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(10,0.02242827);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(11,0.01680975);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(12,0.008146652);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(13,0.0103594);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(14,0.003433677);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(15,0.004683611);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(16,0.01114146);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(19,0.004447505);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(20,0.00959917);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(21,0.001876782);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(22,2.149672e-07);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(23,0.000287313);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinContent(26,0.007531116);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(1,0.007926137);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(2,0.01018597);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(3,0.009762657);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(4,0.01052872);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(5,0.009948286);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(6,0.01014909);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(7,0.009498958);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(8,0.005171824);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(9,0.006794233);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(10,0.008386133);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(11,0.005767879);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(12,0.00417642);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(13,0.00631606);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(14,0.002428947);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(15,0.003312172);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(16,0.004805276);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(19,0.00315588);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(20,0.004852125);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(21,0.001876782);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(22,2.149672e-07);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(23,0.000287313);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetBinError(26,0.003707168);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->Add(new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175 = new TH1D("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175","histo_Vg",25,10,100);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinContent(1,0.1768071);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinContent(2,-0.1181168);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinContent(3,-0.05568762);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinContent(4,0.07413695);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinContent(8,0.122739);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinError(1,0.1236011);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinError(2,0.2023103);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinError(3,0.121824);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinError(4,0.07413695);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetBinError(8,0.122739);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->Add(new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176 = new TH1D("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176","histo_ZZ",25,10,100);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetBinContent(2,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetBinContent(3,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetBinContent(4,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetBinContent(9,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetBinError(2,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetBinError(3,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetBinError(4,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetBinError(9,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177 = new TH1D("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177","histo_WZ",25,10,100);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(1,0.273771);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(2,0.3036512);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(3,0.2134411);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(4,0.1775313);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(5,0.1238459);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(6,0.1175564);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(7,0.09482342);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(8,0.04531974);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(9,0.02675768);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(10,0.02134374);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(11,0.01719409);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(12,0.02144786);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(13,0.01464157);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(14,0.01239647);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(16,0.004988727);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(18,0.00380545);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(19,0.005978603);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(21,0.006224889);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(22,0.004775882);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinContent(26,0.005526573);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(1,0.03833817);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(2,0.04168384);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(3,0.03379474);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(4,0.03103369);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(5,0.02601926);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(6,0.02609855);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(7,0.02273629);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(8,0.01488566);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(9,0.01199245);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(10,0.01069956);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(11,0.009936957);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(12,0.01001921);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(13,0.008556636);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(14,0.008783727);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(16,0.004988727);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(18,0.00380545);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(19,0.005978603);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(21,0.006224889);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(22,0.004775882);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetBinError(26,0.005526573);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->Add(new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(1,0.08653262);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(2,0.08329794);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(3,0.0842623);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(4,0.06020525);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(5,0.0466595);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(6,0.03432219);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(7,0.02757171);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(8,0.02143632);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(9,0.01920329);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(10,0.01036711);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(11,0.005350619);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(12,0.003005208);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(13,0.004226903);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(14,0.002702987);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(15,0.0009206684);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(16,0.002527349);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(17,0.003131099);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(18,0.0010871);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(21,0.0005029922);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(22,0.0004177496);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(24,0.001903501);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(25,0.0002065508);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinContent(26,0.0001992739);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(1,0.009427789);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(2,0.009148021);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(3,0.009269916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(4,0.008302001);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(5,0.007121723);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(6,0.006265904);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(7,0.005733261);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(8,0.004792494);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(9,0.004787751);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(10,0.003320037);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(11,0.002168711);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(12,0.001739424);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(13,0.001734278);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(14,0.001251331);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(15,0.001221145);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(16,0.001826176);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(17,0.002014804);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(18,0.0009049054);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(21,0.0003740448);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(22,0.0002954586);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(24,0.001703488);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(25,0.0002065508);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetBinError(26,0.0001992739);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3,"");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3->SetName("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36 = new TH1F("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36","thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3",25,10,100);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->SetMinimum(-0.0003004767);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->SetMaximum(0.1007584);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(1,0.08653262);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(2,0.08329794);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(3,0.0842623);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(4,0.06020525);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(5,0.0466595);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(6,0.03432219);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(7,0.02757171);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(8,0.02143632);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(9,0.01920329);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(10,0.01036711);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(11,0.005350619);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(12,0.003005208);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(13,0.004226903);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(14,0.002702987);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(15,0.0009206684);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(16,0.002527349);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(17,0.003131099);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(18,0.0010871);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(21,0.0005029922);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(22,0.0004177496);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(24,0.001903501);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(25,0.0002065508);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinContent(26,0.0001992739);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(1,0.009427789);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(2,0.009148021);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(3,0.009269916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(4,0.008302001);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(5,0.007121723);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(6,0.006265904);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(7,0.005733261);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(8,0.004792494);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(9,0.004787751);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(10,0.003320037);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(11,0.002168711);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(12,0.001739424);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(13,0.001734278);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(14,0.001251331);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(15,0.001221145);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(16,0.001826176);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(17,0.002014804);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(18,0.0009049054);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(21,0.0003740448);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(22,0.0002954586);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(24,0.001703488);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(25,0.0002065508);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetBinError(26,0.0001992739);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3,"");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3035[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3035[25] = {
   4.84082,
   3.892442,
   5.015621,
   1.17999,
   4.199228,
   1.591582,
   0.5146034,
   1.345533,
   0.8521279,
   0.1672147,
   0.3268489,
   0.5131713,
   0.1010558,
   -0.01265143,
   0.004683611,
   0.01613019,
   0,
   0.00380545,
   0.01042611,
   0.00959917,
   0.008101671,
   -0.009926075,
   0.000287313,
   0,
   0};
   Double_t _felx3035[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3035[25] = {
   2.391163,
   2.116356,
   2.358607,
   0.7042231,
   1.939257,
   0.8974352,
   0.4438627,
   0.8788569,
   0.6236427,
   0.1318999,
   0.3237495,
   0.3971165,
   0.08631117,
   0.04107242,
   0.005738478,
   0.01424222,
   0,
   0.003805603,
   0.01016451,
   0.01076261,
   0.008316966,
   0.02014712,
   0.0004064192,
   0,
   0};
   Double_t _fehx3035[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3035[25] = {
   2.391128,
   2.048649,
   2.312371,
   0.7042179,
   1.939258,
   0.8974111,
   0.4990762,
   0.8788561,
   0.6236411,
   0.1319278,
   0.3237455,
   0.3971152,
   0.08631952,
   0.04107145,
   0.005738501,
   0.01424099,
   0,
   0.003805605,
   0.01016051,
   0.01076295,
   0.008316986,
   0.02014676,
   0.0004064199,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,1.000001,109);
   Graph_Graph3035->SetMinimum(-0.7918955);
   Graph_Graph3035->SetMaximum(8.066164);
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
   
   Double_t _fx3036[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3036[25] = {
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
   Double_t _felx3036[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3036[25] = {
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
   Double_t _fehx3036[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3036[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,1.000001,109);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,10,100);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(12.74971);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
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
   ccwh3l_Pre_SSSF_13TeV_pt3->Modified();
   ccwh3l_Pre_SSSF_13TeV_pt3->cd();
   ccwh3l_Pre_SSSF_13TeV_pt3->SetSelected(ccwh3l_Pre_SSSF_13TeV_pt3);
}
