void c_wh3l_wz_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_nvtx/cc
//=========  (Tue Jun 28 16:48:59 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_nvtx = new TCanvas("ccwh3l_wz_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_wz_13TeV_nvtx->Range(-8,-13.1948,42,88.30368);
   ccwh3l_wz_13TeV_nvtx->SetFillColor(0);
   ccwh3l_wz_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_wz_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_wz_13TeV_nvtx->SetTickx(1);
   ccwh3l_wz_13TeV_nvtx->SetTicky(1);
   ccwh3l_wz_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe89 = new TH1F("hframe89","",1000,0,40);
   hframe89->SetMinimum(0);
   hframe89->SetMaximum(83.22876);
   hframe89->SetDirectory(0);
   hframe89->SetStats(0);
   hframe89->SetLineStyle(0);
   hframe89->SetMarkerStyle(20);
   hframe89->GetXaxis()->SetTitle("nvtx");
   hframe89->GetXaxis()->SetNdivisions(506);
   hframe89->GetXaxis()->SetLabelFont(42);
   hframe89->GetXaxis()->SetLabelOffset(0.007);
   hframe89->GetXaxis()->SetLabelSize(0.05);
   hframe89->GetXaxis()->SetTitleSize(0.06);
   hframe89->GetXaxis()->SetTitleOffset(0.9);
   hframe89->GetXaxis()->SetTitleFont(42);
   hframe89->GetYaxis()->SetTitle("Events");
   hframe89->GetYaxis()->SetLabelFont(42);
   hframe89->GetYaxis()->SetLabelOffset(0.007);
   hframe89->GetYaxis()->SetLabelSize(0.05);
   hframe89->GetYaxis()->SetTitleSize(0.06);
   hframe89->GetYaxis()->SetTitleOffset(1.25);
   hframe89->GetYaxis()->SetTitleFont(42);
   hframe89->GetZaxis()->SetLabelFont(42);
   hframe89->GetZaxis()->SetLabelOffset(0.007);
   hframe89->GetZaxis()->SetLabelSize(0.05);
   hframe89->GetZaxis()->SetTitleSize(0.06);
   hframe89->GetZaxis()->SetTitleFont(42);
   hframe89->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_wz_13TeV_nvtx");
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12","thsBackground_grouped_wh3l_wz_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->SetMinimum(-0.9720683);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->SetMaximum(16.93937);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_12);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_nvtx90 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_nvtx90","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(5,-0.6096837);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(6,-0.4244189);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(7,0.5310134);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(8,3.508278);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(9,0.06043914);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(10,0.6224386);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(11,2.043073);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(12,3.211894);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(13,0.7640539);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(14,-0.009719265);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(15,-0.5019884);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(16,1.143175);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(17,-0.1404655);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(18,0.286662);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(19,0.07836232);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(20,0.2177684);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(21,-0.1589375);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(22,-0.01182792);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(23,-0.05886551);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinContent(30,-0.0005641188);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(5,0.2575394);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(6,0.2281865);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(7,0.7087689);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(8,1.539142);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(9,1.032507);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(10,0.8183658);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(11,1.340481);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(12,1.498443);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(13,0.7349613);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(14,0.8084151);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(15,0.3886881);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(16,0.7315439);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(17,0.1549514);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(18,0.5711945);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(19,0.159786);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(20,0.1859127);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(21,0.1080211);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(22,0.01182792);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(23,0.05886551);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetBinError(30,0.0005641188);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx90->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_nvtx91 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_nvtx91","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetBinContent(10,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetBinContent(11,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetBinContent(12,0.02551711);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetBinContent(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetBinError(10,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetBinError(11,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetBinError(12,0.01822775);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetBinError(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx91->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_WW_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_nvtx92 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_nvtx92","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(2,0.0007728142);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(4,0.001210541);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(5,0.00768515);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(6,0.008691805);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(7,0.01485065);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(8,0.0185478);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(9,0.01784791);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(10,0.02231529);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(11,0.01544032);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(12,0.01312742);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(13,0.01504461);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(14,0.009643691);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(15,0.005214141);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(16,0.006157697);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(17,0.002512897);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(18,0.001335747);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(19,0.001377815);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(20,0.0004218455);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(21,1.946473e-07);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(22,0.0003082858);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinContent(26,2.386686e-10);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(2,0.0007728142);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(4,0.001210541);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(5,0.002538762);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(6,0.002620812);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(7,0.003363584);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(8,0.003837545);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(9,0.003654914);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(10,0.004117738);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(11,0.003364022);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(12,0.003097851);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(13,0.002982384);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(14,0.002269061);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(15,0.001808527);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(16,0.001664699);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(17,0.001096246);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(18,0.0006462245);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(19,0.000732462);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(20,0.0002444268);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(21,1.946473e-07);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(22,0.0003082858);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetBinError(26,2.386686e-10);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx92->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_nvtx93 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_nvtx93","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(7,0.3709568);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(8,0.4982107);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(9,0.3519486);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(10,0.6081493);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(11,0.4006903);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(12,0.7899634);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(13,0.5311622);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(14,0.2975123);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(15,0.1633457);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(16,0.5876691);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(17,-0.01878599);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(18,0.3961797);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(19,0.02547608);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(21,0.03677323);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(22,-0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(25,3.389801e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinContent(27,9.17363e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(7,0.2147378);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(8,0.2825916);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(9,0.2036167);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(10,0.2551473);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(11,0.2028598);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(12,0.3653162);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(13,0.2379959);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(14,0.1730802);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(15,0.1161148);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(16,0.2390373);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(17,0.1451509);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(18,0.2053596);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(19,0.02547608);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(21,0.03677323);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(22,0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(25,2.780162e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetBinError(27,9.17363e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx93->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(4,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(5,0.2545422);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(6,0.3455878);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(7,0.7046403);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(8,0.9927804);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(9,0.926241);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(10,1.209517);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(11,0.6445234);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(12,0.8036749);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(13,0.6921155);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(14,0.2727762);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(15,0.2851896);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(16,0.3723966);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(17,0.3069031);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(18,0.1771063);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(19,0.09960521);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(20,0.081984);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(21,0.0653962);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(24,0.02757244);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(27,0.002374282);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(28,0.004849092);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinContent(39,5.235803e-13);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(4,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(5,0.1150057);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(6,0.1227156);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(7,0.1777906);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(8,0.2124295);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(9,0.2107708);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(10,0.2305036);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(11,0.1602509);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(12,0.1766517);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(13,0.1538454);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(14,0.1043174);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(15,0.1006101);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(16,0.1106948);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(17,0.1060919);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(18,0.07777423);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(19,0.05147685);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(20,0.05066639);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(21,0.04212915);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(24,0.02757244);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(27,0.002374282);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(28,0.004849092);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetBinError(39,5.235803e-13);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx94->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_nvtx95 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_nvtx95","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(2,0.04935735);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(3,0.3831142);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(4,1.347992);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(5,2.885187);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(6,5.513447);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(7,8.447567);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(8,10.97283);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(9,12.33348);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(10,13.35613);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(11,12.73383);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(12,11.28856);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(13,9.079776);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(14,6.881847);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(15,4.604353);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(16,3.406381);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(17,2.096844);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(18,1.470949);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(19,0.8548838);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(20,0.4250012);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(21,0.2710986);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(22,0.1335616);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(23,0.04214756);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(24,0.0233657);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(25,0.01855784);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(26,0.009176801);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(27,0.003693751);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(28,0.002151581);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(29,0.001611183);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(30,0.0006865517);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(31,1.837325e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(32,6.893778e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinContent(38,1.404431e-13);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(2,0.0178807);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(3,0.04964706);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(4,0.09288218);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(5,0.1345211);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(6,0.1835683);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(7,0.2249459);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(8,0.2525888);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(9,0.264235);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(10,0.2721002);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(11,0.2629185);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(12,0.2437691);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(13,0.2150114);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(14,0.1853547);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(15,0.1488076);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(16,0.1251332);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(17,0.0970083);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(18,0.07801908);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(19,0.05907851);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(20,0.03876826);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(21,0.03122981);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(22,0.0211);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(23,0.01026929);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(24,0.007108383);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(25,0.006927361);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(26,0.005519943);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(27,0.002049928);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(28,0.001523363);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(29,0.001082697);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(30,0.0006864176);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(31,1.837325e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(32,6.893778e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetBinError(38,1.404431e-13);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx95->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_wz_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Draw("hist same");
   
   Double_t _fx3023[40] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5};
   Double_t _fy3023[40] = {
   0,
   0.05013016,
   0.3831142,
   1.410184,
   2.537731,
   5.443307,
   10.06903,
   15.99064,
   13.68996,
   15.83671,
   15.85495,
   16.13273,
   11.08215,
   7.466375,
   4.556114,
   5.515779,
   2.247009,
   2.332233,
   1.059705,
   0.7251755,
   0.2143308,
   0.09600891,
   -0.01671795,
   0.05093814,
   0.01856123,
   0.009176802,
   0.006077207,
   0.007000673,
   0.001611183,
   0.0001224329,
   1.837325e-06,
   6.893778e-06,
   0,
   0,
   0,
   0,
   0,
   1.404431e-13,
   5.235803e-13,
   0};
   Double_t _felx3023[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3023[40] = {
   0,
   0.01865352,
   0.04964707,
   0.1550824,
   0.5414808,
   0.5520603,
   1.163188,
   2.521147,
   0.7437633,
   1.415736,
   2.079854,
   2.499151,
   1.364601,
   1.287855,
   0.7709798,
   1.256082,
   0.5061172,
   0.6543227,
   0.2164341,
   0.2832381,
   0.2233205,
   0.05937942,
   0.07135464,
   0.03468881,
   0.006930142,
   0.005519944,
   0.004433851,
   0.006373799,
   0.001082697,
   0.001261936,
   1.837325e-06,
   6.893778e-06,
   0,
   0,
   0,
   0,
   0,
   1.404431e-13,
   5.237711e-13,
   0};
   Double_t _fehx3023[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3023[40] = {
   0,
   0.01865353,
   0.04964707,
   0.1550824,
   0.5414813,
   0.5520599,
   1.339441,
   2.521147,
   1.715238,
   1.610049,
   2.079854,
   2.499155,
   1.364602,
   0.4893292,
   0.7709798,
   1.256082,
   0.3659668,
   0.9370772,
   0.2974999,
   0.2832381,
   0.2233205,
   0.05937942,
   0.07135464,
   0.03468882,
   0.006930141,
   0.005519943,
   0.004433851,
   0.006373799,
   0.001082697,
   0.001261936,
   1.837325e-06,
   6.893778e-06,
   0,
   0,
   0,
   0,
   0,
   1.404431e-13,
   5.237711e-13,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,44);
   Graph_Graph3023->SetMinimum(-1.960069);
   Graph_Graph3023->SetMaximum(20.50388);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t _fx3024[40] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5};
   Double_t _fy3024[40] = {
   0,
   0,
   0,
   0,
   8,
   9,
   15,
   11,
   22,
   19,
   28,
   11,
   9,
   12,
   8,
   4,
   3,
   2,
   2,
   1,
   2,
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
   0,
   0,
   0,
   0};
   Double_t _felx3024[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3024[40] = {
   0,
   0,
   0,
   0,
   2.768432,
   2.943511,
   3.829449,
   3.265636,
   4.654589,
   4.320299,
   5.259811,
   3.265636,
   2.943511,
   3.415326,
   2.768432,
   1.914367,
   1.632727,
   1.29183,
   1.29183,
   0.8272524,
   1.29183,
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
   0,
   0,
   0,
   0};
   Double_t _fehx3024[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3024[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   3.94522,
   4.110286,
   4.958839,
   4.416609,
   5.761485,
   5.435307,
   6.354577,
   4.416609,
   4.110286,
   4.559911,
   3.94522,
   3.162815,
   2.918242,
   2.63791,
   2.63791,
   2.29957,
   2.63791,
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
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,44);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(37.79003);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_nvtx","Data","EPL");
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
   
   TH1F *hframe_copy96 = new TH1F("hframe_copy96","",1000,0,40);
   hframe_copy96->SetMinimum(0);
   hframe_copy96->SetMaximum(83.22876);
   hframe_copy96->SetDirectory(0);
   hframe_copy96->SetStats(0);
   hframe_copy96->SetLineStyle(0);
   hframe_copy96->SetMarkerStyle(20);
   hframe_copy96->GetXaxis()->SetTitle("nvtx");
   hframe_copy96->GetXaxis()->SetNdivisions(506);
   hframe_copy96->GetXaxis()->SetLabelFont(42);
   hframe_copy96->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy96->GetXaxis()->SetLabelSize(0.05);
   hframe_copy96->GetXaxis()->SetTitleSize(0.06);
   hframe_copy96->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy96->GetXaxis()->SetTitleFont(42);
   hframe_copy96->GetYaxis()->SetTitle("Events");
   hframe_copy96->GetYaxis()->SetLabelFont(42);
   hframe_copy96->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy96->GetYaxis()->SetLabelSize(0.05);
   hframe_copy96->GetYaxis()->SetTitleSize(0.06);
   hframe_copy96->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy96->GetYaxis()->SetTitleFont(42);
   hframe_copy96->GetZaxis()->SetLabelFont(42);
   hframe_copy96->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy96->GetZaxis()->SetLabelSize(0.05);
   hframe_copy96->GetZaxis()->SetTitleSize(0.06);
   hframe_copy96->GetZaxis()->SetTitleFont(42);
   hframe_copy96->Draw("sameaxis");
   ccwh3l_wz_13TeV_nvtx->Modified();
   ccwh3l_wz_13TeV_nvtx->cd();
   ccwh3l_wz_13TeV_nvtx->SetSelected(ccwh3l_wz_13TeV_nvtx);
}
