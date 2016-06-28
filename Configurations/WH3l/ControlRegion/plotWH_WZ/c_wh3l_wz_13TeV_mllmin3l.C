void c_wh3l_wz_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_mllmin3l/cc
//=========  (Tue Jun 28 02:22:45 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_mllmin3l = new TCanvas("ccwh3l_wz_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_mllmin3l->Range(-28,-28.9576,209.5,193.7932);
   ccwh3l_wz_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_wz_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_wz_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_wz_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_wz_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_wz_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,10,200);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(182.6556);
   hframe31->SetDirectory(0);
   hframe31->SetStats(0);
   hframe31->SetLineStyle(0);
   hframe31->SetMarkerStyle(20);
   hframe31->GetXaxis()->SetTitle("min m_{ll} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7","thsBackground_grouped_wh3l_wz_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetMinimum(-0.8339095);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetMaximum(12.25544);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_mllmin3l_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(1,-0.1608952);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(2,2.058354);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(3,2.880006);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(4,2.548079);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(5,1.838133);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(6,2.796257);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(7,0.8709941);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(8,3.105972);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(9,1.412784);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(10,0.7397172);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinContent(11,-0.005728715);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(1,0.6730143);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(2,1.193214);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(3,1.453868);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(4,1.535292);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(5,1.425898);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(6,1.511997);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(7,0.9683689);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(8,1.364702);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(9,1.286166);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(10,0.6933581);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetBinError(11,0.00575287);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetEntries(419);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetBinContent(2,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetBinContent(4,0.03556199);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetBinContent(6,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetBinContent(9,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetBinError(2,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetBinError(4,0.02515185);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetBinError(6,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetBinError(9,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mllmin3l33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(1,0.002373693);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(2,0.002863352);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(3,0.004537599);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(4,0.0119661);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(5,0.008181358);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(6,0.01645129);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(7,0.01308933);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(8,0.01481774);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(9,0.09124059);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(10,0.004888436);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinContent(11,0.0003518286);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(1,0.001213915);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(2,0.001368525);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(3,0.001626826);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(4,0.002936414);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(5,0.002450323);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(6,0.003289744);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(7,0.003092479);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(8,0.00309864);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(9,0.008220828);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(10,0.001902389);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetBinError(11,0.0009024338);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetEntries(349);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(1,1.280768);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(2,1.153283);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(3,0.8057284);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(4,1.45084);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(5,1.839112);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(6,0.4945774);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(7,-0.0055502);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(8,0.05967287);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(9,0.95372);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(10,-0.1007855);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(1,0.3937274);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(2,0.364698);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(3,0.3308129);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(4,0.4234152);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(5,0.4416807);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(6,0.2098437);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(7,0.2319263);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(8,0.2128198);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(9,0.3872119);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(10,0.1007855);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetEntries(113);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(1,0.3778042);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(2,0.4183899);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(3,0.672088);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(4,1.131682);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(5,0.5198671);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(6,0.9210596);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(7,1.088612);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(8,0.9617208);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(9,4.409883);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinContent(10,0.5189746);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(1,0.1224878);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(2,0.1292822);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(3,0.1861136);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(4,0.2161945);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(5,0.1514237);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(6,0.1991828);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(7,0.2047254);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(8,0.1992188);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(9,0.4245459);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetBinError(10,0.1381541);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetEntries(305);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37","histo_ZZ",20,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(1,0.3778042);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(2,0.4183899);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(3,0.672088);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(4,1.131682);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(5,0.5198671);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(6,0.9210596);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(7,1.088612);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(8,0.9617208);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(9,4.409883);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinContent(10,0.5189746);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(1,0.1224878);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(2,0.1292822);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(3,0.1861136);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(4,0.2161945);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(5,0.1514237);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(6,0.1991828);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(7,0.2047254);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(8,0.1992188);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(9,0.4245459);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetBinError(10,0.1381541);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(1,0.02547479);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(2,0.07412982);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(3,0.08622616);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(4,0.1090326);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(5,0.1012476);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(6,0.1057598);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(7,0.1054931);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(8,0.1334893);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(9,0.3800196);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(10,0.03624754);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(1,0.005972049);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(2,0.01003747);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(3,0.01055691);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(4,0.01227644);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(5,0.0116985);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(6,0.01109823);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(7,0.01053858);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(8,0.01236138);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(9,0.02023721);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(10,0.005943566);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetEntries(1642);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8","thsSignal_grouped_wh3l_wz_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetMaximum(0.4202696);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_mllmin3l_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(1,0.02547479);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(2,0.07412982);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(3,0.08622616);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(4,0.1090326);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(5,0.1012476);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(6,0.1057598);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(7,0.1054931);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(8,0.1334893);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(9,0.3800196);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(10,0.03624754);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinContent(11,0.003190211);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(1,0.005972049);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(2,0.01003747);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(3,0.01055691);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(4,0.01227644);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(5,0.0116985);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(6,0.01109823);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(7,0.01053858);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(8,0.01236138);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(9,0.02023721);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(10,0.005943566);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetBinError(11,0.002038906);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetEntries(1642);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_wz_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
   4.3252,
   8.793372,
   11.71735,
   14.39298,
   14.22507,
   14.42966,
   12.89458,
   18.24046,
   56.97222,
   5.562968,
   0.8924766,
   0.1252304,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   1.316698,
   1.967594,
   2.33828,
   2.546075,
   2.322405,
   2.330518,
   1.57693,
   2.119773,
   2.680014,
   1.110856,
   0.1456688,
   0.02605052,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.8056275,
   1.967593,
   2.33828,
   2.546074,
   2.322406,
   2.330519,
   1.449895,
   2.258322,
   2.680014,
   1.110856,
   0.1461953,
   0.02605052,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,219);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(65.61746);
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
   Double_t _fy3008[20] = {
   7,
   7,
   14,
   17,
   20,
   14,
   18,
   22,
   65,
   9,
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
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   2.581513,
   2.581513,
   3.696567,
   4.082258,
   4.43453,
   3.696567,
   4.202964,
   4.654589,
   8.041623,
   2.943511,
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
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   3.770356,
   3.770356,
   4.830479,
   5.203825,
   5.546633,
   4.830479,
   5.321116,
   5.761485,
   9.103818,
   4.110286,
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
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,219);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(81.5142);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy40 = new TH1F("hframe_copy40","",1000,10,200);
   hframe_copy40->SetMinimum(0);
   hframe_copy40->SetMaximum(182.6556);
   hframe_copy40->SetDirectory(0);
   hframe_copy40->SetStats(0);
   hframe_copy40->SetLineStyle(0);
   hframe_copy40->SetMarkerStyle(20);
   hframe_copy40->GetXaxis()->SetTitle("min m_{ll} [GeV]");
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
   ccwh3l_wz_13TeV_mllmin3l->Modified();
   ccwh3l_wz_13TeV_mllmin3l->cd();
   ccwh3l_wz_13TeV_mllmin3l->SetSelected(ccwh3l_wz_13TeV_mllmin3l);
}
