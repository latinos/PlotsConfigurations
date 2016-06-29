void c_wh3l_wz_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt2/cc
//=========  (Tue Jun 28 16:49:03 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_pt2 = new TCanvas("ccwh3l_wz_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_wz_13TeV_pt2->Range(-28,-17.50419,209.5,117.1434);
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
   
   TH1F *hframe129 = new TH1F("hframe129","",1000,10,200);
   hframe129->SetMinimum(0);
   hframe129->SetMaximum(110.411);
   hframe129->SetDirectory(0);
   hframe129->SetStats(0);
   hframe129->SetLineStyle(0);
   hframe129->SetMarkerStyle(20);
   hframe129->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe129->GetXaxis()->SetNdivisions(506);
   hframe129->GetXaxis()->SetLabelFont(42);
   hframe129->GetXaxis()->SetLabelOffset(0.007);
   hframe129->GetXaxis()->SetLabelSize(0.05);
   hframe129->GetXaxis()->SetTitleSize(0.06);
   hframe129->GetXaxis()->SetTitleOffset(0.9);
   hframe129->GetXaxis()->SetTitleFont(42);
   hframe129->GetYaxis()->SetTitle("Events");
   hframe129->GetYaxis()->SetLabelFont(42);
   hframe129->GetYaxis()->SetLabelOffset(0.007);
   hframe129->GetYaxis()->SetLabelSize(0.05);
   hframe129->GetYaxis()->SetTitleSize(0.06);
   hframe129->GetYaxis()->SetTitleOffset(1.25);
   hframe129->GetYaxis()->SetTitleFont(42);
   hframe129->GetZaxis()->SetLabelFont(42);
   hframe129->GetZaxis()->SetLabelOffset(0.007);
   hframe129->GetZaxis()->SetLabelSize(0.05);
   hframe129->GetZaxis()->SetTitleSize(0.06);
   hframe129->GetZaxis()->SetTitleFont(42);
   hframe129->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt2");
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17","thsBackground_grouped_wh3l_wz_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->SetMinimum(-0.7937307);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->SetMaximum(35.44215);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_17);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt2130 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt2130","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(1,0.3864695);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(2,1.859741);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(3,1.930784);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(4,4.911315);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(5,0.8515526);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(6,0.4249452);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(7,-0.1826131);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(8,-0.01377934);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(9,-0.2395783);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(10,-0.03763466);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(11,0.05207861);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(12,0.04272079);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(13,-0.0544572);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(14,-0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(15,0.1520616);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(16,-0.01909467);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(18,0.4410789);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(19,-0.01737082);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(20,-0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(21,0.1013218);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(22,-0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinContent(26,0.0924228);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(1,0.6725419);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(2,1.493918);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(3,1.783315);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(4,1.819427);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(5,1.023891);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(6,0.4171847);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(7,0.6111176);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(8,0.1568267);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(9,0.1234445);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(10,0.09247713);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(11,0.06765936);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(12,0.08014191);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(13,0.1037645);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(14,0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(15,0.1076735);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(16,0.01909467);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(18,0.4410789);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(19,0.01661759);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(20,0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(21,0.1013218);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(22,0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetBinError(26,0.08305176);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt2130->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt2131 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt2131","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetBinContent(4,0.02833096);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetBinContent(5,0.02890307);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetBinContent(6,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetBinError(4,0.02054902);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetBinError(5,0.02043846);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetBinError(6,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt2131->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_WW_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_pt2132 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_pt2132","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(1,0.001795681);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(2,0.008318705);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(3,0.01294848);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(4,0.02597931);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(5,0.02533601);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(6,0.02438462);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(7,0.01396165);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(8,0.01103572);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(9,0.007215912);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(10,0.006059417);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(11,0.003803371);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(12,0.002121712);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(13,0.003387948);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(14,0.003860813);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(15,0.004850221);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(16,0.0008794748);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(17,0.002022636);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(18,0.0003179808);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(19,-0.0006520349);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(20,0.0005211808);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(21,0.0004213759);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinContent(26,0.003936442);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(1,0.001076057);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(2,0.002548457);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(3,0.003015551);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(4,0.004098593);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(5,0.004248156);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(6,0.003896348);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(7,0.003564754);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(8,0.002946113);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(9,0.002137779);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(10,0.001893872);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(11,0.001836439);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(12,0.001225645);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(13,0.001436475);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(14,0.001589122);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(15,0.001747239);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(16,0.000622053);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(17,0.001174126);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(18,0.001096019);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(19,0.0006522296);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(20,0.0005211808);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(21,0.0004213759);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetBinError(26,0.001538159);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_pt2132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_VVV_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt2133 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt2133","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinContent(2,1.452468);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinContent(3,2.014906);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinContent(4,0.722418);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinContent(5,0.4323393);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinContent(6,0.1435628);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinContent(7,0.1398395);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinContent(19,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinError(2,0.4057872);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinError(3,0.4905705);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinError(4,0.3552953);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinError(5,0.2121354);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinError(6,0.1685033);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinError(7,0.1171666);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetBinError(19,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt2133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt2134 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt2134","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(1,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(2,0.684138);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(3,1.197122);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(4,1.644821);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(5,1.842649);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(6,0.7623691);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(7,0.4838221);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(8,0.6299332);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(9,0.1849212);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(10,0.2080342);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(11,0.09226277);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(12,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(13,0.03541288);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(14,0.08988248);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(15,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(16,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(18,0.04165012);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(19,0.04495105);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(20,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(21,0.04303389);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(23,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(25,0.08250155);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinContent(26,0.04044262);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(1,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(2,0.1702297);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(3,0.2322124);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(4,0.2627708);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(5,0.2707072);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(6,0.1726728);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(7,0.135324);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(8,0.164606);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(9,0.08678353);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(10,0.08842477);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(11,0.05752291);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(12,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(13,0.03541288);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(14,0.06356808);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(15,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(16,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(18,0.04165012);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(19,0.04495105);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(20,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(21,0.04303389);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(23,0.06098055);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(25,0.05834451);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetBinError(26,0.04044262);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt2134->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt2135 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt2135","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(1,0.6646681);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(2,7.051721);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(3,18.53884);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(4,26.42157);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(5,22.36006);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(6,11.86083);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(7,7.006244);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(8,4.303389);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(9,2.744668);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(10,1.646975);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(11,1.316572);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(12,1.021915);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(13,0.7971268);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(14,0.6055424);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(15,0.4966633);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(16,0.3476491);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(17,0.2746718);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(18,0.1987274);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(19,0.1366461);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(20,0.1568019);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(21,0.1374656);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(22,0.07455286);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(23,0.06494047);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(24,0.0510891);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(25,0.06472195);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinContent(26,0.2935298);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(1,0.05896053);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(2,0.1964102);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(3,0.3178167);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(4,0.3780307);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(5,0.3487485);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(6,0.2543059);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(7,0.19578);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(8,0.1533871);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(9,0.1222332);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(10,0.09438244);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(11,0.08396445);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(12,0.07447978);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(13,0.06505905);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(14,0.05764225);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(15,0.05176567);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(16,0.04346952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(17,0.0387367);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(18,0.03253786);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(19,0.02712053);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(20,0.02888558);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(21,0.02764302);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(22,0.01919471);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(23,0.01867101);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(24,0.01552737);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(25,0.01944946);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetBinError(26,0.04042478);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt2135->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt2,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Draw("hist same");
   
   Double_t _fx3033[25] = {
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
   Double_t _fy3033[25] = {
   1.061358,
   11.05639,
   23.6946,
   33.75443,
   25.54084,
   13.23425,
   7.461254,
   4.930578,
   2.697227,
   1.823434,
   1.464717,
   1.111387,
   0.7814704,
   0.6111047,
   0.6994275,
   0.3726066,
   0.2766944,
   0.6817744,
   0.2712716,
   0.1536843,
   0.2822427,
   0.05484376,
   0.125921,
   0.0510891,
   0.1472235};
   Double_t _felx3033[25] = {
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
   Double_t _fely3033[25] = {
   0.4694725,
   2.3372,
   2.886976,
   3.200275,
   1.727979,
   1.018122,
   1.064504,
   0.4780974,
   0.3422709,
   0.2774684,
   0.1960433,
   0.1635641,
   0.2063236,
   0.2126475,
   0.2120095,
   0.1065201,
   0.03991086,
   0.5322956,
   0.1971503,
   0.07288168,
   0.1750829,
   0.03935057,
   0.07966857,
   0.01552737,
   0.07782586};
   Double_t _fehx3033[25] = {
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
   Double_t _fehy3033[25] = {
   0.7500188,
   2.337202,
   2.886978,
   3.200273,
   1.898489,
   1.042864,
   0.6370442,
   0.3351923,
   0.3422709,
   0.2226975,
   0.2115768,
   0.2008907,
   0.1572205,
   0.2126475,
   0.2120095,
   0.1065201,
   0.0399109,
   0.5330492,
   0.1971501,
   0.07288168,
   0.1750829,
   0.03935056,
   0.07966858,
   0.01552737,
   0.07782587};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,219);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(40.64863);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineStyle(0);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("2");
   
   Double_t _fx3034[25] = {
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
   Double_t _fy3034[25] = {
   1,
   15,
   30,
   37,
   38,
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
   Double_t _felx3034[25] = {
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
   Double_t _fely3034[25] = {
   0.8272524,
   3.829449,
   5.446627,
   6.05526,
   6.137282,
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
   Double_t _fehx3034[25] = {
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
   Double_t _fehy3034[25] = {
   2.29957,
   4.958839,
   6.538181,
   7.137703,
   7.218633,
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
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,219);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(49.7405);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineStyle(0);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3034);
   
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
   
   TH1F *hframe_copy136 = new TH1F("hframe_copy136","",1000,10,200);
   hframe_copy136->SetMinimum(0);
   hframe_copy136->SetMaximum(110.411);
   hframe_copy136->SetDirectory(0);
   hframe_copy136->SetStats(0);
   hframe_copy136->SetLineStyle(0);
   hframe_copy136->SetMarkerStyle(20);
   hframe_copy136->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy136->GetXaxis()->SetNdivisions(506);
   hframe_copy136->GetXaxis()->SetLabelFont(42);
   hframe_copy136->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy136->GetXaxis()->SetLabelSize(0.05);
   hframe_copy136->GetXaxis()->SetTitleSize(0.06);
   hframe_copy136->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy136->GetXaxis()->SetTitleFont(42);
   hframe_copy136->GetYaxis()->SetTitle("Events");
   hframe_copy136->GetYaxis()->SetLabelFont(42);
   hframe_copy136->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy136->GetYaxis()->SetLabelSize(0.05);
   hframe_copy136->GetYaxis()->SetTitleSize(0.06);
   hframe_copy136->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy136->GetYaxis()->SetTitleFont(42);
   hframe_copy136->GetZaxis()->SetLabelFont(42);
   hframe_copy136->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy136->GetZaxis()->SetLabelSize(0.05);
   hframe_copy136->GetZaxis()->SetTitleSize(0.06);
   hframe_copy136->GetZaxis()->SetTitleFont(42);
   hframe_copy136->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt2->Modified();
   ccwh3l_wz_13TeV_pt2->cd();
   ccwh3l_wz_13TeV_pt2->SetSelected(ccwh3l_wz_13TeV_pt2);
}
