void c_wh3l_Pre_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 16:19:10 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_mllmin3l = new TCanvas("ccwh3l_Pre_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_mllmin3l->Range(-28,-92.66141,209.5,620.1187);
   ccwh3l_Pre_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_Pre_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_Pre_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe251 = new TH1F("hframe251","",1000,10,200);
   hframe251->SetMinimum(0);
   hframe251->SetMaximum(584.4797);
   hframe251->SetDirectory(0);
   hframe251->SetStats(0);
   hframe251->SetLineStyle(0);
   hframe251->SetMarkerStyle(20);
   hframe251->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe251->GetXaxis()->SetNdivisions(506);
   hframe251->GetXaxis()->SetLabelFont(42);
   hframe251->GetXaxis()->SetLabelOffset(0.007);
   hframe251->GetXaxis()->SetLabelSize(0.05);
   hframe251->GetXaxis()->SetTitleSize(0.06);
   hframe251->GetXaxis()->SetTitleOffset(0.9);
   hframe251->GetXaxis()->SetTitleFont(42);
   hframe251->GetYaxis()->SetTitle("Events");
   hframe251->GetYaxis()->SetLabelFont(42);
   hframe251->GetYaxis()->SetLabelOffset(0.007);
   hframe251->GetYaxis()->SetLabelSize(0.05);
   hframe251->GetYaxis()->SetTitleSize(0.06);
   hframe251->GetYaxis()->SetTitleOffset(1.25);
   hframe251->GetYaxis()->SetTitleFont(42);
   hframe251->GetZaxis()->SetLabelFont(42);
   hframe251->GetZaxis()->SetLabelOffset(0.007);
   hframe251->GetZaxis()->SetLabelSize(0.05);
   hframe251->GetZaxis()->SetTitleSize(0.06);
   hframe251->GetZaxis()->SetTitleFont(42);
   hframe251->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51","thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->SetMinimum(-0.07989252);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->SetMaximum(245.4815);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_51);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(1,18.52026);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(2,30.95746);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(3,33.8152);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(4,43.5738);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(5,41.46504);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(6,38.22203);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(7,22.28383);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(8,22.83886);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(9,45.91497);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(10,6.114133);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(11,1.846606);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(12,2.067942);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(13,1.025458);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(14,0.5714966);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(15,0.1099103);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(16,0.8379531);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(17,0.01606174);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(18,0.1609047);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(20,0.06974223);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinContent(21,0.5522409);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(1,3.637757);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(2,4.586604);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(3,4.897723);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(4,5.593986);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(5,4.772836);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(6,4.735822);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(7,3.660341);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(8,3.492715);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(9,4.954512);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(10,1.894684);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(11,1.029452);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(12,0.8730704);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(13,0.5209602);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(14,0.3235759);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(15,0.1108742);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(16,0.6074177);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(17,0.07604646);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(18,0.1145975);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(20,0.07030265);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetBinError(21,0.396216);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetEntries(4042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(1,0.05493724);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(2,0.07161585);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(3,0.05893802);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(4,0.09750091);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(5,0.02836005);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(6,0.09661049);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(7,0.04733625);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(8,0.01039136);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(9,0.02998172);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(13,0.04726581);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(15,0.02352365);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinContent(16,0.01708511);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(1,0.02737149);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(2,0.03303037);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(3,0.02866075);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(4,0.04039564);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(5,0.02077452);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(6,0.04024826);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(7,0.0274253);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(8,0.01039136);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(9,0.02122177);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(13,0.02749433);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(15,0.01784139);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetBinError(16,0.01708511);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetEntries(44);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(1,0.1025087);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(2,0.2012328);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(3,0.2888024);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(4,0.3787506);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(5,0.3968919);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(6,0.3546571);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(7,0.4401812);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(8,0.5418525);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(9,2.11167);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(10,0.2680309);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(11,0.08723627);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(12,0.08229342);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(13,0.06003247);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(14,0.03093118);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(15,0.03463762);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(16,0.02219846);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(17,0.02624767);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(18,0.01260313);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(19,0.02883621);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(20,0.01231886);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinContent(21,0.09602747);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(1,0.01431075);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(2,0.0217182);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(3,0.02406252);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(4,0.02782672);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(5,0.02873606);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(6,0.02567986);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(7,0.02920755);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(8,0.03129762);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(9,0.06033405);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(10,0.02366084);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(11,0.016636);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(12,0.01415881);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(13,0.01106179);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(14,0.009088293);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(15,0.009935339);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(16,0.00803926);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(17,0.008292084);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(18,0.005012266);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(19,0.009162342);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(20,0.005377076);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetBinError(21,0.01465032);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetEntries(5218);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(1,29.21478);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(2,24.24573);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(3,28.45346);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(4,43.94384);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(5,38.61638);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(6,26.15657);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(7,7.094519);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(8,7.429784);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(9,17.04708);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(10,1.253364);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(11,0.9564938);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(12,0.6129605);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(13,0.4507259);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(14,0.1228777);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(15,0.1315364);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(16,0.1953081);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(17,0.1175713);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(18,0.2129172);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(19,0.1198037);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinContent(21,0.3621892);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(1,2.077984);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(2,1.965077);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(3,2.091477);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(4,2.638532);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(5,2.441186);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(6,1.920219);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(7,1.123605);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(8,1.160543);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(9,1.797232);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(10,0.5286398);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(11,0.31262);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(12,0.3778417);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(13,0.2738578);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(14,0.1776987);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(15,0.1315364);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(16,0.1195984);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(17,0.1974638);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(18,0.2168356);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(19,0.1198037);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetBinError(21,0.2724881);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetEntries(3347);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(1,2.267017);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(2,2.514648);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(3,4.393162);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(4,5.431173);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(5,4.065043);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(6,4.319748);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(7,4.423534);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(8,5.244704);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(9,18.18582);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(10,1.953953);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(11,0.1966695);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(12,0.2568035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(13,0.1512323);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(14,0.03967978);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(15,0.02000878);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(19,0.05011636);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinContent(21,0.1697882);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(1,0.306764);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(2,0.317254);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(3,0.4319149);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(4,0.4797826);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(5,0.4113002);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(6,0.4230284);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(7,0.4203273);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(8,0.4611182);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(9,0.8625402);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(10,0.2823259);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(11,0.09084764);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(12,0.100174);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(13,0.08079765);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(14,0.03967978);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(15,0.02000878);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(19,0.04303983);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetBinError(21,0.08568486);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetEntries(1451);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(1,11.55665);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(2,17.68734);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(3,22.81659);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(4,25.51441);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(5,27.08214);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(6,27.01853);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(7,28.17734);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(8,37.55949);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(9,149.0354);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(10,14.24356);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(11,2.832034);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(12,1.585827);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(13,1.099846);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(14,0.7277185);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(15,0.5529243);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(16,0.4632521);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(17,0.3216743);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(18,0.2211427);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(19,0.1694785);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(20,0.2164764);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinContent(21,1.262551);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(1,0.2507601);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(2,0.3103643);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(3,0.3525216);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(4,0.3738363);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(5,0.3840341);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(6,0.3829087);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(7,0.3915945);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(8,0.4525131);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(9,0.9017799);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(10,0.2780147);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(11,0.1234028);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(12,0.09308715);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(13,0.07778906);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(14,0.0632048);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(15,0.05515945);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(16,0.04979131);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(17,0.04141494);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(18,0.03452807);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(19,0.0297693);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(20,0.03372308);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetBinError(21,0.0817606);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetEntries(75011);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(1,0.2747769);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(2,0.5343095);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(3,0.6527267);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(4,0.5851508);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(5,0.5958296);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(6,0.4472236);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(7,0.3888382);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(8,0.4083504);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(9,1.466912);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(10,0.1163665);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(11,0.01664852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(12,0.01116261);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(13,0.002195535);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(14,0.002499459);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinContent(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(1,0.01882491);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(2,0.02602357);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(3,0.02801);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(4,0.02540506);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(5,0.02554414);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(6,0.02184448);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(7,0.01972826);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(8,0.01973517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(9,0.03698521);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(10,0.009971231);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(11,0.003897776);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(12,0.003308362);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(13,0.0009855139);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(14,0.001447568);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetBinError(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52","thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->SetMaximum(1.579092);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_52);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(1,0.2747769);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(2,0.5343095);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(3,0.6527267);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(4,0.5851508);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(5,0.5958296);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(6,0.4472236);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(7,0.3888382);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(8,0.4083504);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(9,1.466912);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(10,0.1163665);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(11,0.01664852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(12,0.01116261);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(13,0.002195535);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(14,0.002499459);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinContent(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(1,0.01882491);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(2,0.02602357);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(3,0.02801);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(4,0.02540506);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(5,0.02554414);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(6,0.02184448);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(7,0.01972826);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(8,0.01973517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(9,0.03698521);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(10,0.009971231);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(11,0.003897776);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(12,0.003308362);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(13,0.0009855139);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(14,0.001447568);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetBinError(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l259->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3051[20] = {
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
   Double_t _fy3051[20] = {
   61.71614,
   75.67802,
   89.82615,
   118.9395,
   111.6539,
   96.16815,
   62.46674,
   73.62508,
   232.325,
   23.84725,
   5.91904,
   4.605827,
   2.83456,
   1.524939,
   0.8725411,
   1.535797,
   0.481555,
   0.6075677,
   0.421475,
   0.2985375};
   Double_t _felx3051[20] = {
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
   Double_t _fely3051[20] = {
   9.254534,
   13.15761,
   14.36989,
   18.04,
   16.76433,
   15.44605,
   9.676167,
   9.826905,
   18.68252,
   3.728016,
   1.704266,
   1.630716,
   1.057363,
   0.6158383,
   0.3487227,
   0.8543196,
   0.186084,
   0.3718885,
   0.2578764,
   0.1123858};
   Double_t _fehx3051[20] = {
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
   Double_t _fehy3051[20] = {
   9.239686,
   13.14969,
   14.35691,
   18.03302,
   16.75982,
   15.44365,
   9.673522,
   9.822134,
   18.64548,
   3.725138,
   1.704035,
   1.630918,
   1.057394,
   0.6677625,
   0.3495367,
   0.8543513,
   0.3245339,
   0.3757466,
   0.2755773,
   0.1129265};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,219);
   Graph_Graph3051->SetMinimum(0);
   Graph_Graph3051->SetMaximum(276.0511);
   Graph_Graph3051->SetDirectory(0);
   Graph_Graph3051->SetStats(0);
   Graph_Graph3051->SetLineStyle(0);
   Graph_Graph3051->SetMarkerStyle(20);
   Graph_Graph3051->GetXaxis()->SetLabelFont(42);
   Graph_Graph3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3051->GetXaxis()->SetTitleFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3051->GetYaxis()->SetTitleFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3051);
   
   grae->Draw("2");
   
   Double_t _fx3052[20] = {
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
   Double_t _fy3052[20] = {
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
   Double_t _felx3052[20] = {
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
   Double_t _fely3052[20] = {
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
   Double_t _fehx3052[20] = {
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
   Double_t _fehy3052[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,219);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(1.262698);
   Graph_Graph3052->SetDirectory(0);
   Graph_Graph3052->SetStats(0);
   Graph_Graph3052->SetLineStyle(0);
   Graph_Graph3052->SetMarkerStyle(20);
   Graph_Graph3052->GetXaxis()->SetLabelFont(42);
   Graph_Graph3052->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3052->GetXaxis()->SetTitleFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3052->GetYaxis()->SetTitleFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3052);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy260 = new TH1F("hframe_copy260","",1000,10,200);
   hframe_copy260->SetMinimum(0);
   hframe_copy260->SetMaximum(584.4797);
   hframe_copy260->SetDirectory(0);
   hframe_copy260->SetStats(0);
   hframe_copy260->SetLineStyle(0);
   hframe_copy260->SetMarkerStyle(20);
   hframe_copy260->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy260->GetXaxis()->SetNdivisions(506);
   hframe_copy260->GetXaxis()->SetLabelFont(42);
   hframe_copy260->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetXaxis()->SetLabelSize(0.05);
   hframe_copy260->GetXaxis()->SetTitleSize(0.06);
   hframe_copy260->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy260->GetXaxis()->SetTitleFont(42);
   hframe_copy260->GetYaxis()->SetTitle("Events");
   hframe_copy260->GetYaxis()->SetLabelFont(42);
   hframe_copy260->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetYaxis()->SetLabelSize(0.05);
   hframe_copy260->GetYaxis()->SetTitleSize(0.06);
   hframe_copy260->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy260->GetYaxis()->SetTitleFont(42);
   hframe_copy260->GetZaxis()->SetLabelFont(42);
   hframe_copy260->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetZaxis()->SetLabelSize(0.05);
   hframe_copy260->GetZaxis()->SetTitleSize(0.06);
   hframe_copy260->GetZaxis()->SetTitleFont(42);
   hframe_copy260->Draw("sameaxis");
   ccwh3l_Pre_13TeV_mllmin3l->Modified();
   ccwh3l_Pre_13TeV_mllmin3l->cd();
   ccwh3l_Pre_13TeV_mllmin3l->SetSelected(ccwh3l_Pre_13TeV_mllmin3l);
}
