void c_wh3l_zjets_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_zjets_13TeV_mlll/cc
//=========  (Sun Jul  3 13:02:11 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zjets_13TeV_mlll = new TCanvas("ccwh3l_zjets_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zjets_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_zjets_13TeV_mlll->Range(76,-5.216756,101,34.91214);
   ccwh3l_zjets_13TeV_mlll->SetFillColor(0);
   ccwh3l_zjets_13TeV_mlll->SetBorderMode(0);
   ccwh3l_zjets_13TeV_mlll->SetBorderSize(2);
   ccwh3l_zjets_13TeV_mlll->SetTickx(1);
   ccwh3l_zjets_13TeV_mlll->SetTicky(1);
   ccwh3l_zjets_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_zjets_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_zjets_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_zjets_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_zjets_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_zjets_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_zjets_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_zjets_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,80,100);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(32.90569);
   hframe31->SetDirectory(0);
   hframe31->SetStats(0);
   hframe31->SetLineStyle(0);
   hframe31->SetMarkerStyle(20);
   hframe31->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe31->GetXaxis()->SetNdivisions(506);
   hframe31->GetXaxis()->SetLabelFont(42);
   hframe31->GetXaxis()->SetLabelOffset(0.007);
   hframe31->GetXaxis()->SetLabelSize(0.05);
   hframe31->GetXaxis()->SetTitleSize(0.06);
   hframe31->GetXaxis()->SetTitleOffset(0.9);
   hframe31->GetXaxis()->SetTitleFont(42);
   hframe31->GetYaxis()->SetTitle("Events");
   hframe31->GetYaxis()->SetLabelFont(42);
   hframe31->GetYaxis()->SetLabelOffset(0.007);
   hframe31->GetYaxis()->SetLabelSize(0.05);
   hframe31->GetYaxis()->SetTitleSize(0.06);
   hframe31->GetYaxis()->SetTitleOffset(1.25);
   hframe31->GetYaxis()->SetTitleFont(42);
   hframe31->GetZaxis()->SetLabelFont(42);
   hframe31->GetZaxis()->SetLabelOffset(0.007);
   hframe31->GetZaxis()->SetLabelSize(0.05);
   hframe31->GetZaxis()->SetTitleSize(0.06);
   hframe31->GetZaxis()->SetTitleFont(42);
   hframe31->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zjets_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->SetName("thsBackground_grouped_wh3l_zjets_13TeV_mlll");
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_zjets_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7 = new TH1F("thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7","thsBackground_grouped_wh3l_zjets_13TeV_mlll",20,80,100);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->SetMinimum(-1.280891);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->SetMaximum(8.696474);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_zjets_13TeV_mlll_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_zjets_13TeV_mlll32 = new TH1D("new_histo_group_Fake_wh3l_zjets_13TeV_mlll32","histo_Fake",20,80,100);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(0,-0.02462731);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(4,0.6343115);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(5,-0.02214296);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(6,-0.8357821);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(7,-0.3354185);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(8,1.837299);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(9,0.9775813);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(10,2.400187);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(11,0.8369294);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(12,1.838522);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(13,1.924627);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(14,0.64505);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(15,0.6414921);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(16,2.121382);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(17,0.1408666);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(18,0.215364);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(19,0.6277769);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(20,0.9142153);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinContent(21,121.4972);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(0,0.02462731);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(4,0.5868815);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(5,0.02214296);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(6,0.4451084);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(7,0.4193492);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(8,1.061419);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(9,0.6982051);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(10,0.898343);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(11,0.7774145);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(12,0.9133924);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(13,0.8576903);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(14,0.9161949);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(15,0.3697487);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(16,1.18048);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(17,0.3424664);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(18,0.2828809);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(19,0.5290965);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(20,0.8082869);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetBinError(21,8.282177);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetEntries(1524);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_mlll32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->Add(new_histo_group_Fake_wh3l_zjets_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_zjets_13TeV_mlll33 = new TH1D("new_histo_group_WW_wh3l_zjets_13TeV_mlll33","histo_WW",20,80,100);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->SetBinContent(21,0.01034371);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->SetBinError(21,0.01034371);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->SetFillColor(ci);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->SetLineColor(ci);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_mlll33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->Add(new_histo_group_WW_wh3l_zjets_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_zjets_13TeV_mlll34 = new TH1D("new_histo_group_VVV_wh3l_zjets_13TeV_mlll34","histo_VVV",20,80,100);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetBinContent(0,0.0004125087);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetBinContent(15,0.002475685);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetBinContent(20,0.002169967);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetBinContent(21,0.1956434);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetBinError(0,0.0004125087);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetBinError(15,0.002475685);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetBinError(20,0.002169967);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetBinError(21,0.02026697);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetEntries(193);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_mlll34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->Add(new_histo_group_VVV_wh3l_zjets_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_zjets_13TeV_mlll35 = new TH1D("new_histo_group_Vg_wh3l_zjets_13TeV_mlll35","histo_Vg",20,80,100);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(0,-0.0180492);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(1,0.1040647);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(2,0.4214221);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(3,0.9117437);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(4,0.6351761);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(5,0.7878895);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(6,2.480818);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(7,1.653961);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(8,2.574125);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(9,2.327627);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(10,5.450829);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(11,5.852697);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(12,6.370536);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(13,5.352445);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(14,3.006671);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(15,1.461969);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(16,0.6256165);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(17,1.142162);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(18,1.756092);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(19,0.7726349);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(20,0.5610269);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinContent(21,48.93557);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(0,0.1910025);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(1,0.1996224);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(2,0.2116939);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(3,0.3615834);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(4,0.2840112);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(5,0.3865201);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(6,0.5643665);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(7,0.55851);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(8,0.7161874);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(9,0.7056893);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(10,0.8832622);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(11,0.9589025);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(12,0.881993);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(13,0.8686189);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(14,0.6648501);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(15,0.4563482);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(16,0.438879);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(17,0.4012424);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(18,0.4580396);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(19,0.299873);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(20,0.3992462);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetBinError(21,2.647317);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetEntries(1250);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_mlll35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->Add(new_histo_group_Vg_wh3l_zjets_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36 = new TH1D("new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36","histo_ZZ",20,80,100);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinContent(7,0.04366196);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinContent(12,0.04568927);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinContent(15,0.002412119);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinContent(18,0.1149077);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinContent(19,0.04657866);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinContent(20,0.06096717);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinContent(21,22.26836);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinError(7,0.04366196);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinError(12,0.04568927);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinError(15,0.002412119);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinError(18,0.06638768);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinError(19,0.04657866);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinError(20,0.04320446);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetBinError(21,0.9575321);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetEntries(604);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_mlll36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_zjets_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_zjets_13TeV_mlll37 = new TH1D("new_histo_group_WZ_wh3l_zjets_13TeV_mlll37","histo_WZ",20,80,100);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(0,0.005835584);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(1,0.01158407);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(2,0.01743321);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(3,0.01335112);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(4,0.005817191);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(5,0.01168303);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(6,0.0246041);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(7,0.02582649);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(8,0.0180814);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(9,0.01120472);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(10,0.01255351);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(11,0.03439762);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(12,0.02651619);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(13,0.02784077);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(14,0.0472957);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(15,0.03777621);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(16,0.04735589);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(17,0.07034305);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(18,0.05471544);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(19,0.07548129);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(20,0.1037539);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinContent(21,84.91556);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(0,0.004859834);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(1,0.008196893);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(2,0.01029568);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(3,0.00838384);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(4,0.00581521);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(5,0.008301756);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(6,0.01113399);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(7,0.01168155);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(8,0.00991217);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(9,0.008094081);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(10,0.008198292);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(11,0.01411827);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(12,0.0120134);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(13,0.0125705);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(14,0.01611406);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(15,0.01343737);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(16,0.01607194);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(17,0.01883087);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(18,0.01727233);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(19,0.02033865);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(20,0.02375055);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetBinError(21,0.68188);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetEntries(17146);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_mlll37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->Add(new_histo_group_WZ_wh3l_zjets_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38 = new TH1D("new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(3,0.0001793137);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(5,0.0003441681);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(6,0.00183247);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(7,0.0004676099);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(10,0.0002578764);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(11,-0.0007839379);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(12,0.001093392);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(13,0.0002457034);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(15,0.001888296);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(16,0.001711048);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(17,0.004771639);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(18,0.0003133253);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(19,0.001382446);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(20,0.001921075);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinContent(21,0.6514964);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(3,0.0001793137);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(5,0.0003441681);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(6,0.001351715);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(7,0.0004676099);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(10,0.0002578764);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(11,0.0009981209);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(12,0.001093392);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(13,0.0002457034);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(15,0.001647435);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(16,0.0012369);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(17,0.002378132);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(18,0.0003133253);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(19,0.001033518);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(20,0.002151749);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetBinError(21,0.02839236);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetEntries(855);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_zjets_13TeV_mlll,"");
   thsBackground_grouped_wh3l_zjets_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_zjets_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_zjets_13TeV_mlll->SetName("thsSignal_grouped_wh3l_zjets_13TeV_mlll");
   thsSignal_grouped_wh3l_zjets_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_zjets_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8 = new TH1F("thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8","thsSignal_grouped_wh3l_zjets_13TeV_mlll",20,80,100);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->SetMinimum(-0.001782059);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->SetMaximum(0.007507259);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_zjets_13TeV_mlll_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39 = new TH1D("new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(3,0.0001793137);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(5,0.0003441681);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(6,0.00183247);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(7,0.0004676099);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(10,0.0002578764);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(11,-0.0007839379);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(12,0.001093392);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(13,0.0002457034);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(15,0.001888296);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(16,0.001711048);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(17,0.004771639);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(18,0.0003133253);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(19,0.001382446);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(20,0.001921075);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinContent(21,0.6514964);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(3,0.0001793137);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(5,0.0003441681);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(6,0.001351715);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(7,0.0004676099);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(10,0.0002578764);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(11,0.0009981209);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(12,0.001093392);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(13,0.0002457034);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(15,0.001647435);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(16,0.0012369);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(17,0.002378132);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(18,0.0003133253);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(19,0.001033518);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(20,0.002151749);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetBinError(21,0.02839236);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetEntries(855);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_mlll39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_zjets_13TeV_mlll,"");
   thsSignal_grouped_wh3l_zjets_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3007[20] = {
   80.5,
   81.5,
   82.5,
   83.5,
   84.5,
   85.5,
   86.5,
   87.5,
   88.5,
   89.5,
   90.5,
   91.5,
   92.5,
   93.5,
   94.5,
   95.5,
   96.5,
   97.5,
   98.5,
   99.5};
   Double_t _fy3007[20] = {
   0.1156488,
   0.4388553,
   0.9250948,
   1.275305,
   0.7774296,
   1.66964,
   1.388031,
   4.429505,
   3.316413,
   7.863569,
   6.724023,
   8.281263,
   7.304913,
   3.699016,
   2.146125,
   2.794354,
   1.353372,
   2.141079,
   1.522472,
   1.642133};
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   0.1126731,
   0.2229055,
   0.3748092,
   0.9060059,
   0.4215713,
   1.075053,
   1.044198,
   1.903716,
   1.458454,
   1.989105,
   1.79199,
   1.982356,
   1.875399,
   1.349986,
   0.8751597,
   1.796233,
   0.5656635,
   0.7655483,
   0.9229701,
   1.316461};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.2080192,
   0.2229077,
   0.373925,
   0.9056246,
   0.4210631,
   1.074652,
   0.961386,
   1.903513,
   1.457914,
   1.989006,
   1.79255,
   1.982454,
   1.875414,
   1.617023,
   0.8751653,
   1.796224,
   0.766054,
   0.8324761,
   0.9229591,
   1.316459};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,78,102);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(11.28979);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t _fx3008[20] = {
   80.5,
   81.5,
   82.5,
   83.5,
   84.5,
   85.5,
   86.5,
   87.5,
   88.5,
   89.5,
   90.5,
   91.5,
   92.5,
   93.5,
   94.5,
   95.5,
   96.5,
   97.5,
   98.5,
   99.5};
   Double_t _fy3008[20] = {
   0,
   0,
   0,
   1,
   0,
   5,
   5,
   4,
   3,
   5,
   10,
   5,
   4,
   5,
   1,
   1,
   2,
   1,
   0,
   2};
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   0,
   0,
   0,
   0.8272524,
   0,
   2.159724,
   2.159724,
   1.914367,
   1.632727,
   2.159724,
   3.108748,
   2.159724,
   1.914367,
   2.159724,
   0.8272524,
   0.8272524,
   1.29183,
   0.8272524,
   0,
   1.29183};
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   3.382539,
   3.382539,
   3.162815,
   2.918242,
   3.382539,
   4.267035,
   3.382539,
   3.162815,
   3.382539,
   2.29957,
   2.29957,
   2.63791,
   2.29957,
   1.147908,
   2.63791};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,78,102);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(15.69374);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zjets_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zjets_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zjets_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zjets_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zjets_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zjets_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zjets_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zjets_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zjets_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zjets_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zjets_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zjets_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zjets_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zjets_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zjets_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zjets_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy40 = new TH1F("hframe_copy40","",1000,80,100);
   hframe_copy40->SetMinimum(0);
   hframe_copy40->SetMaximum(32.90569);
   hframe_copy40->SetDirectory(0);
   hframe_copy40->SetStats(0);
   hframe_copy40->SetLineStyle(0);
   hframe_copy40->SetMarkerStyle(20);
   hframe_copy40->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy40->GetXaxis()->SetNdivisions(506);
   hframe_copy40->GetXaxis()->SetLabelFont(42);
   hframe_copy40->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetXaxis()->SetLabelSize(0.05);
   hframe_copy40->GetXaxis()->SetTitleSize(0.06);
   hframe_copy40->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy40->GetXaxis()->SetTitleFont(42);
   hframe_copy40->GetYaxis()->SetTitle("Events");
   hframe_copy40->GetYaxis()->SetLabelFont(42);
   hframe_copy40->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetYaxis()->SetLabelSize(0.05);
   hframe_copy40->GetYaxis()->SetTitleSize(0.06);
   hframe_copy40->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy40->GetYaxis()->SetTitleFont(42);
   hframe_copy40->GetZaxis()->SetLabelFont(42);
   hframe_copy40->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetZaxis()->SetLabelSize(0.05);
   hframe_copy40->GetZaxis()->SetTitleSize(0.06);
   hframe_copy40->GetZaxis()->SetTitleFont(42);
   hframe_copy40->Draw("sameaxis");
   ccwh3l_zjets_13TeV_mlll->Modified();
   ccwh3l_zjets_13TeV_mlll->cd();
   ccwh3l_zjets_13TeV_mlll->SetSelected(ccwh3l_zjets_13TeV_mlll);
}
