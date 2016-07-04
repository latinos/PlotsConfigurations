void c_wh3l_wz_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_pt2/cc
//=========  (Sat Jul  2 20:39:38 2016) by ROOT version6.02/13
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
   
   TH1F *hframe64 = new TH1F("hframe64","",1000,10,200);
   hframe64->SetMinimum(0);
   hframe64->SetMaximum(107.7069);
   hframe64->SetDirectory(0);
   hframe64->SetStats(0);
   hframe64->SetLineStyle(0);
   hframe64->SetMarkerStyle(20);
   hframe64->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe64->GetXaxis()->SetNdivisions(506);
   hframe64->GetXaxis()->SetLabelFont(42);
   hframe64->GetXaxis()->SetLabelOffset(0.007);
   hframe64->GetXaxis()->SetLabelSize(0.05);
   hframe64->GetXaxis()->SetTitleSize(0.06);
   hframe64->GetXaxis()->SetTitleOffset(0.9);
   hframe64->GetXaxis()->SetTitleFont(42);
   hframe64->GetYaxis()->SetTitle("Events");
   hframe64->GetYaxis()->SetLabelFont(42);
   hframe64->GetYaxis()->SetLabelOffset(0.007);
   hframe64->GetYaxis()->SetLabelSize(0.05);
   hframe64->GetYaxis()->SetTitleSize(0.06);
   hframe64->GetYaxis()->SetTitleOffset(1.25);
   hframe64->GetYaxis()->SetTitleFont(42);
   hframe64->GetZaxis()->SetLabelFont(42);
   hframe64->GetZaxis()->SetLabelOffset(0.007);
   hframe64->GetZaxis()->SetLabelSize(0.05);
   hframe64->GetZaxis()->SetTitleSize(0.06);
   hframe64->GetZaxis()->SetTitleFont(42);
   hframe64->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetName("thsBackground_grouped_wh3l_wz_13TeV_pt2");
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15","thsBackground_grouped_wh3l_wz_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->SetMinimum(-0.7937307);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->SetMaximum(35.44022);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_pt2_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_pt265 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_pt265","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(1,0.3864695);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(2,1.859741);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(3,1.930784);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(4,4.911315);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(5,0.879241);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(6,0.4249452);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(7,-0.1826131);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(8,-0.01377934);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(9,-0.2395783);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(10,-0.03763466);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(11,0.05207861);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(12,0.04272079);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(13,-0.0544572);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(14,-0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(15,0.1520616);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(16,-0.01909467);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(18,0.4410789);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(19,-0.01737082);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(20,-0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(21,0.1013218);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(22,-0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinContent(26,0.0924228);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(1,0.6725419);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(2,1.493918);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(3,1.783315);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(4,1.819427);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(5,1.023516);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(6,0.4171847);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(7,0.6111176);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(8,0.1568267);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(9,0.1234445);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(10,0.09247713);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(11,0.06765936);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(12,0.08014191);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(13,0.1037645);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(14,0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(15,0.1076735);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(16,0.01909467);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(18,0.4410789);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(19,0.01661759);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(20,0.02338661);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(21,0.1013218);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(22,0.0197091);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetBinError(26,0.08305176);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_pt265->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Fake_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_pt266 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_pt266","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetBinContent(4,0.02833096);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetBinContent(5,0.02890307);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetBinContent(6,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetBinError(4,0.02054902);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetBinError(5,0.02043846);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetBinError(6,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_pt266->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_pt266->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_WW_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_pt267 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_pt267","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinContent(2,1.452468);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinContent(3,2.014906);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinContent(4,0.722418);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinContent(5,0.4323393);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinContent(6,0.1435628);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinContent(7,0.1143634);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinContent(19,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinError(2,0.4057872);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinError(3,0.4905705);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinError(4,0.3552953);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinError(5,0.2121354);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinError(6,0.1685033);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinError(7,0.1143634);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetBinError(19,0.1076973);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_pt267->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Vg_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_pt268 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_pt268","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(1,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(2,0.684138);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(3,1.078764);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(4,1.513114);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(5,1.492113);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(6,0.6775374);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(7,0.3668173);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(8,0.5127901);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(9,0.04208331);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(10,0.06703926);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(11,0.03770488);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(12,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(13,0.03541288);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(14,0.04579876);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(15,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(16,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(19,0.04495105);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(20,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinContent(21,0.04303389);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(1,0.008424772);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(2,0.1702297);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(3,0.2224995);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(4,0.2539123);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(5,0.2466387);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(6,0.1621266);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(7,0.1212921);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(8,0.1493743);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(9,0.04208331);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(10,0.04704719);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(11,0.03770488);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(12,0.04463009);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(13,0.03541288);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(14,0.04579876);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(15,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(16,0.04317268);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(19,0.04495105);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(20,0.01974776);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetBinError(21,0.04303389);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_pt268->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_pt269 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_pt269","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(1,0.6646681);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(2,7.051721);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(3,18.53884);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(4,26.40952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(5,22.36006);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(6,11.84868);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(7,7.006244);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(8,4.303389);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(9,2.744668);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(10,1.646975);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(11,1.310322);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(12,1.018023);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(13,0.7971268);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(14,0.6055424);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(15,0.4966633);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(16,0.3476491);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(17,0.2746718);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(18,0.1987274);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(19,0.1366461);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(20,0.1568019);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(21,0.1374656);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(22,0.07455286);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(23,0.06494047);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(24,0.0510891);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(25,0.06472195);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinContent(26,0.2935298);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(1,0.05896053);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(2,0.1964102);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(3,0.3178167);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(4,0.377939);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(5,0.3487485);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(6,0.2541602);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(7,0.19578);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(8,0.1533871);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(9,0.1222332);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(10,0.09438244);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(11,0.08373152);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(12,0.07437802);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(13,0.06505905);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(14,0.05764225);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(15,0.05176567);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(16,0.04346952);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(17,0.0387367);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(18,0.03253786);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(19,0.02712053);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(20,0.02888558);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(21,0.02764302);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(22,0.01919471);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(23,0.01867101);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(24,0.01552737);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(25,0.01944946);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetBinError(26,0.04042478);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_pt269->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_WZ_wh3l_wz_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt270 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt270","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(1,0.005700078);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(2,0.06707343);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(3,0.1327503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(4,0.1679017);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(5,0.1399889);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(6,0.1297397);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(7,0.07823853);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(8,0.04776885);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(9,0.03405555);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(10,0.02184366);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(11,0.01898008);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(12,0.01274264);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(13,0.01088609);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(14,0.009730102);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(15,0.003659548);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(16,0.001481922);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(17,0.001233317);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(18,0.002901866);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(19,0.00196137);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(20,0.0003688937);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(21,0.0005016817);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(25,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinContent(26,0.003583104);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(1,0.002537158);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(2,0.00908834);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(3,0.01245491);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(4,0.01457533);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(5,0.01285243);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(6,0.01244429);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(7,0.009552243);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(8,0.006929878);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(9,0.006223419);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(10,0.004339441);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(11,0.004582826);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(12,0.003468083);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(13,0.003293288);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(14,0.003310737);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(15,0.001973015);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(16,0.001002622);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(17,0.0006607267);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(18,0.001778035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(19,0.001631921);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(20,0.0003688937);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(21,0.0003593043);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(25,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetBinError(26,0.002262745);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt270->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt2,"");
   thsBackground_grouped_wh3l_wz_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_pt2->SetName("thsSignal_grouped_wh3l_wz_13TeV_pt2");
   thsSignal_grouped_wh3l_wz_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16","thsSignal_grouped_wh3l_wz_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->SetMaximum(0.1916009);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_pt2_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_pt271 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_pt271","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(1,0.005700078);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(2,0.06707343);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(3,0.1327503);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(4,0.1679017);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(5,0.1399889);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(6,0.1297397);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(7,0.07823853);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(8,0.04776885);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(9,0.03405555);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(10,0.02184366);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(11,0.01898008);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(12,0.01274264);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(13,0.01088609);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(14,0.009730102);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(15,0.003659548);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(16,0.001481922);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(17,0.001233317);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(18,0.002901866);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(19,0.00196137);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(20,0.0003688937);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(21,0.0005016817);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(25,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinContent(26,0.003583104);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(1,0.002537158);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(2,0.00908834);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(3,0.01245491);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(4,0.01457533);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(5,0.01285243);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(6,0.01244429);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(7,0.009552243);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(8,0.006929878);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(9,0.006223419);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(10,0.004339441);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(11,0.004582826);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(12,0.003468083);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(13,0.003293288);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(14,0.003310737);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(15,0.001973015);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(16,0.001002622);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(17,0.0006607267);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(18,0.001778035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(19,0.001631921);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(20,0.0003688937);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(21,0.0003593043);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(25,0.000432484);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetBinError(26,0.002262745);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_pt271->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_wz_13TeV_pt2,"");
   thsSignal_grouped_wh3l_wz_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3015[25] = {
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
   Double_t _fy3015[25] = {
   1.059562,
   11.04807,
   23.5633,
   33.58469,
   25.19265,
   13.11289,
   7.304811,
   4.8024,
   2.547173,
   1.67638,
   1.400105,
   1.105374,
   0.7780825,
   0.5631602,
   0.6945773,
   0.3717271,
   0.2746718,
   0.6398063,
   0.2719236,
   0.1531631,
   0.2818214,
   0.05484376,
   0.06494047,
   0.0510891,
   0.06472196};
   Double_t _felx3015[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3015[25] = {
   0.4769845,
   2.393722,
   2.951335,
   3.354669,
   1.77083,
   1.026762,
   1.053077,
   0.4714812,
   0.3061644,
   0.2381872,
   0.1788783,
   0.1662285,
   0.2086575,
   0.1966299,
   0.2141267,
   0.107966,
   0.03997174,
   0.4982288,
   0.1968171,
   0.07283635,
   0.1757283,
   0.03969676,
   0.01884621,
   0.01565414,
   0.01968705};
   Double_t _fehx3015[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3015[25] = {
   0.7543569,
   2.392907,
   2.949378,
   3.352506,
   1.909173,
   1.0496,
   0.6308989,
   0.331609,
   0.3055227,
   0.1837818,
   0.1936842,
   0.2021232,
   0.1593555,
   0.1957073,
   0.2134521,
   0.1075134,
   0.03977691,
   0.498218,
   0.1966524,
   0.07276303,
   0.1757089,
   0.03968028,
   0.01883766,
   0.01564309,
   0.01969385};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,219);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(40.62941);
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
   
   Double_t _fx3016[25] = {
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
   Double_t _fy3016[25] = {
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
   Double_t _felx3016[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3016[25] = {
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
   Double_t _fehx3016[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3016[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,219);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(48.55147);
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
   
   TH1F *hframe_copy72 = new TH1F("hframe_copy72","",1000,10,200);
   hframe_copy72->SetMinimum(0);
   hframe_copy72->SetMaximum(107.7069);
   hframe_copy72->SetDirectory(0);
   hframe_copy72->SetStats(0);
   hframe_copy72->SetLineStyle(0);
   hframe_copy72->SetMarkerStyle(20);
   hframe_copy72->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy72->GetXaxis()->SetNdivisions(506);
   hframe_copy72->GetXaxis()->SetLabelFont(42);
   hframe_copy72->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetXaxis()->SetLabelSize(0.05);
   hframe_copy72->GetXaxis()->SetTitleSize(0.06);
   hframe_copy72->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy72->GetXaxis()->SetTitleFont(42);
   hframe_copy72->GetYaxis()->SetTitle("Events");
   hframe_copy72->GetYaxis()->SetLabelFont(42);
   hframe_copy72->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetYaxis()->SetLabelSize(0.05);
   hframe_copy72->GetYaxis()->SetTitleSize(0.06);
   hframe_copy72->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy72->GetYaxis()->SetTitleFont(42);
   hframe_copy72->GetZaxis()->SetLabelFont(42);
   hframe_copy72->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetZaxis()->SetLabelSize(0.05);
   hframe_copy72->GetZaxis()->SetTitleSize(0.06);
   hframe_copy72->GetZaxis()->SetTitleFont(42);
   hframe_copy72->Draw("sameaxis");
   ccwh3l_wz_13TeV_pt2->Modified();
   ccwh3l_wz_13TeV_pt2->cd();
   ccwh3l_wz_13TeV_pt2->SetSelected(ccwh3l_wz_13TeV_pt2);
}
