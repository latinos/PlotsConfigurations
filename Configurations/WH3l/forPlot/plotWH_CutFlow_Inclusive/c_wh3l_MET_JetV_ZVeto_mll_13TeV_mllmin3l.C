void c_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 16:19:22 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Range(-28,-1.884527,209.5,12.61184);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe451 = new TH1F("hframe451","",1000,10,200);
   hframe451->SetMinimum(0);
   hframe451->SetMaximum(11.88702);
   hframe451->SetDirectory(0);
   hframe451->SetStats(0);
   hframe451->SetLineStyle(0);
   hframe451->SetMarkerStyle(20);
   hframe451->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe451->GetXaxis()->SetNdivisions(506);
   hframe451->GetXaxis()->SetLabelFont(42);
   hframe451->GetXaxis()->SetLabelOffset(0.007);
   hframe451->GetXaxis()->SetLabelSize(0.05);
   hframe451->GetXaxis()->SetTitleSize(0.06);
   hframe451->GetXaxis()->SetTitleOffset(0.9);
   hframe451->GetXaxis()->SetTitleFont(42);
   hframe451->GetYaxis()->SetTitle("Events");
   hframe451->GetYaxis()->SetLabelFont(42);
   hframe451->GetYaxis()->SetLabelOffset(0.007);
   hframe451->GetYaxis()->SetLabelSize(0.05);
   hframe451->GetYaxis()->SetTitleSize(0.06);
   hframe451->GetYaxis()->SetTitleOffset(1.25);
   hframe451->GetYaxis()->SetTitleFont(42);
   hframe451->GetZaxis()->SetLabelFont(42);
   hframe451->GetZaxis()->SetLabelOffset(0.007);
   hframe451->GetZaxis()->SetLabelSize(0.05);
   hframe451->GetZaxis()->SetTitleSize(0.06);
   hframe451->GetZaxis()->SetTitleFont(42);
   hframe451->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->SetMinimum(-0.5415397);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->SetMaximum(4.992548);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_91);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(1,0.3565084);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(2,1.811932);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(3,1.607775);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(4,2.696661);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(5,1.91562);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(6,1.145918);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(7,-0.02201848);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(8,-0.1109757);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinContent(9,0.3274007);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(1,0.8980481);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(2,0.9062131);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(3,0.883223);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(4,1.473938);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(5,0.8838968);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(6,1.039414);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(7,0.1199198);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(8,0.1037094);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetBinError(9,0.3670586);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l452->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinContent(4,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinContent(6,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinError(4,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinError(6,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l453->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(1,0.01878614);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(2,0.04007982);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(3,0.03336873);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(4,0.06210694);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(5,0.07038427);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(6,0.03416787);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(7,0.01856171);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(8,0.01464064);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(9,0.01295399);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinContent(10,0.009812463);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(1,0.006443553);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(2,0.01111971);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(3,0.008556359);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(4,0.01244328);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(5,0.01333841);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(6,0.009668208);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(7,0.006396713);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(8,0.005603047);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(9,0.0075953);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetBinError(10,0.004709074);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l454->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinContent(1,0.3820383);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinContent(2,0.3075112);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinContent(3,0.4384879);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinContent(4,0.4695703);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinContent(5,0.4647019);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinContent(6,0.5858595);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinError(1,0.1831067);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinError(2,0.2412625);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinError(3,0.2109827);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinError(4,0.2707473);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinError(5,0.2532026);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetBinError(6,0.2264765);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l455->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinContent(1,0.1184806);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinContent(2,0.0779526);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinContent(3,0.132816);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinContent(4,0.05331504);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinContent(5,0.07486387);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinContent(6,0.09445183);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinContent(7,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinContent(9,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinError(1,0.06857912);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinError(2,0.0576159);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinError(3,0.06761644);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinError(4,0.04178168);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinError(5,0.05403712);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinError(6,0.06701456);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinError(7,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetBinError(9,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l456->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(1,1.164584);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(2,1.364976);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(3,1.53854);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(4,1.289302);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(5,0.8178967);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(6,0.752057);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(7,0.1689606);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(8,0.1285872);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(9,0.09382656);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinContent(10,0.07048525);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(1,0.07927825);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(2,0.08597056);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(3,0.09167351);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(4,0.08437508);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(5,0.06611298);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(6,0.06386561);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(7,0.02986237);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(8,0.02610465);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(9,0.02237739);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetBinError(10,0.0198639);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l457->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(1,0.09627287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(2,0.16464);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(3,0.181667);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(4,0.1552605);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(5,0.1221738);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(6,0.06109137);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(7,0.02319443);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(8,0.004353786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinContent(9,0.003354065);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(1,0.01116642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(2,0.01492996);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(3,0.01512636);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(4,0.01342072);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(5,0.01073253);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(6,0.007458207);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(7,0.005195418);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(8,0.001067668);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetBinError(9,0.001290276);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l458->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->SetMaximum(0.206633);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_92);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(1,0.09627287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(2,0.16464);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(3,0.181667);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(4,0.1552605);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(5,0.1221738);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(6,0.06109137);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(7,0.02319443);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(8,0.004353786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinContent(9,0.003354065);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(1,0.01116642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(2,0.01492996);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(3,0.01512636);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(4,0.01342072);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(5,0.01073253);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(6,0.007458207);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(7,0.005195418);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(8,0.001067668);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetBinError(9,0.001290276);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l459->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3091[20] = {
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
   Double_t _fy3091[20] = {
   2.055701,
   3.602452,
   3.767112,
   4.599547,
   3.343467,
   2.626928,
   0.1940664,
   0.03225215,
   0.4794594,
   0.09450611,
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
   Double_t _felx3091[20] = {
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
   Double_t _fely3091[20] = {
   0.7275228,
   1.452316,
   1.400949,
   2.127166,
   1.438985,
   1.477431,
   0.1858449,
   0.1416719,
   0.4188485,
   0.03991655,
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
   Double_t _fehx3091[20] = {
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
   Double_t _fehy3091[20] = {
   1.260764,
   1.452254,
   1.400672,
   2.127098,
   1.438939,
   1.477394,
   0.08915854,
   0.1416603,
   0.457103,
   0.039912,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3091,_fy3091,_felx3091,_fehx3091,_fely3091,_fehy3091);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3091 = new TH1F("Graph_Graph3091","",100,0,219);
   Graph_Graph3091->SetMinimum(-0.7930262);
   Graph_Graph3091->SetMaximum(7.410251);
   Graph_Graph3091->SetDirectory(0);
   Graph_Graph3091->SetStats(0);
   Graph_Graph3091->SetLineStyle(0);
   Graph_Graph3091->SetMarkerStyle(20);
   Graph_Graph3091->GetXaxis()->SetLabelFont(42);
   Graph_Graph3091->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3091->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3091->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3091->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3091->GetXaxis()->SetTitleFont(42);
   Graph_Graph3091->GetYaxis()->SetLabelFont(42);
   Graph_Graph3091->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3091->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3091->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3091->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3091->GetYaxis()->SetTitleFont(42);
   Graph_Graph3091->GetZaxis()->SetLabelFont(42);
   Graph_Graph3091->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3091->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3091->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3091->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3091);
   
   grae->Draw("2");
   
   Double_t _fx3092[20] = {
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
   Double_t _fy3092[20] = {
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
   Double_t _felx3092[20] = {
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
   Double_t _fely3092[20] = {
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
   Double_t _fehx3092[20] = {
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
   Double_t _fehy3092[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3092,_fy3092,_felx3092,_fehx3092,_fely3092,_fehy3092);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3092 = new TH1F("Graph_Graph3092","",100,0,219);
   Graph_Graph3092->SetMinimum(0);
   Graph_Graph3092->SetMaximum(1.262698);
   Graph_Graph3092->SetDirectory(0);
   Graph_Graph3092->SetStats(0);
   Graph_Graph3092->SetLineStyle(0);
   Graph_Graph3092->SetMarkerStyle(20);
   Graph_Graph3092->GetXaxis()->SetLabelFont(42);
   Graph_Graph3092->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3092->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3092->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3092->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3092->GetXaxis()->SetTitleFont(42);
   Graph_Graph3092->GetYaxis()->SetLabelFont(42);
   Graph_Graph3092->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3092->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3092->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3092->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3092->GetYaxis()->SetTitleFont(42);
   Graph_Graph3092->GetZaxis()->SetLabelFont(42);
   Graph_Graph3092->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3092->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3092->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3092->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3092);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy460 = new TH1F("hframe_copy460","",1000,10,200);
   hframe_copy460->SetMinimum(0);
   hframe_copy460->SetMaximum(11.88702);
   hframe_copy460->SetDirectory(0);
   hframe_copy460->SetStats(0);
   hframe_copy460->SetLineStyle(0);
   hframe_copy460->SetMarkerStyle(20);
   hframe_copy460->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy460->GetXaxis()->SetNdivisions(506);
   hframe_copy460->GetXaxis()->SetLabelFont(42);
   hframe_copy460->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy460->GetXaxis()->SetLabelSize(0.05);
   hframe_copy460->GetXaxis()->SetTitleSize(0.06);
   hframe_copy460->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy460->GetXaxis()->SetTitleFont(42);
   hframe_copy460->GetYaxis()->SetTitle("Events");
   hframe_copy460->GetYaxis()->SetLabelFont(42);
   hframe_copy460->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy460->GetYaxis()->SetLabelSize(0.05);
   hframe_copy460->GetYaxis()->SetTitleSize(0.06);
   hframe_copy460->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy460->GetYaxis()->SetTitleFont(42);
   hframe_copy460->GetZaxis()->SetLabelFont(42);
   hframe_copy460->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy460->GetZaxis()->SetLabelSize(0.05);
   hframe_copy460->GetZaxis()->SetTitleSize(0.06);
   hframe_copy460->GetZaxis()->SetTitleFont(42);
   hframe_copy460->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l);
}
