void c_wh3l_nobTag_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_nobTag_13TeV_pt3/cc
//=========  (Wed Jun 29 01:51:45 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_nobTag_13TeV_pt3 = new TCanvas("ccwh3l_nobTag_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_nobTag_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_nobTag_13TeV_pt3->Range(-28,-12.85891,209.5,86.05577);
   ccwh3l_nobTag_13TeV_pt3->SetFillColor(0);
   ccwh3l_nobTag_13TeV_pt3->SetBorderMode(0);
   ccwh3l_nobTag_13TeV_pt3->SetBorderSize(2);
   ccwh3l_nobTag_13TeV_pt3->SetTickx(1);
   ccwh3l_nobTag_13TeV_pt3->SetTicky(1);
   ccwh3l_nobTag_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_nobTag_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_nobTag_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_nobTag_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_nobTag_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_nobTag_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_nobTag_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe271 = new TH1F("hframe271","",1000,10,200);
   hframe271->SetMinimum(0);
   hframe271->SetMaximum(81.11004);
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
   
   THStack *thsBackground_grouped_wh3l_nobTag_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->SetName("thsBackground_grouped_wh3l_nobTag_13TeV_pt3");
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_nobTag_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55 = new TH1F("thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55","thsBackground_grouped_wh3l_nobTag_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->SetMinimum(-0.02997789);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->SetMaximum(34.06622);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->SetDirectory(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->SetStats(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->SetLineStyle(0);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_nobTag_13TeV_pt3_stack_55);
   
   
   TH1D *new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272 = new TH1D("new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(1,23.1668);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(2,12.60218);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(3,5.970471);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(4,2.906899);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(5,2.711766);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(6,0.2524378);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(7,0.4327143);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(8,0.1398843);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(9,0.1204989);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinContent(11,-0.01526495);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(1,4.103712);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(2,2.347277);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(3,1.491521);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(4,1.021431);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(5,1.002399);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(6,0.1703183);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(7,0.3302037);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(8,0.09891325);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(9,0.1116071);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetBinError(11,0.01471294);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetEntries(435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetFillColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->SetLineColor(ci);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nobTag_13TeV_pt3272->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->Add(new_histo_group_Fake_wh3l_nobTag_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_nobTag_13TeV_pt3273 = new TH1D("new_histo_group_WW_wh3l_nobTag_13TeV_pt3273","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinContent(1,0.09308709);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinContent(2,0.07176529);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinContent(3,0.03196521);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinContent(4,0.01595104);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinContent(6,0.03094249);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinContent(10,0.01305253);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinError(1,0.03849311);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinError(2,0.03422612);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinError(3,0.02270323);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinError(4,0.01595104);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinError(6,0.02191288);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetBinError(10,0.01305253);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetEntries(17);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetFillColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->SetLineColor(ci);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nobTag_13TeV_pt3273->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->Add(new_histo_group_WW_wh3l_nobTag_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274 = new TH1D("new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(1,0.00725042);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(2,0.009390229);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(3,0.00736624);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(4,0.006227681);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(5,0.001025184);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(6,0.004103554);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(7,0.002267551);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(8,0.002678146);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(9,0.002226889);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(10,0.0005289153);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinContent(13,0.0004409207);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(1,0.002100446);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(2,0.002412139);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(3,0.002158983);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(4,0.0019783);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(5,0.001157327);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(6,0.00152097);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(7,0.00101353);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(8,0.001276017);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(9,0.001122375);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(10,0.0005289153);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetBinError(13,0.0004409207);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetEntries(83);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetFillColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->SetLineColor(ci);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nobTag_13TeV_pt3274->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->Add(new_histo_group_VVV_wh3l_nobTag_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275 = new TH1D("new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinContent(1,1.596708);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinContent(2,1.982432);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinContent(3,0.3946298);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinContent(4,0.1890666);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinContent(8,0.1058488);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinError(1,0.4582028);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinError(2,0.5240483);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinError(3,0.2028077);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinError(4,0.1395142);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetBinError(8,0.1058488);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetEntries(69);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetFillColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->SetLineColor(ci);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nobTag_13TeV_pt3275->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->Add(new_histo_group_Vg_wh3l_nobTag_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276 = new TH1D("new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinContent(1,0.6281585);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinContent(2,0.3512915);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinContent(3,0.1365243);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinContent(4,0.1032495);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinContent(5,0.1294013);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinContent(6,0.06682949);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinContent(7,0.1296944);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinContent(12,0.04314121);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinError(1,0.1575844);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinError(2,0.1200722);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinError(3,0.0788247);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinError(4,0.06264676);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinError(5,0.07477743);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinError(6,0.05062022);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinError(7,0.0692364);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetBinError(12,0.04314121);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetEntries(44);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3276->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277 = new TH1D("new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(1,6.503511);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(2,4.521763);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(3,2.400354);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(4,1.615427);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(5,1.034337);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(6,0.6474393);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(7,0.4215535);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(8,0.3362591);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(9,0.2678729);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(10,0.1690013);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(11,0.06200732);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(12,0.08321545);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(13,0.05796939);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(14,0.03644819);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(15,0.02410262);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(16,0.03455711);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(17,0.028987);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(18,0.03189595);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(20,0.01206978);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(21,0.01904696);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(22,0.01616409);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(23,0.01268574);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(24,0.01094147);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinContent(26,0.01512909);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(1,0.1878374);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(2,0.1578303);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(3,0.1138313);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(4,0.09347334);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(5,0.07459761);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(6,0.05903012);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(7,0.04729046);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(8,0.04253323);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(9,0.03825805);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(10,0.03004669);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(11,0.01794155);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(12,0.02119265);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(13,0.01720478);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(14,0.01367528);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(15,0.01160145);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(16,0.01367512);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(17,0.0130656);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(18,0.01324147);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(20,0.007282232);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(21,0.01044551);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(22,0.009373455);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(23,0.007787322);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(24,0.007033752);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetBinError(26,0.008785401);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetEntries(3754);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetFillColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->SetLineColor(ci);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nobTag_13TeV_pt3277->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->Add(new_histo_group_WZ_wh3l_nobTag_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(1,0.4484995);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(2,0.374542);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(3,0.1902223);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(4,0.1050077);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(5,0.07073429);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(6,0.03415123);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(7,0.01900544);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(8,0.0135355);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(9,0.008634494);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(10,0.004877317);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(11,0.0002610804);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(12,0.002536553);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(15,0.002068518);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinContent(16,0.0007477304);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(1,0.02218112);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(2,0.02063762);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(3,0.01473488);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(4,0.01075647);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(5,0.008922898);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(6,0.006075012);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(7,0.004319656);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(8,0.004271811);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(9,0.00283649);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(10,0.002128906);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(11,0.00052935);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(12,0.001768174);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(15,0.001670387);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetBinError(16,0.0005258249);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3278->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3,"");
   thsBackground_grouped_wh3l_nobTag_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3->SetName("thsSignal_grouped_wh3l_nobTag_13TeV_pt3");
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_nobTag_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56 = new TH1F("thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56","thsSignal_grouped_wh3l_nobTag_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->SetMinimum(-0.0002682696);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->SetMaximum(0.4942146);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->SetDirectory(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->SetStats(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->SetLineStyle(0);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_nobTag_13TeV_pt3_stack_56);
   
   
   TH1D *new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279 = new TH1D("new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(1,0.4484995);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(2,0.374542);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(3,0.1902223);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(4,0.1050077);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(5,0.07073429);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(6,0.03415123);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(7,0.01900544);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(8,0.0135355);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(9,0.008634494);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(10,0.004877317);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(11,0.0002610804);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(12,0.002536553);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(15,0.002068518);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinContent(16,0.0007477304);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(1,0.02218112);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(2,0.02063762);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(3,0.01473488);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(4,0.01075647);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(5,0.008922898);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(6,0.006075012);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(7,0.004319656);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(8,0.004271811);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(9,0.00283649);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(10,0.002128906);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(11,0.00052935);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(12,0.001768174);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(15,0.001670387);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetBinError(16,0.0005258249);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3279->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3,"");
   thsSignal_grouped_wh3l_nobTag_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3055[25] = {
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
   Double_t _fy3055[25] = {
   31.99552,
   19.53882,
   8.941311,
   4.836821,
   3.87653,
   1.001753,
   0.9862297,
   0.5846703,
   0.3905987,
   0.1825828,
   0.04674237,
   0.1263567,
   0.05841031,
   0.03644819,
   0.02410262,
   0.03455711,
   0.028987,
   0.03189595,
   0,
   0.01206979,
   0.01904696,
   0.01616409,
   0.01268574,
   0.01094147,
   0};
   Double_t _felx3055[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3055[25] = {
   9.515617,
   5.44463,
   2.832803,
   1.678816,
   1.493394,
   0.3164084,
   0.4728507,
   0.2535715,
   0.1569762,
   0.04398691,
   0.03312436,
   0.06451991,
   0.01791698,
   0.01385208,
   0.01160725,
   0.01374879,
   0.01313254,
   0.01334879,
   0,
   0.007287676,
   0.01047826,
   0.009378167,
   0.007795888,
   0.007042187,
   0};
   Double_t _fehx3055[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3055[25] = {
   9.514404,
   5.444476,
   2.832773,
   1.678804,
   1.493478,
   0.3163035,
   0.472787,
   0.2535393,
   0.1569688,
   0.04395189,
   0.03312245,
   0.06445938,
   0.01785287,
   0.01381587,
   0.01160805,
   0.01374598,
   0.01312933,
   0.01333245,
   0,
   0.007285866,
   0.01047262,
   0.009378855,
   0.007794925,
   0.007040171,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3055,_fy3055,_felx3055,_fehx3055,_fely3055,_fehy3055);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3055 = new TH1F("Graph_Graph3055","",100,0,219);
   Graph_Graph3055->SetMinimum(0);
   Graph_Graph3055->SetMaximum(45.66091);
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
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   
   TH1F *Graph_Graph3056 = new TH1F("Graph_Graph3056","",100,0,219);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_nobTag_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nobTag_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nobTag_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nobTag_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nobTag_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nobTag_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nobTag_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nobTag_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy280 = new TH1F("hframe_copy280","",1000,10,200);
   hframe_copy280->SetMinimum(0);
   hframe_copy280->SetMaximum(81.11004);
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
   ccwh3l_nobTag_13TeV_pt3->Modified();
   ccwh3l_nobTag_13TeV_pt3->cd();
   ccwh3l_nobTag_13TeV_pt3->SetSelected(ccwh3l_nobTag_13TeV_pt3);
}
