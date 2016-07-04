void c_wh3l_top_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_mlll/cc
//=========  (Sun Jul  3 02:18:05 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_mlll = new TCanvas("ccwh3l_top_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_top_13TeV_mlll->Range(76,-1.875508,101,12.55148);
   ccwh3l_top_13TeV_mlll->SetFillColor(0);
   ccwh3l_top_13TeV_mlll->SetBorderMode(0);
   ccwh3l_top_13TeV_mlll->SetBorderSize(2);
   ccwh3l_top_13TeV_mlll->SetTickx(1);
   ccwh3l_top_13TeV_mlll->SetTicky(1);
   ccwh3l_top_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_top_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_top_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe71 = new TH1F("hframe71","",1000,80,100);
   hframe71->SetMinimum(0);
   hframe71->SetMaximum(11.83013);
   hframe71->SetDirectory(0);
   hframe71->SetStats(0);
   hframe71->SetLineStyle(0);
   hframe71->SetMarkerStyle(20);
   hframe71->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe71->GetXaxis()->SetNdivisions(506);
   hframe71->GetXaxis()->SetLabelFont(42);
   hframe71->GetXaxis()->SetLabelOffset(0.007);
   hframe71->GetXaxis()->SetLabelSize(0.05);
   hframe71->GetXaxis()->SetTitleSize(0.06);
   hframe71->GetXaxis()->SetTitleOffset(0.9);
   hframe71->GetXaxis()->SetTitleFont(42);
   hframe71->GetYaxis()->SetTitle("Events");
   hframe71->GetYaxis()->SetLabelFont(42);
   hframe71->GetYaxis()->SetLabelOffset(0.007);
   hframe71->GetYaxis()->SetLabelSize(0.05);
   hframe71->GetYaxis()->SetTitleSize(0.06);
   hframe71->GetYaxis()->SetTitleOffset(1.25);
   hframe71->GetYaxis()->SetTitleFont(42);
   hframe71->GetZaxis()->SetLabelFont(42);
   hframe71->GetZaxis()->SetLabelOffset(0.007);
   hframe71->GetZaxis()->SetLabelSize(0.05);
   hframe71->GetZaxis()->SetTitleSize(0.06);
   hframe71->GetZaxis()->SetTitleFont(42);
   hframe71->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_mlll->SetName("thsBackground_grouped_wh3l_top_13TeV_mlll");
   thsBackground_grouped_wh3l_top_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_top_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15","thsBackground_grouped_wh3l_top_13TeV_mlll",20,80,100);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->SetMinimum(-0.9140819);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->SetMaximum(3.51578);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_mlll_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_mlll72 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_mlll72","histo_Fake",20,80,100);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(0,6.12229);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(1,1.152394);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(2,5.602698e-06);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(3,0.7027846);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(4,-0.1806159);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(5,0.4623168);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(7,0.6020563);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(8,0.101658);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(9,1.551783);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(10,-0.1870079);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(11,2.259057);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(12,0.4141366);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(13,0.4956337);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(14,-0.04876461);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(15,-0.5721354);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(16,-0.02260896);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(17,0.5804133);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(19,-5.750344e-05);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(20,0.4345771);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinContent(21,23.82592);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(0,2.158202);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(1,0.9075447);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(2,5.602698e-06);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(3,0.5073137);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(4,0.1806159);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(5,0.3848676);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(7,0.5586806);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(8,0.101658);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(9,0.8750155);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(10,0.1881629);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(11,1.089305);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(12,0.4147395);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(13,0.4398535);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(14,0.04876461);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(15,0.3419464);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(16,0.01720286);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(17,0.45563);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(19,5.750344e-05);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(20,0.3500484);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetBinError(21,3.290986);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mlll72->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll->Add(new_histo_group_Fake_wh3l_top_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_mlll73 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_mlll73","histo_WW",20,80,100);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetBinContent(0,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetBinContent(19,0.01528641);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetBinContent(21,0.1483269);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetBinError(0,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetBinError(19,0.01528641);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetBinError(21,0.04976032);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mlll73->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mlll73->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll->Add(new_histo_group_WW_wh3l_top_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_mlll74 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_mlll74","histo_VVV",20,80,100);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(0,0.02277432);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(1,0.001605426);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(4,0.004593297);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(5,0.0007731448);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(6,0.004742092);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(7,0.002577291);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(9,0.002758469);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(10,0.001552237);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(11,0.001528018);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(14,0.002258449);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(16,0.001856164);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(17,0.004680091);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(18,0.002618236);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(19,0.002735428);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(20,0.0006144888);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinContent(21,0.5169924);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(0,0.008632335);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(1,0.001605426);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(4,0.003282851);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(5,0.0007731448);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(6,0.003535218);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(7,0.002577291);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(9,0.002746737);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(10,0.001552237);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(11,0.004001718);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(14,0.002258449);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(16,0.001856164);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(17,0.003322821);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(18,0.002618236);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(19,0.002735428);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(20,0.0006144888);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetBinError(21,0.0358287);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetEntries(364);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mlll74->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll->Add(new_histo_group_VVV_wh3l_top_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_mlll75 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_mlll75","histo_Vg",20,80,100);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(0,0.189207);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(4,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(6,0.1241958);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(7,0.09477923);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(8,0.1499849);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(9,-0.1178104);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(11,0.1565376);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(12,-0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(13,0.1102867);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(14,0.0489068);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinContent(21,0.5873358);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(0,0.1338952);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(4,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(6,0.1241958);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(7,0.1284377);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(8,0.1262385);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(9,0.1178104);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(11,0.1375626);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(12,0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(13,0.1102867);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(14,0.0489068);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetBinError(21,0.2939546);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mlll75->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll->Add(new_histo_group_Vg_wh3l_top_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_mlll76 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_mlll76","histo_ZZ",20,80,100);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetBinContent(0,0.1362607);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetBinContent(2,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetBinContent(21,0.5137486);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetBinError(0,0.07896035);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetBinError(2,0.03041933);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetBinError(21,0.1462715);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mlll76->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_top_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_mlll77 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_mlll77","histo_WZ",20,80,100);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(0,2.010823);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(1,0.04469159);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(2,0.03417493);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(3,0.07559151);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(4,0.03402455);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(5,0.08261684);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(6,0.05699853);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(7,0.04413679);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(8,0.06668716);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(9,0.1109079);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(10,0.07601483);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(11,0.05901778);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(12,0.0683082);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(13,0.03377633);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(14,0.03130153);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(15,0.0351786);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(16,0.04082995);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(17,0.04304676);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(18,0.03836867);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(19,0.02647472);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(20,0.04168225);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinContent(21,5.813211);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(0,0.1041149);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(1,0.01598678);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(2,0.01329363);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(3,0.02038952);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(4,0.0130164);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(5,0.02222632);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(6,0.01802939);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(7,0.01486387);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(8,0.01902094);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(9,0.02497574);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(10,0.0211239);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(11,0.01795787);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(12,0.01985756);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(13,0.01332288);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(14,0.01319559);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(15,0.01279657);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(16,0.0150507);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(17,0.01503907);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(18,0.01461014);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(19,0.01056877);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(20,0.01461836);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetBinError(21,0.1779176);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mlll77->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll->Add(new_histo_group_WZ_wh3l_top_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_mlll78 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_mlll78","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(0,0.06899035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(1,0.001703833);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(2,0.0005744548);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(3,0.003592951);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(4,0.0007351569);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(5,0.005763181);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(6,0.007801408);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(7,0.002082891);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(8,0.0003380434);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(9,0.0005139624);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(10,0.00524829);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(11,0.006464285);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(12,0.002784744);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(13,0.001909104);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(14,0.0009150001);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(15,0.006731526);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(16,0.005445812);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(17,0.002982486);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(18,0.003682091);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(19,0.0004388829);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(20,0.0009951463);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinContent(21,0.2762715);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(0,0.008872292);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(1,0.001180269);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(2,0.0004068986);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(3,0.002034378);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(4,0.0004412729);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(5,0.002622702);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(6,0.003310662);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(7,0.001042873);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(8,0.0003380434);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(9,0.0005139624);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(10,0.002349629);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(11,0.002660838);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(12,0.001387166);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(13,0.0008342418);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(14,0.0006556115);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(15,0.002743587);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(16,0.002651502);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(17,0.001427254);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(18,0.001850223);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(19,0.0004388829);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(20,0.0005082712);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetBinError(21,0.01634082);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll78->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_top_13TeV_mlll,"");
   thsBackground_grouped_wh3l_top_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_mlll->SetName("thsSignal_grouped_wh3l_top_13TeV_mlll");
   thsSignal_grouped_wh3l_top_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_top_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16","thsSignal_grouped_wh3l_top_13TeV_mlll",20,80,100);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->SetMaximum(0.01166767);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_mlll_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_mlll79 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_mlll79","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(0,0.06899035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(1,0.001703833);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(2,0.0005744548);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(3,0.003592951);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(4,0.0007351569);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(5,0.005763181);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(6,0.007801408);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(7,0.002082891);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(8,0.0003380434);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(9,0.0005139624);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(10,0.00524829);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(11,0.006464285);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(12,0.002784744);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(13,0.001909104);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(14,0.0009150001);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(15,0.006731526);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(16,0.005445812);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(17,0.002982486);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(18,0.003682091);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(19,0.0004388829);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(20,0.0009951463);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinContent(21,0.2762715);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(0,0.008872292);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(1,0.001180269);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(2,0.0004068986);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(3,0.002034378);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(4,0.0004412729);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(5,0.002622702);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(6,0.003310662);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(7,0.001042873);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(8,0.0003380434);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(9,0.0005139624);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(10,0.002349629);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(11,0.002660838);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(12,0.001387166);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(13,0.0008342418);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(14,0.0006556115);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(15,0.002743587);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(16,0.002651502);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(17,0.001427254);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(18,0.001850223);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(19,0.0004388829);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(20,0.0005082712);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetBinError(21,0.01634082);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mlll79->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_top_13TeV_mlll,"");
   thsSignal_grouped_wh3l_top_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3015[20] = {
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
   Double_t _fy3015[20] = {
   1.198691,
   0.06459986,
   0.7783761,
   -0.06967027,
   0.5457068,
   0.1859365,
   0.7435496,
   0.3183301,
   1.547639,
   -0.1094408,
   2.47614,
   0.4593095,
   0.6396967,
   0.03370217,
   -0.5369568,
   0.02007715,
   0.6281401,
   0.04098691,
   0.04443906,
   0.4768739};
   Double_t _felx3015[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3015[20] = {
   1.009241,
   0.04393041,
   0.5822321,
   0.2766193,
   0.4388081,
   0.1463989,
   0.7032293,
   0.2495726,
   1.156106,
   0.2207848,
   1.476012,
   0.4795602,
   0.5895811,
   0.1145215,
   0.4073604,
   0.03514322,
   0.5157199,
   0.01746611,
   0.02880602,
   0.3956847};
   Double_t _fehx3015[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3015[20] = {
   1.009241,
   0.04398459,
   0.5822298,
   0.2766187,
   0.4388079,
   0.1461372,
   0.7354071,
   0.2495759,
   1.15609,
   0.2196818,
   1.4781,
   0.4801356,
   0.5895805,
   0.1145013,
   0.4073606,
   0.03511881,
   0.5157198,
   0.01745701,
   0.02879683,
   0.3956844};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,78,102);
   Graph_Graph3015->SetMinimum(-1.434173);
   Graph_Graph3015->SetMaximum(4.444097);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2");
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   0,
   0,
   0,
   1,
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
   3,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3016[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3016[20] = {
   0,
   0,
   0,
   0.8272524,
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
   1.632727,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3016[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3016[20] = {
   1.147908,
   1.147908,
   1.147908,
   2.29957,
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
   2.918242,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,78,102);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(6.510067);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineStyle(0);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,80,100);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(11.83013);
   hframe_copy80->SetDirectory(0);
   hframe_copy80->SetStats(0);
   hframe_copy80->SetLineStyle(0);
   hframe_copy80->SetMarkerStyle(20);
   hframe_copy80->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy80->GetXaxis()->SetNdivisions(506);
   hframe_copy80->GetXaxis()->SetLabelFont(42);
   hframe_copy80->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetXaxis()->SetLabelSize(0.05);
   hframe_copy80->GetXaxis()->SetTitleSize(0.06);
   hframe_copy80->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy80->GetXaxis()->SetTitleFont(42);
   hframe_copy80->GetYaxis()->SetTitle("Events");
   hframe_copy80->GetYaxis()->SetLabelFont(42);
   hframe_copy80->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetYaxis()->SetLabelSize(0.05);
   hframe_copy80->GetYaxis()->SetTitleSize(0.06);
   hframe_copy80->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy80->GetYaxis()->SetTitleFont(42);
   hframe_copy80->GetZaxis()->SetLabelFont(42);
   hframe_copy80->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetZaxis()->SetLabelSize(0.05);
   hframe_copy80->GetZaxis()->SetTitleSize(0.06);
   hframe_copy80->GetZaxis()->SetTitleFont(42);
   hframe_copy80->Draw("sameaxis");
   ccwh3l_top_13TeV_mlll->Modified();
   ccwh3l_top_13TeV_mlll->cd();
   ccwh3l_top_13TeV_mlll->SetSelected(ccwh3l_top_13TeV_mlll);
}
