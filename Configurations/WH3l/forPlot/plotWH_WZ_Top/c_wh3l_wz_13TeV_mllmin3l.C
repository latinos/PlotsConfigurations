void c_wh3l_wz_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 20:54:28 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_mllmin3l = new TCanvas("ccwh3l_wz_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_mllmin3l->Range(-28,-24.73813,209.5,165.5552);
   ccwh3l_wz_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_wz_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_wz_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_wz_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_wz_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_wz_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameBorderMode(0);
   
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9","thsBackground_grouped_wh3l_wz_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->SetMinimum(-1.107521);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->SetMaximum(49.09837);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(1,-0.04741513);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(2,1.429295);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(3,1.749597);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(4,1.99302);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(5,-0.2070794);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(6,2.466232);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(7,0.1173532);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(8,1.903734);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(9,0.7166687);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(10,0.4626989);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinContent(11,-0.005728715);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(1,0.6633781);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(2,1.051184);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(3,1.116901);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(4,1.482562);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(5,0.9004413);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(6,1.40201);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(7,0.6483614);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(8,1.115052);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(9,1.112582);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(10,0.6356148);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetBinError(11,0.00575287);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetBinContent(2,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetBinContent(4,0.03556199);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetBinContent(6,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetBinContent(9,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetBinError(2,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetBinError(4,0.02515185);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetBinError(6,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetBinError(9,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(1,0.01541733);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(2,0.01040415);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(3,0.02813997);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(4,0.05096138);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(5,0.03002328);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(6,0.04345038);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(7,0.07154285);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(8,0.05643219);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(9,0.2159154);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(10,0.04357914);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(11,0.01141741);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinContent(12,0.004287718);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(1,0.005539071);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(2,0.004443663);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(3,0.007000187);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(4,0.01048799);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(5,0.007958994);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(6,0.008404972);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(7,0.01278278);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(8,0.009888511);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(9,0.01887118);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(10,0.009459106);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(11,0.00608803);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetBinError(12,0.003066385);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l44->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(1,0.7270315);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(2,0.8432823);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(3,0.3197199);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(4,0.7168892);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(5,1.41604);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(6,0.2751281);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(7,-0.01416177);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(8,0.1751672);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(9,0.4554045);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(1,0.2768263);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(2,0.3196435);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(3,0.2307842);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(4,0.278093);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(5,0.3963379);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(6,0.1768254);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(7,0.1626294);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(8,0.178755);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(9,0.2609775);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(1,0.3156072);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(2,0.3759817);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(3,0.3980983);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(4,0.7233076);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(5,0.3205697);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(6,0.6555993);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(7,0.8483328);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(8,0.6670573);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(9,2.308196);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinContent(10,0.1903763);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(1,0.1143133);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(2,0.1253146);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(3,0.1393838);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(4,0.1749499);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(5,0.1213829);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(6,0.1670976);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(7,0.1849828);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(8,0.1688292);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(9,0.3081757);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetBinError(10,0.08359945);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l46->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(1,2.501736);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(2,4.501726);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(3,6.499624);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(4,8.253102);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(5,8.861479);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(6,9.037047);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(7,9.426976);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(8,12.15617);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(9,42.77198);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(10,3.788837);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(11,0.6967011);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinContent(12,0.1078549);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(1,0.117162);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(2,0.157385);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(3,0.1880452);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(4,0.2126379);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(5,0.2196523);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(6,0.2215984);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(7,0.2262413);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(8,0.2572601);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(9,0.4814859);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(10,0.1430264);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(11,0.06085081);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetBinError(12,0.02403616);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(1,0.01910599);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(2,0.06494957);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(3,0.07198817);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(4,0.09413344);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(5,0.08463699);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(6,0.08561873);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(7,0.07496231);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(8,0.09110011);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(9,0.2778725);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(10,0.02596578);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(1,0.005227266);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(2,0.009388355);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(3,0.009643697);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(4,0.01120598);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(5,0.01015137);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(6,0.01010335);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(7,0.008726056);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(8,0.0100224);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(9,0.0173314);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(10,0.004974749);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10","thsSignal_grouped_wh3l_wz_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->SetMaximum(0.3099641);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(1,0.01910599);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(2,0.06494957);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(3,0.07198817);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(4,0.09413344);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(5,0.08463699);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(6,0.08561873);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(7,0.07496231);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(8,0.09110011);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(9,0.2778725);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(10,0.02596578);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(1,0.005227266);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(2,0.009388355);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(3,0.009643697);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(4,0.01120598);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(5,0.01015137);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(6,0.01010335);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(7,0.008726056);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(8,0.0100224);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(9,0.0173314);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(10,0.004974749);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l49->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->Draw("hist same noclear");
   
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
   3.512377,
   7.171619,
   8.995178,
   11.77284,
   10.42103,
   12.49204,
   10.45004,
   14.95856,
   46.48248,
   4.485491,
   0.7756441,
   0.1121426,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
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
   1.18431,
   1.753461,
   1.804891,
   2.313171,
   1.668544,
   2.18075,
   0.7380669,
   1.866732,
   2.025413,
   0.7235047,
   0.1473845,
   0.02752549,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
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
   0.5741984,
   1.752815,
   1.804715,
   2.312382,
   0.99031,
   2.180427,
   1.108174,
   1.868486,
   2.368912,
   0.8907706,
   0.1472402,
   0.02752308,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,219);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(53.73653);
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
   6,
   6,
   10,
   17,
   17,
   11,
   14,
   20,
   55,
   9,
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
   2.379969,
   2.379969,
   3.108748,
   4.082258,
   4.082258,
   3.265636,
   3.696567,
   4.43453,
   7.393726,
   2.943511,
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
   3.583713,
   3.583713,
   4.267035,
   5.203825,
   5.203825,
   4.416609,
   4.830479,
   5.546633,
   8.461342,
   4.110286,
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mllmin3l","Data","EPL");
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
   ccwh3l_wz_13TeV_mllmin3l->Modified();
   ccwh3l_wz_13TeV_mllmin3l->cd();
   ccwh3l_wz_13TeV_mllmin3l->SetSelected(ccwh3l_wz_13TeV_mllmin3l);
}
