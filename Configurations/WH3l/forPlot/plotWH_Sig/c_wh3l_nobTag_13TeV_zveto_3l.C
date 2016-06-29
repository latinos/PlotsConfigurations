void c_wh3l_nobTag_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_nobTag_13TeV_zveto_3l/cc
//=========  (Wed Jun 29 01:51:43 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_nobTag_13TeV_zveto_3l = new TCanvas("ccwh3l_nobTag_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_nobTag_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_nobTag_13TeV_zveto_3l->Range(-20,-9.538175,105,63.8324);
   ccwh3l_nobTag_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_nobTag_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_nobTag_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_nobTag_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_nobTag_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_nobTag_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_nobTag_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_nobTag_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_nobTag_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_nobTag_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_nobTag_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe221 = new TH1F("hframe221","",1000,0,100);
   hframe221->SetMinimum(0);
   hframe221->SetMaximum(60.16387);
   hframe221->SetDirectory(0);
   hframe221->SetStats(0);
   hframe221->SetLineStyle(0);
   hframe221->SetMarkerStyle(20);
   hframe221->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe221->GetXaxis()->SetNdivisions(506);
   hframe221->GetXaxis()->SetLabelFont(42);
   hframe221->GetXaxis()->SetLabelOffset(0.007);
   hframe221->GetXaxis()->SetLabelSize(0.05);
   hframe221->GetXaxis()->SetTitleSize(0.06);
   hframe221->GetXaxis()->SetTitleOffset(0.9);
   hframe221->GetXaxis()->SetTitleFont(42);
   hframe221->GetYaxis()->SetTitle("Events");
   hframe221->GetYaxis()->SetLabelFont(42);
   hframe221->GetYaxis()->SetLabelOffset(0.007);
   hframe221->GetYaxis()->SetLabelSize(0.05);
   hframe221->GetYaxis()->SetTitleSize(0.06);
   hframe221->GetYaxis()->SetTitleOffset(1.25);
   hframe221->GetYaxis()->SetTitleFont(42);
   hframe221->GetZaxis()->SetLabelFont(42);
   hframe221->GetZaxis()->SetLabelOffset(0.007);
   hframe221->GetZaxis()->SetLabelSize(0.05);
   hframe221->GetZaxis()->SetTitleSize(0.06);
   hframe221->GetZaxis()->SetTitleFont(42);
   hframe221->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45 = new TH1F("thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45","thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->SetMinimum(-0.4626484);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->SetMaximum(25.26883);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->SetDirectory(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->SetStats(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->SetLineStyle(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_45);
   
   
   TH1D *new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222 = new TH1D("new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(6,3.962114);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(7,5.353824);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(8,3.627736);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(9,2.965136);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(10,2.033485);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(11,3.346305);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(12,1.935513);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(13,2.73051);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(14,1.240542);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(15,1.009244);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(16,-0.02770332);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(17,0.2083794);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinContent(19,19.9033);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(6,1.635379);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(7,1.67933);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(8,1.307319);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(9,1.362671);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(10,1.361235);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(11,1.495203);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(12,1.200409);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(13,1.226204);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(14,0.8249078);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(15,0.8929173);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(16,0.4349451);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(17,0.1405333);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetBinError(19,3.0005);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetEntries(435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetFillColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->SetLineColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223 = new TH1D("new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinContent(6,0.01821101);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinContent(7,0.03169921);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinContent(8,0.01305253);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinContent(11,0.03276748);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinContent(14,0.01959378);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinContent(19,0.115694);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinError(6,0.01821101);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinError(7,0.02253457);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinError(8,0.01305253);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinError(11,0.02330427);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinError(14,0.01959378);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetBinError(19,0.04234978);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetEntries(17);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetFillColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->SetLineColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224 = new TH1D("new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(6,0.005729023);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(7,0.005207024);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(8,0.006201201);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(9,0.004063306);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(10,0.0008756957);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(11,0.0004989902);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(12,0.0006380157);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(13,0.001188531);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(14,0.001831149);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(18,0.000761464);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinContent(19,0.01651133);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(6,0.001728641);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(7,0.001760183);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(8,0.001930266);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(9,0.001552434);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(10,0.000653447);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(11,0.001018494);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(12,0.0006380157);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(13,0.0008454088);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(14,0.001087725);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(18,0.000761464);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetBinError(19,0.003205585);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetEntries(83);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetFillColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->SetLineColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l224->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225 = new TH1D("new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinContent(6,1.410685);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinContent(7,0.6037691);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinContent(8,0.784352);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinContent(10,0.5724485);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinContent(11,0.2145978);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinContent(12,0.2374217);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinContent(19,0.2866472);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinError(6,0.4256353);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinError(7,0.2638912);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinError(8,0.3214487);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinError(10,0.2310541);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinError(11,0.2318407);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinError(12,0.1714585);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetBinError(19,0.2269456);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetEntries(69);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetFillColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->SetLineColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l225->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226 = new TH1D("new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(6,0.2488851);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(7,0.2751892);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(8,0.1782557);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(10,0.06406219);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(11,0.1138263);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(12,0.1163933);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(14,0.105262);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(16,0.04142581);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinContent(19,0.3002924);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(6,0.0991707);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(7,0.1094591);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(8,0.08951381);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(10,0.04841528);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(11,0.06672132);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(12,0.06955485);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(14,0.05784587);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(16,0.04142581);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetBinError(19,0.1101067);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetEntries(44);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l226->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227 = new TH1D("new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(6,2.118329);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(7,1.948034);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(8,1.736679);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(9,1.557151);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(10,1.51067);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(11,1.279415);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(12,1.176624);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(13,1.11101);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(14,0.8778349);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(15,0.9700546);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(16,0.8567585);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(17,0.0725158);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(18,0.1171749);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinContent(19,3.030487);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(6,0.1069142);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(7,0.1028852);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(8,0.09790421);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(9,0.09233176);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(10,0.09220809);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(11,0.08296229);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(12,0.0807519);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(13,0.07729743);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(14,0.06798162);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(15,0.0723592);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(16,0.06747446);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(17,0.01973707);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(18,0.02542874);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetBinError(19,0.1274946);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetEntries(3754);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetFillColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->SetLineColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(6,0.1015683);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(7,0.0896101);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(8,0.1228677);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(9,0.08964178);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(10,0.09276052);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(11,0.06637973);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(12,0.1007099);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(13,0.07073666);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(14,0.05314318);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(15,0.04208582);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(16,0.02220555);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(17,0.004778157);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(18,0.005721125);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinContent(19,0.4126152);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(6,0.01077119);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(7,0.009271506);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(8,0.01107747);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(9,0.009692236);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(10,0.009838279);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(11,0.008903495);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(12,0.01126792);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(13,0.009489734);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(14,0.008063914);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(15,0.007261085);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(16,0.004889263);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(17,0.00261711);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(18,0.002747118);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetBinError(19,0.02134127);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_nobTag_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46 = new TH1F("thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46","thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->SetMinimum(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->SetMaximum(0.4556543);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->SetDirectory(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->SetStats(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->SetLineStyle(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l_stack_46);
   
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(6,0.1015683);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(7,0.0896101);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(8,0.1228677);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(9,0.08964178);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(10,0.09276052);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(11,0.06637973);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(12,0.1007099);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(13,0.07073666);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(14,0.05314318);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(15,0.04208582);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(16,0.02220555);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(17,0.004778157);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(18,0.005721125);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinContent(19,0.4126152);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(6,0.01077119);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(7,0.009271506);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(8,0.01107747);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(9,0.009692236);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(10,0.009838279);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(11,0.008903495);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(12,0.01126792);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(13,0.009489734);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(14,0.008063914);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(15,0.007261085);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(16,0.004889263);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(17,0.00261711);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(18,0.002747118);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetBinError(19,0.02134127);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l229->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_nobTag_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3045[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3045[20] = {
   0,
   0,
   0,
   0,
   0,
   7.763953,
   8.217722,
   6.346277,
   4.714874,
   4.191983,
   4.987411,
   3.481894,
   3.957647,
   2.245064,
   1.979299,
   0.870481,
   0.2808952,
   0.1179364,
   23.65293,
   0};
   Double_t _felx3045[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3045[20] = {
   0,
   0,
   0,
   0,
   0,
   2.678,
   2.875855,
   2.230786,
   1.912857,
   1.885854,
   2.219023,
   1.682528,
   1.673558,
   1.064856,
   1.028905,
   0.5452537,
   0.1760922,
   0.02640227,
   7.801657,
   0};
   Double_t _fehx3045[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3045[20] = {
   0,
   0,
   0,
   0,
   0,
   2.677673,
   2.875789,
   2.230558,
   1.912794,
   1.88572,
   2.233941,
   1.682607,
   1.673483,
   1.06484,
   1.028847,
   0.1418851,
   0.1760931,
   0.02635735,
   7.801533,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,0,110);
   Graph_Graph3045->SetMinimum(0);
   Graph_Graph3045->SetMaximum(34.59991);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineStyle(0);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("2");
   
   Double_t _fx3046[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3046[20] = {
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
   Double_t _felx3046[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3046[20] = {
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
   Double_t _fehx3046[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3046[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,0,110);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(1.262698);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineStyle(0);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy230 = new TH1F("hframe_copy230","",1000,0,100);
   hframe_copy230->SetMinimum(0);
   hframe_copy230->SetMaximum(60.16387);
   hframe_copy230->SetDirectory(0);
   hframe_copy230->SetStats(0);
   hframe_copy230->SetLineStyle(0);
   hframe_copy230->SetMarkerStyle(20);
   hframe_copy230->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy230->GetXaxis()->SetNdivisions(506);
   hframe_copy230->GetXaxis()->SetLabelFont(42);
   hframe_copy230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetXaxis()->SetLabelSize(0.05);
   hframe_copy230->GetXaxis()->SetTitleSize(0.06);
   hframe_copy230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy230->GetXaxis()->SetTitleFont(42);
   hframe_copy230->GetYaxis()->SetTitle("Events");
   hframe_copy230->GetYaxis()->SetLabelFont(42);
   hframe_copy230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetYaxis()->SetLabelSize(0.05);
   hframe_copy230->GetYaxis()->SetTitleSize(0.06);
   hframe_copy230->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy230->GetYaxis()->SetTitleFont(42);
   hframe_copy230->GetZaxis()->SetLabelFont(42);
   hframe_copy230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetZaxis()->SetLabelSize(0.05);
   hframe_copy230->GetZaxis()->SetTitleSize(0.06);
   hframe_copy230->GetZaxis()->SetTitleFont(42);
   hframe_copy230->Draw("sameaxis");
   ccwh3l_nobTag_13TeV_zveto_3l->Modified();
   ccwh3l_nobTag_13TeV_zveto_3l->cd();
   ccwh3l_nobTag_13TeV_zveto_3l->SetSelected(ccwh3l_nobTag_13TeV_zveto_3l);
}
