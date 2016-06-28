void c_wh3l_wz_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_nvtx/cc
//=========  (Tue Jun 28 02:22:44 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_nvtx = new TCanvas("ccwh3l_wz_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_wz_13TeV_nvtx->Range(-8,-15.35608,42,102.7676);
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
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,40);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(96.86141);
   hframe21->SetDirectory(0);
   hframe21->SetStats(0);
   hframe21->SetLineStyle(0);
   hframe21->SetMarkerStyle(20);
   hframe21->GetXaxis()->SetTitle("nvtx");
   hframe21->GetXaxis()->SetNdivisions(506);
   hframe21->GetXaxis()->SetLabelFont(42);
   hframe21->GetXaxis()->SetLabelOffset(0.007);
   hframe21->GetXaxis()->SetLabelSize(0.05);
   hframe21->GetXaxis()->SetTitleSize(0.06);
   hframe21->GetXaxis()->SetTitleOffset(0.9);
   hframe21->GetXaxis()->SetTitleFont(42);
   hframe21->GetYaxis()->SetTitle("Events");
   hframe21->GetYaxis()->SetLabelFont(42);
   hframe21->GetYaxis()->SetLabelOffset(0.007);
   hframe21->GetYaxis()->SetLabelSize(0.05);
   hframe21->GetYaxis()->SetTitleSize(0.06);
   hframe21->GetYaxis()->SetTitleOffset(1.25);
   hframe21->GetYaxis()->SetTitleFont(42);
   hframe21->GetZaxis()->SetLabelFont(42);
   hframe21->GetZaxis()->SetLabelOffset(0.007);
   hframe21->GetZaxis()->SetLabelSize(0.05);
   hframe21->GetZaxis()->SetTitleSize(0.06);
   hframe21->GetZaxis()->SetTitleFont(42);
   hframe21->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_wz_13TeV_nvtx");
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5","thsBackground_grouped_wh3l_wz_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetMinimum(-1.160431);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetMaximum(10.35734);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_nvtx22 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_nvtx22","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(5,-0.5320418);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(6,-0.2415492);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(7,0.3547267);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(8,4.469843);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(9,-0.0974734);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(10,0.3214057);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(11,3.476207);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(12,6.877308);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(13,1.318192);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(14,-0.05574239);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(15,-0.05556876);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(16,1.152052);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(17,0.2939878);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(18,0.286662);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(19,-0.1077257);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(20,0.853585);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(21,-0.1589375);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(22,-0.01182792);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(23,-0.05886551);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(30,-0.0005641188);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(5,0.2689885);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(6,0.2635685);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(7,0.8137826);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(8,1.673281);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(9,1.062958);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(10,0.8541039);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(11,1.689326);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(12,2.039645);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(13,0.8452217);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(14,0.8097241);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(15,0.492534);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(16,0.7503368);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(17,0.4654225);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(18,0.5711945);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(19,0.245276);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(20,0.5751418);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(21,0.1080211);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(22,0.01182792);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(23,0.05886551);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(30,0.0005641188);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetEntries(419);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_nvtx23 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_nvtx23","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinContent(10,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinContent(11,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinContent(12,0.02551711);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinContent(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinError(10,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinError(11,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinError(12,0.01822775);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinError(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_WW_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_nvtx24 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_nvtx24","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(2,0.0007728142);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(4,0.001210541);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(5,0.00768515);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(6,0.008691805);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(7,0.01485065);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(8,0.01971558);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(9,0.0197481);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(10,0.02460828);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(11,0.01602105);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(12,0.01372642);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(13,0.01605355);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(14,0.009643691);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(15,0.005214141);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(16,0.006593115);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(17,0.002782526);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(18,0.001335747);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(19,0.001377815);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(20,0.0004218455);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(21,1.946473e-07);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(22,0.0003082858);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(26,2.386686e-10);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(2,0.0007728142);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(4,0.001210541);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(5,0.002538762);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(6,0.002620812);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(7,0.003363584);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(8,0.003925569);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(9,0.003938694);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(10,0.004278797);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(11,0.003525962);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(12,0.003336973);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(13,0.003066846);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(14,0.002269061);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(15,0.001808527);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(16,0.001720701);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(17,0.001112757);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(18,0.0006462245);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(19,0.000732462);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(20,0.0002444268);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(21,1.946473e-07);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(22,0.0003082858);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(26,2.386686e-10);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetEntries(349);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_nvtx25 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_nvtx25","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(6,0.1330568);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(7,0.3709568);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(8,0.7555442);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(9,0.3431355);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(10,1.456739);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(11,0.9102768);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(12,0.9536349);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(13,0.8724921);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(14,0.5909478);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(15,0.3526471);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(16,0.5876691);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(17,0.1242211);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(18,0.4936557);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(19,0.04889042);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(21,0.03677323);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(22,-0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(25,3.436353e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(27,9.17363e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(6,0.1330568);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(7,0.2147378);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(8,0.3794173);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(9,0.2972349);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(10,0.4025714);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(11,0.3013396);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(12,0.3822678);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(13,0.3249602);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(14,0.2458531);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(15,0.2833784);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(16,0.2390373);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(17,0.1769381);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(18,0.2173914);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(19,0.03460148);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(21,0.03677323);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(22,0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(25,2.780552e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(27,9.17363e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetEntries(113);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(4,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(5,0.3026724);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(6,0.5269366);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(7,0.9681742);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(8,1.159991);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(9,1.145072);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(10,1.515921);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(11,1.047574);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(12,0.9365367);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(13,0.948617);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(14,0.5445015);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(15,0.5593571);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(16,0.386224);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(17,0.3877492);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(18,0.190864);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(19,0.1372933);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(20,0.081984);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(21,0.0653962);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(22,0.01944048);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(24,0.02757244);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(27,0.002374282);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(28,0.004849092);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(39,5.235803e-13);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(4,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(5,0.1246709);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(6,0.1654234);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(7,0.207875);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(8,0.2261421);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(9,0.2324593);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(10,0.258621);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(11,0.2068873);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(12,0.190515);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(13,0.1821152);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(14,0.1435367);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(15,0.1430054);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(16,0.1115551);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(17,0.1183545);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(18,0.07898166);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(19,0.05662859);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(20,0.05066639);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(21,0.04212915);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(22,0.01944048);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(24,0.02757244);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(27,0.002374282);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(28,0.004849092);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(39,5.235803e-13);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetEntries(305);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_nvtx27 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_nvtx27","histo_ZZ",40,0,40);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(4,0.06098055);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(5,0.3026724);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(6,0.5269366);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(7,0.9681742);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(8,1.159991);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(9,1.145072);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(10,1.515921);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(11,1.047574);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(12,0.9365367);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(13,0.948617);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(14,0.5445015);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(15,0.5593571);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(16,0.386224);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(17,0.3877492);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(18,0.190864);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(19,0.1372933);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(20,0.081984);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(21,0.0653962);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(22,0.01944048);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(24,0.02757244);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(27,0.002374282);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(28,0.004849092);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(39,5.235803e-13);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(4,0.06098055);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(5,0.1246709);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(6,0.1654234);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(7,0.207875);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(8,0.2261421);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(9,0.2324593);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(10,0.258621);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(11,0.2068873);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(12,0.190515);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(13,0.1821152);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(14,0.1435367);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(15,0.1430054);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(16,0.1115551);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(17,0.1183545);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(18,0.07898166);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(19,0.05662859);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(20,0.05066639);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(21,0.04212915);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(22,0.01944048);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(24,0.02757244);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(27,0.002374282);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(28,0.004849092);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(39,5.235803e-13);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(3,0.008130461);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(4,0.01106362);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(5,0.03007662);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(6,0.05037732);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(7,0.1001486);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(8,0.1283501);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(9,0.1362576);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(10,0.1547603);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(11,0.1218134);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(12,0.1208779);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(13,0.08870936);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(14,0.0701562);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(15,0.04876736);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(16,0.03896841);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(17,0.02658632);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(18,0.008229043);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(19,0.005920177);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(20,0.006619624);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(21,0.0008580972);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(22,0.001336623);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(23,0.0005668121);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(24,7.929111e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(26,1.658846e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(3,0.003075067);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(4,0.003635682);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(5,0.005767516);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(6,0.007664896);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(7,0.01194689);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(8,0.01286377);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(9,0.01267543);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(10,0.01385753);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(11,0.01210937);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(12,0.01210933);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(13,0.01001619);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(14,0.008607794);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(15,0.006544423);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(16,0.006174429);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(17,0.005014289);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(18,0.002484678);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(19,0.00206243);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(20,0.002571121);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(21,0.0005201728);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(22,0.00126631);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(23,0.0004711126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(24,7.892091e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(26,1.658846e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetEntries(1642);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_wz_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_wz_13TeV_nvtx");
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6","thsSignal_grouped_wh3l_wz_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetMaximum(0.1770487);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(3,0.008130461);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(4,0.01106362);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(5,0.03007662);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(6,0.05037732);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(7,0.1001486);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(8,0.1283501);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(9,0.1362576);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(10,0.1547603);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(11,0.1218134);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(12,0.1208779);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(13,0.08870936);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(14,0.0701562);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(15,0.04876736);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(16,0.03896841);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(17,0.02658632);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(18,0.008229043);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(19,0.005920177);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(20,0.006619624);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(21,0.0008580972);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(22,0.001336623);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(23,0.0005668121);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(24,7.929111e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(26,1.658846e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(3,0.003075067);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(4,0.003635682);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(5,0.005767516);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(6,0.007664896);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(7,0.01194689);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(8,0.01286377);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(9,0.01267543);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(10,0.01385753);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(11,0.01210937);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(12,0.01210933);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(13,0.01001619);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(14,0.008607794);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(15,0.006544423);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(16,0.006174429);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(17,0.005014289);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(18,0.002484678);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(19,0.00206243);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(20,0.002571121);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(21,0.0005201728);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(22,0.00126631);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(23,0.0004711126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(24,7.892091e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(26,1.658846e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetEntries(1642);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_wz_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3005[40] = {
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
   Double_t _fy3005[40] = {
   0,
   0.07793306,
   0.4388368,
   1.637815,
   3.203909,
   6.915249,
   11.58005,
   19.10949,
   15.75435,
   18.72338,
   19.95004,
   21.83655,
   13.52799,
   8.900187,
   6.158473,
   5.988451,
   3.206812,
   2.596271,
   1.084694,
   1.400875,
   0.2483703,
   0.1362328,
   -0.006009587,
   0.05488881,
   0.02235521,
   0.009205813,
   0.00638421,
   0.007028391,
   0.001611185,
   0.0001229251,
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
   Double_t _felx3005[40] = {
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
   Double_t _fely3005[40] = {
   0,
   0.02348122,
   0.05322145,
   0.1624278,
   0.5658591,
   0.7677113,
   1.029904,
   2.885842,
   1.882397,
   1.303298,
   2.707996,
   3.556039,
   1.634567,
   1.413219,
   1.080739,
   1.28351,
   0.6474824,
   0.6714535,
   0.403095,
   0.7142224,
   0.2251703,
   0.08055481,
   0.07283166,
   0.03521712,
   0.007887927,
   0.005520017,
   0.00445671,
   0.006374051,
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
   Double_t _fehx3005[40] = {
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
   Double_t _fehy3005[40] = {
   0,
   0.02348123,
   0.05322145,
   0.1624278,
   0.565859,
   0.7457994,
   1.487057,
   2.885842,
   0.9176172,
   1.834217,
   2.707996,
   3.55604,
   1.634566,
   0.6597476,
   0.6440536,
   1.28351,
   0.8700421,
   0.9542621,
   0.2662326,
   0.7142227,
   0.2251703,
   0.08055479,
   0.07283166,
   0.03521711,
   0.007887926,
   0.005520018,
   0.004456711,
   0.006374052,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,44);
   Graph_Graph3005->SetMinimum(-2.625984);
   Graph_Graph3005->SetMaximum(27.93973);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("2");
   
   Double_t _fx3006[40] = {
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
   Double_t _fy3006[40] = {
   0,
   0,
   0,
   0,
   8,
   9,
   20,
   13,
   25,
   22,
   33,
   12,
   12,
   13,
   8,
   5,
   3,
   2,
   3,
   2,
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
   Double_t _felx3006[40] = {
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
   Double_t _fely3006[40] = {
   0,
   0,
   0,
   0,
   2.768432,
   2.943511,
   4.43453,
   3.558726,
   4.966428,
   4.654589,
   5.715412,
   3.415326,
   3.415326,
   3.558726,
   2.768432,
   2.159724,
   1.632727,
   1.29183,
   1.632727,
   1.29183,
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
   Double_t _fehx3006[40] = {
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
   Double_t _fehy3006[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   3.94522,
   4.110286,
   5.546633,
   4.697669,
   6.066714,
   5.761485,
   6.802707,
   4.559911,
   4.559911,
   4.697669,
   3.94522,
   3.382539,
   2.918242,
   2.63791,
   2.918242,
   2.63791,
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
   grae = new TGraphAsymmErrors(40,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,44);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(43.78298);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineStyle(0);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy30 = new TH1F("hframe_copy30","",1000,0,40);
   hframe_copy30->SetMinimum(0);
   hframe_copy30->SetMaximum(96.86141);
   hframe_copy30->SetDirectory(0);
   hframe_copy30->SetStats(0);
   hframe_copy30->SetLineStyle(0);
   hframe_copy30->SetMarkerStyle(20);
   hframe_copy30->GetXaxis()->SetTitle("nvtx");
   hframe_copy30->GetXaxis()->SetNdivisions(506);
   hframe_copy30->GetXaxis()->SetLabelFont(42);
   hframe_copy30->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetXaxis()->SetLabelSize(0.05);
   hframe_copy30->GetXaxis()->SetTitleSize(0.06);
   hframe_copy30->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy30->GetXaxis()->SetTitleFont(42);
   hframe_copy30->GetYaxis()->SetTitle("Events");
   hframe_copy30->GetYaxis()->SetLabelFont(42);
   hframe_copy30->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetYaxis()->SetLabelSize(0.05);
   hframe_copy30->GetYaxis()->SetTitleSize(0.06);
   hframe_copy30->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy30->GetYaxis()->SetTitleFont(42);
   hframe_copy30->GetZaxis()->SetLabelFont(42);
   hframe_copy30->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetZaxis()->SetLabelSize(0.05);
   hframe_copy30->GetZaxis()->SetTitleSize(0.06);
   hframe_copy30->GetZaxis()->SetTitleFont(42);
   hframe_copy30->Draw("sameaxis");
   ccwh3l_wz_13TeV_nvtx->Modified();
   ccwh3l_wz_13TeV_nvtx->cd();
   ccwh3l_wz_13TeV_nvtx->SetSelected(ccwh3l_wz_13TeV_nvtx);
}
