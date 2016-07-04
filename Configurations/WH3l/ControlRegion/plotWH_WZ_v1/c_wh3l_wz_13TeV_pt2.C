void c_wh3l_wz_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt2/cc
//=========  (Sun Jul  3 22:54:19 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_pt2 = new TCanvas("ccwh3l_wz_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_wz_13TeV_pt2->Range(-28,-17.07548,209.5,114.2744);
   ccwh3l_wz_13TeV_pt2->SetFillColor(0);
   ccwh3l_wz_13TeV_pt2->SetBorderMode(0);
   ccwh3l_wz_13TeV_pt2->SetBorderSize(2);
   ccwh3l_wz_13TeV_pt2->SetTickx(1);
   ccwh3l_wz_13TeV_pt2->SetTicky(1);
   ccwh3l_wz_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe41 = new TH1F("hframe41","",1000,10,200);
   hframe41->SetMinimum(0);
   hframe41->SetMaximum(107.7069);
   hframe41->SetDirectory(0);
   hframe41->SetStats(0);
   hframe41->SetLineStyle(0);
   hframe41->SetMarkerStyle(20);
   hframe41->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe41->GetXaxis()->SetNdivisions(506);
   hframe41->GetXaxis()->SetLabelFont(42);
   hframe41->GetXaxis()->SetLabelOffset(0.007);
   hframe41->GetXaxis()->SetLabelSize(0.05);
   hframe41->GetXaxis()->SetTitleSize(0.06);
   hframe41->GetXaxis()->SetTitleOffset(0.9);
   hframe41->GetXaxis()->SetTitleFont(42);
   hframe41->GetYaxis()->SetTitle("Events");
   hframe41->GetYaxis()->SetLabelFont(42);
   hframe41->GetYaxis()->SetLabelOffset(0.007);
   hframe41->GetYaxis()->SetLabelSize(0.05);
   hframe41->GetYaxis()->SetTitleSize(0.06);
   hframe41->GetYaxis()->SetTitleOffset(1.25);
   hframe41->GetYaxis()->SetTitleFont(42);
   hframe41->GetZaxis()->SetLabelFont(42);
   hframe41->GetZaxis()->SetLabelOffset(0.007);
   hframe41->GetZaxis()->SetLabelSize(0.05);
   hframe41->GetZaxis()->SetTitleSize(0.06);
   hframe41->GetZaxis()->SetTitleFont(42);
   hframe41->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt2");
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9","thsBackground_grouped_wh3l_wz_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->SetMinimum(-0.7937307);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->SetMaximum(35.51685);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt242 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt242","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(1,0.3864695);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(2,1.859741);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(3,1.930784);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(4,4.911315);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(5,0.879241);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(6,0.4249452);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(7,-0.1826131);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(8,-0.01377934);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(9,-0.2395783);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(10,-0.03763466);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(11,0.05207861);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(12,0.04272079);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(13,-0.0544572);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(14,-0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(15,0.1520616);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(16,-0.01909467);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(18,0.4410789);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(19,-0.01737082);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(20,-0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(21,0.1013218);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(22,-0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinContent(26,0.0924228);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(1,0.6725419);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(2,1.493918);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(3,1.783315);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(4,1.819427);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(5,1.023516);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(6,0.4171847);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(7,0.6111176);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(8,0.1568267);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(9,0.1234445);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(10,0.09247713);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(11,0.06765936);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(12,0.08014191);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(13,0.1037645);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(14,0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(15,0.1076735);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(16,0.01909467);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(18,0.4410789);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(19,0.01661759);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(20,0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(21,0.1013218);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(22,0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetBinError(26,0.08305176);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt242->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt243 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt243","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetBinContent(4,0.02833096);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetBinContent(5,0.02890307);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetBinContent(6,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetBinError(4,0.02054902);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetBinError(5,0.02043846);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetBinError(6,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt243->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt243->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_WW_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_pt244 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_pt244","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(1,0.001795681);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(2,0.02788304);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(3,0.07373624);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(4,0.07297793);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(5,0.08383273);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(6,0.08088068);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(7,0.050672);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(8,0.0533467);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(9,0.01569875);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(10,0.02813333);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(11,0.01354993);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(12,0.01025731);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(13,0.0157756);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(14,0.01382738);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(15,0.009526707);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(16,0.002402642);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(17,0.003818715);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(18,0.001441718);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(19,0.003119276);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(21,0.0004213759);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(22,0.002092349);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(23,0.002242446);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(24,0.001995156);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinContent(26,0.01214349);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(1,0.001076057);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(2,0.007026459);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(3,0.01230235);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(4,0.01149443);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(5,0.01233871);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(6,0.01213528);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(7,0.009423973);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(8,0.01028472);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(9,0.00669184);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(10,0.007455576);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(11,0.004966153);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(12,0.004079343);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(13,0.005099831);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(14,0.004751275);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(15,0.003990373);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(16,0.003645416);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(17,0.002236751);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(18,0.001864712);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(19,0.002748988);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(21,0.0004213759);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(22,0.002094665);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(23,0.002242446);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(24,0.001995156);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetBinError(26,0.0044149);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt244->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_VVV_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt245 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt245","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinContent(2,1.452468);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinContent(3,2.014906);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinContent(4,0.722418);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinContent(5,0.4323393);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinContent(6,0.1435628);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinContent(7,0.1143634);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinContent(19,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinError(2,0.4057872);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinError(3,0.4905705);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinError(4,0.3552953);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinError(5,0.2121354);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinError(6,0.1685033);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinError(7,0.1143634);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetBinError(19,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt245->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt246 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt246","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(1,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(2,0.684138);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(3,1.078764);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(4,1.513114);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(5,1.492113);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(6,0.6775374);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(7,0.3668173);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(8,0.5127901);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(9,0.04208331);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(10,0.06703926);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(11,0.03770488);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(12,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(13,0.03541288);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(14,0.04579876);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(15,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(16,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(19,0.04495105);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(20,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinContent(21,0.04303389);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(1,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(2,0.1702297);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(3,0.2224995);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(4,0.2539123);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(5,0.2466387);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(6,0.1621266);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(7,0.1212921);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(8,0.1493743);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(9,0.04208331);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(10,0.04704719);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(11,0.03770488);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(12,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(13,0.03541288);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(14,0.04579876);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(15,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(16,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(19,0.04495105);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(20,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetBinError(21,0.04303389);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt246->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt247 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt247","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(1,0.6646681);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(2,7.051721);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(3,18.53884);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(4,26.40952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(5,22.36006);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(6,11.84868);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(7,7.006244);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(8,4.303389);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(9,2.744668);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(10,1.646975);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(11,1.310322);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(12,1.018023);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(13,0.7971268);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(14,0.6055424);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(15,0.4966633);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(16,0.3476491);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(17,0.2746718);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(18,0.1987274);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(19,0.1366461);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(20,0.1568019);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(21,0.1374656);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(22,0.07455286);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(23,0.06494047);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(24,0.0510891);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(25,0.06472195);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinContent(26,0.2935298);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(1,0.05896053);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(2,0.1964102);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(3,0.3178167);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(4,0.377939);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(5,0.3487485);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(6,0.2541602);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(7,0.19578);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(8,0.1533871);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(9,0.1222332);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(10,0.09438244);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(11,0.08373152);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(12,0.07437802);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(13,0.06505905);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(14,0.05764225);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(15,0.05176567);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(16,0.04346952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(17,0.0387367);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(18,0.03253786);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(19,0.02712053);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(20,0.02888558);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(21,0.02764302);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(22,0.01919471);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(23,0.01867101);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(24,0.01552737);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(25,0.01944946);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetBinError(26,0.04042478);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt247->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt248 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt248","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(1,0.005700078);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(2,0.06707343);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(3,0.1327503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(4,0.1679017);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(5,0.1399889);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(6,0.1297397);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(7,0.07823853);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(8,0.04776885);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(9,0.03405555);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(10,0.02184366);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(11,0.01898008);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(12,0.01274264);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(13,0.01088609);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(14,0.009730102);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(15,0.003659548);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(16,0.001481922);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(17,0.001233317);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(18,0.002901866);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(19,0.00196137);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(20,0.0003688937);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(21,0.0005016817);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(25,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinContent(26,0.003583104);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(1,0.002537158);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(2,0.00908834);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(3,0.01245491);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(4,0.01457533);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(5,0.01285243);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(6,0.01244429);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(7,0.009552243);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(8,0.006929878);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(9,0.006223419);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(10,0.004339441);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(11,0.004582826);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(12,0.003468083);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(13,0.003293288);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(14,0.003310737);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(15,0.001973015);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(16,0.001002622);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(17,0.0006607267);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(18,0.001778035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(19,0.001631921);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(20,0.0003688937);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(21,0.0003593043);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(25,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetBinError(26,0.002262745);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt248->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt2,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_pt2->SetName("thsSignal_grouped_wh3l_wz_13TeV_pt2");
   thsSignal_grouped_wh3l_wz_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10","thsSignal_grouped_wh3l_wz_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->SetMaximum(0.1916009);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt249 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt249","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(1,0.005700078);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(2,0.06707343);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(3,0.1327503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(4,0.1679017);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(5,0.1399889);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(6,0.1297397);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(7,0.07823853);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(8,0.04776885);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(9,0.03405555);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(10,0.02184366);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(11,0.01898008);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(12,0.01274264);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(13,0.01088609);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(14,0.009730102);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(15,0.003659548);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(16,0.001481922);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(17,0.001233317);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(18,0.002901866);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(19,0.00196137);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(20,0.0003688937);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(21,0.0005016817);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(25,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinContent(26,0.003583104);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(1,0.002537158);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(2,0.00908834);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(3,0.01245491);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(4,0.01457533);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(5,0.01285243);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(6,0.01244429);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(7,0.009552243);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(8,0.006929878);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(9,0.006223419);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(10,0.004339441);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(11,0.004582826);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(12,0.003468083);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(13,0.003293288);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(14,0.003310737);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(15,0.001973015);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(16,0.001002622);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(17,0.0006607267);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(18,0.001778035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(19,0.001631921);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(20,0.0003688937);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(21,0.0003593043);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(25,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetBinError(26,0.002262745);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt249->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt2,"");
   thsSignal_grouped_wh3l_wz_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3009[25] = {
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
   Double_t _fy3009[25] = {
   1.061358,
   11.07595,
   23.63704,
   33.65767,
   25.27649,
   13.19377,
   7.355484,
   4.855746,
   2.562871,
   1.704513,
   1.413655,
   1.115631,
   0.7938581,
   0.5769876,
   0.704104,
   0.3741298,
   0.2784905,
   0.641248,
   0.2750429,
   0.1531631,
   0.2822427,
   0.05693611,
   0.06718291,
   0.05308425,
   0.06472196};
   Double_t _felx3009[25] = {
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
   Double_t _fely3009[25] = {
   0.4780209,
   2.400742,
   2.964178,
   3.365036,
   1.784172,
   1.040632,
   1.063329,
   0.4840481,
   0.3126554,
   0.2466851,
   0.1841959,
   0.1704565,
   0.2141327,
   0.2015951,
   0.2180905,
   0.1103679,
   0.04221835,
   0.499603,
   0.199606,
   0.07283635,
   0.1761409,
   0.04180868,
   0.02119056,
   0.01777544,
   0.01968705};
   Double_t _fehx3009[25] = {
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
   Double_t _fehy3009[25] = {
   0.7554199,
   2.399905,
   2.962135,
   3.362774,
   1.922294,
   1.063237,
   0.6414188,
   0.344783,
   0.3119895,
   0.1924979,
   0.1989509,
   0.2063401,
   0.1648633,
   0.2006626,
   0.2174024,
   0.1111304,
   0.04202822,
   0.4999943,
   0.1994398,
   0.07276303,
   0.1761215,
   0.04179347,
   0.02118122,
   0.01775577,
   0.01969385};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,219);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(40.72098);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("2");
   
   Double_t _fx3010[25] = {
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
   Double_t _fy3010[25] = {
   1,
   15,
   29,
   37,
   37,
   6,
   19,
   3,
   5,
   3,
   1,
   1,
   3,
   1,
   0,
   1,
   0,
   0,
   1,
   1,
   0,
   1,
   0,
   0,
   0};
   Double_t _felx3010[25] = {
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
   Double_t _fely3010[25] = {
   0.8272524,
   3.829449,
   5.354033,
   6.05526,
   6.05526,
   2.379969,
   4.320299,
   1.632727,
   2.159724,
   1.632727,
   0.8272524,
   0.8272524,
   1.632727,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0};
   Double_t _fehx3010[25] = {
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
   Double_t _fehy3010[25] = {
   2.29957,
   4.958839,
   6.447153,
   7.137703,
   7.137703,
   3.583713,
   5.435307,
   2.918242,
   3.382539,
   2.918242,
   2.29957,
   2.29957,
   2.918242,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,219);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(48.55147);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy50 = new TH1F("hframe_copy50","",1000,10,200);
   hframe_copy50->SetMinimum(0);
   hframe_copy50->SetMaximum(107.7069);
   hframe_copy50->SetDirectory(0);
   hframe_copy50->SetStats(0);
   hframe_copy50->SetLineStyle(0);
   hframe_copy50->SetMarkerStyle(20);
   hframe_copy50->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy50->GetXaxis()->SetNdivisions(506);
   hframe_copy50->GetXaxis()->SetLabelFont(42);
   hframe_copy50->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetXaxis()->SetLabelSize(0.05);
   hframe_copy50->GetXaxis()->SetTitleSize(0.06);
   hframe_copy50->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy50->GetXaxis()->SetTitleFont(42);
   hframe_copy50->GetYaxis()->SetTitle("Events");
   hframe_copy50->GetYaxis()->SetLabelFont(42);
   hframe_copy50->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetYaxis()->SetLabelSize(0.05);
   hframe_copy50->GetYaxis()->SetTitleSize(0.06);
   hframe_copy50->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy50->GetYaxis()->SetTitleFont(42);
   hframe_copy50->GetZaxis()->SetLabelFont(42);
   hframe_copy50->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetZaxis()->SetLabelSize(0.05);
   hframe_copy50->GetZaxis()->SetTitleSize(0.06);
   hframe_copy50->GetZaxis()->SetTitleFont(42);
   hframe_copy50->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt2->Modified();
   ccwh3l_wz_13TeV_pt2->cd();
   ccwh3l_wz_13TeV_pt2->SetSelected(ccwh3l_wz_13TeV_pt2);
}
