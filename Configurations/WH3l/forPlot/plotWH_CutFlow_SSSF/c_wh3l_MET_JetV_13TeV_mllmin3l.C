void c_wh3l_MET_JetV_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 01:21:47 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_JetV_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_mllmin3l->Range(-28,-0.7926829,209.5,5.304878);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe41 = new TH1F("hframe41","",1000,10,200);
   hframe41->SetMinimum(0);
   hframe41->SetMaximum(5);
   hframe41->SetDirectory(0);
   hframe41->SetStats(0);
   hframe41->SetLineStyle(0);
   hframe41->SetMarkerStyle(20);
   hframe41->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe41->GetXaxis()->SetNdivisions(506);
   hframe41->GetXaxis()->SetLabelFont(42);
   hframe41->GetXaxis()->SetLabelOffset(0.007);
   hframe41->GetXaxis()->SetLabelSize(0.05);
   hframe41->GetXaxis()->SetTitleSize(0.06);
   hframe41->GetXaxis()->SetTitleOffset(0.9);
   hframe41->GetXaxis()->SetTitleFont(42);
   hframe41->GetYaxis()->SetTitle("Events");
   hframe41->GetYaxis()->SetLabelFont(42);
   hframe41->GetYaxis()->SetLabelOffset(0.007);
   hframe41->GetYaxis()->SetLabelSize(0.05);
   hframe41->GetYaxis()->SetTitleSize(0.06);
   hframe41->GetYaxis()->SetTitleOffset(1.25);
   hframe41->GetYaxis()->SetTitleFont(42);
   hframe41->GetZaxis()->SetLabelFont(42);
   hframe41->GetZaxis()->SetLabelOffset(0.007);
   hframe41->GetZaxis()->SetLabelSize(0.05);
   hframe41->GetZaxis()->SetTitleSize(0.06);
   hframe41->GetZaxis()->SetTitleFont(42);
   hframe41->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9","thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->SetMinimum(-0.2146851);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->SetMaximum(1.691718);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(1,-0.07907178);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(2,-0.1063105);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(3,0.5387493);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(4,0.4633326);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(5,1.088571);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(6,0.7652338);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(7,-0.02201848);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(8,-0.1109757);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(9,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(21,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(1,0.07907178);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(2,0.0795514);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(3,0.7023943);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(4,0.5170052);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(5,0.5225895);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(6,0.7998523);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(7,0.1199198);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(8,0.1037094);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(9,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(21,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(8,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(16,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(8,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(16,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(1,0.003257359);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(2,-0.0005118895);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(3,0.009251484);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(4,0.01926083);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(5,0.02317249);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(6,0.009798292);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(7,0.01066987);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(8,0.009052425);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(9,0.01230636);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(10,0.00828309);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(11,0.002098049);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(12,0.004036967);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(13,0.002655198);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(15,0.0004927442);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(16,0.002389047);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(17,0.004824177);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(20,0.004777247);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(21,0.004128546);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(1,0.002402015);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(2,0.005281671);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(3,0.004303755);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(4,0.006286927);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(5,0.007348634);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(6,0.004935441);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(7,0.004650582);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(8,0.004590892);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(9,0.007693046);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(10,0.005117151);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(11,0.004495936);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(12,0.002915846);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(13,0.002160134);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(15,0.0004927442);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(16,0.002389047);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(17,0.003414423);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(20,0.003387675);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(21,0.002926082);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(2,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(2,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(3,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(3,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(1,0.01853837);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(2,0.0417047);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(3,0.1429881);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(4,0.188531);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(5,0.1103692);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(6,0.05018871);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(7,0.03372228);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(8,0.01825283);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(9,0.01836765);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(11,0.004608996);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(12,0.005622958);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(13,0.006261697);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(15,0.01062165);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(16,0.003729804);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(21,0.01100077);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(1,0.009526513);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(2,0.01477391);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(3,0.02788436);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(4,0.03306691);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(5,0.02301822);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(6,0.01568207);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(7,0.01390479);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(8,0.009707654);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(9,0.009603792);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(11,0.004608996);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(12,0.005622958);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(13,0.006261697);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(15,0.007524439);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(16,0.003729804);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(21,0.007845909);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(1,0.02790645);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(2,0.0525289);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(3,0.04821619);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(4,0.05020717);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(5,0.04843984);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(6,0.02897656);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(7,0.01875275);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(8,0.005147506);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(9,0.003059901);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(10,0.0003164354);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(1,0.006249941);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(2,0.008418096);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(3,0.007427463);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(4,0.007137659);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(5,0.006783433);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(6,0.004878336);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(7,0.004407582);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(8,0.001690661);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(9,0.00126864);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(10,0.0003164354);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10","thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->SetMaximum(0.06399435);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(1,0.02790645);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(2,0.0525289);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(3,0.04821619);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(4,0.05020717);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(5,0.04843984);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(6,0.02897656);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(7,0.01875275);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(8,0.005147506);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(9,0.003059901);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(10,0.0003164354);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(1,0.006249941);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(2,0.008418096);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(3,0.007427463);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(4,0.007137659);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(5,0.006783433);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(6,0.004878336);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(7,0.004407582);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(8,0.001690661);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(9,0.00126864);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(10,0.0003164354);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3009[20] = {
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
   Double_t _fy3009[20] = {
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
   Double_t _felx3009[20] = {
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
   Double_t _fely3009[20] = {
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
   Double_t _fehx3009[20] = {
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
   Double_t _fehy3009[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,219);
   Graph_Graph3009->SetMinimum(-0.4179087);
   Graph_Graph3009->SetMaximum(2.104205);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("2");
   
   Double_t _fx3010[20] = {
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
   Double_t _fy3010[20] = {
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
   Double_t _felx3010[20] = {
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
   Double_t _fely3010[20] = {
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
   Double_t _fehx3010[20] = {
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
   Double_t _fehy3010[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,219);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(3.629527);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy50 = new TH1F("hframe_copy50","",1000,10,200);
   hframe_copy50->SetMinimum(0);
   hframe_copy50->SetMaximum(5);
   hframe_copy50->SetDirectory(0);
   hframe_copy50->SetStats(0);
   hframe_copy50->SetLineStyle(0);
   hframe_copy50->SetMarkerStyle(20);
   hframe_copy50->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy50->GetXaxis()->SetNdivisions(506);
   hframe_copy50->GetXaxis()->SetLabelFont(42);
   hframe_copy50->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetXaxis()->SetLabelSize(0.05);
   hframe_copy50->GetXaxis()->SetTitleSize(0.06);
   hframe_copy50->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy50->GetXaxis()->SetTitleFont(42);
   hframe_copy50->GetYaxis()->SetTitle("Events");
   hframe_copy50->GetYaxis()->SetLabelFont(42);
   hframe_copy50->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetYaxis()->SetLabelSize(0.05);
   hframe_copy50->GetYaxis()->SetTitleSize(0.06);
   hframe_copy50->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy50->GetYaxis()->SetTitleFont(42);
   hframe_copy50->GetZaxis()->SetLabelFont(42);
   hframe_copy50->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetZaxis()->SetLabelSize(0.05);
   hframe_copy50->GetZaxis()->SetTitleSize(0.06);
   hframe_copy50->GetZaxis()->SetTitleFont(42);
   hframe_copy50->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_mllmin3l->Modified();
   ccwh3l_MET_JetV_13TeV_mllmin3l->cd();
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetSelected(ccwh3l_MET_JetV_13TeV_mllmin3l);
}
