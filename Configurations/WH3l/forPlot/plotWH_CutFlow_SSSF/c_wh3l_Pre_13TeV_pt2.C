void c_wh3l_Pre_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt2/cc
//=========  (Sun Jul  3 01:22:04 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt2 = new TCanvas("ccwh3l_Pre_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt2->Range(-28,-2.378049,209.5,15.91463);
   ccwh3l_Pre_13TeV_pt2->SetFillColor(0);
   ccwh3l_Pre_13TeV_pt2->SetBorderMode(0);
   ccwh3l_Pre_13TeV_pt2->SetBorderSize(2);
   ccwh3l_Pre_13TeV_pt2->SetTickx(1);
   ccwh3l_Pre_13TeV_pt2->SetTicky(1);
   ccwh3l_Pre_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe311 = new TH1F("hframe311","",1000,10,200);
   hframe311->SetMinimum(0);
   hframe311->SetMaximum(15);
   hframe311->SetDirectory(0);
   hframe311->SetStats(0);
   hframe311->SetLineStyle(0);
   hframe311->SetMarkerStyle(20);
   hframe311->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe311->GetXaxis()->SetNdivisions(506);
   hframe311->GetXaxis()->SetLabelFont(42);
   hframe311->GetXaxis()->SetLabelOffset(0.007);
   hframe311->GetXaxis()->SetLabelSize(0.05);
   hframe311->GetXaxis()->SetTitleSize(0.06);
   hframe311->GetXaxis()->SetTitleOffset(0.9);
   hframe311->GetXaxis()->SetTitleFont(42);
   hframe311->GetYaxis()->SetTitle("Events");
   hframe311->GetYaxis()->SetLabelFont(42);
   hframe311->GetYaxis()->SetLabelOffset(0.007);
   hframe311->GetYaxis()->SetLabelSize(0.05);
   hframe311->GetYaxis()->SetTitleSize(0.06);
   hframe311->GetYaxis()->SetTitleOffset(1.25);
   hframe311->GetYaxis()->SetTitleFont(42);
   hframe311->GetZaxis()->SetLabelFont(42);
   hframe311->GetZaxis()->SetLabelOffset(0.007);
   hframe311->GetZaxis()->SetLabelSize(0.05);
   hframe311->GetZaxis()->SetTitleSize(0.06);
   hframe311->GetZaxis()->SetTitleFont(42);
   hframe311->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt2");
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63","thsBackground_grouped_wh3l_Pre_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetMinimum(-0.3108075);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetMaximum(7.302626);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt2312 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt2312","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(1,-0.07092338);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(2,3.483659);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(3,3.514095);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(4,5.328125);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(5,3.76138);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(6,1.781189);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(7,1.865844);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(8,1.325057);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(9,0.4179259);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(10,0.721379);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(11,-0.0005603257);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(13,-0.000561121);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(17,-0.01470217);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(20,0.0378228);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(26,0.01017037);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(1,0.05485754);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(2,1.335486);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(3,1.388559);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(4,1.626757);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(5,1.222177);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(6,0.8607546);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(7,0.851168);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(8,0.7909398);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(9,0.2256165);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(10,0.4258252);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(11,0.0005603257);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(13,0.000561121);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(17,0.01470217);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(20,0.0378228);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(26,0.01017037);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt2313 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt2313","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(1,0.003032596);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(2,0.03141051);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(4,0.04888554);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(5,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(7,0.05008236);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(8,0.01632439);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(11,0.02980615);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(1,0.003032596);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(2,0.02221848);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(4,0.02659576);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(5,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(7,0.02894007);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(8,0.01632439);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(11,0.0210913);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt2314 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt2314","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(2,0.02047333);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(3,0.04357629);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(4,0.06083644);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(5,0.03200089);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(6,0.03203145);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(7,0.04042221);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(8,0.02277172);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(9,0.009881068);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(10,0.01686892);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(11,0.00992981);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(12,0.01488153);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(13,0.008434718);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(14,0.01614874);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(15,0.001271515);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(16,0.007108731);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(17,0.00544711);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(18,0.00554309);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(19,0.002213453);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(21,0.007895922);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(23,0.001881694);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(26,0.008457258);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(2,0.007996473);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(3,0.01239929);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(4,0.01138937);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(5,0.01082273);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(6,0.008008541);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(7,0.009716319);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(8,0.008346807);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(9,0.006029957);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(10,0.007254405);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(11,0.004240198);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(12,0.005869667);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(13,0.004245047);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(14,0.006140943);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(15,0.003824938);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(16,0.004130606);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(17,0.003230301);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(18,0.003888564);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(19,0.002009852);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(21,0.004232933);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(23,0.001881694);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(26,0.004117161);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt2315 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt2315","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(1,0.0133264);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(2,0.152885);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(3,-0.1413446);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(4,0.0522728);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(6,0.122739);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(1,0.0133264);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(2,0.2119347);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(3,0.1694629);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(4,0.0522728);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(6,0.122739);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(2,0.08255682);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(3,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(7,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(2,0.05841175);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(3,0.04768794);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(7,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt2317 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt2317","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(1,0.1033999);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(2,0.2922407);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(3,0.2409239);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(4,0.2769094);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(5,0.1806841);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(6,0.0914203);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(7,0.1105676);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(8,0.04168539);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(9,0.02379328);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(10,0.04528776);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(11,0.005713332);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(12,0.01768463);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(14,0.01777942);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(15,0.01555235);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(16,0.0106445);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(17,0.005827953);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(19,0.00557515);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(21,0.005526573);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(26,0.00380545);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(1,0.02415293);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(2,0.04031878);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(3,0.03620746);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(4,0.03833295);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(5,0.03143091);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(6,0.02258023);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(7,0.02438726);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(8,0.01514796);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(9,0.01138133);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(10,0.01622549);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(11,0.005713332);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(12,0.009568991);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(14,0.01030483);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(15,0.009074673);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(16,0.007566352);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(17,0.005827953);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(19,0.00557515);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(21,0.005526573);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(26,0.00380545);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(1,0.01621008);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(2,0.08151573);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(3,0.08710789);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(4,0.07841967);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(5,0.07306622);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(6,0.04340601);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(7,0.03055729);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(8,0.02393729);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(9,0.01538405);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(10,0.01532857);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(11,0.009391034);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(12,0.007156055);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(13,0.006822853);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(14,0.0002196867);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(15,0.001108758);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(17,0.001743247);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(19,0.001458335);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(20,0.001048555);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(26,0.002650551);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(1,0.004267271);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(2,0.008903902);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(3,0.009453716);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(4,0.009604205);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(5,0.008646152);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(6,0.006879993);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(7,0.005583067);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(8,0.00509484);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(9,0.003725465);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(10,0.004735287);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(11,0.003332171);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(12,0.002772585);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(13,0.003315081);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(14,0.0002196867);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(15,0.000541543);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(17,0.001096526);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(19,0.001330069);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(20,0.0005452872);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(26,0.001690865);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt2,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt2");
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64","thsSignal_grouped_wh3l_Pre_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetMaximum(0.1013897);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(1,0.01621008);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(2,0.08151573);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(3,0.08710789);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(4,0.07841967);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(5,0.07306622);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(6,0.04340601);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(7,0.03055729);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(8,0.02393729);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(9,0.01538405);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(10,0.01532857);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(11,0.009391034);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(12,0.007156055);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(13,0.006822853);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(14,0.0002196867);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(15,0.001108758);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(17,0.001743247);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(19,0.001458335);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(20,0.001048555);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(26,0.002650551);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(1,0.004267271);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(2,0.008903902);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(3,0.009453716);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(4,0.009604205);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(5,0.008646152);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(6,0.006879993);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(7,0.005583067);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(8,0.00509484);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(9,0.003725465);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(10,0.004735287);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(11,0.003332171);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(12,0.002772585);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(13,0.003315081);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(14,0.0002196867);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(15,0.000541543);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(17,0.001096526);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(19,0.001330069);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(20,0.0005452872);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(26,0.001690865);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt2,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3063[25] = {
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
   Double_t _fy3063[25] = {
   0.04883548,
   4.063226,
   3.704939,
   5.76703,
   3.990016,
   2.02738,
   2.102052,
   1.405839,
   0.4516002,
   0.7835357,
   0.04488896,
   0.03256617,
   0.007873597,
   0.03392817,
   0.01682387,
   0.01775323,
   -0.003427109,
   0.00554309,
   0.007788603,
   0.0378228,
   0.0134225,
   0,
   0.001881694,
   0,
   0};
   Double_t _felx3063[25] = {
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
   Double_t _fely3063[25] = {
   0.09890451,
   2.025691,
   2.061893,
   2.561777,
   1.83671,
   1.19081,
   1.152986,
   0.9516855,
   0.283824,
   0.5156388,
   0.03332695,
   0.02101334,
   0.009721526,
   0.02308982,
   0.01036838,
   0.0136946,
   0.0249181,
   0.006774893,
   0.007908083,
   0.04007253,
   0.01212936,
   0,
   0.002662076,
   0,
   0};
   Double_t _fehx3063[25] = {
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
   Double_t _fehy3063[25] = {
   0.09888549,
   2.073138,
   2.039398,
   2.56176,
   1.836705,
   1.190808,
   1.152978,
   0.9516841,
   0.2838268,
   0.5156354,
   0.03327749,
   0.0210073,
   0.009721687,
   0.02306888,
   0.01291503,
   0.01368909,
   0.02491691,
   0.006775105,
   0.007907326,
   0.04007253,
   0.01212523,
   0,
   0.002662109,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3063,_fy3063,_felx3063,_fehx3063,_fely3063,_fehy3063);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3063 = new TH1F("Graph_Graph3063","",100,0,219);
   Graph_Graph3063->SetMinimum(-0.887955);
   Graph_Graph3063->SetMaximum(9.166676);
   Graph_Graph3063->SetDirectory(0);
   Graph_Graph3063->SetStats(0);
   Graph_Graph3063->SetLineStyle(0);
   Graph_Graph3063->SetMarkerStyle(20);
   Graph_Graph3063->GetXaxis()->SetLabelFont(42);
   Graph_Graph3063->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3063->GetXaxis()->SetTitleFont(42);
   Graph_Graph3063->GetYaxis()->SetLabelFont(42);
   Graph_Graph3063->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3063->GetYaxis()->SetTitleFont(42);
   Graph_Graph3063->GetZaxis()->SetLabelFont(42);
   Graph_Graph3063->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3063);
   
   grae->Draw("2");
   
   Double_t _fx3064[25] = {
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
   Double_t _fy3064[25] = {
   1,
   1,
   4,
   2,
   1,
   0,
   1,
   3,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3064[25] = {
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
   Double_t _fely3064[25] = {
   0.8272524,
   0.8272524,
   1.914367,
   1.29183,
   0.8272524,
   0,
   0.8272524,
   1.632727,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3064[25] = {
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
   Double_t _fehy3064[25] = {
   2.29957,
   2.29957,
   3.162815,
   2.63791,
   2.29957,
   1.147908,
   2.29957,
   2.918242,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3064,_fy3064,_felx3064,_fehx3064,_fely3064,_fehy3064);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3064 = new TH1F("Graph_Graph3064","",100,0,219);
   Graph_Graph3064->SetMinimum(0);
   Graph_Graph3064->SetMaximum(7.879097);
   Graph_Graph3064->SetDirectory(0);
   Graph_Graph3064->SetStats(0);
   Graph_Graph3064->SetLineStyle(0);
   Graph_Graph3064->SetMarkerStyle(20);
   Graph_Graph3064->GetXaxis()->SetLabelFont(42);
   Graph_Graph3064->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3064->GetXaxis()->SetTitleFont(42);
   Graph_Graph3064->GetYaxis()->SetLabelFont(42);
   Graph_Graph3064->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3064->GetYaxis()->SetTitleFont(42);
   Graph_Graph3064->GetZaxis()->SetLabelFont(42);
   Graph_Graph3064->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3064);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy320 = new TH1F("hframe_copy320","",1000,10,200);
   hframe_copy320->SetMinimum(0);
   hframe_copy320->SetMaximum(15);
   hframe_copy320->SetDirectory(0);
   hframe_copy320->SetStats(0);
   hframe_copy320->SetLineStyle(0);
   hframe_copy320->SetMarkerStyle(20);
   hframe_copy320->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy320->GetXaxis()->SetNdivisions(506);
   hframe_copy320->GetXaxis()->SetLabelFont(42);
   hframe_copy320->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetXaxis()->SetLabelSize(0.05);
   hframe_copy320->GetXaxis()->SetTitleSize(0.06);
   hframe_copy320->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy320->GetXaxis()->SetTitleFont(42);
   hframe_copy320->GetYaxis()->SetTitle("Events");
   hframe_copy320->GetYaxis()->SetLabelFont(42);
   hframe_copy320->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetYaxis()->SetLabelSize(0.05);
   hframe_copy320->GetYaxis()->SetTitleSize(0.06);
   hframe_copy320->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy320->GetYaxis()->SetTitleFont(42);
   hframe_copy320->GetZaxis()->SetLabelFont(42);
   hframe_copy320->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetZaxis()->SetLabelSize(0.05);
   hframe_copy320->GetZaxis()->SetTitleSize(0.06);
   hframe_copy320->GetZaxis()->SetTitleFont(42);
   hframe_copy320->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt2->Modified();
   ccwh3l_Pre_13TeV_pt2->cd();
   ccwh3l_Pre_13TeV_pt2->SetSelected(ccwh3l_Pre_13TeV_pt2);
}
