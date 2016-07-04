void c_wh3l_Pre_SSSF_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_Pre_SSSF_13TeV_pt2/cc
//=========  (Sun Jul  3 16:48:30 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_SSSF_13TeV_pt2 = new TCanvas("ccwh3l_Pre_SSSF_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_Pre_SSSF_13TeV_pt2->Range(-12,-2.222275,156.75,14.87215);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetFillColor(0);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetBorderSize(2);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetTickx(1);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetTicky(1);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_SSSF_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe131 = new TH1F("hframe131","",1000,15,150);
   hframe131->SetMinimum(0);
   hframe131->SetMaximum(14.01742);
   hframe131->SetDirectory(0);
   hframe131->SetStats(0);
   hframe131->SetLineStyle(0);
   hframe131->SetMarkerStyle(20);
   hframe131->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe131->GetXaxis()->SetNdivisions(506);
   hframe131->GetXaxis()->SetLabelFont(42);
   hframe131->GetXaxis()->SetLabelOffset(0.007);
   hframe131->GetXaxis()->SetLabelSize(0.05);
   hframe131->GetXaxis()->SetTitleSize(0.06);
   hframe131->GetXaxis()->SetTitleOffset(0.9);
   hframe131->GetXaxis()->SetTitleFont(42);
   hframe131->GetYaxis()->SetTitle("Events");
   hframe131->GetYaxis()->SetLabelFont(42);
   hframe131->GetYaxis()->SetLabelOffset(0.007);
   hframe131->GetYaxis()->SetLabelSize(0.05);
   hframe131->GetYaxis()->SetTitleSize(0.06);
   hframe131->GetYaxis()->SetTitleOffset(1.25);
   hframe131->GetYaxis()->SetTitleFont(42);
   hframe131->GetZaxis()->SetLabelFont(42);
   hframe131->GetZaxis()->SetLabelOffset(0.007);
   hframe131->GetZaxis()->SetLabelSize(0.05);
   hframe131->GetZaxis()->SetTitleSize(0.06);
   hframe131->GetZaxis()->SetTitleFont(42);
   hframe131->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->SetName("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27 = new TH1F("thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27","thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2",25,15,150);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->SetMinimum(-0.2187245);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->SetMaximum(7.393865);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->SetStats(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_27);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132 = new TH1D("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132","histo_Fake",25,15,150);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(1,0.7132985);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(2,3.580948);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(3,2.558997);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(4,1.681305);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(5,5.360179);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(6,1.631571);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(7,2.045031);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(8,1.118816);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(9,0.8880042);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(10,0.9652255);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(11,0.444067);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(12,0.4189103);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(13,0.721379);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(15,-0.0005603257);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(17,-0.000561121);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(23,-0.01470217);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinContent(26,0.04799317);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(1,0.4835838);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(2,1.400827);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(3,1.227503);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(4,0.8157841);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(5,1.681597);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(6,0.7446356);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(7,0.9017176);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(8,0.603633);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(9,0.6318067);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(10,0.7216737);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(11,0.3122682);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(12,0.2256143);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(13,0.4258252);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(15,0.0005603257);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(17,0.000561121);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(23,0.01470217);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetBinError(26,0.03916632);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->Add(new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133 = new TH1D("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133","histo_WW",25,15,150);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(1,0.003032596);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(2,0.03141051);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(4,0.02153348);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(5,0.02735206);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(6,0.01595104);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(8,0.03425258);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(9,0.01582978);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(10,0.01632439);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinContent(14,0.02980615);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(1,0.003032596);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(2,0.02221848);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(4,0.01765471);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(5,0.01989084);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(6,0.01595104);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(8,0.02422696);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(9,0.01582978);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(10,0.01632439);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetBinError(14,0.0210913);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->Add(new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134 = new TH1D("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134","histo_VVV",25,15,150);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(1,0.007439426);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(2,0.0130339);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(3,0.03691667);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(4,0.0434992);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(5,0.03103704);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(6,0.02065053);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(7,0.02661875);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(8,0.02463656);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(9,0.02368461);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(10,0.02209479);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(11,0.008984847);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(12,0.005480033);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(13,0.01208491);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(14,0.01013873);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(15,0.004768479);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(16,0.01442928);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(17,0.004200559);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(18,0.004608606);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(19,0.0139502);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(20,0.001271515);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(21,0.001988428);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(22,0.005120303);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(23,0.00544711);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(24,0.002660872);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(25,0.002882218);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinContent(26,0.02044833);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(1,0.004376048);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(2,0.006692816);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(3,0.01135225);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(4,0.01031757);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(5,0.008042003);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(6,0.00954845);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(7,0.007385427);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(8,0.007447722);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(9,0.008062424);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(10,0.007507444);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(11,0.004511895);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(12,0.005157147);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(13,0.006402496);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(14,0.004509013);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(15,0.003182064);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(16,0.005709516);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(17,0.00298072);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(18,0.003262207);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(19,0.0057339);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(20,0.003824938);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(21,0.001988213);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(22,0.003620624);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(23,0.003230301);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(24,0.002660872);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(25,0.002835611);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetBinError(26,0.00651529);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2134->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->Add(new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135 = new TH1D("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135","histo_Vg",25,15,150);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinContent(1,0.1125367);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinContent(2,0.1278116);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinContent(3,-0.1093623);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinContent(4,-0.05384645);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinContent(7,0.122739);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinError(1,0.2054579);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinError(2,0.09152735);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinError(3,0.1093623);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinError(4,0.1182951);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetBinError(7,0.122739);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2135->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->Add(new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136 = new TH1D("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136","histo_ZZ",25,15,150);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetBinContent(1,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetBinContent(2,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetBinContent(3,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetBinContent(8,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetBinError(1,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetBinError(2,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetBinError(3,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetBinError(8,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2136->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137 = new TH1D("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137","histo_WZ",25,15,150);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(1,0.1792799);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(2,0.2245792);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(3,0.2089576);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(4,0.202363);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(5,0.1409872);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(6,0.1333409);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(7,0.06356144);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(8,0.09754187);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(9,0.04827619);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(10,0.03254902);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(11,0.02394877);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(12,0.006239453);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(13,0.03982263);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(14,0.01117847);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(16,0.01768463);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(18,0.005488627);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(19,0.0122908);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(20,0.01555235);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(21,0.004775882);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(22,0.005868614);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(23,0.005827953);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinContent(26,0.01490717);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(1,0.03196882);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(2,0.03501607);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(3,0.0343968);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(4,0.03232868);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(5,0.02784812);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(6,0.02652752);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(7,0.01875279);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(8,0.02304617);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(9,0.01584146);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(10,0.01345548);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(11,0.0119991);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(12,0.005143123);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(13,0.01527739);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(14,0.007906319);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(16,0.009568991);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(18,0.005488627);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(19,0.008721492);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(20,0.009074673);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(21,0.004775882);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(22,0.005868614);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(23,0.005827953);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetBinError(26,0.008723919);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->Add(new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(1,0.03612408);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(2,0.07160001);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(3,0.06096004);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(4,0.06383762);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(5,0.04741449);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(6,0.04994935);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(7,0.03256866);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(8,0.02770663);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(9,0.02366004);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(10,0.01880686);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(11,0.01279659);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(12,0.006401607);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(13,0.01095011);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(14,0.01006273);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(15,0.004324309);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(16,0.004316775);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(17,0.005483022);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(18,0.001559518);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(20,0.001108758);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(21,0.001266534);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(22,0.001199575);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(23,0.0005436716);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(25,0.001323184);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinContent(26,0.006076072);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(1,0.006172938);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(2,0.008501301);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(3,0.007832843);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(4,0.008568234);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(5,0.007127451);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(6,0.007035341);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(7,0.006075515);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(8,0.005395291);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(9,0.005020399);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(10,0.004593078);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(11,0.003572546);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(12,0.00274033);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(13,0.003567073);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(14,0.00370709);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(15,0.002102569);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(16,0.00211894);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(17,0.002822296);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(18,0.001752903);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(20,0.000541543);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(21,0.0006046368);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(22,0.00102373);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(23,0.0003928694);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(25,0.001323184);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetBinError(26,0.002083933);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2,"");
   thsBackground_grouped_wh3l_Pre_SSSF_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2->SetName("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28 = new TH1F("thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28","thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2",25,15,150);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->SetMinimum(-0.0001933849);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->SetMaximum(0.08410638);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->SetStats(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2_stack_28);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139 = new TH1D("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(1,0.03612408);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(2,0.07160001);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(3,0.06096004);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(4,0.06383762);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(5,0.04741449);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(6,0.04994935);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(7,0.03256866);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(8,0.02770663);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(9,0.02366004);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(10,0.01880686);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(11,0.01279659);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(12,0.006401607);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(13,0.01095011);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(14,0.01006273);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(15,0.004324309);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(16,0.004316775);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(17,0.005483022);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(18,0.001559518);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(20,0.001108758);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(21,0.001266534);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(22,0.001199575);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(23,0.0005436716);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(25,0.001323184);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinContent(26,0.006076072);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(1,0.006172938);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(2,0.008501301);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(3,0.007832843);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(4,0.008568234);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(5,0.007127451);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(6,0.007035341);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(7,0.006075515);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(8,0.005395291);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(9,0.005020399);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(10,0.004593078);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(11,0.003572546);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(12,0.00274033);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(13,0.003567073);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(14,0.00370709);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(15,0.002102569);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(16,0.00211894);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(17,0.002822296);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(18,0.001752903);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(20,0.000541543);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(21,0.0006046368);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(22,0.00102373);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(23,0.0003928694);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(25,0.001323184);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetBinError(26,0.002083933);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2139->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2,"");
   thsSignal_grouped_wh3l_Pre_SSSF_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3027[25] = {
   17.7,
   23.1,
   28.5,
   33.9,
   39.3,
   44.7,
   50.1,
   55.5,
   60.9,
   66.3,
   71.7,
   77.1,
   82.5,
   87.9,
   93.3,
   98.7,
   104.1,
   109.5,
   114.9,
   120.3,
   125.7,
   131.1,
   136.5,
   141.9,
   147.3};
   Double_t _fy3027[25] = {
   1.058301,
   4.017626,
   2.743197,
   1.894855,
   5.559556,
   1.801513,
   2.25795,
   1.310384,
   0.9757948,
   1.036194,
   0.4770007,
   0.4306298,
   0.7732866,
   0.05112335,
   0.004208153,
   0.03211392,
   0.003639437,
   0.01009723,
   0.026241,
   0.01682387,
   0.006764309,
   0.01098892,
   -0.003427109,
   0.002660872,
   0.002882218};
   Double_t _felx3027[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fely3027[25] = {
   0.7230601,
   2.029488,
   1.68799,
   1.156303,
   2.557156,
   0.9803954,
   1.27152,
   0.7967969,
   0.7403349,
   0.8310319,
   0.3637769,
   0.2778172,
   0.513943,
   0.03520428,
   0.006066609,
   0.02059894,
   0.005500869,
   0.00991012,
   0.02010756,
   0.01036838,
   0.007052977,
   0.01078582,
   0.0249181,
   0.003764716,
   0.004044933};
   Double_t _fehx3027[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fehy3027[25] = {
   0.8108621,
   2.029483,
   1.687985,
   1.101351,
   2.557154,
   0.9803925,
   1.271519,
   0.7967907,
   0.7403332,
   0.8310308,
   0.3637766,
   0.2778188,
   0.5139406,
   0.0351553,
   0.006066636,
   0.02059245,
   0.005500894,
   0.009895033,
   0.0201033,
   0.01291503,
   0.007051101,
   0.01078293,
   0.02491691,
   0.003764772,
   0.004045059};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,1.5,163.5);
   Graph_Graph3027->SetMinimum(-0.8428507);
   Graph_Graph3027->SetMaximum(8.931215);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineStyle(0);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2");
   
   Double_t _fx3028[25] = {
   17.7,
   23.1,
   28.5,
   33.9,
   39.3,
   44.7,
   50.1,
   55.5,
   60.9,
   66.3,
   71.7,
   77.1,
   82.5,
   87.9,
   93.3,
   98.7,
   104.1,
   109.5,
   114.9,
   120.3,
   125.7,
   131.1,
   136.5,
   141.9,
   147.3};
   Double_t _fy3028[25] = {
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
   Double_t _felx3028[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fely3028[25] = {
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
   Double_t _fehx3028[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fehy3028[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,1.5,163.5);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.262698);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineStyle(0);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_SSSF_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_SSSF_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_SSSF_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_SSSF_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_SSSF_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_SSSF_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_SSSF_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_SSSF_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy140 = new TH1F("hframe_copy140","",1000,15,150);
   hframe_copy140->SetMinimum(0);
   hframe_copy140->SetMaximum(14.01742);
   hframe_copy140->SetDirectory(0);
   hframe_copy140->SetStats(0);
   hframe_copy140->SetLineStyle(0);
   hframe_copy140->SetMarkerStyle(20);
   hframe_copy140->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy140->GetXaxis()->SetNdivisions(506);
   hframe_copy140->GetXaxis()->SetLabelFont(42);
   hframe_copy140->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetXaxis()->SetLabelSize(0.05);
   hframe_copy140->GetXaxis()->SetTitleSize(0.06);
   hframe_copy140->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy140->GetXaxis()->SetTitleFont(42);
   hframe_copy140->GetYaxis()->SetTitle("Events");
   hframe_copy140->GetYaxis()->SetLabelFont(42);
   hframe_copy140->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetYaxis()->SetLabelSize(0.05);
   hframe_copy140->GetYaxis()->SetTitleSize(0.06);
   hframe_copy140->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy140->GetYaxis()->SetTitleFont(42);
   hframe_copy140->GetZaxis()->SetLabelFont(42);
   hframe_copy140->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetZaxis()->SetLabelSize(0.05);
   hframe_copy140->GetZaxis()->SetTitleSize(0.06);
   hframe_copy140->GetZaxis()->SetTitleFont(42);
   hframe_copy140->Draw("sameaxis");
   ccwh3l_Pre_SSSF_13TeV_pt2->Modified();
   ccwh3l_Pre_SSSF_13TeV_pt2->cd();
   ccwh3l_Pre_SSSF_13TeV_pt2->SetSelected(ccwh3l_Pre_SSSF_13TeV_pt2);
}
