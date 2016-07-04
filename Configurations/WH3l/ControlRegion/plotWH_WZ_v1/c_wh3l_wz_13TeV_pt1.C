void c_wh3l_wz_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt1/cc
//=========  (Sun Jul  3 22:54:22 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_pt1 = new TCanvas("ccwh3l_wz_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_wz_13TeV_pt1->Range(-28,-12.76067,209.5,85.39833);
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
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,10,200);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(80.49038);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe91->GetXaxis()->SetNdivisions(506);
   hframe91->GetXaxis()->SetLabelFont(42);
   hframe91->GetXaxis()->SetLabelOffset(0.007);
   hframe91->GetXaxis()->SetLabelSize(0.05);
   hframe91->GetXaxis()->SetTitleSize(0.06);
   hframe91->GetXaxis()->SetTitleOffset(0.9);
   hframe91->GetXaxis()->SetTitleFont(42);
   hframe91->GetYaxis()->SetTitle("Events");
   hframe91->GetYaxis()->SetLabelFont(42);
   hframe91->GetYaxis()->SetLabelOffset(0.007);
   hframe91->GetYaxis()->SetLabelSize(0.05);
   hframe91->GetYaxis()->SetTitleSize(0.06);
   hframe91->GetYaxis()->SetTitleOffset(1.25);
   hframe91->GetYaxis()->SetTitleFont(42);
   hframe91->GetZaxis()->SetLabelFont(42);
   hframe91->GetZaxis()->SetLabelOffset(0.007);
   hframe91->GetZaxis()->SetLabelSize(0.05);
   hframe91->GetZaxis()->SetTitleSize(0.06);
   hframe91->GetZaxis()->SetTitleFont(42);
   hframe91->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt1");
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19","thsBackground_grouped_wh3l_wz_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->SetMinimum(-1.201776);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->SetMaximum(24.50233);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt192 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt192","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(2,-0.3489646);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(3,-0.2796651);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(4,0.9735862);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(5,3.531195);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(6,2.966307);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(7,1.048615);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(8,0.8508213);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(9,-0.2653982);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(10,0.6449567);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(11,-0.4170547);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(12,0.9323358);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(13,-0.456847);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(14,0.4543751);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(15,0.05072842);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(16,0.01006685);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(17,-0.01531979);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(18,-0.09765524);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(19,-0.03910978);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(20,0.5315078);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(22,0.5423007);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(23,-0.0005923419);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(24,-0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(25,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinContent(26,-0.05545776);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(2,0.315105);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(3,0.2549931);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(4,1.158255);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(5,1.32712);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(6,1.630497);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(7,1.184071);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(8,1.07714);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(9,0.6923605);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(10,0.5154798);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(11,0.7847211);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(12,0.6877299);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(13,0.2730627);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(14,0.3605465);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(15,0.1391782);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(16,0.01006685);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(17,0.09749799);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(18,0.05865269);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(19,0.03910978);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(20,0.5315078);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(22,0.4525668);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(23,0.0006709784);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(24,0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(25,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetBinError(26,0.1260339);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt193 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt193","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetBinContent(5,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetBinContent(7,0.03274813);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetBinContent(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetBinError(5,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetBinError(7,0.02329387);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetBinError(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt193->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_WW_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_pt194 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_pt194","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(3,0.002709456);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(4,0.01957609);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(5,0.03075616);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(6,0.05052064);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(7,0.05840623);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(8,0.06144028);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(9,0.06490011);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(10,0.03973876);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(11,0.03901726);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(12,0.02800311);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(13,0.02391699);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(14,0.01447229);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(15,0.01477471);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(16,0.01742013);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(17,0.01181759);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(18,0.01914168);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(19,2.917794e-05);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(20,0.007760681);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(21,0.01220715);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(22,0.005503352);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(23,0.002566518);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(24,0.0006907581);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(25,0.004445222);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinContent(26,0.05175682);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(3,0.002097725);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(4,0.006041118);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(5,0.007396311);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(6,0.00975278);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(7,0.01066183);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(8,0.01014889);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(9,0.0108839);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(10,0.009461632);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(11,0.007497392);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(12,0.007161393);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(13,0.007852056);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(14,0.004929392);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(15,0.006268222);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(16,0.005311183);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(17,0.005116566);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(18,0.005641489);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(19,0.002846481);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(20,0.003516291);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(21,0.004607882);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(22,0.00326483);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(23,0.002288297);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(24,0.0006907581);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(25,0.002768349);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetBinError(26,0.009828422);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_VVV_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt195 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt195","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(2,0.2278352);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(3,0.3331513);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(4,1.120393);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(5,1.44364);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(6,0.8188205);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(7,0.4854716);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(8,-0.0877768);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(9,0.3724096);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(13,0.0928583);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinContent(22,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(2,0.1611082);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(3,0.1932637);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(4,0.3818161);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(5,0.4293633);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(6,0.30352);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(7,0.2727073);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(8,0.08778597);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(9,0.1907857);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(13,0.0928583);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetBinError(22,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt196 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt196","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(2,0.03738894);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(3,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(4,0.2180102);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(5,0.5985359);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(6,1.185264);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(7,1.424086);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(8,0.9828473);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(9,0.3944765);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(10,0.4392464);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(11,0.4159289);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(12,0.2452273);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(13,0.2186379);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(14,0.152887);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(15,0.08824559);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(16,0.08419978);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(17,0.06716308);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(18,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(21,0.08883265);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(22,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinContent(26,0.0908035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(2,0.03738894);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(3,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(4,0.09135126);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(5,0.1546932);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(6,0.2342926);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(7,0.2400872);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(8,0.2063464);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(9,0.1251363);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(10,0.1325865);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(11,0.1315439);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(12,0.09936887);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(13,0.1000794);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(14,0.0800345);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(15,0.06247809);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(16,0.05986179);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(17,0.05134657);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(18,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(21,0.06284459);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(22,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetBinError(26,0.06421094);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt197 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt197","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(2,0.1270015);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(3,1.357577);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(4,4.763544);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(5,12.35613);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(6,18.22588);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(7,16.30394);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(8,13.21128);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(9,10.21981);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(10,7.331702);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(11,5.646803);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(12,3.86748);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(13,3.00611);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(14,2.291371);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(15,1.55673);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(16,1.541447);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(17,1.19333);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(18,0.907995);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(19,0.7430604);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(20,0.6251487);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(21,0.5958016);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(22,0.4104109);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(23,0.3196645);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(24,0.2635427);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(25,0.2115952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinContent(26,1.525885);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(2,0.02640755);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(3,0.08484981);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(4,0.1608376);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(5,0.2585857);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(6,0.3150576);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(7,0.2977337);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(8,0.2676218);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(9,0.2375375);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(10,0.2002979);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(11,0.1749895);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(12,0.1441587);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(13,0.1269758);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(14,0.1118403);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(15,0.09108516);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(16,0.09150831);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(17,0.08042823);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(18,0.07070518);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(19,0.06390526);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(20,0.05774023);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(21,0.05751425);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(22,0.04719224);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(23,0.04169111);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(24,0.03728853);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(25,0.03399083);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetBinError(26,0.09081212);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt198 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt198","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(3,0.009743473);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(4,0.01719026);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(5,0.06391825);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(6,0.08876739);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(7,0.1101045);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(8,0.09324179);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(9,0.08279993);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(10,0.07308986);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(11,0.07546981);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(12,0.06575873);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(13,0.04561527);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(14,0.03176007);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(15,0.03689213);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(16,0.01912647);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(17,0.01506779);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(18,0.01761678);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(19,0.004746372);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(20,0.01379498);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(21,0.005919109);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(22,0.001580653);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(23,0.000856323);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(25,0.00204373);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinContent(26,0.01812896);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(3,0.003524773);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(4,0.004160033);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(5,0.00878492);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(6,0.0109412);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(7,0.01159257);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(8,0.0110334);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(9,0.009982073);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(10,0.009776362);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(11,0.00950481);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(12,0.00818192);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(13,0.007114783);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(14,0.005028298);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(15,0.006049275);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(16,0.004475076);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(17,0.003685842);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(18,0.004244702);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(19,0.001961641);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(20,0.003765443);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(21,0.002239503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(22,0.0006893687);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(23,0.0005519296);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(25,0.00156169);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetBinError(26,0.004396427);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt1,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetName("thsSignal_grouped_wh3l_wz_13TeV_pt1");
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20","thsSignal_grouped_wh3l_wz_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->SetMaximum(0.1277819);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt199 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt199","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(3,0.009743473);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(4,0.01719026);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(5,0.06391825);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(6,0.08876739);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(7,0.1101045);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(8,0.09324179);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(9,0.08279993);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(10,0.07308986);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(11,0.07546981);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(12,0.06575873);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(13,0.04561527);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(14,0.03176007);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(15,0.03689213);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(16,0.01912647);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(17,0.01506779);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(18,0.01761678);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(19,0.004746372);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(20,0.01379498);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(21,0.005919109);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(22,0.001580653);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(23,0.000856323);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(25,0.00204373);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinContent(26,0.01812896);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(3,0.003524773);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(4,0.004160033);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(5,0.00878492);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(6,0.0109412);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(7,0.01159257);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(8,0.0110334);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(9,0.009982073);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(10,0.009776362);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(11,0.00950481);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(12,0.00818192);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(13,0.007114783);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(14,0.005028298);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(15,0.006049275);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(16,0.004475076);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(17,0.003685842);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(18,0.004244702);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(19,0.001961641);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(20,0.003765443);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(21,0.002239503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(22,0.0006893687);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(23,0.0005519296);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(25,0.00156169);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetBinError(26,0.004396427);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt1,"");
   thsSignal_grouped_wh3l_wz_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3019[25] = {
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
   Double_t _fy3019[25] = {
   0,
   0.0432611,
   1.422198,
   7.095109,
   17.97766,
   23.24679,
   19.35327,
   15.01861,
   10.7862,
   8.466574,
   5.757949,
   5.087362,
   2.884676,
   2.913105,
   1.710479,
   1.653134,
   1.256991,
   0.8726541,
   0.7039797,
   1.164417,
   0.6968414,
   1.08566,
   0.3216386,
   0.2061899,
   0.2917295};
   Double_t _felx3019[25] = {
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
   Double_t _fely3019[25] = {
   0,
   0.5540116,
   0.5560507,
   1.656317,
   2.533231,
   2.72166,
   1.956979,
   1.484857,
   1.283077,
   0.9148492,
   1.190011,
   1.012454,
   0.6365988,
   0.5862183,
   0.2213834,
   0.1814442,
   0.2411013,
   0.1864799,
   0.1079812,
   0.6219683,
   0.128114,
   0.6587047,
   0.04666912,
   0.09860795,
   0.1158801};
   Double_t _fehx3019[25] = {
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
   Double_t _fehy3019[25] = {
   0,
   0.5539957,
   0.5558001,
   1.836707,
   2.532479,
   2.72081,
   2.087389,
   1.702475,
   0.8687235,
   0.9144863,
   0.8303923,
   1.012331,
   0.6343265,
   0.5849012,
   0.3053467,
   0.1794951,
   0.1597661,
   0.1855348,
   0.10991,
   0.6218242,
   0.1275627,
   0.6586647,
   0.04646125,
   0.09852227,
   0.1158552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,219);
   Graph_Graph3019->SetMinimum(-3.158585);
   Graph_Graph3019->SetMaximum(28.61543);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t _fx3020[25] = {
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
   Double_t _fy3020[25] = {
   0,
   2,
   3,
   10,
   17,
   27,
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
   Double_t _felx3020[25] = {
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
   Double_t _fely3020[25] = {
   0,
   1.29183,
   1.632727,
   3.108748,
   4.082258,
   5.163869,
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
   Double_t _fehx3020[25] = {
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
   Double_t _fehy3020[25] = {
   1.147908,
   2.63791,
   2.918242,
   4.267035,
   5.203825,
   6.260373,
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
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,219);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(36.58641);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy100 = new TH1F("hframe_copy100","",1000,10,200);
   hframe_copy100->SetMinimum(0);
   hframe_copy100->SetMaximum(80.49038);
   hframe_copy100->SetDirectory(0);
   hframe_copy100->SetStats(0);
   hframe_copy100->SetLineStyle(0);
   hframe_copy100->SetMarkerStyle(20);
   hframe_copy100->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy100->GetXaxis()->SetNdivisions(506);
   hframe_copy100->GetXaxis()->SetLabelFont(42);
   hframe_copy100->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetXaxis()->SetLabelSize(0.05);
   hframe_copy100->GetXaxis()->SetTitleSize(0.06);
   hframe_copy100->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy100->GetXaxis()->SetTitleFont(42);
   hframe_copy100->GetYaxis()->SetTitle("Events");
   hframe_copy100->GetYaxis()->SetLabelFont(42);
   hframe_copy100->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetYaxis()->SetLabelSize(0.05);
   hframe_copy100->GetYaxis()->SetTitleSize(0.06);
   hframe_copy100->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy100->GetYaxis()->SetTitleFont(42);
   hframe_copy100->GetZaxis()->SetLabelFont(42);
   hframe_copy100->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetZaxis()->SetLabelSize(0.05);
   hframe_copy100->GetZaxis()->SetTitleSize(0.06);
   hframe_copy100->GetZaxis()->SetTitleFont(42);
   hframe_copy100->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt1->Modified();
   ccwh3l_wz_13TeV_pt1->cd();
   ccwh3l_wz_13TeV_pt1->SetSelected(ccwh3l_wz_13TeV_pt1);
}
