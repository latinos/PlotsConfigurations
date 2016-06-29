void c_wh3l_noMET_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_noMET_13TeV_mllmin3l/cc
//=========  (Wed Jun 29 01:51:34 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_noMET_13TeV_mllmin3l = new TCanvas("ccwh3l_noMET_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_noMET_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_noMET_13TeV_mllmin3l->Range(-28,-11.02397,209.5,73.77583);
   ccwh3l_noMET_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_noMET_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_noMET_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_noMET_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_noMET_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_noMET_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_noMET_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_noMET_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_noMET_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_noMET_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_noMET_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,10,200);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(69.53584);
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
   
   THStack *thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7 = new TH1F("thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7","thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->SetMinimum(-0.2152826);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->SetMaximum(29.20505);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32 = new TH1D("new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(1,5.255424);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(2,9.014729);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(3,4.758888);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(4,9.224426);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(5,4.432197);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(6,2.864607);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(7,0.1421278);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(8,-0.1115714);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(9,0.7392294);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(10,0.06813847);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(11,0.01090887);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(12,1.097378);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(13,-0.008301546);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(14,0.2766957);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(15,0.0678091);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(16,0.08112843);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(17,0.0348215);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinContent(21,0.4446356);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(1,2.119835);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(2,2.465517);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(3,2.101938);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(4,2.776909);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(5,1.677087);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(6,1.542339);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(7,0.1683388);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(8,0.1037111);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(9,0.5793259);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(10,0.06813847);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(11,0.0833803);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(12,0.6972208);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(13,0.008301546);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(14,0.2813675);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(15,0.08198769);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(16,0.08112843);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(17,0.07369623);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetBinError(21,0.3787956);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetEntries(607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33 = new TH1D("new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(1,0.04576335);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(2,0.02580597);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(3,0.05590542);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(4,0.0285913);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(5,0.01801634);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(6,0.06607203);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(8,0.01039136);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinContent(16,0.01708511);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(1,0.02659097);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(2,0.01881374);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(3,0.02849986);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(4,0.02093881);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(5,0.01801634);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(6,0.03395134);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(8,0.01039136);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetBinError(16,0.01708511);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetEntries(19);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetFillColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->SetLineColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34 = new TH1D("new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(2,-7.365132e-05);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(3,0.001338787);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(4,0.001903903);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(5,0.001259243);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(7,0.001875758);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(8,0.0006878311);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(10,0.0006405607);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(12,0.001983664);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(13,0.001899014);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(14,0.0005375377);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(15,0.0005113052);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(16,0.0004196011);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(17,0.0007143628);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(20,0.0004281031);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinContent(21,0.0007292442);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(2,0.0009200566);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(3,0.0009470446);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(4,0.001061702);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(5,0.000890444);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(7,0.001087065);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(8,0.0006878311);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(10,0.0006405607);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(12,0.001153677);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(13,0.001026783);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(14,0.0005375377);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(15,0.0005113052);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(16,0.0004196011);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(17,0.0007143628);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(20,0.0004281031);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetBinError(21,0.0005588822);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetEntries(29);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35 = new TH1D("new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(1,10.73282);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(2,9.626168);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(3,12.88713);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(4,15.63087);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(5,15.05474);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(6,13.75173);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(7,0.5315665);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(8,0.3276962);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(9,0.1096163);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(11,0.07222105);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(12,0.172804);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(13,0.3518935);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(14,0.21429);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(15,0.1831928);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(16,0.1953081);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(17,0.1082683);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(18,0.2453529);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinContent(21,0.4333303);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(1,1.242067);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(2,1.146343);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(3,1.322202);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(4,1.525341);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(5,1.458784);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(6,1.261173);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(7,0.2899534);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(8,0.1892707);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(9,0.1096163);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(11,0.07222105);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(12,0.2733703);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(13,0.2031943);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(14,0.1523832);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(15,0.141316);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(16,0.1195984);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(17,0.1082683);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(18,0.1744432);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetBinError(21,0.2643278);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetEntries(1050);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36 = new TH1D("new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(1,0.4344686);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(2,0.4643077);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(3,0.8170663);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(4,0.2985492);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(5,0.334329);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(6,0.272143);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(7,0.02856258);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(8,0.08153018);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(9,0.1458374);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(10,0.04275711);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(12,0.2048837);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(13,0.2819979);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(14,0.03538685);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(15,0.241587);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(17,0.0403403);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(19,0.007786774);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(20,0.08681018);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinContent(21,0.1179793);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(1,0.1328215);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(2,0.1335012);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(3,0.1824861);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(4,0.1097466);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(5,0.1156509);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(6,0.1116248);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(7,0.02856258);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(8,0.05765065);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(9,0.07572422);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(10,0.04275711);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(12,0.09048058);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(13,0.1085364);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(14,0.03538685);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(15,0.1012064);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(17,0.0403403);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(19,0.007786774);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(20,0.06142285);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetBinError(21,0.06827817);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetEntries(105);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37 = new TH1D("new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(1,2.807971);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(2,2.994077);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(3,3.233863);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(4,2.394606);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(5,1.71042);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(6,1.5009);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(7,0.2432482);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(8,0.201872);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(9,0.1708849);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(10,0.182403);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(11,0.1211948);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(12,0.7008083);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(13,0.5883519);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(14,0.4548303);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(15,0.3417375);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(16,0.2522289);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(17,0.1924891);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(18,0.1391483);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(19,0.09903356);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(20,0.1339868);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinContent(21,0.7477899);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(1,0.1236282);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(2,0.1279558);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(3,0.1321777);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(4,0.1148597);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(5,0.09658365);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(6,0.09040786);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(7,0.0359471);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(8,0.03322862);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(9,0.03028122);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(10,0.03193954);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(11,0.02526602);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(12,0.06182156);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(13,0.05748116);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(14,0.05038482);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(15,0.04297094);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(16,0.036638);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(17,0.03239035);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(18,0.02684359);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(19,0.02301199);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(20,0.02660932);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetBinError(21,0.06316063);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetEntries(3898);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(1,0.1265957);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(2,0.2506938);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(3,0.2789005);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(4,0.2353911);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(5,0.1854544);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(6,0.1071349);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(7,0.03454645);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(8,0.007386047);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(9,0.005828074);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(10,0.0004476641);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(12,0.007241262);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(14,0.0005929664);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinContent(18,0.0002894645);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(1,0.01282568);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(2,0.01814422);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(3,0.01883729);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(4,0.01627733);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(5,0.01316856);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(6,0.009935183);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(7,0.005870503);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(8,0.001819979);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(9,0.001544729);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(10,0.0003425673);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(12,0.003174717);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(14,0.0005086039);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetBinError(18,0.0002894645);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_noMET_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8 = new TH1F("thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8","thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->SetMaximum(0.3126247);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(1,0.1265957);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(2,0.2506938);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(3,0.2789005);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(4,0.2353911);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(5,0.1854544);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(6,0.1071349);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(7,0.03454645);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(8,0.007386047);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(9,0.005828074);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(10,0.0004476641);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(12,0.007241262);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(14,0.0005929664);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinContent(18,0.0002894645);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(1,0.01282568);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(2,0.01814422);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(3,0.01883729);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(4,0.01627733);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(5,0.01316856);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(6,0.009935183);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(7,0.005870503);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(8,0.001819979);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(9,0.001544729);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(10,0.0003425673);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(12,0.003174717);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(14,0.0005086039);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetBinError(18,0.0002894645);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_noMET_13TeV_mllmin3l->Draw("hist same noclear");
   
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
   19.27645,
   22.12502,
   21.75419,
   27.57894,
   21.55096,
   18.45546,
   0.9473808,
   0.5106062,
   1.165568,
   0.3081475,
   0.2043247,
   2.177858,
   1.215841,
   0.9817404,
   0.8348377,
   0.5461702,
   0.3766336,
   0.3845012,
   0.1068203,
   0.2212251};
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
   4.155239,
   5.055118,
   4.206918,
   5.660591,
   3.776273,
   3.259339,
   0.5010788,
   0.3972609,
   0.8360466,
   0.1595334,
   0.108514,
   1.093313,
   0.3794331,
   0.5246418,
   0.3552456,
   0.2566669,
   0.2176053,
   0.2016095,
   0.03089462,
   0.0886704};
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
   4.149428,
   5.050814,
   4.201837,
   5.656916,
   3.773355,
   3.2582,
   0.5268386,
   0.397249,
   0.8360467,
   0.1595322,
   0.1809388,
   1.187972,
   0.3794054,
   0.5292027,
   0.3693073,
   0.2566639,
   0.256027,
   0.201614,
   0.03086841,
   0.08860454};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,219);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(36.55185);
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
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,219);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.262698);
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
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_mllmin3l","Data","EPL");
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
   hframe_copy40->SetMaximum(69.53584);
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
   ccwh3l_noMET_13TeV_mllmin3l->Modified();
   ccwh3l_noMET_13TeV_mllmin3l->cd();
   ccwh3l_noMET_13TeV_mllmin3l->SetSelected(ccwh3l_noMET_13TeV_mllmin3l);
}
