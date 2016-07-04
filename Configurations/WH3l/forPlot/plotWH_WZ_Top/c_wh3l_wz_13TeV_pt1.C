void c_wh3l_wz_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt1/cc
//=========  (Sat Jul  2 20:54:34 2016) by ROOT version6.02/13
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
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,10,200);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(80.49038);
   hframe121->SetDirectory(0);
   hframe121->SetStats(0);
   hframe121->SetLineStyle(0);
   hframe121->SetMarkerStyle(20);
   hframe121->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe121->GetXaxis()->SetNdivisions(506);
   hframe121->GetXaxis()->SetLabelFont(42);
   hframe121->GetXaxis()->SetLabelOffset(0.007);
   hframe121->GetXaxis()->SetLabelSize(0.05);
   hframe121->GetXaxis()->SetTitleSize(0.06);
   hframe121->GetXaxis()->SetTitleOffset(0.9);
   hframe121->GetXaxis()->SetTitleFont(42);
   hframe121->GetYaxis()->SetTitle("Events");
   hframe121->GetYaxis()->SetLabelFont(42);
   hframe121->GetYaxis()->SetLabelOffset(0.007);
   hframe121->GetYaxis()->SetLabelSize(0.05);
   hframe121->GetYaxis()->SetTitleSize(0.06);
   hframe121->GetYaxis()->SetTitleOffset(1.25);
   hframe121->GetYaxis()->SetTitleFont(42);
   hframe121->GetZaxis()->SetLabelFont(42);
   hframe121->GetZaxis()->SetLabelOffset(0.007);
   hframe121->GetZaxis()->SetLabelSize(0.05);
   hframe121->GetZaxis()->SetTitleSize(0.06);
   hframe121->GetZaxis()->SetTitleFont(42);
   hframe121->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt1");
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25","thsBackground_grouped_wh3l_wz_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->SetMinimum(-1.201776);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->SetMaximum(24.50233);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt1122 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt1122","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(2,-0.3489646);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(3,-0.2796651);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(4,0.9735862);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(5,3.531195);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(6,2.966307);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(7,1.048615);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(8,0.8508213);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(9,-0.2653982);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(10,0.6449567);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(11,-0.4170547);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(12,0.9323358);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(13,-0.456847);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(14,0.4543751);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(15,0.05072842);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(16,0.01006685);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(17,-0.01531979);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(18,-0.09765524);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(19,-0.03910978);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(20,0.5315078);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(22,0.5423007);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(23,-0.0005923419);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(24,-0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(25,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinContent(26,-0.05545776);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(2,0.315105);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(3,0.2549931);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(4,1.158255);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(5,1.32712);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(6,1.630497);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(7,1.184071);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(8,1.07714);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(9,0.6923605);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(10,0.5154798);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(11,0.7847211);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(12,0.6877299);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(13,0.2730627);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(14,0.3605465);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(15,0.1391782);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(16,0.01006685);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(17,0.09749799);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(18,0.05865269);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(19,0.03910978);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(20,0.5315078);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(22,0.4525668);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(23,0.0006709784);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(24,0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(25,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetBinError(26,0.1260339);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt1122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt1123 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt1123","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetBinContent(5,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetBinContent(7,0.03274813);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetBinContent(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetBinError(5,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetBinError(7,0.02329387);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetBinError(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt1123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_WW_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_pt1124 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_pt1124","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(3,0.002709456);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(4,0.01957609);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(5,0.03075616);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(6,0.05052064);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(7,0.05840623);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(8,0.06144028);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(9,0.06490011);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(10,0.03973876);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(11,0.03901726);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(12,0.02800311);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(13,0.02391699);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(14,0.01447229);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(15,0.01477471);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(16,0.01742013);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(17,0.01181759);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(18,0.01914168);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(19,2.917794e-05);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(20,0.007760681);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(21,0.01220715);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(22,0.005503352);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(23,0.002566518);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(24,0.0006907581);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(25,0.004445222);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinContent(26,0.05175682);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(3,0.002097725);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(4,0.006041118);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(5,0.007396311);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(6,0.00975278);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(7,0.01066183);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(8,0.01014889);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(9,0.0108839);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(10,0.009461632);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(11,0.007497392);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(12,0.007161393);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(13,0.007852056);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(14,0.004929392);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(15,0.006268222);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(16,0.005311183);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(17,0.005116566);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(18,0.005641489);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(19,0.002846481);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(20,0.003516291);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(21,0.004607882);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(22,0.00326483);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(23,0.002288297);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(24,0.0006907581);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(25,0.002768349);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetBinError(26,0.009828422);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt1124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_VVV_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt1125 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt1125","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(2,0.2278352);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(3,0.3331513);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(4,1.120393);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(5,1.44364);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(6,0.8188205);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(7,0.4854716);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(8,-0.0877768);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(9,0.3724096);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(13,0.0928583);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinContent(22,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(2,0.1611082);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(3,0.1932637);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(4,0.3818161);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(5,0.4293633);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(6,0.30352);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(7,0.2727073);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(8,0.08778597);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(9,0.1907857);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(13,0.0928583);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetBinError(22,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt1125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt1126 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt1126","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(2,0.03738894);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(3,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(4,0.2180102);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(5,0.5985359);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(6,1.185264);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(7,1.424086);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(8,0.9828473);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(9,0.3944765);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(10,0.4392464);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(11,0.4159289);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(12,0.2452273);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(13,0.2186379);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(14,0.152887);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(15,0.08824559);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(16,0.08419978);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(17,0.06716308);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(18,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(21,0.08883265);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(22,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinContent(26,0.0908035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(2,0.03738894);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(3,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(4,0.09135126);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(5,0.1546932);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(6,0.2342926);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(7,0.2400872);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(8,0.2063464);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(9,0.1251363);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(10,0.1325865);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(11,0.1315439);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(12,0.09936887);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(13,0.1000794);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(14,0.0800345);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(15,0.06247809);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(16,0.05986179);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(17,0.05134657);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(18,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(21,0.06284459);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(22,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetBinError(26,0.06421094);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt1126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt1127 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt1127","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(2,0.1270015);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(3,1.357577);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(4,4.763544);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(5,12.35613);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(6,18.22588);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(7,16.30394);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(8,13.21128);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(9,10.21981);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(10,7.331702);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(11,5.646803);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(12,3.86748);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(13,3.00611);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(14,2.291371);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(15,1.55673);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(16,1.541447);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(17,1.19333);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(18,0.907995);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(19,0.7430604);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(20,0.6251487);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(21,0.5958016);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(22,0.4104109);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(23,0.3196645);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(24,0.2635427);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(25,0.2115952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinContent(26,1.525885);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(2,0.02640755);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(3,0.08484981);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(4,0.1608376);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(5,0.2585857);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(6,0.3150576);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(7,0.2977337);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(8,0.2676218);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(9,0.2375375);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(10,0.2002979);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(11,0.1749895);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(12,0.1441587);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(13,0.1269758);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(14,0.1118403);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(15,0.09108516);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(16,0.09150831);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(17,0.08042823);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(18,0.07070518);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(19,0.06390526);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(20,0.05774023);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(21,0.05751425);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(22,0.04719224);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(23,0.04169111);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(24,0.03728853);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(25,0.03399083);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetBinError(26,0.09081212);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt1127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt1128 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt1128","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(3,0.009743473);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(4,0.01719026);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(5,0.06391825);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(6,0.08876739);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(7,0.1101045);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(8,0.09324179);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(9,0.08279993);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(10,0.07308986);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(11,0.07546981);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(12,0.06575873);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(13,0.04561527);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(14,0.03176007);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(15,0.03689213);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(16,0.01912647);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(17,0.01506779);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(18,0.01761678);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(19,0.004746372);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(20,0.01379498);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(21,0.005919109);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(22,0.001580653);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(23,0.000856323);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(25,0.00204373);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinContent(26,0.01812896);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(3,0.003524773);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(4,0.004160033);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(5,0.00878492);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(6,0.0109412);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(7,0.01159257);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(8,0.0110334);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(9,0.009982073);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(10,0.009776362);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(11,0.00950481);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(12,0.00818192);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(13,0.007114783);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(14,0.005028298);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(15,0.006049275);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(16,0.004475076);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(17,0.003685842);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(18,0.004244702);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(19,0.001961641);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(20,0.003765443);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(21,0.002239503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(22,0.0006893687);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(23,0.0005519296);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(25,0.00156169);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetBinError(26,0.004396427);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt1,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetName("thsSignal_grouped_wh3l_wz_13TeV_pt1");
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26","thsSignal_grouped_wh3l_wz_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->SetMaximum(0.1277819);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt1129 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt1129","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(3,0.009743473);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(4,0.01719026);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(5,0.06391825);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(6,0.08876739);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(7,0.1101045);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(8,0.09324179);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(9,0.08279993);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(10,0.07308986);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(11,0.07546981);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(12,0.06575873);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(13,0.04561527);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(14,0.03176007);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(15,0.03689213);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(16,0.01912647);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(17,0.01506779);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(18,0.01761678);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(19,0.004746372);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(20,0.01379498);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(21,0.005919109);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(22,0.001580653);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(23,0.000856323);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(25,0.00204373);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinContent(26,0.01812896);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(3,0.003524773);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(4,0.004160033);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(5,0.00878492);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(6,0.0109412);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(7,0.01159257);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(8,0.0110334);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(9,0.009982073);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(10,0.009776362);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(11,0.00950481);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(12,0.00818192);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(13,0.007114783);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(14,0.005028298);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(15,0.006049275);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(16,0.004475076);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(17,0.003685842);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(18,0.004244702);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(19,0.001961641);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(20,0.003765443);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(21,0.002239503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(22,0.0006893687);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(23,0.0005519296);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(25,0.00156169);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetBinError(26,0.004396427);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt1129->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt1,"");
   thsSignal_grouped_wh3l_wz_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3025[25] = {
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
   Double_t _fy3025[25] = {
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
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
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
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,219);
   Graph_Graph3025->SetMinimum(-3.158585);
   Graph_Graph3025->SetMaximum(28.61543);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("2");
   
   Double_t _fx3026[25] = {
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
   Double_t _fy3026[25] = {
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
   Double_t _felx3026[25] = {
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
   Double_t _fely3026[25] = {
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
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,219);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(36.58641);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineStyle(0);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);
   
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
   
   TH1F *hframe_copy130 = new TH1F("hframe_copy130","",1000,10,200);
   hframe_copy130->SetMinimum(0);
   hframe_copy130->SetMaximum(80.49038);
   hframe_copy130->SetDirectory(0);
   hframe_copy130->SetStats(0);
   hframe_copy130->SetLineStyle(0);
   hframe_copy130->SetMarkerStyle(20);
   hframe_copy130->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy130->GetXaxis()->SetNdivisions(506);
   hframe_copy130->GetXaxis()->SetLabelFont(42);
   hframe_copy130->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetXaxis()->SetLabelSize(0.05);
   hframe_copy130->GetXaxis()->SetTitleSize(0.06);
   hframe_copy130->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy130->GetXaxis()->SetTitleFont(42);
   hframe_copy130->GetYaxis()->SetTitle("Events");
   hframe_copy130->GetYaxis()->SetLabelFont(42);
   hframe_copy130->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetYaxis()->SetLabelSize(0.05);
   hframe_copy130->GetYaxis()->SetTitleSize(0.06);
   hframe_copy130->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy130->GetYaxis()->SetTitleFont(42);
   hframe_copy130->GetZaxis()->SetLabelFont(42);
   hframe_copy130->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetZaxis()->SetLabelSize(0.05);
   hframe_copy130->GetZaxis()->SetTitleSize(0.06);
   hframe_copy130->GetZaxis()->SetTitleFont(42);
   hframe_copy130->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt1->Modified();
   ccwh3l_wz_13TeV_pt1->cd();
   ccwh3l_wz_13TeV_pt1->SetSelected(ccwh3l_wz_13TeV_pt1);
}
