void c_wh3l_Pre_SSSF_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_Pre_SSSF_13TeV_pt1/cc
//=========  (Sun Jul  3 16:48:34 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_SSSF_13TeV_pt1 = new TCanvas("ccwh3l_Pre_SSSF_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_Pre_SSSF_13TeV_pt1->Range(-16,-1.500937,209,10.04473);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetFillColor(0);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetBorderSize(2);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetTickx(1);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetTicky(1);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe191 = new TH1F("hframe191","",1000,20,200);
   hframe191->SetMinimum(0);
   hframe191->SetMaximum(9.467448);
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
   
   THStack *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->SetName("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39 = new TH1F("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39","thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1",25,20,200);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->SetMinimum(-0.5419114);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->SetMaximum(5.199687);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->SetStats(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_39);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192 = new TH1D("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192","histo_Fake",25,20,200);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(1,0.5427846);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(2,2.181082);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(3,0.5401615);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(4,3.233375);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(5,1.789062);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(6,1.217623);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(7,3.617787);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(8,2.979264);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(9,1.424424);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(10,0.3888369);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(11,0.3303431);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(12,0.8495907);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(13,0.153338);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(14,1.53235);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(15,0.0689685);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(16,0.05856164);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(17,0.3181639);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(18,-0.006113645);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(20,0.03422724);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(22,6.571058e-05);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(23,-0.005115197);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(24,0.2256032);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinContent(26,0.5510045);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(1,0.4620525);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(2,1.116615);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(3,0.8648397);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(4,1.30197);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(5,0.7984952);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(6,0.6771127);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(7,1.334296);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(8,1.193835);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(9,0.723566);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(10,0.1961349);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(11,0.3229862);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(12,0.5217441);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(13,0.1094584);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(14,0.7942021);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(15,0.1058915);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(16,0.2741064);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(17,0.2258002);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(18,0.005580805);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(20,0.03799332);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(22,6.571058e-05);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(23,0.005115197);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(24,0.184343);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetBinError(26,0.4498633);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->Add(new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193 = new TH1D("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193","histo_WW",25,20,200);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(3,0.01528641);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(4,0.01708511);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(5,0.007480974);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(6,0.0433031);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(7,0.0175301);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(9,0.03255226);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(11,0.01433758);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinContent(26,0.03179296);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(3,0.01528641);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(4,0.01708511);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(5,0.005383744);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(6,0.02549669);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(7,0.0175301);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(9,0.02302658);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(11,0.01433758);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetBinError(26,0.02248916);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->Add(new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194 = new TH1D("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194","histo_VVV",25,20,200);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(2,0.01301447);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(3,0.01748499);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(4,0.03251775);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(5,0.01690304);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(6,0.01388018);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(7,0.03175143);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(8,0.03079197);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(9,0.01815328);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(10,0.01022873);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(11,0.01909512);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(12,0.01023032);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(13,0.02232795);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(14,0.01132156);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(15,0.003823852);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(16,0.02148591);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(17,0.01014587);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(18,0.00778673);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(19,0.003612558);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(20,0.007878512);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(22,0.007798111);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(23,0.002177031);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(24,0.004641064);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(25,0.008998674);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinContent(26,0.04202677);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(2,0.005547846);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(3,0.006460056);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(4,0.008860061);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(5,0.00703684);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(6,0.008354166);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(7,0.008046086);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(8,0.008364961);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(9,0.007929908);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(10,0.005966264);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(11,0.006803582);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(12,0.006799656);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(13,0.007181261);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(14,0.005053955);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(15,0.002527819);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(16,0.007925406);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(17,0.007144383);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(18,0.004473916);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(19,0.004738261);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(20,0.004111224);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(22,0.004146286);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(23,0.001744138);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(24,0.002611001);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(25,0.004534308);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetBinError(26,0.009445708);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->Add(new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195 = new TH1D("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195","histo_Vg",25,20,200);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinContent(1,0.06700106);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinContent(2,0.1853448);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinContent(4,-0.3431277);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinContent(5,0.0522728);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinContent(6,0.122739);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinContent(9,0.1156486);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinError(1,0.05530427);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinError(2,0.1336543);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinError(4,0.1987837);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinError(5,0.0522728);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinError(6,0.122739);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetBinError(9,0.1156486);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->Add(new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196 = new TH1D("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196","histo_ZZ",25,20,200);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetBinContent(3,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetBinContent(6,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetBinContent(26,0.08282476);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetBinError(3,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetBinError(6,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetBinError(26,0.05923458);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197 = new TH1D("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197","histo_WZ",25,20,200);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(1,0.06554714);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(2,0.1470661);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(3,0.1982072);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(4,0.1616415);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(5,0.1570712);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(6,0.1164288);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(7,0.07839136);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(8,0.08076879);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(9,0.07828584);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(10,0.04121951);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(11,0.04089495);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(12,0.07536444);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(13,0.01305851);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(14,0.0189445);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(15,0.02157131);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(16,0.01454274);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(17,0.0293344);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(18,0.01538141);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(19,0.01525502);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(20,0.005727727);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(21,0.0121873);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(22,0.01215005);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(23,0.01618615);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(25,0.001250725);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinContent(26,0.07854496);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(1,0.01912997);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(2,0.02762051);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(3,0.03299644);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(4,0.0289187);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(5,0.02916977);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(6,0.02571326);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(7,0.02111314);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(8,0.0213477);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(9,0.01969411);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(10,0.01432464);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(11,0.0152223);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(12,0.02109737);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(13,0.009234679);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(14,0.01034323);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(15,0.01029915);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(16,0.00892355);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(17,0.01312833);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(18,0.009361506);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(19,0.009015219);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(20,0.005727727);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(21,0.00862591);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(22,0.008631317);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(23,0.009398223);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(25,0.001250725);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetBinError(26,0.02135546);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->Add(new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(1,0.005286052);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(2,0.03378092);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(3,0.0521689);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(4,0.04457689);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(5,0.05176182);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(6,0.05580642);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(7,0.0415187);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(8,0.03261059);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(9,0.02750957);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(10,0.02399265);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(11,0.02014672);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(12,0.01391468);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(13,0.01678268);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(14,0.01518645);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(15,0.007226986);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(16,0.01483687);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(17,0.01021581);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(18,0.007637815);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(19,0.004550642);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(20,0.003242848);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(21,0.002826102);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(22,0.0009038033);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(23,0.0008078342);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(24,0.0006149967);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinContent(26,0.008438562);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(1,0.001418137);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(2,0.005802133);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(3,0.00762519);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(4,0.006297326);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(5,0.007269928);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(6,0.007520496);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(7,0.006968401);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(8,0.006292849);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(9,0.006170648);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(10,0.005898);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(11,0.004157909);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(12,0.003756868);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(13,0.004056111);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(14,0.003789351);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(15,0.002476724);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(16,0.004470097);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(17,0.003332413);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(18,0.003425441);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(19,0.002271976);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(20,0.001139663);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(21,0.001405338);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(22,0.0004633622);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(23,0.0005731224);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(24,0.000434881);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetBinError(26,0.002088449);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1,"");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1->SetName("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40 = new TH1F("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40","thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1",25,20,200);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->SetMaximum(0.06649327);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->SetStats(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1_stack_40);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(1,0.005286052);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(2,0.03378092);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(3,0.0521689);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(4,0.04457689);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(5,0.05176182);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(6,0.05580642);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(7,0.0415187);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(8,0.03261059);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(9,0.02750957);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(10,0.02399265);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(11,0.02014672);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(12,0.01391468);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(13,0.01678268);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(14,0.01518645);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(15,0.007226986);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(16,0.01483687);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(17,0.01021581);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(18,0.007637815);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(19,0.004550642);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(20,0.003242848);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(21,0.002826102);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(22,0.0009038033);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(23,0.0008078342);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(24,0.0006149967);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinContent(26,0.008438562);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(1,0.001418137);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(2,0.005802133);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(3,0.00762519);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(4,0.006297326);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(5,0.007269928);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(6,0.007520496);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(7,0.006968401);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(8,0.006292849);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(9,0.006170648);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(10,0.005898);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(11,0.004157909);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(12,0.003756868);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(13,0.004056111);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(14,0.003789351);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(15,0.002476724);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(16,0.004470097);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(17,0.003332413);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(18,0.003425441);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(19,0.002271976);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(20,0.001139663);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(21,0.001405338);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(22,0.0004633622);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(23,0.0005731224);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(24,0.000434881);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetBinError(26,0.002088449);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1,"");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt1->Draw("hist same noclear");
   
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
   0.6753328,
   2.542631,
   0.8109834,
   3.101492,
   2.02279,
   1.556687,
   3.74546,
   3.090824,
   1.669064,
   0.4402851,
   0.4046707,
   0.9351854,
   0.1887245,
   1.562616,
   0.09436367,
   0.0945903,
   0.3576442,
   0.0170545,
   0.01886758,
   0.04783348,
   0.0121873,
   0.02001388,
   0.01324799,
   0.2302443,
   0.1447633};
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
   0.5691596,
   1.507366,
   0.6625922,
   1.924015,
   1.090289,
   0.9978585,
   1.87387,
   1.607884,
   1.020205,
   0.2558675,
   0.3779309,
   0.6250091,
   0.1386621,
   0.971191,
   0.08534042,
   0.08106977,
   0.2702626,
   0.02104207,
   0.01315682,
   0.04634278,
   0.008632326,
   0.01464586,
   0.01650625,
   0.2029832,
   0.1482587};
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
   0.5691575,
   1.507366,
   0.9780668,
   1.924016,
   1.090278,
   0.997856,
   1.87387,
   1.607882,
   1.020201,
   0.2558652,
   0.377924,
   0.6250072,
   0.1386604,
   0.9711875,
   0.1211872,
   0.2924697,
   0.2702619,
   0.02103705,
   0.01423558,
   0.04993657,
   0.008629647,
   0.0146284,
   0.016503,
   0.2029832,
   0.1482639};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,2.000001,218);
   Graph_Graph3039->SetMinimum(-0.5663194);
   Graph_Graph3039->SetMaximum(6.181662);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_pt1","Data","EPL");
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
   hframe_copy200->SetMaximum(9.467448);
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
   ccwh3l_Pre_SSSF_13TeV_pt1->Modified();
   ccwh3l_Pre_SSSF_13TeV_pt1->cd();
   ccwh3l_Pre_SSSF_13TeV_pt1->SetSelected(ccwh3l_Pre_SSSF_13TeV_pt1);
}
