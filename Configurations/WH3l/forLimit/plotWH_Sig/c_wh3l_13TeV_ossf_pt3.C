void c_wh3l_13TeV_ossf_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_pt3/cc
//=========  (Wed Jun 29 22:36:10 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_pt3 = new TCanvas("ccwh3l_13TeV_ossf_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_pt3->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_pt3->Range(-88,-4.386755,524.5,29.35751);
   ccwh3l_13TeV_ossf_pt3->SetFillColor(0);
   ccwh3l_13TeV_ossf_pt3->SetBorderMode(0);
   ccwh3l_13TeV_ossf_pt3->SetBorderSize(2);
   ccwh3l_13TeV_ossf_pt3->SetTickx(1);
   ccwh3l_13TeV_ossf_pt3->SetTicky(1);
   ccwh3l_13TeV_ossf_pt3->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_pt3->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_pt3->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_pt3->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe61 = new TH1F("hframe61","",1000,10,500);
   hframe61->SetMinimum(0);
   hframe61->SetMaximum(27.6703);
   hframe61->SetDirectory(0);
   hframe61->SetStats(0);
   hframe61->SetLineStyle(0);
   hframe61->SetMarkerStyle(20);
   hframe61->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe61->GetXaxis()->SetNdivisions(506);
   hframe61->GetXaxis()->SetLabelFont(42);
   hframe61->GetXaxis()->SetLabelOffset(0.007);
   hframe61->GetXaxis()->SetLabelSize(0.05);
   hframe61->GetXaxis()->SetTitleSize(0.06);
   hframe61->GetXaxis()->SetTitleOffset(0.9);
   hframe61->GetXaxis()->SetTitleFont(42);
   hframe61->GetYaxis()->SetTitle("Events");
   hframe61->GetYaxis()->SetLabelFont(42);
   hframe61->GetYaxis()->SetLabelOffset(0.007);
   hframe61->GetYaxis()->SetLabelSize(0.05);
   hframe61->GetYaxis()->SetTitleSize(0.06);
   hframe61->GetYaxis()->SetTitleOffset(1.25);
   hframe61->GetYaxis()->SetTitleFont(42);
   hframe61->GetZaxis()->SetLabelFont(42);
   hframe61->GetZaxis()->SetLabelOffset(0.007);
   hframe61->GetZaxis()->SetLabelSize(0.05);
   hframe61->GetZaxis()->SetTitleSize(0.06);
   hframe61->GetZaxis()->SetTitleFont(42);
   hframe61->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetName("thsBackground_grouped_wh3l_13TeV_ossf_pt3");
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13","thsBackground_grouped_wh3l_13TeV_ossf_pt3",50,10,500);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetMinimum(-0.0006315881);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetMaximum(11.62153);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_pt362 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_pt362","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinContent(1,4.908211);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinContent(2,1.494171);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinContent(3,0.3164588);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinError(1,2.0401);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinError(2,0.7728023);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinError(3,0.2807801);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Fake_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_pt363 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_pt363","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinContent(1,0.0427997);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinContent(2,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinError(1,0.0253044);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinError(2,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_WW_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_pt364 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_pt364","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinContent(1,0.001735485);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinContent(2,0.001944774);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinError(1,0.0009451384);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinError(2,0.001122858);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_VVV_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_pt365 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_pt365","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinContent(1,1.280068);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinContent(2,1.368101);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinError(1,0.3762169);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinError(2,0.4282726);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Vg_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_pt366 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_pt366","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinContent(1,0.4141598);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinContent(2,0.0884324);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinContent(4,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinError(1,0.1248856);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinError(2,0.06254373);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinError(4,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_pt367 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_pt367","histo_WZ",50,10,500);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(1,4.13471);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(2,1.712095);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(3,0.5772475);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(4,0.2526619);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(5,0.09121727);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(6,0.05818515);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(7,0.02696442);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(8,0.01878316);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(9,0.02828208);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(10,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(12,0.01491714);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(1,0.1502495);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(2,0.09649252);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(3,0.05513651);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(4,0.03678909);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(5,0.0220712);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(6,0.01782869);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(7,0.01209059);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(8,0.01087568);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(9,0.01275592);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(10,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(12,0.009104556);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_WZ_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt368 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt368","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(1,0.2864366);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(2,0.1755056);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(3,0.06426283);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(4,0.02892633);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(5,0.0167277);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(6,0.005856459);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(7,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(8,0.001895509);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(9,-0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(13,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(1,0.01826893);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(2,0.01438435);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(3,0.009070699);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(4,0.006299609);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(5,0.004858417);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(6,0.002919252);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(7,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(8,0.001699495);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(9,0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(13,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt3,"");
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetName("thsSignal_grouped_wh3l_13TeV_ossf_pt3");
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14","thsSignal_grouped_wh3l_13TeV_ossf_pt3",50,10,500);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetMinimum(-0.0006315881);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetMaximum(0.3199408);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt369 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt369","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(1,0.2864366);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(2,0.1755056);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(3,0.06426283);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(4,0.02892633);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(5,0.0167277);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(6,0.005856459);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(7,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(8,0.001895509);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(9,-0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(13,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(1,0.01826893);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(2,0.01438435);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(3,0.009070699);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(4,0.006299609);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(5,0.004858417);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(6,0.002919252);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(7,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(8,0.001699495);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(9,0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(13,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt3,"");
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->Draw("hist same noclear");
   
   Double_t _fx3013[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3013[50] = {
   10.78168,
   4.680048,
   0.9081807,
   0.29794,
   0.09121726,
   0.05818515,
   0.02696442,
   0.01878316,
   0.02828208,
   0.005313793,
   0,
   0.01491714,
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
   Double_t _felx3013[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3013[50] = {
   3.233091,
   1.474676,
   0.3675629,
   0.08219501,
   0.02217216,
   0.01787915,
   0.01210699,
   0.01088375,
   0.01280114,
   0.005320137,
   0,
   0.009111702,
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
   Double_t _fehx3013[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3013[50] = {
   3.231813,
   1.47465,
   0.3675572,
   0.08218262,
   0.02215073,
   0.01788437,
   0.012105,
   0.01088442,
   0.01279777,
   0.005320925,
   0,
   0.009112708,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,549);
   Graph_Graph3013->SetMinimum(-1.401357);
   Graph_Graph3013->SetMaximum(15.41485);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("2");
   
   Double_t _fx3014[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3014[50] = {
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
   0,
   0};
   Double_t _felx3014[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3014[50] = {
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
   0,
   0};
   Double_t _fehx3014[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3014[50] = {
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
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(50,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,549);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(1.262698);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineStyle(0);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt3","Data","EPL");
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
   
   TH1F *hframe_copy70 = new TH1F("hframe_copy70","",1000,10,500);
   hframe_copy70->SetMinimum(0);
   hframe_copy70->SetMaximum(27.6703);
   hframe_copy70->SetDirectory(0);
   hframe_copy70->SetStats(0);
   hframe_copy70->SetLineStyle(0);
   hframe_copy70->SetMarkerStyle(20);
   hframe_copy70->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy70->GetXaxis()->SetNdivisions(506);
   hframe_copy70->GetXaxis()->SetLabelFont(42);
   hframe_copy70->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetXaxis()->SetLabelSize(0.05);
   hframe_copy70->GetXaxis()->SetTitleSize(0.06);
   hframe_copy70->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy70->GetXaxis()->SetTitleFont(42);
   hframe_copy70->GetYaxis()->SetTitle("Events");
   hframe_copy70->GetYaxis()->SetLabelFont(42);
   hframe_copy70->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetYaxis()->SetLabelSize(0.05);
   hframe_copy70->GetYaxis()->SetTitleSize(0.06);
   hframe_copy70->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy70->GetYaxis()->SetTitleFont(42);
   hframe_copy70->GetZaxis()->SetLabelFont(42);
   hframe_copy70->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetZaxis()->SetLabelSize(0.05);
   hframe_copy70->GetZaxis()->SetTitleSize(0.06);
   hframe_copy70->GetZaxis()->SetTitleFont(42);
   hframe_copy70->Draw("sameaxis");
   ccwh3l_13TeV_ossf_pt3->Modified();
   ccwh3l_13TeV_ossf_pt3->cd();
   ccwh3l_13TeV_ossf_pt3->SetSelected(ccwh3l_13TeV_ossf_pt3);
}
