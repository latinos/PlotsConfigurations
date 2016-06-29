void c_wh3l_nobTag_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_nobTag_13TeV_pt1/cc
//=========  (Wed Jun 29 01:51:46 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_nobTag_13TeV_pt1 = new TCanvas("ccwh3l_nobTag_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_nobTag_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_nobTag_13TeV_pt1->Range(-28,-3.77422,209.5,25.25824);
   ccwh3l_nobTag_13TeV_pt1->SetFillColor(0);
   ccwh3l_nobTag_13TeV_pt1->SetBorderMode(0);
   ccwh3l_nobTag_13TeV_pt1->SetBorderSize(2);
   ccwh3l_nobTag_13TeV_pt1->SetTickx(1);
   ccwh3l_nobTag_13TeV_pt1->SetTicky(1);
   ccwh3l_nobTag_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_nobTag_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_nobTag_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_nobTag_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_nobTag_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_nobTag_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe291 = new TH1F("hframe291","",1000,10,200);
   hframe291->SetMinimum(0);
   hframe291->SetMaximum(23.80662);
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
   
   THStack *thsBackground_grouped_wh3l_nobTag_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->SetName("thsBackground_grouped_wh3l_nobTag_13TeV_pt1");
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_nobTag_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59 = new TH1F("thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59","thsBackground_grouped_wh3l_nobTag_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->SetMinimum(-0.3692362);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->SetMaximum(9.998779);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->SetDirectory(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->SetStats(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->SetLineStyle(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_nobTag_13TeV_pt1_stack_59);
   
   
   TH1D *new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292 = new TH1D("new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(2,0.8584847);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(3,4.522757);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(4,6.766914);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(5,5.538929);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(6,5.926997);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(7,3.186505);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(8,4.61962);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(9,3.755821);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(10,1.923398);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(11,2.218339);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(12,1.171396);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(13,0.9764903);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(14,2.493143);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(15,0.4568224);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(16,0.6371393);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(17,0.3262815);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(18,0.08977167);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(19,0.01002724);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(20,0.4503836);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(22,0.07691139);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(23,-0.04887344);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(24,0.2256407);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(25,0.2430979);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinContent(26,1.014758);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(2,0.8196235);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(3,1.72263);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(4,1.962868);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(5,1.872456);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(6,1.934247);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(7,1.310631);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(8,1.606278);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(9,1.463641);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(10,0.8173397);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(11,1.043647);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(12,0.4997007);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(13,0.6167449);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(14,1.129624);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(15,0.391079);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(16,0.6970211);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(17,0.2482007);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(18,0.1084256);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(19,0.01002724);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(20,0.4379226);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(22,0.07684571);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(23,0.03685188);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(24,0.184343);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(25,0.1566282);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetBinError(26,0.502143);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetEntries(435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetFillColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->SetLineColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt1292->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->Add(new_histo_group_Fake_wh3l_nobTag_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_nobTag_13TeV_pt1293 = new TH1D("new_histo_group_WW_wh3l_nobTag_13TeV_pt1293","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(4,0.01528641);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(5,0.01044191);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(6,0.03680617);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(7,0.03356775);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(9,0.04937191);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(11,0.01821101);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(15,0.01749081);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(17,0.01305253);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinContent(26,0.04641106);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(4,0.01528641);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(5,0.01044191);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(6,0.02347482);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(7,0.02376519);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(9,0.02876853);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(11,0.01821101);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(15,0.01749081);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(17,0.01305253);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetBinError(26,0.02682259);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetEntries(17);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetFillColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->SetLineColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt1293->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->Add(new_histo_group_WW_wh3l_nobTag_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294 = new TH1D("new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(2,0.0006166669);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(4,0.0006249245);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(5,0.0002076036);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(7,0.001189512);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(8,0.003823526);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(9,0.002913564);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(10,0.0006401424);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(11,0.002574639);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(12,0.002463385);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(13,0.004183672);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(14,0.003218641);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(15,0.002340744);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(16,0.00117341);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(17,0.001948696);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(18,0.002172128);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(19,0.0001462447);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(20,0.001178849);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(21,0.0007555783);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(22,0.0005245999);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(23,0.001598537);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(25,0.001208951);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinContent(26,0.008001717);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(2,0.0006166669);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(4,0.0006249245);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(5,0.0002076036);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(7,0.0008514609);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(8,0.001512376);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(9,0.001373067);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(10,0.001098081);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(11,0.001301605);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(12,0.001207508);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(13,0.001550544);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(14,0.001380121);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(15,0.00119709);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(16,0.0008322095);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(17,0.001131525);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(18,0.001154535);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(19,0.0001462447);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(20,0.0008359862);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(21,0.0007555783);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(22,0.0005245999);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(23,0.0009406349);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(25,0.000860319);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetBinError(26,0.002130404);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetEntries(83);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetFillColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->SetLineColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt1294->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->Add(new_histo_group_VVV_wh3l_nobTag_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295 = new TH1D("new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(2,0.1353116);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(3,1.057325);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(4,0.6242109);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(5,0.7485917);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(6,0.8688323);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(7,0.1493144);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(8,0.1771464);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(9,-0.1919813);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(11,0.1156138);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(12,-0.02313529);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(15,0.06632758);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(16,0.1220507);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(17,0.1085778);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(19,0.2036998);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinContent(26,0.1067996);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(2,0.1120881);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(3,0.3321015);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(4,0.3330429);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(5,0.3121617);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(6,0.2908222);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(7,0.1255831);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(8,0.1273509);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(9,0.1772549);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(11,0.1156138);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(12,0.02313529);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(15,0.06632758);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(16,0.1220507);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(17,0.1085778);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(19,0.1441485);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetBinError(26,0.1067996);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetEntries(69);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetFillColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->SetLineColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt1295->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->Add(new_histo_group_Vg_wh3l_nobTag_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296 = new TH1D("new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(2,0.06782966);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(3,0.07747764);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(4,0.2248002);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(5,0.1002357);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(6,0.2023304);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(8,0.04400699);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(9,0.04079673);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(10,0.0667641);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(11,0.07480925);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(12,0.2121718);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(13,0.07478125);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(15,0.02044833);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(17,0.02088597);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(18,0.03822494);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(19,0.04545766);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(20,0.04596292);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(23,0.02058282);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinContent(26,0.1680103);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(2,0.04912495);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(3,0.05497137);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(4,0.09668948);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(5,0.06112274);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(6,0.09162916);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(8,0.04400699);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(9,0.04079673);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(10,0.0508894);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(11,0.05435601);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(12,0.09616886);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(13,0.05483807);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(15,0.02044833);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(17,0.02088597);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(18,0.03822494);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(19,0.04545766);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(20,0.04596292);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(23,0.02058282);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetBinError(26,0.08448447);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetEntries(44);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1296->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297 = new TH1D("new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(2,0.4999914);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(3,1.5498);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(4,1.773921);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(5,1.953607);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(6,1.443817);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(7,1.164742);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(8,1.093239);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(9,0.8999251);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(10,0.9061726);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(11,0.7613579);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(12,0.7000959);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(13,0.5543463);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(14,0.472316);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(15,0.4957522);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(16,0.4697716);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(17,0.3296691);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(18,0.2466576);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(19,0.299621);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(20,0.181053);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(21,0.1738275);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(22,0.1508587);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(23,0.1634462);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(24,0.1476909);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(25,0.1462585);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinContent(26,1.7848);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(2,0.05233661);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(3,0.09212549);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(4,0.09820078);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(5,0.103551);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(6,0.08880049);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(7,0.07897346);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(8,0.07616946);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(9,0.07002262);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(10,0.07056876);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(11,0.06481043);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(12,0.06168132);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(13,0.05522463);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(14,0.05117064);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(15,0.05128547);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(16,0.05062338);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(17,0.04207525);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(18,0.03592767);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(19,0.04052103);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(20,0.03002952);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(21,0.03025222);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(22,0.02833374);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(23,0.0303788);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(24,0.02872072);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(25,0.02769588);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetBinError(26,0.09800519);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetEntries(3754);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetFillColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->SetLineColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt1297->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->Add(new_histo_group_WZ_wh3l_nobTag_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(2,0.01438805);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(3,0.05789059);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(4,0.1168903);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(5,0.1336446);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(6,0.1130845);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(7,0.1306284);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(8,0.09124307);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(9,0.09680528);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(10,0.07502233);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(11,0.06275224);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(12,0.03588419);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(13,0.04686598);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(14,0.04409465);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(15,0.02989186);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(16,0.04237499);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(17,0.03413204);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(18,0.02543101);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(19,0.01596554);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(20,0.01331159);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(21,0.01053109);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(22,0.009032422);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(23,0.003831069);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(24,0.006517349);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(25,0.01050213);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinContent(26,0.05410836);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(2,0.003977772);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(3,0.007697004);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(4,0.01130818);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(5,0.01260534);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(6,0.01112582);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(7,0.01252357);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(8,0.00972805);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(9,0.01077227);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(10,0.01002249);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(11,0.008476186);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(12,0.006214369);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(13,0.00693248);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(14,0.007022873);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(15,0.004942117);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(16,0.007422435);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(17,0.006219209);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(18,0.005492828);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(19,0.003840857);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(20,0.002771363);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(21,0.003189649);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(22,0.002573379);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(23,0.001258184);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(24,0.002501519);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(25,0.003542042);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetBinError(26,0.007334956);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1298->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1,"");
   thsBackground_grouped_wh3l_nobTag_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1->SetName("thsSignal_grouped_wh3l_nobTag_13TeV_pt1");
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_nobTag_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60 = new TH1F("thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60","thsSignal_grouped_wh3l_nobTag_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->SetMinimum(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->SetMaximum(0.1535625);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->SetDirectory(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->SetStats(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->SetLineStyle(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_nobTag_13TeV_pt1_stack_60);
   
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(2,0.01438805);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(3,0.05789059);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(4,0.1168903);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(5,0.1336446);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(6,0.1130845);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(7,0.1306284);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(8,0.09124307);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(9,0.09680528);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(10,0.07502233);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(11,0.06275224);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(12,0.03588419);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(13,0.04686598);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(14,0.04409465);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(15,0.02989186);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(16,0.04237499);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(17,0.03413204);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(18,0.02543101);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(19,0.01596554);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(20,0.01331159);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(21,0.01053109);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(22,0.009032422);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(23,0.003831069);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(24,0.006517349);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(25,0.01050213);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinContent(26,0.05410836);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(2,0.003977772);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(3,0.007697004);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(4,0.01130818);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(5,0.01260534);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(6,0.01112582);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(7,0.01252357);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(8,0.00972805);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(9,0.01077227);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(10,0.01002249);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(11,0.008476186);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(12,0.006214369);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(13,0.00693248);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(14,0.007022873);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(15,0.004942117);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(16,0.007422435);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(17,0.006219209);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(18,0.005492828);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(19,0.003840857);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(20,0.002771363);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(21,0.003189649);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(22,0.002573379);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(23,0.001258184);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(24,0.002501519);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(25,0.003542042);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetBinError(26,0.007334956);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1299->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1,"");
   thsSignal_grouped_wh3l_nobTag_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3059[25] = {
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
   Double_t _fy3059[25] = {
   0,
   1.562234,
   7.223484,
   9.405757,
   8.352013,
   8.478783,
   4.578032,
   5.937836,
   4.556847,
   2.896975,
   3.190905,
   2.062991,
   1.609802,
   2.968677,
   1.059182,
   1.230135,
   0.8004156,
   0.3768263,
   0.558952,
   0.6785784,
   1.022219,
   0.2282947,
   0.1367541,
   0.3733316,
   0.3905654};
   Double_t _felx3059[25] = {
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
   Double_t _fely3059[25] = {
   0,
   1.077872,
   2.728032,
   3.45038,
   3.056204,
   3.196123,
   1.936487,
   2.461356,
   2.214434,
   1.15605,
   1.512556,
   0.7960293,
   0.8049038,
   1.469433,
   0.5711684,
   0.841024,
   0.4491731,
   0.1683738,
   0.2411781,
   0.5383899,
   0.9273968,
   0.1091984,
   0.09057315,
   0.2272509,
   0.2038573};
   Double_t _fehx3059[25] = {
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
   Double_t _fehy3059[25] = {
   0,
   1.07786,
   2.728002,
   3.45026,
   3.05616,
   3.195892,
   1.936463,
   2.461337,
   2.214412,
   1.156401,
   1.512556,
   0.7959817,
   0.8048658,
   1.469421,
   0.5710937,
   0.8988604,
   0.449124,
   0.1866913,
   0.2410857,
   0.5383875,
   0.9273934,
   0.1091642,
   0.09052749,
   0.2272487,
   0.2038532};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3059,_fy3059,_felx3059,_fehx3059,_fely3059,_fehy3059);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3059 = new TH1F("Graph_Graph3059","",100,0,219);
   Graph_Graph3059->SetMinimum(0);
   Graph_Graph3059->SetMaximum(14.14162);
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
   
   TH1F *Graph_Graph3060 = new TH1F("Graph_Graph3060","",100,0,219);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy300 = new TH1F("hframe_copy300","",1000,10,200);
   hframe_copy300->SetMinimum(0);
   hframe_copy300->SetMaximum(23.80662);
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
   ccwh3l_nobTag_13TeV_pt1->Modified();
   ccwh3l_nobTag_13TeV_pt1->cd();
   ccwh3l_nobTag_13TeV_pt1->SetSelected(ccwh3l_nobTag_13TeV_pt1);
}
