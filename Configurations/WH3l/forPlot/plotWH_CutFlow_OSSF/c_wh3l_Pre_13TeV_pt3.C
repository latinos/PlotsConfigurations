void c_wh3l_Pre_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt3/cc
//=========  (Sat Jul  2 21:43:48 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt3 = new TCanvas("ccwh3l_Pre_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt3->Range(-28,-161.5875,209.5,1081.393);
   ccwh3l_Pre_13TeV_pt3->SetFillColor(0);
   ccwh3l_Pre_13TeV_pt3->SetBorderMode(0);
   ccwh3l_Pre_13TeV_pt3->SetBorderSize(2);
   ccwh3l_Pre_13TeV_pt3->SetTickx(1);
   ccwh3l_Pre_13TeV_pt3->SetTicky(1);
   ccwh3l_Pre_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe361 = new TH1F("hframe361","",1000,10,200);
   hframe361->SetMinimum(0);
   hframe361->SetMaximum(1019.244);
   hframe361->SetDirectory(0);
   hframe361->SetStats(0);
   hframe361->SetLineStyle(0);
   hframe361->SetMarkerStyle(20);
   hframe361->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe361->GetXaxis()->SetNdivisions(506);
   hframe361->GetXaxis()->SetLabelFont(42);
   hframe361->GetXaxis()->SetLabelOffset(0.007);
   hframe361->GetXaxis()->SetLabelSize(0.05);
   hframe361->GetXaxis()->SetTitleSize(0.06);
   hframe361->GetXaxis()->SetTitleOffset(0.9);
   hframe361->GetXaxis()->SetTitleFont(42);
   hframe361->GetYaxis()->SetTitle("Events");
   hframe361->GetYaxis()->SetLabelFont(42);
   hframe361->GetYaxis()->SetLabelOffset(0.007);
   hframe361->GetYaxis()->SetLabelSize(0.05);
   hframe361->GetYaxis()->SetTitleSize(0.06);
   hframe361->GetYaxis()->SetTitleOffset(1.25);
   hframe361->GetYaxis()->SetTitleFont(42);
   hframe361->GetZaxis()->SetLabelFont(42);
   hframe361->GetZaxis()->SetLabelOffset(0.007);
   hframe361->GetZaxis()->SetLabelSize(0.05);
   hframe361->GetZaxis()->SetTitleSize(0.06);
   hframe361->GetZaxis()->SetTitleFont(42);
   hframe361->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt3");
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73","thsBackground_grouped_wh3l_Pre_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetMinimum(-0.5191556);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetMaximum(383.0365);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt3362 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt3362","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(1,169.3167);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(2,75.25598);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(3,23.57119);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(4,11.30467);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(5,4.837759);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(6,2.270121);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(7,1.951163);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(8,0.1958613);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(9,0.07781526);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(10,0.05566494);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(11,-0.01121442);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(12,0.06583638);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(13,0.03883704);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(14,-0.04013883);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(17,-0.01326617);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(19,-0.0197091);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(1,11.47715);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(2,5.793802);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(3,2.993036);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(4,2.06267);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(5,1.244134);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(6,0.639593);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(7,0.7365348);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(8,0.1705098);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(9,0.1437023);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(10,0.1066377);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(11,0.02303137);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(12,0.06583638);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(13,0.07306028);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(14,0.02880247);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(17,0.02548248);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(19,0.0197091);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt3363 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt3363","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(1,0.1832245);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(2,0.1484705);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(3,0.06546749);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(4,0.009663942);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(6,0.01461809);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(10,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(1,0.05451447);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(2,0.04826665);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(3,0.03090442);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(4,0.009663942);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(6,0.01461809);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(10,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt3364 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt3364","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(1,0.8050785);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(2,1.049384);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(3,1.021924);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(4,0.7579773);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(5,0.5257985);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(6,0.3591618);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(7,0.1963668);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(8,0.1255152);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(9,0.09471896);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(10,0.06707971);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(11,0.03686524);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(12,0.04018505);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(13,0.0377755);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(14,0.01464253);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(15,0.01600677);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(16,0.01993578);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(17,0.01779669);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(18,0.001714777);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(19,0.004242075);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(20,0.007505364);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(21,0.004604887);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(23,0.0007301272);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(26,0.004854874);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(1,0.03955748);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(2,0.04528813);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(3,0.04322742);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(4,0.03743145);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(5,0.03087427);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(6,0.02555125);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(7,0.01969741);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(8,0.01508358);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(9,0.01352323);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(10,0.01186077);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(11,0.00886584);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(12,0.009161108);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(13,0.008029714);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(14,0.005864019);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(15,0.005077465);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(16,0.006068883);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(17,0.005521078);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(18,0.001212631);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(19,0.002793633);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(20,0.003619332);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(21,0.002516181);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(23,0.0007301272);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(26,0.003253932);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt3365 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt3365","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(1,122.7034);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(2,63.62146);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(3,20.8737);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(4,10.1261);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(5,4.174582);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(6,2.323815);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(7,1.416911);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(8,0.5748465);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(9,0.6045966);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(10,-0.223828);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(11,0.1198037);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(12,0.08142969);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(13,0.1110207);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(14,-0.107833);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(18,0.03359425);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(20,0.104439);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(1,4.271968);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(2,3.262091);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(3,1.840856);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(4,1.328788);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(5,0.8247655);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(6,0.6158381);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(7,0.5051635);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(8,0.343369);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(9,0.3016315);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(10,0.2953276);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(11,0.1198037);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(12,0.1906097);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(13,0.1110207);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(14,0.107833);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(18,0.03359425);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(20,0.104439);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(1,10.7614);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(2,14.15174);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(3,11.28638);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(4,8.594507);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(5,4.829292);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(6,1.830927);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(7,0.5572334);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(8,0.6436791);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(9,0.3843264);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(10,0.1074771);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(11,0.1213553);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(13,0.07817914);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(14,0.07912448);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(16,0.04114882);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(17,0.009857343);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(22,0.04108903);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(1,0.6672722);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(2,0.7626638);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(3,0.6795812);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(4,0.5937457);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(5,0.444432);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(6,0.2796369);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(7,0.1516704);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(8,0.1662763);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(9,0.1295779);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(10,0.06300779);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(11,0.06604493);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(13,0.04776839);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(14,0.05609259);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(16,0.04114882);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(17,0.009857343);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(22,0.04108903);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt3367 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt3367","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(1,59.86535);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(2,88.18125);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(3,88.59564);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(4,63.08934);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(5,31.95279);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(6,14.84404);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(7,8.017948);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(8,4.702265);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(9,3.081033);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(10,1.901934);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(11,1.191753);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(12,0.884647);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(13,0.6397858);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(14,0.3939819);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(15,0.2968546);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(16,0.2626711);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(17,0.2330184);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(18,0.156408);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(19,0.03316102);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(20,0.09108263);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(21,0.04501372);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(22,0.05274066);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(23,0.04206954);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(24,0.02271916);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(25,0.01652175);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(26,0.05538162);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(1,0.5692523);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(2,0.6949109);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(3,0.6948126);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(4,0.5858365);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(5,0.4175028);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(6,0.2849419);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(7,0.2090235);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(8,0.1606309);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(9,0.1295107);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(10,0.101794);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(11,0.08011104);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(12,0.06953731);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(13,0.05809324);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(14,0.04540664);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(15,0.04011024);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(16,0.03752574);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(17,0.03680587);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(18,0.02883515);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(19,0.01301864);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(20,0.02161649);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(21,0.0155945);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(22,0.01694265);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(23,0.01477889);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(24,0.01090512);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(25,0.009547731);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(26,0.01742131);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(1,1.161593);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(2,1.287361);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(3,0.9683926);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(4,0.6072135);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(5,0.3924852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(6,0.2281291);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(7,0.1266709);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(8,0.08348121);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(9,0.05285387);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(10,0.03894978);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(11,0.01712237);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(12,0.01724166);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(13,0.006158145);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(14,0.007335364);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(15,0.006142153);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(16,0.001512204);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(17,0.000425402);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(18,0.0003038635);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(20,0.001812762);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(21,0.001523883);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(22,0.0004464625);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(1,0.03569311);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(2,0.03757334);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(3,0.03298586);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(4,0.02536081);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(5,0.02007596);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(6,0.0144414);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(7,0.01022223);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(8,0.008723861);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(9,0.00642087);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(10,0.005508533);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(11,0.003794282);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(12,0.003949798);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(13,0.002971806);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(14,0.002530972);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(15,0.002242282);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(16,0.001447321);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(17,0.000425402);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(18,0.0003038635);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(20,0.001554327);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(21,0.001523883);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(22,0.0004464625);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt3,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt3");
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74","thsSignal_grouped_wh3l_Pre_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetMaximum(1.391181);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(1,1.161593);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(2,1.287361);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(3,0.9683926);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(4,0.6072135);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(5,0.3924852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(6,0.2281291);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(7,0.1266709);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(8,0.08348121);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(9,0.05285387);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(10,0.03894978);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(11,0.01712237);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(12,0.01724166);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(13,0.006158145);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(14,0.007335364);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(15,0.006142153);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(16,0.001512204);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(17,0.000425402);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(18,0.0003038635);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(20,0.001812762);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(21,0.001523883);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(22,0.0004464625);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(1,0.03569311);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(2,0.03757334);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(3,0.03298586);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(4,0.02536081);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(5,0.02007596);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(6,0.0144414);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(7,0.01022223);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(8,0.008723861);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(9,0.00642087);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(10,0.005508533);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(11,0.003794282);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(12,0.003949798);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(13,0.002971806);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(14,0.002530972);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(15,0.002242282);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(16,0.001447321);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(17,0.000425402);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(18,0.0003038635);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(20,0.001554327);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(21,0.001523883);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(22,0.0004464625);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt3,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3073[25] = {
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
   Double_t _fy3073[25] = {
   363.6351,
   242.4083,
   145.4143,
   93.88226,
   46.32022,
   21.64268,
   12.13962,
   6.242167,
   4.24249,
   1.92138,
   1.458563,
   1.072098,
   0.9055982,
   0.3397771,
   0.3128613,
   0.3237557,
   0.2474062,
   0.1917171,
   0.01769399,
   0.203027,
   0.04961861,
   0.09382969,
   0.04279966,
   0.02271916,
   0.01652175};
   Double_t _felx3073[25] = {
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
   Double_t _fely3073[25] = {
   62.51663,
   28.77053,
   10.57831,
   6.193483,
   3.474223,
   2.06905,
   1.777916,
   0.8768183,
   0.6655825,
   0.5462582,
   0.3040741,
   0.2325315,
   0.2692503,
   0.2453233,
   0.04848762,
   0.08845436,
   0.08012198,
   0.06466444,
   0.03645819,
   0.130298,
   0.01840489,
   0.05816442,
   0.01562899,
   0.01092492,
   0.009564353};
   Double_t _fehx3073[25] = {
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
   Double_t _fehy3073[25] = {
   62.45989,
   28.76061,
   10.56958,
   6.190121,
   3.470845,
   2.064307,
   1.776239,
   0.8736585,
   0.7287657,
   0.5251171,
   0.290882,
   0.3391048,
   0.30236,
   0.2451806,
   0.04823533,
   0.08786292,
   0.06792597,
   0.06450661,
   0.03642146,
   0.1302603,
   0.01839642,
   0.0581675,
   0.01562206,
   0.01092296,
   0.009566962};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3073,_fy3073,_felx3073,_fehx3073,_fely3073,_fehy3073);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3073 = new TH1F("Graph_Graph3073","",100,0,219);
   Graph_Graph3073->SetMinimum(-42.63014);
   Graph_Graph3073->SetMaximum(468.7063);
   Graph_Graph3073->SetDirectory(0);
   Graph_Graph3073->SetStats(0);
   Graph_Graph3073->SetLineStyle(0);
   Graph_Graph3073->SetMarkerStyle(20);
   Graph_Graph3073->GetXaxis()->SetLabelFont(42);
   Graph_Graph3073->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3073->GetXaxis()->SetTitleFont(42);
   Graph_Graph3073->GetYaxis()->SetLabelFont(42);
   Graph_Graph3073->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3073->GetYaxis()->SetTitleFont(42);
   Graph_Graph3073->GetZaxis()->SetLabelFont(42);
   Graph_Graph3073->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3073);
   
   grae->Draw("2");
   
   Double_t _fx3074[25] = {
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
   Double_t _fy3074[25] = {
   388,
   262,
   183,
   107,
   58,
   21,
   12,
   8,
   6,
   3,
   1,
   0,
   1,
   2,
   0,
   0,
   1,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3074[25] = {
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
   Double_t _fely3074[25] = {
   19.68965,
   16.17642,
   13.51567,
   10.3281,
   7.593902,
   4.545892,
   3.415326,
   2.768432,
   2.379969,
   1.632727,
   0.8272524,
   0,
   0.8272524,
   1.29183,
   0,
   0,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3074[25] = {
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
   Double_t _fehy3074[25] = {
   20.71509,
   17.20739,
   14.55272,
   11.37657,
   8.659745,
   5.655298,
   4.559911,
   3.94522,
   3.583713,
   2.918242,
   2.29957,
   1.147908,
   2.29957,
   2.63791,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3074,_fy3074,_felx3074,_fehx3074,_fely3074,_fehy3074);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3074 = new TH1F("Graph_Graph3074","",100,0,219);
   Graph_Graph3074->SetMinimum(0);
   Graph_Graph3074->SetMaximum(449.5866);
   Graph_Graph3074->SetDirectory(0);
   Graph_Graph3074->SetStats(0);
   Graph_Graph3074->SetLineStyle(0);
   Graph_Graph3074->SetMarkerStyle(20);
   Graph_Graph3074->GetXaxis()->SetLabelFont(42);
   Graph_Graph3074->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3074->GetXaxis()->SetTitleFont(42);
   Graph_Graph3074->GetYaxis()->SetLabelFont(42);
   Graph_Graph3074->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3074->GetYaxis()->SetTitleFont(42);
   Graph_Graph3074->GetZaxis()->SetLabelFont(42);
   Graph_Graph3074->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3074);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy370 = new TH1F("hframe_copy370","",1000,10,200);
   hframe_copy370->SetMinimum(0);
   hframe_copy370->SetMaximum(1019.244);
   hframe_copy370->SetDirectory(0);
   hframe_copy370->SetStats(0);
   hframe_copy370->SetLineStyle(0);
   hframe_copy370->SetMarkerStyle(20);
   hframe_copy370->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy370->GetXaxis()->SetNdivisions(506);
   hframe_copy370->GetXaxis()->SetLabelFont(42);
   hframe_copy370->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetXaxis()->SetLabelSize(0.05);
   hframe_copy370->GetXaxis()->SetTitleSize(0.06);
   hframe_copy370->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy370->GetXaxis()->SetTitleFont(42);
   hframe_copy370->GetYaxis()->SetTitle("Events");
   hframe_copy370->GetYaxis()->SetLabelFont(42);
   hframe_copy370->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetYaxis()->SetLabelSize(0.05);
   hframe_copy370->GetYaxis()->SetTitleSize(0.06);
   hframe_copy370->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy370->GetYaxis()->SetTitleFont(42);
   hframe_copy370->GetZaxis()->SetLabelFont(42);
   hframe_copy370->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetZaxis()->SetLabelSize(0.05);
   hframe_copy370->GetZaxis()->SetTitleSize(0.06);
   hframe_copy370->GetZaxis()->SetTitleFont(42);
   hframe_copy370->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt3->Modified();
   ccwh3l_Pre_13TeV_pt3->cd();
   ccwh3l_Pre_13TeV_pt3->SetSelected(ccwh3l_Pre_13TeV_pt3);
}
