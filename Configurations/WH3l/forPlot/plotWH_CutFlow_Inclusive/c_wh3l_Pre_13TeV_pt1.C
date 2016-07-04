void c_wh3l_Pre_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt1/cc
//=========  (Sun Jul  3 16:19:12 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt1 = new TCanvas("ccwh3l_Pre_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt1->Range(-16,-52.37771,209,350.5278);
   ccwh3l_Pre_13TeV_pt1->SetFillColor(0);
   ccwh3l_Pre_13TeV_pt1->SetBorderMode(0);
   ccwh3l_Pre_13TeV_pt1->SetBorderSize(2);
   ccwh3l_Pre_13TeV_pt1->SetTickx(1);
   ccwh3l_Pre_13TeV_pt1->SetTicky(1);
   ccwh3l_Pre_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe291 = new TH1F("hframe291","",1000,20,200);
   hframe291->SetMinimum(0);
   hframe291->SetMaximum(330.3825);
   hframe291->SetDirectory(0);
   hframe291->SetStats(0);
   hframe291->SetLineStyle(0);
   hframe291->SetMarkerStyle(20);
   hframe291->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe291->GetXaxis()->SetNdivisions(506);
   hframe291->GetXaxis()->SetLabelFont(42);
   hframe291->GetXaxis()->SetLabelOffset(0.007);
   hframe291->GetXaxis()->SetLabelSize(0.05);
   hframe291->GetXaxis()->SetTitleSize(0.06);
   hframe291->GetXaxis()->SetTitleOffset(0.9);
   hframe291->GetXaxis()->SetTitleFont(42);
   hframe291->GetYaxis()->SetTitle("Events");
   hframe291->GetYaxis()->SetLabelFont(42);
   hframe291->GetYaxis()->SetLabelOffset(0.007);
   hframe291->GetYaxis()->SetLabelSize(0.05);
   hframe291->GetYaxis()->SetTitleSize(0.06);
   hframe291->GetYaxis()->SetTitleOffset(1.25);
   hframe291->GetYaxis()->SetTitleFont(42);
   hframe291->GetZaxis()->SetLabelFont(42);
   hframe291->GetZaxis()->SetLabelOffset(0.007);
   hframe291->GetZaxis()->SetLabelSize(0.05);
   hframe291->GetZaxis()->SetTitleSize(0.06);
   hframe291->GetZaxis()->SetTitleFont(42);
   hframe291->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt1");
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59","thsBackground_grouped_wh3l_Pre_13TeV_pt1",25,20,200);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->SetMinimum(-0.2225641);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->SetMaximum(138.7607);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_59);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt1292 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt1292","histo_Fake",25,20,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(1,9.51891);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(2,25.45665);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(3,41.50051);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(4,46.99965);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(5,48.92107);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(6,36.74549);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(7,25.14925);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(8,19.5462);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(9,15.00117);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(10,6.58532);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(11,6.94068);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(12,5.577285);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(13,5.139874);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(14,2.609228);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(15,3.329975);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(16,1.476873);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(17,1.243776);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(18,0.2698515);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(19,0.819801);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(20,2.052021);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(21,1.70439);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(22,2.439122);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(23,-0.1157476);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(24,0.3154688);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(25,0.4224632);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinContent(26,1.367855);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(1,3.298088);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(2,4.036698);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(3,5.215788);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(4,5.276035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(5,5.569376);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(6,4.555542);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(7,3.777696);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(8,3.36691);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(9,2.828077);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(10,2.020085);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(11,1.77034);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(12,1.876199);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(13,1.525865);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(14,1.361235);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(15,1.198084);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(16,0.872026);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(17,0.8277371);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(18,0.2565942);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(19,0.9972038);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(20,1.021127);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(21,1.06762);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(22,1.201909);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(23,0.1068164);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(24,0.2420659);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(25,0.2107301);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetBinError(26,1.034339);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetEntries(4042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1292->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt1293 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt1293","histo_WW",25,20,200);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(2,0.06936096);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(3,0.02563012);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(4,0.04492829);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(5,0.0649366);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(6,0.1145355);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(7,0.03026941);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(8,0.03406818);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(9,0.06587232);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(10,0.0291407);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(11,0.03000364);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(14,0.04026545);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(16,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinContent(26,0.05361031);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(2,0.03544925);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(3,0.01845716);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(4,0.02652807);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(5,0.02980951);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(6,0.04226026);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(7,0.02167013);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(8,0.02436031);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(9,0.03300024);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(10,0.02123909);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(11,0.02123657);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(14,0.02390001);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(16,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetBinError(26,0.02777193);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetEntries(44);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1293->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt1294 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt1294","histo_VVV",25,20,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(1,0.01236305);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(2,0.06206377);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(3,0.131918);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(4,0.2475048);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(5,0.3023053);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(6,0.3605344);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(7,0.3592669);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(8,0.3793078);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(9,0.3669913);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(10,0.2892342);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(11,0.29314);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(12,0.2469728);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(13,0.211562);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(14,0.1783559);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(15,0.1762145);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(16,0.1722712);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(17,0.1457832);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(18,0.1295368);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(19,0.1326066);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(20,0.1280819);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(21,0.1319289);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(22,0.1016789);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(23,0.05863428);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(24,0.07352712);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(25,0.07313405);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinContent(26,0.8130228);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(1,0.00505864);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(2,0.01212351);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(3,0.01635839);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(4,0.02163382);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(5,0.02537105);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(6,0.02674879);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(7,0.02445282);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(8,0.02699074);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(9,0.02665175);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(10,0.02376468);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(11,0.02421803);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(12,0.02233102);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(13,0.02070006);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(14,0.01819678);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(15,0.01838391);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(16,0.0180509);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(17,0.01711274);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(18,0.01550376);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(19,0.01657453);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(20,0.01538747);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(21,0.01539503);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(22,0.01410876);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(23,0.01086885);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(24,0.01161159);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(25,0.01193521);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetBinError(26,0.03950836);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetEntries(5218);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1294->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt1295 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt1295","histo_Vg",25,20,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(1,11.63826);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(2,33.04039);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(3,56.6911);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(4,43.75407);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(5,26.48585);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(6,15.09692);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(7,11.04366);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(8,7.695916);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(9,4.573452);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(10,3.683093);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(11,1.897053);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(12,2.466297);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(13,1.198741);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(14,1.617474);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(15,1.309766);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(16,0.372409);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(17,0.3917544);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(18,0.3339068);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(19,1.010868);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(20,0.7166647);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(21,0.6765417);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(22,-0.007094819);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(23,0.6081084);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(24,0.07375429);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(25,0.004261324);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinContent(26,0.3646682);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(1,1.272303);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(2,2.173117);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(3,2.831785);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(4,2.614365);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(5,2.088989);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(6,1.582626);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(7,1.31657);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(8,1.199888);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(9,0.8801908);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(10,0.8586072);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(11,0.7285732);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(12,0.6868049);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(13,0.5985335);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(14,0.5094471);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(15,0.4324487);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(16,0.4803353);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(17,0.3779503);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(18,0.3502441);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(19,0.365627);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(20,0.3604286);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(21,0.2714854);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(22,0.1521329);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(23,0.2596169);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(24,0.2480294);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(25,0.1527112);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetBinError(26,0.519136);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetEntries(3347);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1295->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296","histo_ZZ",25,20,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(1,0.8945776);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(2,1.453755);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(3,2.846456);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(4,6.375098);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(5,7.459136);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(6,7.177918);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(7,5.241959);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(8,4.295136);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(9,2.927553);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(10,2.840937);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(11,2.552778);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(12,1.785961);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(13,1.485817);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(14,1.006792);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(15,0.7547594);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(16,0.5029147);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(17,0.6321686);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(18,0.3880139);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(19,0.4334457);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(20,0.4034817);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(21,0.3830359);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(22,0.112924);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(23,0.2209311);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(24,0.2097874);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(25,0.06912343);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinContent(26,1.228636);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(1,0.1915523);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(2,0.2459136);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(3,0.3425936);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(4,0.5146553);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(5,0.5548072);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(6,0.5401897);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(7,0.465614);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(8,0.4248396);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(9,0.3438773);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(10,0.3435586);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(11,0.3213269);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(12,0.2691048);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(13,0.2449828);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(14,0.204224);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(15,0.1764429);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(16,0.1420586);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(17,0.1585976);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(18,0.1246542);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(19,0.1365409);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(20,0.1266627);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(21,0.1304815);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(22,0.06079016);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(23,0.1003777);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(24,0.08927148);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(25,0.0498044);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetBinError(26,0.2250988);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetEntries(1451);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1296->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt1297 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt1297","histo_WZ",25,20,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(1,2.908835);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(2,7.451865);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(3,15.56927);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(4,34.32663);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(5,46.6702);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(6,44.18182);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(7,37.41608);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(8,30.36946);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(9,24.3565);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(10,19.81438);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(11,15.95408);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(12,12.93694);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(13,10.99337);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(14,8.894311);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(15,7.482635);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(16,6.403331);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(17,5.326298);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(18,4.273203);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(19,4.183487);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(20,3.285921);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(21,2.990152);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(22,2.330958);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(23,2.314044);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(24,2.011823);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(25,1.759734);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinContent(26,15.93909);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(1,0.1254777);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(2,0.2013802);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(3,0.2908901);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(4,0.4324015);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(5,0.5050385);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(6,0.4906425);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(7,0.4518567);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(8,0.4078363);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(9,0.36518);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(10,0.3294123);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(11,0.294791);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(12,0.2648686);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(13,0.2443866);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(14,0.2197123);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(15,0.2016604);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(16,0.1858484);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(17,0.1696028);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(18,0.1521723);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(19,0.1511291);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(20,0.1326039);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(21,0.1280253);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(22,0.1123369);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(23,0.112307);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(24,0.1037188);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(25,0.09723956);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetBinError(26,0.294152);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetEntries(75011);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1297->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(1,0.04934971);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(2,0.1593074);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(3,0.2760237);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(4,0.4051261);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(5,0.4915406);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(6,0.4912935);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(7,0.4294966);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(8,0.401082);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(9,0.3973993);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(10,0.3361298);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(11,0.3190542);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(12,0.236728);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(13,0.2457026);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(14,0.1907618);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(15,0.1497001);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(16,0.1519047);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(17,0.1250059);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(18,0.09678779);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(19,0.07812018);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(20,0.06682143);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(21,0.05616761);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(22,0.04868803);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(23,0.03079274);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(24,0.02750759);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(25,0.03738933);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinContent(26,0.2093139);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(1,0.007132747);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(2,0.01327229);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(3,0.01750275);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(4,0.02220467);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(5,0.02462851);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(6,0.02426355);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(7,0.02189667);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(8,0.02117116);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(9,0.02161497);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(10,0.0192727);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(11,0.01791716);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(12,0.01503121);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(13,0.01501882);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(14,0.01309459);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(15,0.01156262);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(16,0.01201213);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(17,0.01093873);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(18,0.009249675);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(19,0.008078307);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(20,0.007198882);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(21,0.006913293);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(22,0.005947111);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(23,0.004421813);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(24,0.005110147);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(25,0.005944383);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetBinError(26,0.0132009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1298->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt1,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt1");
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60","thsSignal_grouped_wh3l_Pre_13TeV_pt1",25,20,200);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->SetMaximum(0.5419776);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_60);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(1,0.04934971);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(2,0.1593074);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(3,0.2760237);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(4,0.4051261);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(5,0.4915406);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(6,0.4912935);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(7,0.4294966);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(8,0.401082);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(9,0.3973993);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(10,0.3361298);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(11,0.3190542);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(12,0.236728);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(13,0.2457026);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(14,0.1907618);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(15,0.1497001);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(16,0.1519047);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(17,0.1250059);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(18,0.09678779);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(19,0.07812018);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(20,0.06682143);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(21,0.05616761);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(22,0.04868803);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(23,0.03079274);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(24,0.02750759);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(25,0.03738933);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinContent(26,0.2093139);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(1,0.007132747);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(2,0.01327229);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(3,0.01750275);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(4,0.02220467);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(5,0.02462851);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(6,0.02426355);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(7,0.02189667);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(8,0.02117116);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(9,0.02161497);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(10,0.0192727);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(11,0.01791716);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(12,0.01503121);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(13,0.01501882);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(14,0.01309459);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(15,0.01156262);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(16,0.01201213);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(17,0.01093873);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(18,0.009249675);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(19,0.008078307);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(20,0.007198882);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(21,0.006913293);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(22,0.005947111);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(23,0.004421813);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(24,0.005110147);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(25,0.005944383);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetBinError(26,0.0132009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1299->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt1,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3059[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3059[25] = {
   24.97295,
   67.53409,
   116.7649,
   131.7479,
   129.9035,
   103.6772,
   79.24049,
   62.32009,
   47.29154,
   33.2421,
   27.66773,
   23.02777,
   19.02937,
   14.34643,
   13.05335,
   8.940852,
   7.73978,
   5.394512,
   6.580208,
   6.586171,
   5.886048,
   4.977589,
   3.085971,
   2.684361,
   2.328716};
   Double_t _felx3059[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3059[25] = {
   5.992592,
   11.32842,
   17.17251,
   18.86492,
   19.33171,
   14.82801,
   10.76143,
   8.804298,
   6.944262,
   4.314751,
   4.019041,
   3.738647,
   3.227775,
   2.546705,
   2.370211,
   1.712984,
   1.637514,
   0.9143987,
   1.535156,
   1.816746,
   1.730113,
   1.766104,
   0.611607,
   0.5421005,
   0.4126221};
   Double_t _fehx3059[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3059[25] = {
   5.992374,
   11.31945,
   17.16401,
   18.86112,
   19.32815,
   14.8255,
   10.75989,
   8.803372,
   6.944599,
   4.312727,
   4.017482,
   3.732222,
   3.221077,
   2.541064,
   2.3644,
   1.810643,
   1.633178,
   0.9260539,
   1.706224,
   1.816113,
   1.728119,
   1.640659,
   0.606618,
   0.7100297,
   0.5498261};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3059,_fy3059,_felx3059,_fehx3059,_fely3059,_fehy3059);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3059 = new TH1F("Graph_Graph3059","",100,2.000001,218);
   Graph_Graph3059->SetMinimum(0);
   Graph_Graph3059->SetMaximum(165.4783);
   Graph_Graph3059->SetDirectory(0);
   Graph_Graph3059->SetStats(0);
   Graph_Graph3059->SetLineStyle(0);
   Graph_Graph3059->SetMarkerStyle(20);
   Graph_Graph3059->GetXaxis()->SetLabelFont(42);
   Graph_Graph3059->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3059->GetXaxis()->SetTitleFont(42);
   Graph_Graph3059->GetYaxis()->SetLabelFont(42);
   Graph_Graph3059->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3059->GetYaxis()->SetTitleFont(42);
   Graph_Graph3059->GetZaxis()->SetLabelFont(42);
   Graph_Graph3059->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3059);
   
   grae->Draw("2");
   
   Double_t _fx3060[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3060[25] = {
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
   Double_t _felx3060[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3060[25] = {
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
   Double_t _fehx3060[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3060[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3060,_fy3060,_felx3060,_fehx3060,_fely3060,_fehy3060);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3060 = new TH1F("Graph_Graph3060","",100,2.000001,218);
   Graph_Graph3060->SetMinimum(0);
   Graph_Graph3060->SetMaximum(1.262698);
   Graph_Graph3060->SetDirectory(0);
   Graph_Graph3060->SetStats(0);
   Graph_Graph3060->SetLineStyle(0);
   Graph_Graph3060->SetMarkerStyle(20);
   Graph_Graph3060->GetXaxis()->SetLabelFont(42);
   Graph_Graph3060->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3060->GetXaxis()->SetTitleFont(42);
   Graph_Graph3060->GetYaxis()->SetLabelFont(42);
   Graph_Graph3060->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3060->GetYaxis()->SetTitleFont(42);
   Graph_Graph3060->GetZaxis()->SetLabelFont(42);
   Graph_Graph3060->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3060);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy300 = new TH1F("hframe_copy300","",1000,20,200);
   hframe_copy300->SetMinimum(0);
   hframe_copy300->SetMaximum(330.3825);
   hframe_copy300->SetDirectory(0);
   hframe_copy300->SetStats(0);
   hframe_copy300->SetLineStyle(0);
   hframe_copy300->SetMarkerStyle(20);
   hframe_copy300->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy300->GetXaxis()->SetNdivisions(506);
   hframe_copy300->GetXaxis()->SetLabelFont(42);
   hframe_copy300->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy300->GetXaxis()->SetLabelSize(0.05);
   hframe_copy300->GetXaxis()->SetTitleSize(0.06);
   hframe_copy300->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy300->GetXaxis()->SetTitleFont(42);
   hframe_copy300->GetYaxis()->SetTitle("Events");
   hframe_copy300->GetYaxis()->SetLabelFont(42);
   hframe_copy300->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy300->GetYaxis()->SetLabelSize(0.05);
   hframe_copy300->GetYaxis()->SetTitleSize(0.06);
   hframe_copy300->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy300->GetYaxis()->SetTitleFont(42);
   hframe_copy300->GetZaxis()->SetLabelFont(42);
   hframe_copy300->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy300->GetZaxis()->SetLabelSize(0.05);
   hframe_copy300->GetZaxis()->SetTitleSize(0.06);
   hframe_copy300->GetZaxis()->SetTitleFont(42);
   hframe_copy300->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt1->Modified();
   ccwh3l_Pre_13TeV_pt1->cd();
   ccwh3l_Pre_13TeV_pt1->SetSelected(ccwh3l_Pre_13TeV_pt1);
}
