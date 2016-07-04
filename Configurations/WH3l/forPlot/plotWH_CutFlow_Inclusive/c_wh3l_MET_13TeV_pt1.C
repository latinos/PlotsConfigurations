void c_wh3l_MET_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_pt1/cc
//=========  (Sun Jul  3 16:19:06 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_pt1 = new TCanvas("ccwh3l_MET_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_13TeV_pt1->Range(-16,-16.1604,209,108.1503);
   ccwh3l_MET_13TeV_pt1->SetFillColor(0);
   ccwh3l_MET_13TeV_pt1->SetBorderMode(0);
   ccwh3l_MET_13TeV_pt1->SetBorderSize(2);
   ccwh3l_MET_13TeV_pt1->SetTickx(1);
   ccwh3l_MET_13TeV_pt1->SetTicky(1);
   ccwh3l_MET_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe191 = new TH1F("hframe191","",1000,20,200);
   hframe191->SetMinimum(0);
   hframe191->SetMaximum(101.9348);
   hframe191->SetDirectory(0);
   hframe191->SetStats(0);
   hframe191->SetLineStyle(0);
   hframe191->SetMarkerStyle(20);
   hframe191->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe191->GetXaxis()->SetNdivisions(506);
   hframe191->GetXaxis()->SetLabelFont(42);
   hframe191->GetXaxis()->SetLabelOffset(0.007);
   hframe191->GetXaxis()->SetLabelSize(0.05);
   hframe191->GetXaxis()->SetTitleSize(0.06);
   hframe191->GetXaxis()->SetTitleOffset(0.9);
   hframe191->GetXaxis()->SetTitleFont(42);
   hframe191->GetYaxis()->SetTitle("Events");
   hframe191->GetYaxis()->SetLabelFont(42);
   hframe191->GetYaxis()->SetLabelOffset(0.007);
   hframe191->GetYaxis()->SetLabelSize(0.05);
   hframe191->GetYaxis()->SetTitleSize(0.06);
   hframe191->GetYaxis()->SetTitleOffset(1.25);
   hframe191->GetYaxis()->SetTitleFont(42);
   hframe191->GetZaxis()->SetLabelFont(42);
   hframe191->GetZaxis()->SetLabelOffset(0.007);
   hframe191->GetZaxis()->SetLabelSize(0.05);
   hframe191->GetZaxis()->SetTitleSize(0.06);
   hframe191->GetZaxis()->SetTitleFont(42);
   hframe191->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39","thsBackground_grouped_wh3l_MET_13TeV_pt1",25,20,200);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->SetMinimum(-0.3648764);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->SetMaximum(42.81262);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_39);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_pt1192 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_pt1192","histo_Fake",25,20,200);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(1,1.601273);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(2,5.445674);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(3,10.74735);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(4,9.526615);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(5,11.29761);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(6,8.932556);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(7,6.683148);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(8,6.114053);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(9,4.264007);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(10,2.34461);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(11,5.186695);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(12,1.702239);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(13,2.136406);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(14,1.77553);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(15,1.863011);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(16,-0.0451968);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(17,0.8908676);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(18,0.1392931);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(19,0.8684691);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(20,1.345601);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(21,1.422861);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(22,0.6998984);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(23,-0.1018836);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(24,0.3323683);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(25,0.2399373);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinContent(26,0.8420406);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(1,1.297245);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(2,1.981059);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(3,2.498853);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(4,2.498825);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(5,2.939967);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(6,2.47379);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(7,2.143176);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(8,2.078815);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(9,1.407255);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(10,1.330002);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(11,1.485363);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(12,1.279157);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(13,1.110108);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(14,0.933722);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(15,0.9428225);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(16,0.3196796);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(17,0.7717861);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(18,0.1452221);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(19,0.9781749);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(20,0.7966278);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(21,1.022786);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(22,0.4714697);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(23,0.05363091);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(24,0.2240652);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(25,0.1695077);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetBinError(26,0.8216664);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetEntries(1194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_pt1193 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_pt1193","histo_WW",25,20,200);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(3,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(4,0.02784318);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(5,0.05194278);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(6,0.07104139);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(8,0.03406818);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(9,0.01530373);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(10,0.0291407);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(11,0.01566606);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(14,0.01749081);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(16,0.01305253);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinContent(26,0.04641106);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(3,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(4,0.02029379);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(5,0.02793178);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(6,0.03361129);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(8,0.02436031);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(9,0.01530373);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(10,0.02123909);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(11,0.01566606);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(14,0.01749081);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(16,0.01305253);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetBinError(26,0.02682259);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetEntries(25);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_pt1194 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_pt1194","histo_VVV",25,20,200);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(1,0.005480418);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(2,0.03632932);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(3,0.08813461);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(4,0.1767755);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(5,0.2020569);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(6,0.258856);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(7,0.2596311);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(8,0.2732843);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(9,0.2513982);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(10,0.2310639);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(11,0.2187524);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(12,0.1854918);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(13,0.1620318);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(14,0.1329479);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(15,0.1180943);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(16,0.1364163);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(17,0.1144295);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(18,0.08278582);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(19,0.1055424);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(20,0.09463434);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(21,0.1017013);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(22,0.07772172);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(23,0.04633726);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(24,0.05343695);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(25,0.06320314);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinContent(26,0.6645305);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(1,0.003355633);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(2,0.009547993);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(3,0.01331071);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(4,0.01841089);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(5,0.02062655);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(6,0.02297274);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(7,0.02092632);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(8,0.02301468);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(9,0.02220713);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(10,0.02138126);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(11,0.02081176);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(12,0.01940039);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(13,0.018054);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(14,0.01563781);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(15,0.0152895);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(16,0.01647441);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(17,0.0156408);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(18,0.01253853);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(19,0.01516358);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(20,0.01372993);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(21,0.01364233);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(22,0.01263995);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(23,0.01002553);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(24,0.009733136);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(25,0.01087271);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetBinError(26,0.03609589);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetEntries(3817);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_pt1195 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_pt1195","histo_Vg",25,20,200);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(1,0.6066957);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(2,1.26474);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(3,3.091128);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(4,1.994133);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(5,1.723239);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(6,0.8696932);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(7,0.2528874);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(8,0.4752438);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(9,-0.02289377);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(10,0.3805528);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(11,0.02580042);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(12,0.1379343);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(13,0.1688993);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(15,0.1861796);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(16,0.1085778);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(17,-0.1645717);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(19,0.3201034);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(20,0.001810361);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(21,0.07497372);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(22,0.1076973);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinContent(26,0.2154781);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(1,0.2421682);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(2,0.429006);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(3,0.5958419);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(4,0.5591019);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(5,0.4510172);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(6,0.3251886);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(7,0.2113389);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(8,0.366461);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(9,0.148811);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(10,0.2146015);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(11,0.02580042);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(12,0.1851438);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(13,0.1286212);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(15,0.1369812);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(16,0.1085778);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(17,0.1245893);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(19,0.1852798);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(20,0.1537843);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(21,0.07497372);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(22,0.1076973);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetBinError(26,0.2023731);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetEntries(194);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_pt1196 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_pt1196","histo_ZZ",25,20,200);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(1,0.140759);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(2,0.248499);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(3,0.5369473);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(4,1.107548);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(5,1.627849);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(6,1.818822);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(7,1.092083);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(8,0.8018271);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(9,0.7783879);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(10,0.7334663);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(11,0.8139744);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(12,0.5961274);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(13,0.4714646);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(14,0.236063);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(15,0.1317833);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(16,0.1361989);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(17,0.1096497);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(18,0.2115029);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(20,0.2325164);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(21,0.1619599);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(22,0.03555229);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(23,0.07515521);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(24,0.06156303);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinContent(26,0.5743272);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(1,0.07123422);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(2,0.09993049);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(3,0.1436084);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(4,0.2133503);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(5,0.2685763);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(6,0.2709666);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(7,0.2164336);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(8,0.1809343);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(9,0.1775366);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(10,0.1757429);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(11,0.177995);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(12,0.1594465);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(13,0.1386671);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(14,0.09760878);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(15,0.0688323);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(16,0.07371919);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(17,0.06664522);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(18,0.0947776);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(20,0.09673524);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(21,0.08462209);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(22,0.03555229);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(23,0.05446278);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(24,0.04622301);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetBinError(26,0.1567326);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetEntries(350);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_pt1197 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_pt1197","histo_WZ",25,20,200);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(1,1.296412);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(2,3.8841);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(3,8.713852);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(4,18.97394);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(5,25.60293);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(6,23.95969);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(7,21.59089);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(8,18.27509);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(9,14.91311);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(10,12.23763);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(11,10.04828);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(12,8.002471);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(13,7.112683);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(14,5.635739);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(15,4.784459);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(16,4.281615);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(17,3.686968);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(18,2.910824);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(19,2.747797);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(20,2.177669);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(21,2.166331);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(22,1.645988);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(23,1.652986);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(24,1.352572);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(25,1.208255);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinContent(26,11.88114);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(1,0.08429234);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(2,0.144805);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(3,0.2173236);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(4,0.3210268);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(5,0.3736555);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(6,0.3608105);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(7,0.342531);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(8,0.3163927);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(9,0.2856324);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(10,0.2582079);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(11,0.2334019);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(12,0.2079159);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(13,0.1960543);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(14,0.1750205);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(15,0.1604121);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(16,0.1514893);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(17,0.1407156);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(18,0.125712);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(19,0.1221947);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(20,0.1076069);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(21,0.1093125);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(22,0.09417682);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(23,0.09494444);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(24,0.08497429);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(25,0.08028516);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetBinError(26,0.2536895);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetEntries(45061);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt1198 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt1198","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(1,0.02388536);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(2,0.0935416);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(3,0.1542405);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(4,0.2181475);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(5,0.2682941);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(6,0.2945259);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(7,0.2438512);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(8,0.2415279);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(9,0.2244395);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(10,0.1959371);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(11,0.1916324);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(12,0.1387056);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(13,0.1568059);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(14,0.120621);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(15,0.1042122);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(16,0.1015802);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(17,0.08430244);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(18,0.0678666);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(19,0.0574027);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(20,0.04458917);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(21,0.03689014);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(22,0.02835812);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(23,0.01573784);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(24,0.0220084);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(25,0.02669232);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinContent(26,0.1666916);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(1,0.0050394);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(2,0.01011185);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(3,0.01290367);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(4,0.01599483);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(5,0.01792947);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(6,0.01856094);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(7,0.01646496);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(8,0.01630946);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(9,0.01622358);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(10,0.01449105);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(11,0.01368656);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(12,0.01134473);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(13,0.01198682);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(14,0.01021833);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(15,0.00985017);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(16,0.009993197);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(17,0.009155866);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(18,0.007862823);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(19,0.006786016);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(20,0.005820287);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(21,0.005674681);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(22,0.004202249);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(23,0.002487376);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(24,0.004236567);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(25,0.00518752);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetBinError(26,0.01212501);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40","thsSignal_grouped_wh3l_MET_13TeV_pt1",25,20,200);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->SetMaximum(0.3287412);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_40);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt1199 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt1199","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(1,0.02388536);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(2,0.0935416);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(3,0.1542405);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(4,0.2181475);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(5,0.2682941);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(6,0.2945259);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(7,0.2438512);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(8,0.2415279);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(9,0.2244395);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(10,0.1959371);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(11,0.1916324);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(12,0.1387056);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(13,0.1568059);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(14,0.120621);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(15,0.1042122);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(16,0.1015802);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(17,0.08430244);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(18,0.0678666);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(19,0.0574027);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(20,0.04458917);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(21,0.03689014);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(22,0.02835812);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(23,0.01573784);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(24,0.0220084);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(25,0.02669232);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinContent(26,0.1666916);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(1,0.0050394);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(2,0.01011185);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(3,0.01290367);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(4,0.01599483);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(5,0.01792947);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(6,0.01856094);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(7,0.01646496);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(8,0.01630946);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(9,0.01622358);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(10,0.01449105);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(11,0.01368656);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(12,0.01134473);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(13,0.01198682);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(14,0.01021833);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(15,0.00985017);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(16,0.009993197);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(17,0.009155866);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(18,0.007862823);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(19,0.006786016);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(20,0.005820287);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(21,0.005674681);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(22,0.004202249);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(23,0.002487376);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(24,0.004236567);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(25,0.00518752);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetBinError(26,0.01212501);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3039[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3039[25] = {
   3.65062,
   10.89547,
   23.1927,
   31.80686,
   40.50563,
   35.91066,
   29.87864,
   25.97357,
   20.19931,
   15.95647,
   16.30917,
   10.63858,
   10.05148,
   7.797771,
   7.083527,
   4.630664,
   4.637343,
   3.344406,
   4.041912,
   3.852231,
   3.927826,
   2.566858,
   1.672595,
   1.799941,
   1.511396};
   Double_t _felx3039[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3039[25] = {
   1.792244,
   3.296465,
   5.138757,
   4.953947,
   5.709928,
   4.714829,
   3.788982,
   3.706846,
   2.572202,
   2.209245,
   2.688424,
   1.941836,
   1.784202,
   1.405209,
   1.492515,
   0.7134588,
   1.17528,
   0.3992725,
   1.237761,
   1.12713,
   1.402581,
   0.7670717,
   0.2293251,
   0.3889126,
   0.2828095};
   Double_t _fehx3039[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3039[25] = {
   1.792094,
   3.296316,
   5.138358,
   4.952816,
   5.708665,
   4.713911,
   3.788688,
   3.706567,
   2.474508,
   2.208112,
   2.688489,
   1.9829,
   1.779525,
   1.40347,
   1.490558,
   0.4526124,
   1.173604,
   0.4015122,
   1.34281,
   1.265593,
   1.401789,
   0.766739,
   0.227388,
   0.3879777,
   0.2820005};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,2.000001,218);
   Graph_Graph3039->SetMinimum(0);
   Graph_Graph3039->SetMaximum(50.71287);
   Graph_Graph3039->SetDirectory(0);
   Graph_Graph3039->SetStats(0);
   Graph_Graph3039->SetLineStyle(0);
   Graph_Graph3039->SetMarkerStyle(20);
   Graph_Graph3039->GetXaxis()->SetLabelFont(42);
   Graph_Graph3039->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3039->GetXaxis()->SetTitleFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3039->GetYaxis()->SetTitleFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3039);
   
   grae->Draw("2");
   
   Double_t _fx3040[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3040[25] = {
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
   Double_t _felx3040[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3040[25] = {
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
   Double_t _fehx3040[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3040[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","",100,2.000001,218);
   Graph_Graph3040->SetMinimum(0);
   Graph_Graph3040->SetMaximum(1.262698);
   Graph_Graph3040->SetDirectory(0);
   Graph_Graph3040->SetStats(0);
   Graph_Graph3040->SetLineStyle(0);
   Graph_Graph3040->SetMarkerStyle(20);
   Graph_Graph3040->GetXaxis()->SetLabelFont(42);
   Graph_Graph3040->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3040->GetXaxis()->SetTitleFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3040->GetYaxis()->SetTitleFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3040);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy200 = new TH1F("hframe_copy200","",1000,20,200);
   hframe_copy200->SetMinimum(0);
   hframe_copy200->SetMaximum(101.9348);
   hframe_copy200->SetDirectory(0);
   hframe_copy200->SetStats(0);
   hframe_copy200->SetLineStyle(0);
   hframe_copy200->SetMarkerStyle(20);
   hframe_copy200->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy200->GetXaxis()->SetNdivisions(506);
   hframe_copy200->GetXaxis()->SetLabelFont(42);
   hframe_copy200->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetXaxis()->SetLabelSize(0.05);
   hframe_copy200->GetXaxis()->SetTitleSize(0.06);
   hframe_copy200->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy200->GetXaxis()->SetTitleFont(42);
   hframe_copy200->GetYaxis()->SetTitle("Events");
   hframe_copy200->GetYaxis()->SetLabelFont(42);
   hframe_copy200->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetYaxis()->SetLabelSize(0.05);
   hframe_copy200->GetYaxis()->SetTitleSize(0.06);
   hframe_copy200->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy200->GetYaxis()->SetTitleFont(42);
   hframe_copy200->GetZaxis()->SetLabelFont(42);
   hframe_copy200->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetZaxis()->SetLabelSize(0.05);
   hframe_copy200->GetZaxis()->SetTitleSize(0.06);
   hframe_copy200->GetZaxis()->SetTitleFont(42);
   hframe_copy200->Draw("sameaxis");
   ccwh3l_MET_13TeV_pt1->Modified();
   ccwh3l_MET_13TeV_pt1->cd();
   ccwh3l_MET_13TeV_pt1->SetSelected(ccwh3l_MET_13TeV_pt1);
}
