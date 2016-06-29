void c_wh3l_wz_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt1/cc
//=========  (Tue Jun 28 16:49:04 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_pt1 = new TCanvas("ccwh3l_wz_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_wz_13TeV_pt1->Range(-28,-13.1948,209.5,88.30368);
   ccwh3l_wz_13TeV_pt1->SetFillColor(0);
   ccwh3l_wz_13TeV_pt1->SetBorderMode(0);
   ccwh3l_wz_13TeV_pt1->SetBorderSize(2);
   ccwh3l_wz_13TeV_pt1->SetTickx(1);
   ccwh3l_wz_13TeV_pt1->SetTicky(1);
   ccwh3l_wz_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe137 = new TH1F("hframe137","",1000,10,200);
   hframe137->SetMinimum(0);
   hframe137->SetMaximum(83.22876);
   hframe137->SetDirectory(0);
   hframe137->SetStats(0);
   hframe137->SetLineStyle(0);
   hframe137->SetMarkerStyle(20);
   hframe137->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe137->GetXaxis()->SetNdivisions(506);
   hframe137->GetXaxis()->SetLabelFont(42);
   hframe137->GetXaxis()->SetLabelOffset(0.007);
   hframe137->GetXaxis()->SetLabelSize(0.05);
   hframe137->GetXaxis()->SetTitleSize(0.06);
   hframe137->GetXaxis()->SetTitleOffset(0.9);
   hframe137->GetXaxis()->SetTitleFont(42);
   hframe137->GetYaxis()->SetTitle("Events");
   hframe137->GetYaxis()->SetLabelFont(42);
   hframe137->GetYaxis()->SetLabelOffset(0.007);
   hframe137->GetYaxis()->SetLabelSize(0.05);
   hframe137->GetYaxis()->SetTitleSize(0.06);
   hframe137->GetYaxis()->SetTitleOffset(1.25);
   hframe137->GetYaxis()->SetTitleFont(42);
   hframe137->GetZaxis()->SetLabelFont(42);
   hframe137->GetZaxis()->SetLabelOffset(0.007);
   hframe137->GetZaxis()->SetLabelSize(0.05);
   hframe137->GetZaxis()->SetTitleSize(0.06);
   hframe137->GetZaxis()->SetTitleFont(42);
   hframe137->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt1");
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18","thsBackground_grouped_wh3l_wz_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->SetMinimum(-1.201776);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->SetMaximum(24.54777);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_18);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt1138 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt1138","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(2,-0.3489646);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(3,-0.2796651);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(4,0.9735862);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(5,3.531195);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(6,2.938618);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(7,1.048615);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(8,0.8508213);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(9,-0.2653982);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(10,0.6449567);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(11,-0.4170547);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(12,0.9323358);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(13,-0.456847);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(14,0.4543751);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(15,0.05072842);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(16,0.01006685);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(17,-0.01531979);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(18,-0.09765524);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(19,-0.03910978);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(20,0.5315078);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(22,0.5423007);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(23,-0.0005923419);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(24,-0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(25,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinContent(26,-0.05545776);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(2,0.315105);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(3,0.2549931);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(4,1.158255);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(5,1.32712);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(6,1.630732);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(7,1.184071);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(8,1.07714);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(9,0.6923605);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(10,0.5154798);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(11,0.7847211);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(12,0.6877299);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(13,0.2730627);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(14,0.3605465);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(15,0.1391782);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(16,0.01006685);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(17,0.09749799);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(18,0.05865269);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(19,0.03910978);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(20,0.5315078);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(22,0.4525668);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(23,0.0006709784);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(24,0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(25,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetBinError(26,0.1260339);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt1139 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt1139","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetBinContent(5,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetBinContent(7,0.03274813);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetBinContent(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetBinError(5,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetBinError(7,0.02329387);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetBinError(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1139->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_WW_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_pt1140 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_pt1140","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(4,0.002002066);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(5,0.007682777);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(6,0.01308837);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(7,0.01266062);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(8,0.01536988);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(9,0.0137903);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(10,0.01384414);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(11,0.01897896);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(12,0.007645389);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(13,0.005440951);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(14,0.005561739);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(15,0.004881202);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(16,0.004916396);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(17,0.004335847);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(18,0.004783724);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(19,0.001636313);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(20,0.00349091);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(21,0.003661982);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(22,0.0005959842);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(23,0.001137773);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(24,0.001876585);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(25,0.000642701);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinContent(26,0.01448202);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(4,0.001451254);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(5,0.002261763);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(6,0.002870553);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(7,0.002944346);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(8,0.003239945);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(9,0.003143504);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(10,0.002904344);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(11,0.00362764);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(12,0.002648452);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(13,0.001826611);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(14,0.002130506);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(15,0.002041078);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(16,0.001744689);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(17,0.001585126);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(18,0.001752268);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(19,0.0009707763);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(20,0.001783527);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(21,0.00147888);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(22,0.001111265);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(23,0.001135023);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(24,0.001091115);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(25,0.000642701);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetBinError(26,0.003288696);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1140->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_VVV_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt1141 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt1141","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(2,0.2278352);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(3,0.3331513);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(4,1.120393);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(5,1.44364);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(6,0.8188205);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(7,0.4854716);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(8,-0.0877768);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(9,0.3724096);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(11,0.09873042);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(13,0.0928583);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinContent(22,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(2,0.1611082);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(3,0.1932637);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(4,0.3818161);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(5,0.4293633);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(6,0.30352);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(7,0.2727073);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(8,0.08778597);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(9,0.1907857);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(11,0.07755791);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(13,0.0928583);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetBinError(22,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1141->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt1142 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt1142","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(2,0.03738894);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(3,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(4,0.2278859);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(5,0.6805468);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(6,1.382421);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(7,1.53576);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(8,1.150362);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(9,0.5058681);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(10,0.4793809);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(11,0.5172973);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(12,0.3442548);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(13,0.3007907);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(14,0.2413229);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(15,0.1804831);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(16,0.1251711);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(17,0.06716308);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(18,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(19,0.07810389);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(21,0.08883265);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(22,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(24,0.04165012);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinContent(26,0.2747282);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(2,0.03738894);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(3,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(4,0.09188353);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(5,0.1627782);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(6,0.2494999);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(7,0.2472893);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(8,0.2203293);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(9,0.1396682);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(10,0.1358972);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(11,0.1461087);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(12,0.1176317);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(13,0.115718);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(14,0.101574);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(15,0.09036411);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(16,0.07254019);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(17,0.05134657);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(18,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(19,0.05555928);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(21,0.06284459);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(22,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(24,0.04165012);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetBinError(26,0.1134961);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1142->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt1143 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt1143","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(2,0.1270015);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(3,1.357577);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(4,4.763544);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(5,12.35613);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(6,18.22588);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(7,16.31666);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(8,13.21128);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(9,10.22527);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(10,7.332018);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(11,5.646803);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(12,3.86748);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(13,3.00611);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(14,2.291371);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(15,1.55673);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(16,1.553401);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(17,1.19333);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(18,0.907995);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(19,0.7430604);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(20,0.6251487);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(21,0.5996937);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(22,0.4104109);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(23,0.3196645);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(24,0.2635427);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(25,0.2115952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinContent(26,1.525885);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(2,0.02640755);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(3,0.08484981);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(4,0.1608376);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(5,0.2585857);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(6,0.3150576);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(7,0.2978695);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(8,0.2676218);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(9,0.2376002);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(10,0.2002982);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(11,0.1749895);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(12,0.1441587);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(13,0.1269758);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(14,0.1118403);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(15,0.09108516);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(16,0.09189867);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(17,0.08042823);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(18,0.07070518);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(19,0.06390526);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(20,0.05774023);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(21,0.05764579);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(22,0.04719224);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(23,0.04169111);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(24,0.03728853);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(25,0.03399083);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetBinError(26,0.09081212);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1143->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt1,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Draw("hist same");
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
   0,
   0.0432611,
   1.419488,
   7.087411,
   18.03659,
   23.37882,
   19.43192,
   15.14006,
   10.85194,
   8.48113,
   5.864755,
   5.166032,
   2.948353,
   2.992631,
   1.792823,
   1.693555,
   1.249509,
   0.8582962,
   0.7836908,
   1.160147,
   0.6921883,
   1.080753,
   0.3202099,
   0.2490259,
   0.287927};
   Double_t _felx3035[25] = {
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
   Double_t _fely3035[25] = {
   0,
   0.5501105,
   0.5480697,
   1.636267,
   2.440218,
   2.653145,
   1.919498,
   1.452697,
   1.266295,
   0.8869783,
   1.193704,
   1.006192,
   0.6257305,
   0.5920361,
   0.2347661,
   0.1763114,
   0.2309119,
   0.1767328,
   0.1599913,
   0.6121629,
   0.1219949,
   0.6485469,
   0.04349751,
   0.1391719,
   0.1126351};
   Double_t _fehx3035[25] = {
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
   Double_t _fehy3035[25] = {
   0,
   0.5501105,
   0.5480698,
   1.818226,
   2.440217,
   2.653145,
   2.053188,
   1.675915,
   0.8407225,
   0.8869781,
   0.8290138,
   1.006192,
   0.6257308,
   0.5920361,
   0.3230661,
   0.1763113,
   0.1487636,
   0.1767328,
   0.1599914,
   0.6121628,
   0.1219948,
   0.6490454,
   0.04341886,
   0.1391719,
   0.1126352};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,219);
   Graph_Graph3035->SetMinimum(-3.160731);
   Graph_Graph3035->SetMaximum(28.68585);
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
   Double_t _fy3036[25] = {
   0,
   2,
   3,
   10,
   18,
   28,
   25,
   19,
   14,
   10,
   8,
   8,
   5,
   4,
   2,
   0,
   2,
   3,
   1,
   0,
   0,
   0,
   0,
   1,
   0};
   Double_t _felx3036[25] = {
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
   Double_t _fely3036[25] = {
   0,
   1.29183,
   1.632727,
   3.108748,
   4.202964,
   5.259811,
   4.966428,
   4.320299,
   3.696567,
   3.108748,
   2.768432,
   2.768432,
   2.159724,
   1.914367,
   1.29183,
   0,
   1.29183,
   1.632727,
   0.8272524,
   0,
   0,
   0,
   0,
   0.8272524,
   0};
   Double_t _fehx3036[25] = {
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
   Double_t _fehy3036[25] = {
   1.147908,
   2.63791,
   2.918242,
   4.267035,
   5.321116,
   6.354577,
   6.066714,
   5.435307,
   4.830479,
   4.267035,
   3.94522,
   3.94522,
   3.382539,
   3.162815,
   2.63791,
   1.147908,
   2.63791,
   2.918242,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,219);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(37.79003);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy144 = new TH1F("hframe_copy144","",1000,10,200);
   hframe_copy144->SetMinimum(0);
   hframe_copy144->SetMaximum(83.22876);
   hframe_copy144->SetDirectory(0);
   hframe_copy144->SetStats(0);
   hframe_copy144->SetLineStyle(0);
   hframe_copy144->SetMarkerStyle(20);
   hframe_copy144->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy144->GetXaxis()->SetNdivisions(506);
   hframe_copy144->GetXaxis()->SetLabelFont(42);
   hframe_copy144->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetXaxis()->SetLabelSize(0.05);
   hframe_copy144->GetXaxis()->SetTitleSize(0.06);
   hframe_copy144->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy144->GetXaxis()->SetTitleFont(42);
   hframe_copy144->GetYaxis()->SetTitle("Events");
   hframe_copy144->GetYaxis()->SetLabelFont(42);
   hframe_copy144->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetYaxis()->SetLabelSize(0.05);
   hframe_copy144->GetYaxis()->SetTitleSize(0.06);
   hframe_copy144->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy144->GetYaxis()->SetTitleFont(42);
   hframe_copy144->GetZaxis()->SetLabelFont(42);
   hframe_copy144->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetZaxis()->SetLabelSize(0.05);
   hframe_copy144->GetZaxis()->SetTitleSize(0.06);
   hframe_copy144->GetZaxis()->SetTitleFont(42);
   hframe_copy144->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt1->Modified();
   ccwh3l_wz_13TeV_pt1->cd();
   ccwh3l_wz_13TeV_pt1->SetSelected(ccwh3l_wz_13TeV_pt1);
}
