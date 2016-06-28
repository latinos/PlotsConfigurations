void c_wh3l_wz_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt3/cc
//=========  (Tue Jun 28 02:22:47 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_pt3 = new TCanvas("ccwh3l_wz_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_wz_13TeV_pt3->Range(-88,-28.53658,524.5,190.9756);
   ccwh3l_wz_13TeV_pt3->SetFillColor(0);
   ccwh3l_wz_13TeV_pt3->SetBorderMode(0);
   ccwh3l_wz_13TeV_pt3->SetBorderSize(2);
   ccwh3l_wz_13TeV_pt3->SetTickx(1);
   ccwh3l_wz_13TeV_pt3->SetTicky(1);
   ccwh3l_wz_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe61 = new TH1F("hframe61","",1000,10,500);
   hframe61->SetMinimum(0);
   hframe61->SetMaximum(180);
   hframe61->SetDirectory(0);
   hframe61->SetStats(0);
   hframe61->SetLineStyle(0);
   hframe61->SetMarkerStyle(20);
   hframe61->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe61->GetXaxis()->SetNdivisions(506);
   hframe61->GetXaxis()->SetLabelFont(42);
   hframe61->GetXaxis()->SetLabelOffset(0.007);
   hframe61->GetXaxis()->SetLabelSize(0.05);
   hframe61->GetXaxis()->SetTitleSize(0.06);
   hframe61->GetXaxis()->SetTitleOffset(0.9);
   hframe61->GetXaxis()->SetTitleFont(42);
   hframe61->GetYaxis()->SetTitle("Events");
   hframe61->GetYaxis()->SetLabelFont(42);
   hframe61->GetYaxis()->SetLabelOffset(0.007);
   hframe61->GetYaxis()->SetLabelSize(0.05);
   hframe61->GetYaxis()->SetTitleSize(0.06);
   hframe61->GetYaxis()->SetTitleOffset(1.25);
   hframe61->GetYaxis()->SetTitleFont(42);
   hframe61->GetZaxis()->SetLabelFont(42);
   hframe61->GetZaxis()->SetLabelOffset(0.007);
   hframe61->GetZaxis()->SetLabelSize(0.05);
   hframe61->GetZaxis()->SetTitleSize(0.06);
   hframe61->GetZaxis()->SetTitleFont(42);
   hframe61->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt3");
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13","thsBackground_grouped_wh3l_wz_13TeV_pt3",50,10,500);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->SetMinimum(-0.3450561);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->SetMaximum(24.42237);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt3_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt362 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt362","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(1,12.40605);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(2,3.256664);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(3,2.505459);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(4,-0.1830506);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(5,0.2414654);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(6,-0.06159817);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(7,-0.02162022);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(11,-0.01660391);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(14,-0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinContent(15,-0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(1,3.386487);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(2,1.623766);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(3,1.202109);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(4,0.1620055);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(5,0.15087);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(6,0.0369734);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(7,0.02162022);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(11,0.01660391);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(14,0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetBinError(15,0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetEntries(419);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt362->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt363 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt363","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->SetBinContent(1,0.06107909);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->SetBinContent(2,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->SetBinError(1,0.0310623);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->SetBinError(2,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt363->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt363->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt363->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_WW_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_pt364 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_pt364","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(1,0.03574124);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(2,0.04883298);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(3,0.03499656);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(4,0.02259129);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(5,0.01141255);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(6,0.005047953);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(7,0.006110043);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(8,0.00130997);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(9,0.0006444443);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(10,0.0004502267);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(11,0.0008016044);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(12,0.0008356085);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(13,0.0004507764);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(15,0.0005211808);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(18,0.0007301272);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinContent(30,0.0002847629);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(1,0.004710084);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(2,0.006387823);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(3,0.004920487);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(4,0.003831092);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(5,0.002997605);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(6,0.001816881);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(7,0.001952062);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(8,0.0009264514);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(9,0.0006444443);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(10,0.0004500321);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(11,0.001316472);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(12,0.0005910937);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(13,0.0004507764);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(15,0.0005211808);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(18,0.0007301272);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetBinError(30,0.0002847629);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetEntries(349);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt364->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_VVV_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt365 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt365","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinContent(1,5.236416);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinContent(2,2.141224);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinContent(3,0.3255167);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinContent(4,0.2220607);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinContent(5,0.07940341);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinError(1,0.8304922);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinError(2,0.5331982);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinError(3,0.2339756);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinError(4,0.1570913);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetBinError(5,0.1641918);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetEntries(113);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt365->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt366 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt366","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(1,2.618885);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(2,3.343573);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(3,2.688352);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(4,1.258033);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(5,0.590071);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(6,0.1764063);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(7,0.1403236);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(8,0.08796713);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(9,0.01359557);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(10,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinContent(12,0.0418944);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(1,0.3333704);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(2,0.3683653);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(3,0.3340711);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(4,0.2243147);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(5,0.1593091);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(6,0.08826749);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(7,0.07194651);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(8,0.06220887);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(9,0.01359557);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(10,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetBinError(12,0.0418944);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetEntries(305);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt366->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt367 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt367","histo_ZZ",50,10,500);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(1,2.618885);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(2,3.343573);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(3,2.688352);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(4,1.258033);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(5,0.590071);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(6,0.1764063);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(7,0.1403236);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(8,0.08796713);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(9,0.01359557);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(10,0.06098055);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinContent(12,0.0418944);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(1,0.3333704);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(2,0.3683653);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(3,0.3340711);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(4,0.2243147);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(5,0.1593091);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(6,0.08826749);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(7,0.07194651);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(8,0.06220887);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(9,0.01359557);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(10,0.06098055);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetBinError(12,0.0418944);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt367->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt368 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt368","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(1,0.2823386);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(2,0.3778013);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(3,0.2344959);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(4,0.1388841);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(5,0.05956895);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(6,0.02134028);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(7,0.0157945);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(8,0.01361412);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(9,0.003275869);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(10,0.007766164);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(11,0.002471739);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(12,0.001122178);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(13,0.00139038);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinContent(18,0.0004464625);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(1,0.01833609);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(2,0.02166699);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(3,0.01659599);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(4,0.0127406);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(5,0.007880699);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(6,0.004477477);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(7,0.003496996);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(8,0.003894098);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(9,0.001794247);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(10,0.003099218);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(11,0.001707133);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(12,0.0008100761);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(13,0.00139038);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetBinError(18,0.0004464625);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetEntries(1642);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt368->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt3,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_pt3->SetName("thsSignal_grouped_wh3l_wz_13TeV_pt3");
   thsSignal_grouped_wh3l_wz_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14","thsSignal_grouped_wh3l_wz_13TeV_pt3",50,10,500);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->SetMaximum(0.4194418);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_pt3_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt369 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt369","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(1,0.2823386);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(2,0.3778013);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(3,0.2344959);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(4,0.1388841);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(5,0.05956895);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(6,0.02134028);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(7,0.0157945);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(8,0.01361412);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(9,0.003275869);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(10,0.007766164);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(11,0.002471739);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(12,0.001122178);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(13,0.00139038);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinContent(18,0.0004464625);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(1,0.01833609);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(2,0.02166699);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(3,0.01659599);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(4,0.0127406);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(5,0.007880699);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(6,0.004477477);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(7,0.003496996);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(8,0.003894098);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(9,0.001794247);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(10,0.003099218);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(11,0.001707133);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(12,0.0008100761);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(13,0.00139038);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetBinError(18,0.0004464625);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetEntries(1642);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt369->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt3,"");
   thsSignal_grouped_wh3l_wz_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3013[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3013[50] = {
   48.94248,
   53.92992,
   38.11539,
   12.75552,
   4.733927,
   1.679697,
   1.036459,
   0.4883327,
   0.3314964,
   0.2485841,
   0.06942135,
   0.1395577,
   0.06152137,
   0.01375461,
   -0.009762418,
   0.00553001,
   0.005472263,
   0.0007301272,
   0.01680978,
   0,
   0,
   0,
   0.006436534,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002847629,
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
   Double_t _felx3013[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3013[50] = {
   6.221252,
   3.199019,
   2.321681,
   0.7996455,
   0.5417015,
   0.219741,
   0.1667331,
   0.1096345,
   0.05582881,
   0.09279311,
   0.03846406,
   0.06519409,
   0.0186498,
   0.03770496,
   0.02769347,
   0.00553001,
   0.005472263,
   0.0007303932,
   0.009725807,
   0,
   0,
   0,
   0.006436534,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002848667,
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
   Double_t _fehx3013[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3013[50] = {
   6.221253,
   3.199014,
   2.321682,
   0.7996446,
   0.6257878,
   0.2197409,
   0.166733,
   0.1096345,
   0.05582881,
   0.0927931,
   0.03897464,
   0.0651941,
   0.0186498,
   0.03770496,
   0.02769348,
   0.00553001,
   0.005472263,
   0.0007303932,
   0.009725807,
   0,
   0,
   0,
   0.006436534,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002848667,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,549);
   Graph_Graph3013->SetMinimum(-5.754095);
   Graph_Graph3013->SetMaximum(62.84557);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("2");
   
   Double_t _fx3014[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3014[50] = {
   59,
   64,
   46,
   14,
   3,
   3,
   1,
   0,
   0,
   0,
   1,
   0,
   0,
   1,
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
   Double_t _felx3014[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3014[50] = {
   7.659464,
   7.979201,
   6.757713,
   3.696567,
   1.632727,
   1.632727,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   0,
   0,
   0.8272524,
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
   Double_t _fehx3014[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3014[50] = {
   8.724748,
   9.041881,
   7.831652,
   4.830479,
   2.918242,
   2.918242,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(50,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,549);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(80.34607);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineStyle(0);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_pt3","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy70 = new TH1F("hframe_copy70","",1000,10,500);
   hframe_copy70->SetMinimum(0);
   hframe_copy70->SetMaximum(180);
   hframe_copy70->SetDirectory(0);
   hframe_copy70->SetStats(0);
   hframe_copy70->SetLineStyle(0);
   hframe_copy70->SetMarkerStyle(20);
   hframe_copy70->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy70->GetXaxis()->SetNdivisions(506);
   hframe_copy70->GetXaxis()->SetLabelFont(42);
   hframe_copy70->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetXaxis()->SetLabelSize(0.05);
   hframe_copy70->GetXaxis()->SetTitleSize(0.06);
   hframe_copy70->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy70->GetXaxis()->SetTitleFont(42);
   hframe_copy70->GetYaxis()->SetTitle("Events");
   hframe_copy70->GetYaxis()->SetLabelFont(42);
   hframe_copy70->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetYaxis()->SetLabelSize(0.05);
   hframe_copy70->GetYaxis()->SetTitleSize(0.06);
   hframe_copy70->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy70->GetYaxis()->SetTitleFont(42);
   hframe_copy70->GetZaxis()->SetLabelFont(42);
   hframe_copy70->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetZaxis()->SetLabelSize(0.05);
   hframe_copy70->GetZaxis()->SetTitleSize(0.06);
   hframe_copy70->GetZaxis()->SetTitleFont(42);
   hframe_copy70->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt3->Modified();
   ccwh3l_wz_13TeV_pt3->cd();
   ccwh3l_wz_13TeV_pt3->SetSelected(ccwh3l_wz_13TeV_pt3);
}
