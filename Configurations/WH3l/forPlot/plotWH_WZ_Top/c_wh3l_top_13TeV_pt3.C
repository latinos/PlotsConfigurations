void c_wh3l_top_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt3/cc
//=========  (Sat Jul  2 20:54:41 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt3 = new TCanvas("ccwh3l_top_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt3->Range(-28,-7.84696,209.5,52.51427);
   ccwh3l_top_13TeV_pt3->SetFillColor(0);
   ccwh3l_top_13TeV_pt3->SetBorderMode(0);
   ccwh3l_top_13TeV_pt3->SetBorderSize(2);
   ccwh3l_top_13TeV_pt3->SetTickx(1);
   ccwh3l_top_13TeV_pt3->SetTicky(1);
   ccwh3l_top_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_top_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_top_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe231 = new TH1F("hframe231","",1000,10,200);
   hframe231->SetMinimum(0);
   hframe231->SetMaximum(49.49621);
   hframe231->SetDirectory(0);
   hframe231->SetStats(0);
   hframe231->SetLineStyle(0);
   hframe231->SetMarkerStyle(20);
   hframe231->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe231->GetXaxis()->SetNdivisions(506);
   hframe231->GetXaxis()->SetLabelFont(42);
   hframe231->GetXaxis()->SetLabelOffset(0.007);
   hframe231->GetXaxis()->SetLabelSize(0.05);
   hframe231->GetXaxis()->SetTitleSize(0.06);
   hframe231->GetXaxis()->SetTitleOffset(0.9);
   hframe231->GetXaxis()->SetTitleFont(42);
   hframe231->GetYaxis()->SetTitle("Events");
   hframe231->GetYaxis()->SetLabelFont(42);
   hframe231->GetYaxis()->SetLabelOffset(0.007);
   hframe231->GetYaxis()->SetLabelSize(0.05);
   hframe231->GetYaxis()->SetTitleSize(0.06);
   hframe231->GetYaxis()->SetTitleOffset(1.25);
   hframe231->GetYaxis()->SetTitleFont(42);
   hframe231->GetZaxis()->SetLabelFont(42);
   hframe231->GetZaxis()->SetLabelOffset(0.007);
   hframe231->GetZaxis()->SetLabelSize(0.05);
   hframe231->GetZaxis()->SetTitleSize(0.06);
   hframe231->GetZaxis()->SetTitleFont(42);
   hframe231->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetName("thsBackground_grouped_wh3l_top_13TeV_pt3");
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47","thsBackground_grouped_wh3l_top_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->SetMinimum(-0.001125552);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->SetMaximum(20.78841);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt3_stack_47);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt3232 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt3232","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(1,15.95121);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(2,10.34355);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(3,5.806077);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(4,2.489194);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(5,2.158827);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(6,0.2524378);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(7,0.4327143);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(8,0.1398843);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(9,0.1204989);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinContent(11,-0.0005627758);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(1,3.338492);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(2,2.19865);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(3,1.444153);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(4,0.9053486);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(5,0.9112522);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(6,0.1703183);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(7,0.3302037);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(8,0.09891325);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(9,0.1116071);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetBinError(11,0.0005627758);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Fake_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt3233 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt3233","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinContent(1,0.04837169);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinContent(2,0.04225316);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinContent(3,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinContent(4,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinContent(6,0.03094249);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinContent(10,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinError(1,0.02798749);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinError(2,0.02711724);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinError(3,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinError(4,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinError(6,0.02191288);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetBinError(10,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt3233->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3233->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_WW_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_pt3234 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_pt3234","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(1,0.1228158);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(2,0.1016368);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(3,0.1156176);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(4,0.06448371);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(5,0.0371438);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(6,0.03364853);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(7,0.01865115);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(8,0.01928328);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(9,0.01705771);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(10,0.01742176);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(11,0.002668086);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(12,0.004685718);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(13,0.003793071);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(16,0.002856365);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(17,0.003935523);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(20,0.004294365);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(22,0.002202303);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinContent(26,0.002463978);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(1,0.01808439);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(2,0.01625376);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(3,0.01672829);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(4,0.01249293);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(5,0.01107932);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(6,0.008522839);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(7,0.006286547);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(8,0.006510312);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(9,0.005967635);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(10,0.00663519);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(11,0.003627239);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(12,0.003341053);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(13,0.002685967);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(16,0.002650194);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(17,0.002841848);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(20,0.003154061);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(22,0.002202303);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetBinError(26,0.002463978);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetEntries(364);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_VVV_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt3235 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt3235","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetBinContent(1,0.4194991);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetBinContent(2,0.513647);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetBinContent(3,0.2704035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetBinContent(4,0.1890666);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetBinError(1,0.2731996);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetBinError(2,0.2924339);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetBinError(3,0.1603084);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetBinError(4,0.1395142);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Vg_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt3236 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt3236","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinContent(1,0.2363288);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinContent(2,0.1989121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinContent(3,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinContent(4,0.06811262);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinContent(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinContent(6,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinContent(7,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinError(1,0.1010908);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinError(2,0.08829485);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinError(3,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinError(4,0.0518654);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinError(5,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinError(6,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetBinError(7,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt3237 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt3237","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(1,2.894309);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(2,2.244203);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(3,1.173787);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(4,0.7524463);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(5,0.533813);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(6,0.3810766);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(7,0.2439615);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(8,0.1559586);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(9,0.1622816);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(10,0.1031013);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(11,0.0325759);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(12,0.02302998);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(13,0.01823155);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(14,0.02692964);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(15,0.01672299);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(16,0.005440074);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(17,0.01840165);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(18,0.02188066);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(20,0.01206978);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(21,0.01275589);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(22,0.01616409);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(23,0.002622175);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(24,0.01094147);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinContent(26,0.005160205);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(1,0.1249508);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(2,0.1113093);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(3,0.07976509);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(4,0.06412046);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(5,0.05398213);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(6,0.04512803);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(7,0.03647647);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(8,0.02877692);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(9,0.03024472);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(10,0.0235505);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(11,0.01284786);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(12,0.0104282);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(13,0.009400622);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(14,0.01175727);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(15,0.009691197);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(16,0.005440074);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(17,0.01066006);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(18,0.01102857);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(20,0.007282232);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(21,0.008338528);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(22,0.009373455);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(23,0.002622175);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(24,0.007033752);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetBinError(26,0.005160205);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_WZ_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt3238 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt3238","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(1,0.1259512);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(2,0.1230801);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(3,0.06024414);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(4,0.03433782);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(5,0.03023529);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(6,0.01051078);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(7,0.007262442);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(8,0.00300884);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(9,0.006393814);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(10,0.002244693);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(11,0.000372382);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(12,0.002323116);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinContent(15,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(1,0.01154878);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(2,0.01123488);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(3,0.007510885);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(4,0.00546075);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(5,0.005687157);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(6,0.002966632);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(7,0.002424546);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(8,0.001831377);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(9,0.002584768);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(10,0.000974354);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(11,0.000372382);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(12,0.001755245);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetBinError(15,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt3,"");
   thsBackground_grouped_wh3l_top_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_pt3->SetName("thsSignal_grouped_wh3l_top_13TeV_pt3");
   thsSignal_grouped_wh3l_top_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_top_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48","thsSignal_grouped_wh3l_top_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->SetMaximum(0.144375);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_pt3_stack_48);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt3239 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt3239","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(1,0.1259512);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(2,0.1230801);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(3,0.06024414);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(4,0.03433782);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(5,0.03023529);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(6,0.01051078);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(7,0.007262442);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(8,0.00300884);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(9,0.006393814);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(10,0.002244693);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(11,0.000372382);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(12,0.002323116);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinContent(15,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(1,0.01154878);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(2,0.01123488);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(3,0.007510885);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(4,0.00546075);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(5,0.005687157);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(6,0.002966632);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(7,0.002424546);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(8,0.001831377);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(9,0.002584768);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(10,0.000974354);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(11,0.000372382);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(12,0.001755245);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetBinError(15,4.946767e-07);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt3239->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt3,"");
   thsSignal_grouped_wh3l_top_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3047[25] = {
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
   Double_t _fy3047[25] = {
   19.67253,
   13.4442,
   7.428834,
   3.579254,
   2.773111,
   0.7443521,
   0.7373713,
   0.3151262,
   0.2998382,
   0.1335756,
   0.03468121,
   0.02771569,
   0.02202462,
   0.02692964,
   0.01672298,
   0.008296438,
   0.02233718,
   0.02188066,
   0,
   0.01636415,
   0.01275589,
   0.01836639,
   0.002622175,
   0.01094147,
   0};
   Double_t _felx3047[25] = {
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
   Double_t _fely3047[25] = {
   6.806285,
   4.538496,
   2.693433,
   1.475712,
   1.269696,
   0.3070098,
   0.44228,
   0.1441511,
   0.1546033,
   0.04688831,
   0.01632101,
   0.01462929,
   0.01273631,
   0.0118625,
   0.009694977,
   0.008591594,
   0.01408861,
   0.01109594,
   0,
   0.01129511,
   0.008379256,
   0.01179163,
   0.002631922,
   0.007042187,
   0};
   Double_t _fehx3047[25] = {
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
   Double_t _fehy3047[25] = {
   6.805971,
   4.538593,
   2.693357,
   1.475701,
   1.269688,
   0.3069619,
   0.4422061,
   0.1441108,
   0.1545636,
   0.04676616,
   0.01725639,
   0.01457453,
   0.01272271,
   0.01185182,
   0.009695485,
   0.008591457,
   0.014081,
   0.01109863,
   0,
   0.01128925,
   0.00837221,
   0.01179108,
   0.002632007,
   0.007040171,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,219);
   Graph_Graph3047->SetMinimum(-2.648175);
   Graph_Graph3047->SetMaximum(29.12638);
   Graph_Graph3047->SetDirectory(0);
   Graph_Graph3047->SetStats(0);
   Graph_Graph3047->SetLineStyle(0);
   Graph_Graph3047->SetMarkerStyle(20);
   Graph_Graph3047->GetXaxis()->SetLabelFont(42);
   Graph_Graph3047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3047->GetXaxis()->SetTitleFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3047->GetYaxis()->SetTitleFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3047);
   
   grae->Draw("2");
   
   Double_t _fx3048[25] = {
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
   Double_t _fy3048[25] = {
   14,
   11,
   5,
   2,
   4,
   3,
   1,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3048[25] = {
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
   Double_t _fely3048[25] = {
   3.696567,
   3.265636,
   2.159724,
   1.29183,
   1.914367,
   1.632727,
   0.8272524,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3048[25] = {
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
   Double_t _fehy3048[25] = {
   4.830479,
   4.416609,
   3.382539,
   2.63791,
   3.162815,
   2.918242,
   2.29957,
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,219);
   Graph_Graph3048->SetMinimum(0);
   Graph_Graph3048->SetMaximum(20.71353);
   Graph_Graph3048->SetDirectory(0);
   Graph_Graph3048->SetStats(0);
   Graph_Graph3048->SetLineStyle(0);
   Graph_Graph3048->SetMarkerStyle(20);
   Graph_Graph3048->GetXaxis()->SetLabelFont(42);
   Graph_Graph3048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3048->GetXaxis()->SetTitleFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3048->GetYaxis()->SetTitleFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3048);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy240 = new TH1F("hframe_copy240","",1000,10,200);
   hframe_copy240->SetMinimum(0);
   hframe_copy240->SetMaximum(49.49621);
   hframe_copy240->SetDirectory(0);
   hframe_copy240->SetStats(0);
   hframe_copy240->SetLineStyle(0);
   hframe_copy240->SetMarkerStyle(20);
   hframe_copy240->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy240->GetXaxis()->SetNdivisions(506);
   hframe_copy240->GetXaxis()->SetLabelFont(42);
   hframe_copy240->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetXaxis()->SetLabelSize(0.05);
   hframe_copy240->GetXaxis()->SetTitleSize(0.06);
   hframe_copy240->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy240->GetXaxis()->SetTitleFont(42);
   hframe_copy240->GetYaxis()->SetTitle("Events");
   hframe_copy240->GetYaxis()->SetLabelFont(42);
   hframe_copy240->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetYaxis()->SetLabelSize(0.05);
   hframe_copy240->GetYaxis()->SetTitleSize(0.06);
   hframe_copy240->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy240->GetYaxis()->SetTitleFont(42);
   hframe_copy240->GetZaxis()->SetLabelFont(42);
   hframe_copy240->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetZaxis()->SetLabelSize(0.05);
   hframe_copy240->GetZaxis()->SetTitleSize(0.06);
   hframe_copy240->GetZaxis()->SetTitleFont(42);
   hframe_copy240->Draw("sameaxis");
   ccwh3l_top_13TeV_pt3->Modified();
   ccwh3l_top_13TeV_pt3->cd();
   ccwh3l_top_13TeV_pt3->SetSelected(ccwh3l_top_13TeV_pt3);
}
