void c_wh3l_Pre_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt1/cc
//=========  (Sat Jul  2 21:43:49 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt1 = new TCanvas("ccwh3l_Pre_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt1->Range(-28,-72.13414,209.5,482.7439);
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
   
   TH1F *hframe381 = new TH1F("hframe381","",1000,10,200);
   hframe381->SetMinimum(0);
   hframe381->SetMaximum(455);
   hframe381->SetDirectory(0);
   hframe381->SetStats(0);
   hframe381->SetLineStyle(0);
   hframe381->SetMarkerStyle(20);
   hframe381->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe381->GetXaxis()->SetNdivisions(506);
   hframe381->GetXaxis()->SetLabelFont(42);
   hframe381->GetXaxis()->SetLabelOffset(0.007);
   hframe381->GetXaxis()->SetLabelSize(0.05);
   hframe381->GetXaxis()->SetTitleSize(0.06);
   hframe381->GetXaxis()->SetTitleOffset(0.9);
   hframe381->GetXaxis()->SetTitleFont(42);
   hframe381->GetYaxis()->SetTitle("Events");
   hframe381->GetYaxis()->SetLabelFont(42);
   hframe381->GetYaxis()->SetLabelOffset(0.007);
   hframe381->GetYaxis()->SetLabelSize(0.05);
   hframe381->GetYaxis()->SetTitleSize(0.06);
   hframe381->GetYaxis()->SetTitleOffset(1.25);
   hframe381->GetYaxis()->SetTitleFont(42);
   hframe381->GetZaxis()->SetLabelFont(42);
   hframe381->GetZaxis()->SetLabelOffset(0.007);
   hframe381->GetZaxis()->SetLabelSize(0.05);
   hframe381->GetZaxis()->SetTitleSize(0.06);
   hframe381->GetZaxis()->SetTitleFont(42);
   hframe381->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt1");
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77","thsBackground_grouped_wh3l_Pre_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetMinimum(-0.3280695);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetMaximum(142.6706);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt1382 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt1382","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(2,6.634999);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(3,18.76487);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(4,39.1027);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(5,47.74598);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(6,48.76377);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(7,38.62586);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(8,22.14849);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(9,16.80815);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(10,13.91805);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(11,6.531056);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(12,7.060448);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(13,3.794981);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(14,4.609678);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(15,0.7247497);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(16,3.549525);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(17,0.8318087);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(18,1.108688);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(19,0.1076387);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(20,2.941909);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(21,1.327081);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(22,2.602646);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(23,-0.04051808);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(24,-0.0236358);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(25,0.4014507);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(26,0.8168504);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(2,2.735006);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(3,3.709072);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(4,5.117886);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(5,5.30362);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(6,5.594018);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(7,4.704583);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(8,3.569861);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(9,3.195799);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(10,2.68813);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(11,2.129679);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(12,1.671775);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(13,1.765266);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(14,1.536547);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(15,0.8886679);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(16,1.270445);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(17,0.7215194);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(18,0.780659);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(19,0.4357082);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(20,1.361973);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(21,1.036963);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(22,1.230667);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(23,0.1276699);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(24,0.1321171);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(25,0.182953);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(26,0.9313857);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt1383 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt1383","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(3,0.04037745);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(4,0.02320312);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(5,0.02784318);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(6,0.05745563);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(7,0.07123238);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(8,0.01273931);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(9,0.04937191);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(10,0.02894603);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(11,0.01821101);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(12,0.02998172);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(14,0.009663942);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(15,0.03060151);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(17,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(26,0.02181735);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(3,0.02883225);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(4,0.01650323);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(5,0.02029379);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(6,0.02931931);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(7,0.03370235);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(8,0.01273931);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(9,0.02876853);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(10,0.02107241);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(11,0.01821101);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(12,0.02122177);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(14,0.009663942);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(15,0.02185907);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(17,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(26,0.01629472);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt1384 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt1384","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(2,0.006535834);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(3,0.04435414);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(4,0.1129485);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(5,0.1996462);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(6,0.294919);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(7,0.3644851);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(8,0.3448968);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(9,0.3790474);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(10,0.3439216);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(11,0.3016798);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(12,0.2556865);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(13,0.2657494);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(14,0.167831);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(15,0.1851009);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(16,0.1792085);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(17,0.1558313);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(18,0.130773);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(19,0.1183205);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(20,0.1388531);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(21,0.1383042);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(22,0.1029823);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(23,0.0708678);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(24,0.06467886);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(25,0.07224676);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(26,0.770996);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(2,0.003709105);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(3,0.01026951);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(4,0.01502988);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(5,0.01876032);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(6,0.02484831);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(7,0.02612565);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(8,0.02367247);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(9,0.0266434);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(10,0.02555603);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(11,0.02407325);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(12,0.02246225);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(13,0.02226128);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(14,0.018448);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(15,0.01840006);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(16,0.01802567);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(17,0.01677453);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(18,0.01508137);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(19,0.01539866);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(20,0.01602353);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(21,0.01579016);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(22,0.01414537);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(23,0.01181448);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(24,0.0110592);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(25,0.01163659);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(26,0.0383626);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt1385 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt1385","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(2,6.240048);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(3,28.77149);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(4,58.01899);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(5,48.14322);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(6,29.25307);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(7,16.19555);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(8,11.2281);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(9,8.184424);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(10,4.143973);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(11,3.850601);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(12,2.089136);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(13,1.745756);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(14,1.983738);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(15,1.561489);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(16,1.15459);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(17,0.2576442);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(18,0.1209199);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(19,0.7756943);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(20,1.071472);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(21,0.4905534);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(22,0.2566376);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(23,0.4504919);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(24,0.1814957);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(25,0.004261324);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(26,0.3646682);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(2,0.9393299);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(3,1.980991);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(4,2.880071);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(5,2.719716);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(6,2.204558);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(7,1.620817);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(8,1.355351);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(9,1.197552);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(10,0.9055672);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(11,0.8098278);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(12,0.7572583);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(13,0.6832737);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(14,0.6034134);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(15,0.4944341);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(16,0.4673495);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(17,0.4453573);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(18,0.3017591);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(19,0.4040595);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(20,0.3860722);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(21,0.2675808);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(22,0.2134634);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(23,0.241413);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(24,0.2704197);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(25,0.1527112);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(26,0.519136);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(2,0.4758992);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(3,1.278678);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(4,2.672778);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(5,6.172685);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(6,7.959173);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(7,7.56517);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(8,5.403028);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(9,4.308401);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(10,3.201493);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(11,2.804627);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(12,2.769327);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(13,1.505801);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(14,1.544635);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(15,0.9862449);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(16,0.6471414);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(17,0.6867844);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(18,0.3518909);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(19,0.4313079);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(20,0.5248157);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(21,0.4495087);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(22,0.1326717);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(23,0.1917809);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(24,0.2191462);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(25,0.08891488);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(26,1.145811);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(2,0.1351711);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(3,0.2304978);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(4,0.3334841);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(5,0.5074379);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(6,0.5724665);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(7,0.5547856);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(8,0.4721887);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(9,0.4265359);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(10,0.3590853);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(11,0.3402311);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(12,0.3341541);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(13,0.2478154);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(14,0.250052);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(15,0.2075657);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(16,0.1578918);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(17,0.1667345);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(18,0.1159168);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(19,0.1370065);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(20,0.143904);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(21,0.1427127);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(22,0.06391727);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(23,0.09605175);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(24,0.09180104);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(25,0.05359272);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(26,0.2171652);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt1387 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt1387","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(2,1.764356);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(3,6.136381);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(4,14.04715);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(5,33.21601);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(6,48.52294);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(7,46.57582);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(8,39.31306);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(9,31.17761);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(10,24.95087);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(11,20.30374);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(12,15.61118);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(13,12.84138);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(14,10.82613);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(15,8.789362);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(16,7.415256);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(17,5.869586);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(18,5.037168);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(19,4.432468);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(20,3.655368);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(21,3.232395);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(22,2.669324);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(23,2.403927);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(24,2.137135);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(25,1.860246);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(26,15.86055);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(2,0.09773478);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(3,0.1825784);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(4,0.2763442);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(5,0.4254285);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(6,0.5148092);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(7,0.5038291);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(8,0.4629437);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(9,0.4134489);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(10,0.3696803);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(11,0.333753);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(12,0.2911036);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(13,0.2634522);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(14,0.2428821);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(15,0.2181257);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(16,0.2011804);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(17,0.1774106);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(18,0.1651427);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(19,0.1555766);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(20,0.1399998);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(21,0.1325205);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(22,0.1205731);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(23,0.114511);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(24,0.1068039);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(25,0.09990448);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(26,0.2933757);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(2,0.02748297);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(3,0.105534);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(4,0.2154044);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(5,0.3714041);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(6,0.436651);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(7,0.4727835);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(8,0.4074393);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(9,0.3976065);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(10,0.368352);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(11,0.3330141);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(12,0.2997868);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(13,0.245172);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(14,0.2080158);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(15,0.1707566);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(16,0.1523221);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(17,0.1214511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(18,0.1133445);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(19,0.08026807);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(20,0.06601116);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(21,0.0696062);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(22,0.04654914);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(23,0.03548201);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(24,0.02703816);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(25,0.0348036);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(26,0.2008754);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(2,0.005620161);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(3,0.01098676);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(4,0.01526022);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(5,0.02163511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(6,0.02329703);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(7,0.02414171);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(8,0.02125851);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(9,0.02127469);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(10,0.02047517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(11,0.01890762);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(12,0.01703504);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(13,0.01540701);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(14,0.01356079);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(15,0.01227959);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(16,0.01188489);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(17,0.01054164);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(18,0.01005924);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(19,0.008013918);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(20,0.007365683);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(21,0.007635391);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(22,0.005897122);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(23,0.004803191);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(24,0.005090059);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(25,0.005656014);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(26,0.01303465);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt1,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt1");
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78","thsSignal_grouped_wh3l_Pre_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetMaximum(0.5217715);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(2,0.02748297);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(3,0.105534);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(4,0.2154044);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(5,0.3714041);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(6,0.436651);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(7,0.4727835);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(8,0.4074393);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(9,0.3976065);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(10,0.368352);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(11,0.3330141);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(12,0.2997868);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(13,0.245172);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(14,0.2080158);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(15,0.1707566);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(16,0.1523221);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(17,0.1214511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(18,0.1133445);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(19,0.08026807);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(20,0.06601116);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(21,0.0696062);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(22,0.04654914);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(23,0.03548201);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(24,0.02703816);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(25,0.0348036);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(26,0.2008754);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(2,0.005620161);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(3,0.01098676);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(4,0.01526022);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(5,0.02163511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(6,0.02329703);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(7,0.02414171);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(8,0.02125851);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(9,0.02127469);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(10,0.02047517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(11,0.01890762);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(12,0.01703504);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(13,0.01540701);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(14,0.01356079);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(15,0.01227959);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(16,0.01188489);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(17,0.01054164);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(18,0.01005924);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(19,0.008013918);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(20,0.007365683);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(21,0.007635391);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(22,0.005897122);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(23,0.004803191);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(24,0.005090059);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(25,0.005656014);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(26,0.01303465);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt1,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3077[25] = {
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
   Double_t _fy3077[25] = {
   0,
   15.12184,
   55.03614,
   113.9778,
   135.5054,
   134.8513,
   109.3981,
   78.45032,
   60.90701,
   46.58725,
   33.80991,
   27.81576,
   20.15367,
   19.14167,
   12.27755,
   12.94572,
   7.814707,
   6.74944,
   5.865429,
   8.332417,
   5.637842,
   5.764261,
   3.07655,
   2.57882,
   2.427119};
   Double_t _felx3077[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3077[25] = {
   0,
   4.581343,
   9.172825,
   16.45068,
   19.16797,
   19.37381,
   15.50772,
   9.830003,
   7.977232,
   6.586481,
   4.359776,
   3.995437,
   3.320004,
   3.154208,
   1.753394,
   2.485368,
   1.417578,
   1.281348,
   0.855163,
   2.303279,
   1.673678,
   1.883383,
   0.6135474,
   0.5337616,
   0.3907438};
   Double_t _fehx3077[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3077[25] = {
   0,
   4.58119,
   9.165486,
   16.43972,
   19.16427,
   19.36932,
   15.50519,
   9.828086,
   7.975883,
   6.587016,
   4.357667,
   3.993559,
   3.311486,
   3.146846,
   1.904764,
   2.47998,
   1.592222,
   1.449411,
   1.169158,
   2.302857,
   1.671328,
   1.882815,
   0.5239585,
   0.5131207,
   0.527487};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3077,_fy3077,_felx3077,_fehx3077,_fely3077,_fehy3077);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3077 = new TH1F("Graph_Graph3077","",100,0,219);
   Graph_Graph3077->SetMinimum(0);
   Graph_Graph3077->SetMaximum(170.1366);
   Graph_Graph3077->SetDirectory(0);
   Graph_Graph3077->SetStats(0);
   Graph_Graph3077->SetLineStyle(0);
   Graph_Graph3077->SetMarkerStyle(20);
   Graph_Graph3077->GetXaxis()->SetLabelFont(42);
   Graph_Graph3077->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3077->GetXaxis()->SetTitleFont(42);
   Graph_Graph3077->GetYaxis()->SetLabelFont(42);
   Graph_Graph3077->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3077->GetYaxis()->SetTitleFont(42);
   Graph_Graph3077->GetZaxis()->SetLabelFont(42);
   Graph_Graph3077->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3077);
   
   grae->Draw("2");
   
   Double_t _fx3078[25] = {
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
   Double_t _fy3078[25] = {
   0,
   17,
   54,
   108,
   161,
   169,
   120,
   80,
   66,
   51,
   36,
   27,
   30,
   23,
   12,
   7,
   15,
   9,
   8,
   10,
   4,
   4,
   6,
   4,
   2};
   Double_t _felx3078[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3078[25] = {
   0,
   4.082258,
   7.325785,
   10.37641,
   12.67566,
   12.9874,
   10.93939,
   8.925718,
   8.103564,
   7.118073,
   5.972111,
   5.163869,
   5.446627,
   4.760806,
   3.415326,
   2.581513,
   3.829449,
   2.943511,
   2.768432,
   3.108748,
   1.914367,
   1.914367,
   2.379969,
   1.914367,
   1.29183};
   Double_t _fehx3078[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3078[25] = {
   1.147908,
   5.203825,
   8.394025,
   11.42465,
   13.71516,
   14.02596,
   11.98516,
   9.981777,
   9.165286,
   8.188293,
   7.055691,
   6.260373,
   6.538181,
   5.865355,
   4.559911,
   3.770356,
   4.958839,
   4.110286,
   3.94522,
   4.267035,
   3.162815,
   3.162815,
   3.583713,
   3.162815,
   2.63791};
   grae = new TGraphAsymmErrors(25,_fx3078,_fy3078,_felx3078,_fehx3078,_fely3078,_fehy3078);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3078 = new TH1F("Graph_Graph3078","",100,0,219);
   Graph_Graph3078->SetMinimum(0);
   Graph_Graph3078->SetMaximum(201.3286);
   Graph_Graph3078->SetDirectory(0);
   Graph_Graph3078->SetStats(0);
   Graph_Graph3078->SetLineStyle(0);
   Graph_Graph3078->SetMarkerStyle(20);
   Graph_Graph3078->GetXaxis()->SetLabelFont(42);
   Graph_Graph3078->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3078->GetXaxis()->SetTitleFont(42);
   Graph_Graph3078->GetYaxis()->SetLabelFont(42);
   Graph_Graph3078->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3078->GetYaxis()->SetTitleFont(42);
   Graph_Graph3078->GetZaxis()->SetLabelFont(42);
   Graph_Graph3078->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3078);
   
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
   
   TH1F *hframe_copy390 = new TH1F("hframe_copy390","",1000,10,200);
   hframe_copy390->SetMinimum(0);
   hframe_copy390->SetMaximum(455);
   hframe_copy390->SetDirectory(0);
   hframe_copy390->SetStats(0);
   hframe_copy390->SetLineStyle(0);
   hframe_copy390->SetMarkerStyle(20);
   hframe_copy390->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy390->GetXaxis()->SetNdivisions(506);
   hframe_copy390->GetXaxis()->SetLabelFont(42);
   hframe_copy390->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetXaxis()->SetLabelSize(0.05);
   hframe_copy390->GetXaxis()->SetTitleSize(0.06);
   hframe_copy390->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy390->GetXaxis()->SetTitleFont(42);
   hframe_copy390->GetYaxis()->SetTitle("Events");
   hframe_copy390->GetYaxis()->SetLabelFont(42);
   hframe_copy390->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetYaxis()->SetLabelSize(0.05);
   hframe_copy390->GetYaxis()->SetTitleSize(0.06);
   hframe_copy390->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy390->GetYaxis()->SetTitleFont(42);
   hframe_copy390->GetZaxis()->SetLabelFont(42);
   hframe_copy390->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetZaxis()->SetLabelSize(0.05);
   hframe_copy390->GetZaxis()->SetTitleSize(0.06);
   hframe_copy390->GetZaxis()->SetTitleFont(42);
   hframe_copy390->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt1->Modified();
   ccwh3l_Pre_13TeV_pt1->cd();
   ccwh3l_Pre_13TeV_pt1->SetSelected(ccwh3l_Pre_13TeV_pt1);
}
