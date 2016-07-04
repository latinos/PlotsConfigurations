void c_wh3l_wz_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt1/cc
//=========  (Sat Jul  2 20:39:39 2016) by ROOT version6.02/13
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
   
   TH1F *hframe73 = new TH1F("hframe73","",1000,10,200);
   hframe73->SetMinimum(0);
   hframe73->SetMaximum(80.49038);
   hframe73->SetDirectory(0);
   hframe73->SetStats(0);
   hframe73->SetLineStyle(0);
   hframe73->SetMarkerStyle(20);
   hframe73->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe73->GetXaxis()->SetNdivisions(506);
   hframe73->GetXaxis()->SetLabelFont(42);
   hframe73->GetXaxis()->SetLabelOffset(0.007);
   hframe73->GetXaxis()->SetLabelSize(0.05);
   hframe73->GetXaxis()->SetTitleSize(0.06);
   hframe73->GetXaxis()->SetTitleOffset(0.9);
   hframe73->GetXaxis()->SetTitleFont(42);
   hframe73->GetYaxis()->SetTitle("Events");
   hframe73->GetYaxis()->SetLabelFont(42);
   hframe73->GetYaxis()->SetLabelOffset(0.007);
   hframe73->GetYaxis()->SetLabelSize(0.05);
   hframe73->GetYaxis()->SetTitleSize(0.06);
   hframe73->GetYaxis()->SetTitleOffset(1.25);
   hframe73->GetYaxis()->SetTitleFont(42);
   hframe73->GetZaxis()->SetLabelFont(42);
   hframe73->GetZaxis()->SetLabelOffset(0.007);
   hframe73->GetZaxis()->SetLabelSize(0.05);
   hframe73->GetZaxis()->SetTitleSize(0.06);
   hframe73->GetZaxis()->SetTitleFont(42);
   hframe73->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt1");
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17","thsBackground_grouped_wh3l_wz_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->SetMinimum(-1.201776);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->SetMaximum(24.44929);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt1_stack_17);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt174 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt174","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(2,-0.3489646);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(3,-0.2796651);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(4,0.9735862);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(5,3.531195);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(6,2.966307);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(7,1.048615);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(8,0.8508213);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(9,-0.2653982);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(10,0.6449567);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(11,-0.4170547);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(12,0.9323358);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(13,-0.456847);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(14,0.4543751);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(15,0.05072842);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(16,0.01006685);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(17,-0.01531979);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(18,-0.09765524);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(19,-0.03910978);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(20,0.5315078);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(22,0.5423007);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(23,-0.0005923419);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(24,-0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(25,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinContent(26,-0.05545776);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(2,0.315105);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(3,0.2549931);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(4,1.158255);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(5,1.32712);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(6,1.630497);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(7,1.184071);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(8,1.07714);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(9,0.6923605);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(10,0.5154798);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(11,0.7847211);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(12,0.6877299);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(13,0.2730627);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(14,0.3605465);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(15,0.1391782);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(16,0.01006685);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(17,0.09749799);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(18,0.05865269);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(19,0.03910978);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(20,0.5315078);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(22,0.4525668);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(23,0.0006709784);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(24,0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(25,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetBinError(26,0.1260339);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt175 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt175","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetBinContent(5,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetBinContent(7,0.03274813);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetBinContent(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetBinError(5,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetBinError(7,0.02329387);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetBinError(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt175->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_WW_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt176 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt176","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(2,0.2278352);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(3,0.3331513);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(4,1.120393);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(5,1.44364);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(6,0.8188205);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(7,0.4854716);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(8,-0.0877768);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(9,0.3724096);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(13,0.0928583);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinContent(22,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(2,0.1611082);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(3,0.1932637);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(4,0.3818161);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(5,0.4293633);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(6,0.30352);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(7,0.2727073);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(8,0.08778597);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(9,0.1907857);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(13,0.0928583);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetBinError(22,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt177 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt177","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(2,0.03738894);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(3,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(4,0.2180102);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(5,0.5985359);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(6,1.185264);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(7,1.424086);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(8,0.9828473);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(9,0.3944765);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(10,0.4392464);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(11,0.4159289);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(12,0.2452273);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(13,0.2186379);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(14,0.152887);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(15,0.08824559);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(16,0.08419978);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(17,0.06716308);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(18,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(21,0.08883265);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(22,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinContent(26,0.0908035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(2,0.03738894);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(3,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(4,0.09135126);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(5,0.1546932);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(6,0.2342926);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(7,0.2400872);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(8,0.2063464);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(9,0.1251363);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(10,0.1325865);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(11,0.1315439);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(12,0.09936887);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(13,0.1000794);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(14,0.0800345);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(15,0.06247809);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(16,0.05986179);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(17,0.05134657);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(18,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(21,0.06284459);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(22,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetBinError(26,0.06421094);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt178 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt178","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(2,0.1270015);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(3,1.357577);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(4,4.763544);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(5,12.35613);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(6,18.22588);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(7,16.30394);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(8,13.21128);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(9,10.21981);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(10,7.331702);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(11,5.646803);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(12,3.86748);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(13,3.00611);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(14,2.291371);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(15,1.55673);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(16,1.541447);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(17,1.19333);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(18,0.907995);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(19,0.7430604);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(20,0.6251487);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(21,0.5958016);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(22,0.4104109);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(23,0.3196645);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(24,0.2635427);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(25,0.2115952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinContent(26,1.525885);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(2,0.02640755);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(3,0.08484981);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(4,0.1608376);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(5,0.2585857);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(6,0.3150576);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(7,0.2977337);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(8,0.2676218);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(9,0.2375375);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(10,0.2002979);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(11,0.1749895);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(12,0.1441587);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(13,0.1269758);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(14,0.1118403);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(15,0.09108516);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(16,0.09150831);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(17,0.08042823);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(18,0.07070518);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(19,0.06390526);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(20,0.05774023);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(21,0.05751425);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(22,0.04719224);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(23,0.04169111);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(24,0.03728853);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(25,0.03399083);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetBinError(26,0.09081212);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt179 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt179","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(3,0.009743473);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(4,0.01719026);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(5,0.06391825);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(6,0.08876739);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(7,0.1101045);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(8,0.09324179);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(9,0.08279993);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(10,0.07308986);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(11,0.07546981);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(12,0.06575873);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(13,0.04561527);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(14,0.03176007);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(15,0.03689213);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(16,0.01912647);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(17,0.01506779);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(18,0.01761678);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(19,0.004746372);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(20,0.01379498);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(21,0.005919109);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(22,0.001580653);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(23,0.000856323);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(25,0.00204373);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinContent(26,0.01812896);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(3,0.003524773);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(4,0.004160033);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(5,0.00878492);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(6,0.0109412);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(7,0.01159257);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(8,0.0110334);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(9,0.009982073);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(10,0.009776362);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(11,0.00950481);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(12,0.00818192);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(13,0.007114783);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(14,0.005028298);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(15,0.006049275);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(16,0.004475076);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(17,0.003685842);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(18,0.004244702);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(19,0.001961641);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(20,0.003765443);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(21,0.002239503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(22,0.0006893687);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(23,0.0005519296);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(25,0.00156169);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetBinError(26,0.004396427);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt179->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt1,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetName("thsSignal_grouped_wh3l_wz_13TeV_pt1");
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18","thsSignal_grouped_wh3l_wz_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->SetMaximum(0.1277819);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_pt1_stack_18);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt180 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt180","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(3,0.009743473);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(4,0.01719026);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(5,0.06391825);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(6,0.08876739);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(7,0.1101045);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(8,0.09324179);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(9,0.08279993);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(10,0.07308986);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(11,0.07546981);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(12,0.06575873);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(13,0.04561527);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(14,0.03176007);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(15,0.03689213);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(16,0.01912647);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(17,0.01506779);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(18,0.01761678);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(19,0.004746372);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(20,0.01379498);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(21,0.005919109);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(22,0.001580653);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(23,0.000856323);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(25,0.00204373);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinContent(26,0.01812896);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(3,0.003524773);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(4,0.004160033);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(5,0.00878492);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(6,0.0109412);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(7,0.01159257);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(8,0.0110334);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(9,0.009982073);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(10,0.009776362);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(11,0.00950481);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(12,0.00818192);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(13,0.007114783);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(14,0.005028298);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(15,0.006049275);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(16,0.004475076);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(17,0.003685842);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(18,0.004244702);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(19,0.001961641);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(20,0.003765443);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(21,0.002239503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(22,0.0006893687);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(23,0.0005519296);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(24,0.0002911976);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(25,0.00156169);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetBinError(26,0.004396427);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt180->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt1,"");
   thsSignal_grouped_wh3l_wz_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3017[25] = {
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
   Double_t _fy3017[25] = {
   0,
   0.0432611,
   1.419488,
   7.075533,
   17.9469,
   23.19627,
   19.29486,
   14.95717,
   10.7213,
   8.426835,
   5.718932,
   5.059359,
   2.860759,
   2.898633,
   1.695704,
   1.635714,
   1.245173,
   0.8535125,
   0.7039506,
   1.156657,
   0.6846343,
   1.080157,
   0.3190721,
   0.2054992,
   0.2872843};
   Double_t _felx3017[25] = {
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
   Double_t _fely3017[25] = {
   0,
   0.5540116,
   0.5539907,
   1.650253,
   2.526629,
   2.712289,
   1.945896,
   1.474028,
   1.271037,
   0.9052134,
   1.182294,
   1.005433,
   0.6287134,
   0.5813701,
   0.2150055,
   0.1758391,
   0.2358274,
   0.180296,
   0.1079028,
   0.6185938,
   0.1232559,
   0.6555539,
   0.04442045,
   0.09792983,
   0.1131207};
   Double_t _fehx3017[25] = {
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
   Double_t _fehy3017[25] = {
   0,
   0.5539957,
   0.5537402,
   1.830645,
   2.525889,
   2.711504,
   2.076437,
   1.691799,
   0.8564971,
   0.904922,
   0.8226959,
   1.005339,
   0.6264335,
   0.5800627,
   0.2989466,
   0.1738873,
   0.1545092,
   0.1793798,
   0.1071395,
   0.6184505,
   0.1227037,
   0.6555157,
   0.04420964,
   0.09784412,
   0.1130969};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,219);
   Graph_Graph3017->SetMinimum(-3.152603);
   Graph_Graph3017->SetMaximum(28.54962);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("2");
   
   Double_t _fx3018[25] = {
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
   Double_t _fy3018[25] = {
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
   Double_t _felx3018[25] = {
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
   Double_t _fely3018[25] = {
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
   Double_t _fehx3018[25] = {
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
   Double_t _fehy3018[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,219);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(36.58641);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineStyle(0);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
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
   
   TH1F *hframe_copy81 = new TH1F("hframe_copy81","",1000,10,200);
   hframe_copy81->SetMinimum(0);
   hframe_copy81->SetMaximum(80.49038);
   hframe_copy81->SetDirectory(0);
   hframe_copy81->SetStats(0);
   hframe_copy81->SetLineStyle(0);
   hframe_copy81->SetMarkerStyle(20);
   hframe_copy81->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy81->GetXaxis()->SetNdivisions(506);
   hframe_copy81->GetXaxis()->SetLabelFont(42);
   hframe_copy81->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetXaxis()->SetLabelSize(0.05);
   hframe_copy81->GetXaxis()->SetTitleSize(0.06);
   hframe_copy81->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy81->GetXaxis()->SetTitleFont(42);
   hframe_copy81->GetYaxis()->SetTitle("Events");
   hframe_copy81->GetYaxis()->SetLabelFont(42);
   hframe_copy81->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetYaxis()->SetLabelSize(0.05);
   hframe_copy81->GetYaxis()->SetTitleSize(0.06);
   hframe_copy81->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy81->GetYaxis()->SetTitleFont(42);
   hframe_copy81->GetZaxis()->SetLabelFont(42);
   hframe_copy81->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetZaxis()->SetLabelSize(0.05);
   hframe_copy81->GetZaxis()->SetTitleSize(0.06);
   hframe_copy81->GetZaxis()->SetTitleFont(42);
   hframe_copy81->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt1->Modified();
   ccwh3l_wz_13TeV_pt1->cd();
   ccwh3l_wz_13TeV_pt1->SetSelected(ccwh3l_wz_13TeV_pt1);
}
