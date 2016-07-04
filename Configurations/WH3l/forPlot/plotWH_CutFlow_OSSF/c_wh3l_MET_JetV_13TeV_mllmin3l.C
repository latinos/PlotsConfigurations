void c_wh3l_MET_JetV_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 21:43:27 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_JetV_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_mllmin3l->Range(-28,-24.73813,209.5,165.5552);
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
   hframe41->SetMaximum(156.0405);
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
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->SetMinimum(-0.7255263);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_9->SetMaximum(49.19947);
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
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(1,0.3881651);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(2,3.347538);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(3,2.563493);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(4,4.181196);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(5,0.8128981);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(6,2.846916);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(7,0.1173532);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(8,1.903734);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(9,0.6789536);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(10,0.4626989);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(11,-0.04399218);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(14,0.2766957);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(17,-0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinContent(21,0.3217396);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(1,1.113691);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(2,1.385598);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(3,1.262175);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(4,2.026136);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(5,1.157083);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(6,1.551209);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(7,0.6483614);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(8,1.115052);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(9,1.113221);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(10,0.6356148);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(11,0.03869352);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(14,0.2813675);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(17,0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetBinError(21,0.3580202);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_mllmin3l42->SetEntries(425);

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
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(2,0.01092969);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(4,0.06415329);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(6,0.02906182);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(9,0.01431565);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(2,0.01092969);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(4,0.0327269);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(6,0.02054997);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(9,0.01431565);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_mllmin3l43->SetEntries(10);

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
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(1,0.03209288);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(2,0.04825355);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(3,0.0546757);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(4,0.0938075);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(5,0.07723506);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(6,0.07237852);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(7,0.0801812);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(8,0.06444984);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(9,0.2190687);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(10,0.04839847);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(11,0.01430733);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(12,0.02630775);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(13,0.0124721);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(14,0.008126946);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(15,0.003100301);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(16,0.003731576);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(17,0.005301012);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(18,0.002535909);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(19,0.004591641);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(20,0.0004281031);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinContent(21,0.02626795);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(1,0.0082308);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(2,0.01109136);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(3,0.01046617);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(4,0.01501025);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(5,0.01368417);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(6,0.01225755);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(7,0.01353687);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(8,0.0106772);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(9,0.01899751);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(10,0.009960604);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(11,0.006720048);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(12,0.008170424);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(13,0.00500834);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(14,0.004385626);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(15,0.00268998);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(16,0.004411042);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(17,0.004941824);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(18,0.002535909);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(19,0.003246781);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(20,0.0004281031);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetBinError(21,0.007582931);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_mllmin3l44->SetEntries(739);

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
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(1,1.10907);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(2,1.150793);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(3,0.7582078);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(4,1.186459);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(5,1.880741);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(6,0.8609876);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(7,-0.01416177);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(8,0.1751672);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(9,0.4554045);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinContent(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(1,0.3319049);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(2,0.4004741);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(3,0.31269);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(4,0.3881234);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(5,0.470314);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(6,0.2873305);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(7,0.1626294);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(8,0.178755);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(9,0.2609775);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetBinError(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_mllmin3l45->SetEntries(106);

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
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(1,0.4340879);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(2,0.4539343);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(3,0.453064);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(4,0.7766226);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(5,0.3954336);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(6,0.7500512);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(7,0.8768954);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(8,0.6670573);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(9,2.353474);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinContent(10,0.1903763);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(1,0.1333065);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(2,0.1379252);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(3,0.1447093);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(4,0.1798699);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(5,0.1328677);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(6,0.1800349);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(7,0.187175);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(8,0.1688292);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(9,0.3114842);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetBinError(10,0.08359945);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_mllmin3l46->SetEntries(198);

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
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(1,3.647782);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(2,5.830435);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(3,7.936651);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(4,9.401935);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(5,9.599816);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(6,9.752107);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(7,9.567929);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(8,12.26651);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(9,42.85657);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(10,3.913066);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(11,0.7671286);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(12,0.432266);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(13,0.3689417);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(14,0.2425813);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(15,0.1341977);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(16,0.1320375);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(17,0.09025413);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(18,0.07832975);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(19,0.04752229);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(20,0.05939343);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinContent(21,0.4493509);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(1,0.1411426);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(2,0.1787991);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(3,0.2079008);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(4,0.2269642);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(5,0.2285825);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(6,0.2302337);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(7,0.2278513);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(8,0.2583988);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(9,0.4819551);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(10,0.1454365);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(11,0.06386422);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(12,0.0483685);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(13,0.04545907);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(14,0.03666423);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(15,0.02673904);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(16,0.02682471);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(17,0.02200632);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(18,0.01987559);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(19,0.01611416);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(20,0.01742303);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetBinError(21,0.04872337);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_mllmin3l47->SetEntries(23985);

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
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(1,0.09220357);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(2,0.1858797);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(3,0.2139406);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(4,0.2093088);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(5,0.1646626);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(6,0.1240021);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(7,0.0828056);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(8,0.09212325);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(9,0.2788478);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(10,0.02596578);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinContent(12,0.003970309);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(1,0.01091263);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(2,0.01579476);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(3,0.01668702);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(4,0.0162528);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(5,0.01331792);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(6,0.01175044);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(7,0.00927042);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(8,0.01003327);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(9,0.01733978);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(10,0.004974749);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetBinError(12,0.002167029);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l48->SetEntries(2204);
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
   thsSignal_grouped_wh3l_MET_JetV_13TeV_mllmin3l_stack_10->SetMaximum(0.3109969);
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
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(1,0.09220357);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(2,0.1858797);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(3,0.2139406);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(4,0.2093088);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(5,0.1646626);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(6,0.1240021);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(7,0.0828056);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(8,0.09212325);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(9,0.2788478);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(10,0.02596578);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinContent(12,0.003970309);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(1,0.01091263);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(2,0.01579476);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(3,0.01668702);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(4,0.0162528);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(5,0.01331792);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(6,0.01175044);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(7,0.00927042);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(8,0.01003327);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(9,0.01733978);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(10,0.004974749);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetBinError(12,0.002167029);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_mllmin3l49->SetEntries(2204);
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
   5.626501,
   10.84188,
   11.76609,
   15.70417,
   12.76612,
   14.3115,
   10.6282,
   15.07692,
   46.57779,
   4.628748,
   0.8106982,
   0.7699938,
   0.3814138,
   0.5274039,
   0.1475386,
   0.1357691,
   0.09475817,
   0.08086566,
   0.05211393,
   0.05982153};
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
   1.052529,
   2.444581,
   2.160753,
   3.242164,
   1.711136,
   2.50359,
   0.7444095,
   1.869061,
   1.994902,
   0.7406055,
   0.1846327,
   0.3848178,
   0.05243334,
   0.3323376,
   0.04006257,
   0.03094199,
   0.02841866,
   0.02267245,
   0.01992263,
   0.01793849};
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
   1.762177,
   2.443765,
   2.160029,
   3.241277,
   2.045683,
   2.503133,
   1.113961,
   1.870754,
   2.372647,
   0.907948,
   0.1845286,
   0.3847905,
   0.05232282,
   0.3367972,
   0.04002803,
   0.03160384,
   0.02835588,
   0.02264548,
   0.01991859,
   0.01792757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,219);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(53.84227);
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
   11,
   6,
   11,
   21,
   20,
   20,
   14,
   20,
   55,
   9,
   1,
   0,
   0,
   1,
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
   3.265636,
   2.379969,
   3.265636,
   4.545892,
   4.43453,
   4.43453,
   3.696567,
   4.43453,
   7.393726,
   2.943511,
   0.8272524,
   0,
   0,
   0.8272524,
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
   4.416609,
   3.583713,
   4.416609,
   5.655298,
   5.546633,
   5.546633,
   4.830479,
   5.546633,
   8.461342,
   4.110286,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
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
   Graph_Graph3010->SetMaximum(69.80748);
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
   hframe_copy50->SetMaximum(156.0405);
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
