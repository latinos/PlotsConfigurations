void c_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 01:22:12 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Range(-28,-0.7926829,209.5,5.304878);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe431 = new TH1F("hframe431","",1000,10,200);
   hframe431->SetMinimum(0);
   hframe431->SetMaximum(5);
   hframe431->SetDirectory(0);
   hframe431->SetStats(0);
   hframe431->SetLineStyle(0);
   hframe431->SetMarkerStyle(20);
   hframe431->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe431->GetXaxis()->SetNdivisions(506);
   hframe431->GetXaxis()->SetLabelFont(42);
   hframe431->GetXaxis()->SetLabelOffset(0.007);
   hframe431->GetXaxis()->SetLabelSize(0.05);
   hframe431->GetXaxis()->SetTitleSize(0.06);
   hframe431->GetXaxis()->SetTitleOffset(0.9);
   hframe431->GetXaxis()->SetTitleFont(42);
   hframe431->GetYaxis()->SetTitle("Events");
   hframe431->GetYaxis()->SetLabelFont(42);
   hframe431->GetYaxis()->SetLabelOffset(0.007);
   hframe431->GetYaxis()->SetLabelSize(0.05);
   hframe431->GetYaxis()->SetTitleSize(0.06);
   hframe431->GetYaxis()->SetTitleOffset(1.25);
   hframe431->GetYaxis()->SetTitleFont(42);
   hframe431->GetZaxis()->SetLabelFont(42);
   hframe431->GetZaxis()->SetLabelOffset(0.007);
   hframe431->GetZaxis()->SetLabelSize(0.05);
   hframe431->GetZaxis()->SetTitleSize(0.06);
   hframe431->GetZaxis()->SetTitleFont(42);
   hframe431->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetMinimum(-0.2146851);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetMaximum(1.691718);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_87);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(1,-0.07907178);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(2,-0.1063105);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(3,0.5387493);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(4,0.4633326);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(5,1.088571);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(6,0.7652338);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(7,-0.02201848);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(8,-0.1109757);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(9,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinContent(21,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(1,0.07907178);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(2,0.0795514);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(3,0.7023943);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(4,0.5170052);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(5,0.5225895);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(6,0.7998523);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(7,0.1199198);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(8,0.1037094);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(9,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetBinError(21,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l432->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinContent(8,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinContent(16,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinError(8,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetBinError(16,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l433->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(1,0.003257359);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(2,-0.0005118895);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(3,0.009251484);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(4,0.01926083);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(5,0.02317249);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(6,0.009798292);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(7,0.01066987);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(8,0.009052425);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(9,0.01230636);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(10,0.00828309);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(11,0.002098049);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(12,0.004036967);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(13,0.002655198);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(15,0.0004927442);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(16,0.002389047);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(17,0.004824177);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(20,0.004777247);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinContent(21,0.004128546);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(1,0.002402015);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(2,0.005281671);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(3,0.004303755);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(4,0.006286927);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(5,0.007348634);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(6,0.004935441);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(7,0.004650582);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(8,0.004590892);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(9,0.007693046);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(10,0.005117151);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(11,0.004495936);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(12,0.002915846);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(13,0.002160134);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(15,0.0004927442);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(16,0.002389047);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(17,0.003414423);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(20,0.003387675);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetBinError(21,0.002926082);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l434->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinContent(2,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetBinError(2,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l435->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinContent(3,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetBinError(3,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l436->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(1,0.01853837);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(2,0.0417047);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(3,0.1429881);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(4,0.188531);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(5,0.1103692);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(6,0.05018871);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(7,0.03372228);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(8,0.01825283);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(9,0.01836765);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(11,0.004608996);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(12,0.005622958);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(13,0.006261697);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(15,0.01062165);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(16,0.003729804);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinContent(21,0.01100077);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(1,0.009526513);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(2,0.01477391);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(3,0.02788436);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(4,0.03306691);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(5,0.02301822);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(6,0.01568207);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(7,0.01390479);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(8,0.009707654);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(9,0.009603792);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(11,0.004608996);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(12,0.005622958);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(13,0.006261697);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(15,0.007524439);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(16,0.003729804);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetBinError(21,0.007845909);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l437->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(1,0.02790645);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(2,0.0525289);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(3,0.04821619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(4,0.05020717);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(5,0.04843984);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(6,0.02897656);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(7,0.01875275);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(8,0.005147506);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(9,0.003059901);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinContent(10,0.0003164354);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(1,0.006249941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(2,0.008418096);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(3,0.007427463);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(4,0.007137659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(5,0.006783433);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(6,0.004878336);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(7,0.004407582);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(8,0.001690661);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(9,0.00126864);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetBinError(10,0.0003164354);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l438->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetMaximum(0.06399435);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_88);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(1,0.02790645);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(2,0.0525289);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(3,0.04821619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(4,0.05020717);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(5,0.04843984);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(6,0.02897656);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(7,0.01875275);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(8,0.005147506);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(9,0.003059901);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinContent(10,0.0003164354);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(1,0.006249941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(2,0.008418096);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(3,0.007427463);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(4,0.007137659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(5,0.006783433);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(6,0.004878336);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(7,0.004407582);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(8,0.001690661);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(9,0.00126864);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetBinError(10,0.0003164354);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l439->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3087[20] = {
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
   Double_t _fy3087[20] = {
   -0.05727605,
   -0.01284486,
   0.7849634,
   0.6711245,
   1.222112,
   0.8252208,
   0.02237368,
   -0.07327909,
   0.3957899,
   0.00828309,
   0.006707045,
   0.009659925,
   0.008916896,
   0,
   0.01111439,
   0.02320396,
   0.004824177,
   0,
   0,
   0.004777247};
   Double_t _felx3087[20] = {
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
   Double_t _fely3087[20] = {
   0.09517533,
   0.1565284,
   0.6696212,
   0.5285627,
   0.6719178,
   0.8302976,
   0.1391018,
   0.1344534,
   0.4033877,
   0.00974039,
   0.007036953,
   0.009447105,
   0.008831197,
   0,
   0.008035081,
   0.02333648,
   0.005912379,
   0,
   0,
   0.00585841};
   Double_t _fehx3087[20] = {
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
   Double_t _fehy3087[20] = {
   0.09517311,
   0.1518405,
   0.8278951,
   0.5798422,
   0.6719167,
   0.8631349,
   0.04266282,
   0.1344531,
   0.4033874,
   0.009740439,
   0.009347368,
   0.009447148,
   0.008831193,
   0,
   0.008035208,
   0.0233352,
   0.005912035,
   0,
   0,
   0.005858449};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3087,_fy3087,_felx3087,_fehx3087,_fely3087,_fehy3087);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3087 = new TH1F("Graph_Graph3087","",100,0,219);
   Graph_Graph3087->SetMinimum(-0.4179087);
   Graph_Graph3087->SetMaximum(2.104205);
   Graph_Graph3087->SetDirectory(0);
   Graph_Graph3087->SetStats(0);
   Graph_Graph3087->SetLineStyle(0);
   Graph_Graph3087->SetMarkerStyle(20);
   Graph_Graph3087->GetXaxis()->SetLabelFont(42);
   Graph_Graph3087->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3087->GetXaxis()->SetTitleFont(42);
   Graph_Graph3087->GetYaxis()->SetLabelFont(42);
   Graph_Graph3087->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3087->GetYaxis()->SetTitleFont(42);
   Graph_Graph3087->GetZaxis()->SetLabelFont(42);
   Graph_Graph3087->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3087);
   
   grae->Draw("2");
   
   Double_t _fx3088[20] = {
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
   Double_t _fy3088[20] = {
   1,
   1,
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
   0,
   0,
   0,
   0};
   Double_t _felx3088[20] = {
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
   Double_t _fely3088[20] = {
   0.8272524,
   0.8272524,
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
   0,
   0,
   0,
   0};
   Double_t _fehx3088[20] = {
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
   Double_t _fehy3088[20] = {
   2.29957,
   2.29957,
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
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3088,_fy3088,_felx3088,_fehx3088,_fely3088,_fehy3088);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3088 = new TH1F("Graph_Graph3088","",100,0,219);
   Graph_Graph3088->SetMinimum(0);
   Graph_Graph3088->SetMaximum(3.629527);
   Graph_Graph3088->SetDirectory(0);
   Graph_Graph3088->SetStats(0);
   Graph_Graph3088->SetLineStyle(0);
   Graph_Graph3088->SetMarkerStyle(20);
   Graph_Graph3088->GetXaxis()->SetLabelFont(42);
   Graph_Graph3088->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3088->GetXaxis()->SetTitleFont(42);
   Graph_Graph3088->GetYaxis()->SetLabelFont(42);
   Graph_Graph3088->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3088->GetYaxis()->SetTitleFont(42);
   Graph_Graph3088->GetZaxis()->SetLabelFont(42);
   Graph_Graph3088->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3088);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy440 = new TH1F("hframe_copy440","",1000,10,200);
   hframe_copy440->SetMinimum(0);
   hframe_copy440->SetMaximum(5);
   hframe_copy440->SetDirectory(0);
   hframe_copy440->SetStats(0);
   hframe_copy440->SetLineStyle(0);
   hframe_copy440->SetMarkerStyle(20);
   hframe_copy440->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy440->GetXaxis()->SetNdivisions(506);
   hframe_copy440->GetXaxis()->SetLabelFont(42);
   hframe_copy440->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetXaxis()->SetLabelSize(0.05);
   hframe_copy440->GetXaxis()->SetTitleSize(0.06);
   hframe_copy440->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy440->GetXaxis()->SetTitleFont(42);
   hframe_copy440->GetYaxis()->SetTitle("Events");
   hframe_copy440->GetYaxis()->SetLabelFont(42);
   hframe_copy440->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetYaxis()->SetLabelSize(0.05);
   hframe_copy440->GetYaxis()->SetTitleSize(0.06);
   hframe_copy440->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy440->GetYaxis()->SetTitleFont(42);
   hframe_copy440->GetZaxis()->SetLabelFont(42);
   hframe_copy440->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetZaxis()->SetLabelSize(0.05);
   hframe_copy440->GetZaxis()->SetTitleSize(0.06);
   hframe_copy440->GetZaxis()->SetTitleFont(42);
   hframe_copy440->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l);
}
