void c_wh3l_Pre_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt3/cc
//=========  (Sun Jul  3 16:19:11 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt3 = new TCanvas("ccwh3l_Pre_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt3->Range(-7.999999,-72.40115,104.5,484.5308);
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
   
   TH1F *hframe271 = new TH1F("hframe271","",1000,10,100);
   hframe271->SetMinimum(0);
   hframe271->SetMaximum(456.6842);
   hframe271->SetDirectory(0);
   hframe271->SetStats(0);
   hframe271->SetLineStyle(0);
   hframe271->SetMarkerStyle(20);
   hframe271->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe271->GetXaxis()->SetNdivisions(506);
   hframe271->GetXaxis()->SetLabelFont(42);
   hframe271->GetXaxis()->SetLabelOffset(0.007);
   hframe271->GetXaxis()->SetLabelSize(0.05);
   hframe271->GetXaxis()->SetTitleSize(0.06);
   hframe271->GetXaxis()->SetTitleOffset(0.9);
   hframe271->GetXaxis()->SetTitleFont(42);
   hframe271->GetYaxis()->SetTitle("Events");
   hframe271->GetYaxis()->SetLabelFont(42);
   hframe271->GetYaxis()->SetLabelOffset(0.007);
   hframe271->GetYaxis()->SetLabelSize(0.05);
   hframe271->GetYaxis()->SetTitleSize(0.06);
   hframe271->GetYaxis()->SetTitleOffset(1.25);
   hframe271->GetYaxis()->SetTitleFont(42);
   hframe271->GetZaxis()->SetLabelFont(42);
   hframe271->GetZaxis()->SetLabelOffset(0.007);
   hframe271->GetZaxis()->SetLabelSize(0.05);
   hframe271->GetZaxis()->SetTitleSize(0.06);
   hframe271->GetZaxis()->SetTitleFont(42);
   hframe271->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt3");
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55","thsBackground_grouped_wh3l_Pre_13TeV_pt3",25,10,100);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->SetMinimum(-0.3603672);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->SetMaximum(191.8074);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_55);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt3272 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt3272","histo_Fake",25,10,100);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(1,88.1232);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(2,84.08016);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(3,44.34775);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(4,36.97117);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(5,17.1461);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(6,13.69912);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(7,8.659768);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(8,6.29764);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(9,2.496882);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(10,3.509807);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(11,1.397993);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(12,1.353709);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(13,0.7159238);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(14,1.614282);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(15,0.3599255);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(16,0.02493265);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(17,0.05876933);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(18,-0.02699191);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(19,0.1256825);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(20,0.1141508);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(21,-0.05848589);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(22,-0.03542495);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(23,0.009508357);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(24,0.06583638);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinContent(26,-0.03427706);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(1,8.944216);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(2,7.346117);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(3,4.562353);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(4,3.949034);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(5,2.611195);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(6,2.28113);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(7,1.80472);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(8,1.552488);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(9,0.9348591);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(10,1.032798);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(11,0.5763114);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(12,0.4314023);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(13,0.3653484);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(14,0.6551889);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(15,0.335224);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(16,0.07716391);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(17,0.1038746);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(18,0.09870928);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(19,0.1023281);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(20,0.09828787);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(21,0.0413654);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(22,0.02540841);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(23,0.01005039);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(24,0.06583638);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetBinError(26,0.0848834);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetEntries(4042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3272->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt3273 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt3273","histo_WW",25,10,100);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(1,0.1122604);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(2,0.1867893);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(3,0.1124472);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(4,0.04366378);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(5,0.05346683);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(6,0.004725511);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(7,0.01447441);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(8,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(9,0.009663942);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(11,0.01672248);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(12,0.04677227);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinContent(21,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(1,0.04177268);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(2,0.0553303);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(3,0.0417112);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(4,0.02580281);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(5,0.02784014);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(6,0.004725511);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(7,0.01447441);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(8,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(9,0.009663942);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(11,0.01672248);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(12,0.02703251);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetBinError(21,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetEntries(44);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3273->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt3274 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt3274","histo_VVV",25,10,100);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(1,0.3209948);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(2,0.4921811);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(3,0.5480722);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(4,0.5082069);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(5,0.5218515);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(6,0.5209681);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(7,0.5102243);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(8,0.3413788);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(9,0.3048349);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(10,0.2522536);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(11,0.239802);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(12,0.1948308);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(13,0.1199982);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(14,0.08562309);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(15,0.09880537);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(16,0.08196678);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(17,0.04270681);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(18,0.05367491);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(19,0.04633238);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(20,0.04396687);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(21,0.02573819);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(22,0.03057057);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(23,0.01418692);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(24,0.01594392);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(25,0.0209121);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinContent(26,0.1419154);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(1,0.02590876);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(2,0.03083419);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(3,0.0331063);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(4,0.03231434);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(5,0.03134578);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(6,0.03142519);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(7,0.03129482);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(8,0.02520103);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(9,0.02394395);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(10,0.02267311);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(11,0.02040622);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(12,0.01927302);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(13,0.01559608);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(14,0.01273707);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(15,0.01348895);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(16,0.01221662);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(17,0.009385474);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(18,0.009545903);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(19,0.01003821);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(20,0.009543715);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(21,0.007693485);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(22,0.00853332);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(23,0.004667646);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(24,0.005274457);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(25,0.006860748);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetBinError(26,0.01600361);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetEntries(5218);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3274->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt3275 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt3275","histo_Vg",25,10,100);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(1,56.0384);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(2,59.58905);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(3,41.58799);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(4,25.19121);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(5,16.62166);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(6,6.42827);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(7,6.53681);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(8,4.08507);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(9,3.244591);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(10,1.991068);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(11,1.447619);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(12,1.173041);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(13,0.123336);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(14,1.173576);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(15,0.4528519);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(16,0.09550371);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(17,0.2690084);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(18,0.4303881);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(19,0.1398105);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(20,-0.01352369);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(21,-0.2103043);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(23,0.1198037);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(24,-0.009118929);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(25,0.09054862);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinContent(26,0.141221);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(1,2.949131);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(2,2.929994);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(3,2.603768);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(4,2.043173);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(5,1.625568);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(6,1.10152);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(7,1.020193);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(8,0.8620484);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(9,0.7231683);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(10,0.5790773);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(11,0.4414135);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(12,0.4616457);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(13,0.2678092);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(14,0.4385553);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(15,0.2751437);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(16,0.244709);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(17,0.1694413);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(18,0.2193263);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(19,0.2041918);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(20,0.2543611);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(21,0.1500629);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(23,0.1198037);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(24,0.167729);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(25,0.09054862);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetBinError(26,0.1897093);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetEntries(3347);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3275->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276","histo_ZZ",25,10,100);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(1,4.936895);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(2,5.153394);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(3,7.293395);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(4,6.132606);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(5,6.096291);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(6,4.952256);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(7,4.928124);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(8,3.724489);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(9,3.47054);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(10,2.238381);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(11,1.231252);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(12,1.121984);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(13,0.4410989);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(14,0.2856741);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(15,0.2167355);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(16,0.3031304);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(17,0.3677191);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(18,0.2480749);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(19,0.06282513);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(20,0.1074771);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(22,0.08358244);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(23,0.03777287);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinContent(26,0.2493988);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(1,0.4535155);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(2,0.4590681);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(3,0.5509509);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(4,0.4988489);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(5,0.4964809);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(6,0.4525992);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(7,0.4468936);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(8,0.3956509);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(9,0.3775823);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(10,0.3033799);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(11,0.2276547);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(12,0.2177667);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(13,0.1317647);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(14,0.1082361);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(15,0.09853989);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(16,0.1153101);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(17,0.1226509);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(18,0.1083675);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(19,0.04706851);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(20,0.06300779);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(22,0.05417696);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(23,0.03777287);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetBinError(26,0.09437637);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetEntries(1451);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3276->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt3277 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt3277","histo_WZ",25,10,100);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(1,24.06455);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(2,32.47341);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(3,39.86306);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(4,43.19786);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(5,43.38027);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(6,41.9185);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(7,36.26429);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(8,29.283);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(9,21.98942);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(10,14.91212);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(11,9.783847);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(12,7.381964);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(13,5.092984);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(14,3.969157);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(15,3.083698);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(16,2.34137);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(17,1.879951);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(18,1.571662);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(19,1.357042);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(20,0.9807402);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(21,0.8072617);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(22,0.6771025);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(23,0.5489871);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(24,0.5145848);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(25,0.3739043);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinContent(26,2.43369);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(1,0.3589145);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(2,0.4208484);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(3,0.4675022);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(4,0.4858724);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(5,0.4870391);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(6,0.4778928);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(7,0.4436705);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(8,0.3990333);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(9,0.3464118);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(10,0.2859476);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(11,0.2306686);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(12,0.2008561);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(13,0.166787);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(14,0.1464067);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(15,0.1298664);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(16,0.1138635);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(17,0.1008609);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(18,0.0921821);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(19,0.08650017);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(20,0.07285489);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(21,0.0666707);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(22,0.0599743);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(23,0.05479022);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(24,0.05324228);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(25,0.04510361);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetBinError(26,0.1141284);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetEntries(75011);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3277->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(1,0.5741488);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(2,0.6986918);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(3,0.6883978);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(4,0.6743183);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(5,0.5848982);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(6,0.4739615);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(7,0.3624251);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(8,0.3204912);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(9,0.2230846);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(10,0.2109604);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(11,0.1470779);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(12,0.1177383);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(13,0.08405556);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(14,0.0525708);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(15,0.05892492);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(16,0.0374572);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(17,0.04411837);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(18,0.03167855);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(19,0.01999099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(20,0.02091716);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(21,0.0177124);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(22,0.009305586);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(23,0.005242166);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(24,0.01151322);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(25,0.008331849);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinContent(26,0.02918174);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(1,0.02451021);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(2,0.02784623);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(3,0.02752896);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(4,0.0271442);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(5,0.02549894);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(6,0.02301962);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(7,0.01980931);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(8,0.01845078);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(9,0.01543418);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(10,0.015079);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(11,0.01157163);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(12,0.01063539);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(13,0.008769493);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(14,0.006155417);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(15,0.007124039);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(16,0.005929243);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(17,0.006439608);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(18,0.005223531);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(19,0.003714761);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(20,0.004140305);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(21,0.003605603);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(22,0.002418158);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(23,0.001802536);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(24,0.00371449);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(25,0.002424451);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetBinError(26,0.00567531);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3278->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt3,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt3");
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56","thsSignal_grouped_wh3l_Pre_13TeV_pt3",25,10,100);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->SetMaximum(0.762865);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_56);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(1,0.5741488);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(2,0.6986918);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(3,0.6883978);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(4,0.6743183);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(5,0.5848982);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(6,0.4739615);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(7,0.3624251);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(8,0.3204912);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(9,0.2230846);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(10,0.2109604);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(11,0.1470779);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(12,0.1177383);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(13,0.08405556);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(14,0.0525708);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(15,0.05892492);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(16,0.0374572);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(17,0.04411837);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(18,0.03167855);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(19,0.01999099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(20,0.02091716);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(21,0.0177124);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(22,0.009305586);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(23,0.005242166);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(24,0.01151322);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(25,0.008331849);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinContent(26,0.02918174);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(1,0.02451021);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(2,0.02784623);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(3,0.02752896);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(4,0.0271442);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(5,0.02549894);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(6,0.02301962);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(7,0.01980931);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(8,0.01845078);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(9,0.01543418);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(10,0.015079);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(11,0.01157163);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(12,0.01063539);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(13,0.008769493);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(14,0.006155417);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(15,0.007124039);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(16,0.005929243);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(17,0.006439608);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(18,0.005223531);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(19,0.003714761);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(20,0.004140305);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(21,0.003605603);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(22,0.002418158);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(23,0.001802536);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(24,0.00371449);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(25,0.002424451);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetBinError(26,0.00567531);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3279->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt3,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3055[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3055[25] = {
   173.5963,
   181.975,
   133.7527,
   112.0447,
   83.81964,
   67.52384,
   56.91369,
   43.74753,
   31.51593,
   22.90363,
   14.11724,
   11.2723,
   6.49334,
   7.128312,
   4.212016,
   2.846904,
   2.618155,
   2.276808,
   1.731693,
   1.232811,
   0.5772622,
   0.7558306,
   0.7302589,
   0.5872462,
   0.485365};
   Double_t _felx3055[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3055[25] = {
   33.84354,
   31.79939,
   17.82125,
   14.84793,
   8.098738,
   6.533729,
   4.890901,
   3.960958,
   2.601289,
   2.560011,
   1.612492,
   1.457691,
   0.8530447,
   1.479185,
   0.8687956,
   0.3737388,
   0.4683313,
   0.533259,
   0.3921242,
   0.5019313,
   0.2810242,
   0.1531171,
   0.2285821,
   0.2939146,
   0.1443514};
   Double_t _fehx3055[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3055[25] = {
   33.8013,
   31.78686,
   17.81593,
   14.84459,
   8.096082,
   6.53166,
   4.888979,
   3.958807,
   2.601448,
   2.558093,
   1.610711,
   1.455904,
   0.98873,
   1.478062,
   0.8694705,
   0.569504,
   0.5115961,
   0.4618855,
   0.4551376,
   0.2640353,
   0.2808722,
   0.152883,
   0.2283824,
   0.1371148,
   0.1442339};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3055,_fy3055,_felx3055,_fehx3055,_fely3055,_fehy3055);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3055 = new TH1F("Graph_Graph3055","",100,1.000001,109);
   Graph_Graph3055->SetMinimum(0);
   Graph_Graph3055->SetMaximum(235.1087);
   Graph_Graph3055->SetDirectory(0);
   Graph_Graph3055->SetStats(0);
   Graph_Graph3055->SetLineStyle(0);
   Graph_Graph3055->SetMarkerStyle(20);
   Graph_Graph3055->GetXaxis()->SetLabelFont(42);
   Graph_Graph3055->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3055->GetXaxis()->SetTitleFont(42);
   Graph_Graph3055->GetYaxis()->SetLabelFont(42);
   Graph_Graph3055->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3055->GetYaxis()->SetTitleFont(42);
   Graph_Graph3055->GetZaxis()->SetLabelFont(42);
   Graph_Graph3055->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3055);
   
   grae->Draw("2");
   
   Double_t _fx3056[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3056[25] = {
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
   Double_t _felx3056[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3056[25] = {
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
   Double_t _fehx3056[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3056[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3056,_fy3056,_felx3056,_fehx3056,_fely3056,_fehy3056);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3056 = new TH1F("Graph_Graph3056","",100,1.000001,109);
   Graph_Graph3056->SetMinimum(0);
   Graph_Graph3056->SetMaximum(1.262698);
   Graph_Graph3056->SetDirectory(0);
   Graph_Graph3056->SetStats(0);
   Graph_Graph3056->SetLineStyle(0);
   Graph_Graph3056->SetMarkerStyle(20);
   Graph_Graph3056->GetXaxis()->SetLabelFont(42);
   Graph_Graph3056->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3056->GetXaxis()->SetTitleFont(42);
   Graph_Graph3056->GetYaxis()->SetLabelFont(42);
   Graph_Graph3056->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3056->GetYaxis()->SetTitleFont(42);
   Graph_Graph3056->GetZaxis()->SetLabelFont(42);
   Graph_Graph3056->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3056);
   
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
   
   TH1F *hframe_copy280 = new TH1F("hframe_copy280","",1000,10,100);
   hframe_copy280->SetMinimum(0);
   hframe_copy280->SetMaximum(456.6842);
   hframe_copy280->SetDirectory(0);
   hframe_copy280->SetStats(0);
   hframe_copy280->SetLineStyle(0);
   hframe_copy280->SetMarkerStyle(20);
   hframe_copy280->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy280->GetXaxis()->SetNdivisions(506);
   hframe_copy280->GetXaxis()->SetLabelFont(42);
   hframe_copy280->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetXaxis()->SetLabelSize(0.05);
   hframe_copy280->GetXaxis()->SetTitleSize(0.06);
   hframe_copy280->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy280->GetXaxis()->SetTitleFont(42);
   hframe_copy280->GetYaxis()->SetTitle("Events");
   hframe_copy280->GetYaxis()->SetLabelFont(42);
   hframe_copy280->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetYaxis()->SetLabelSize(0.05);
   hframe_copy280->GetYaxis()->SetTitleSize(0.06);
   hframe_copy280->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy280->GetYaxis()->SetTitleFont(42);
   hframe_copy280->GetZaxis()->SetLabelFont(42);
   hframe_copy280->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetZaxis()->SetLabelSize(0.05);
   hframe_copy280->GetZaxis()->SetTitleSize(0.06);
   hframe_copy280->GetZaxis()->SetTitleFont(42);
   hframe_copy280->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt3->Modified();
   ccwh3l_Pre_13TeV_pt3->cd();
   ccwh3l_Pre_13TeV_pt3->SetSelected(ccwh3l_Pre_13TeV_pt3);
}
