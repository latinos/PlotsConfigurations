void c_wh3l_top_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_met/cc
//=========  (Tue Jun 28 16:49:07 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_met = new TCanvas("ccwh3l_top_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_met->SetHighLightColor(2);
   ccwh3l_top_13TeV_met->Range(-40,-2.867954,210,19.19323);
   ccwh3l_top_13TeV_met->SetFillColor(0);
   ccwh3l_top_13TeV_met->SetBorderMode(0);
   ccwh3l_top_13TeV_met->SetBorderSize(2);
   ccwh3l_top_13TeV_met->SetTickx(1);
   ccwh3l_top_13TeV_met->SetTicky(1);
   ccwh3l_top_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_met->SetRightMargin(0.04);
   ccwh3l_top_13TeV_met->SetTopMargin(0.05);
   ccwh3l_top_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe177 = new TH1F("hframe177","",1000,0,200);
   hframe177->SetMinimum(0);
   hframe177->SetMaximum(18.09017);
   hframe177->SetDirectory(0);
   hframe177->SetStats(0);
   hframe177->SetLineStyle(0);
   hframe177->SetMarkerStyle(20);
   hframe177->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe177->GetXaxis()->SetNdivisions(506);
   hframe177->GetXaxis()->SetLabelFont(42);
   hframe177->GetXaxis()->SetLabelOffset(0.007);
   hframe177->GetXaxis()->SetLabelSize(0.05);
   hframe177->GetXaxis()->SetTitleSize(0.06);
   hframe177->GetXaxis()->SetTitleOffset(0.9);
   hframe177->GetXaxis()->SetTitleFont(42);
   hframe177->GetYaxis()->SetTitle("Events");
   hframe177->GetYaxis()->SetLabelFont(42);
   hframe177->GetYaxis()->SetLabelOffset(0.007);
   hframe177->GetYaxis()->SetLabelSize(0.05);
   hframe177->GetYaxis()->SetTitleSize(0.06);
   hframe177->GetYaxis()->SetTitleOffset(1.25);
   hframe177->GetYaxis()->SetTitleFont(42);
   hframe177->GetZaxis()->SetLabelFont(42);
   hframe177->GetZaxis()->SetLabelOffset(0.007);
   hframe177->GetZaxis()->SetLabelSize(0.05);
   hframe177->GetZaxis()->SetTitleSize(0.06);
   hframe177->GetZaxis()->SetTitleFont(42);
   hframe177->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_met->SetName("thsBackground_grouped_wh3l_top_13TeV_met");
   thsBackground_grouped_wh3l_top_13TeV_met->SetTitle("thsBackground_grouped_wh3l_top_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_met_stack_23 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_met_stack_23","thsBackground_grouped_wh3l_top_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->SetMinimum(-0.4229236);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->SetMaximum(4.922841);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_met_stack_23);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_met178 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_met178","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(9,3.058471);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(10,2.24924);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(11,2.377577);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(12,2.52524);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(13,2.739994);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(14,1.676345);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(15,2.707987);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(16,1.143376);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(17,2.736813);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(18,0.5276802);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(19,1.368902);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(20,1.400311);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(21,0.6254068);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(22,0.264832);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(23,1.909061);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(24,2.237728);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(25,1.241279);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(26,1.670472);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(27,2.669901);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(28,-0.1740762);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(29,0.5272919);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(30,-0.1934717);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(31,0.1013291);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(32,0.2608891);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(33,0.6407909);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(34,0.4558406);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(35,0.1700996);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(36,-0.03556312);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(37,0.5900977);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(39,-0.005115197);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinContent(41,0.2251023);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(9,1.233899);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(10,1.198876);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(11,1.039852);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(12,1.01836);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(13,1.41887);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(14,0.8952408);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(15,1.228538);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(16,0.7973831);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(17,1.095126);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(18,0.5943635);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(19,0.7604559);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(20,0.8991104);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(21,0.4033734);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(22,0.3114508);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(23,0.9862315);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(24,0.9933852);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(25,0.9890498);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(26,0.9248583);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(27,1.191014);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(28,0.2488474);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(29,0.490368);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(30,0.118568);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(31,0.1013291);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(32,0.431448);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(33,0.5596844);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(34,0.465678);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(35,0.1229892);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(36,0.03556312);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(37,0.518373);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(39,0.005115197);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetBinError(41,0.3145376);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_met178->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_Fake_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_met179 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_met179","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(10,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(15,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(18,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(20,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(21,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(22,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(25,0.03488018);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(29,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(40,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinContent(41,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(10,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(15,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(18,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(20,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(21,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(22,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(25,0.02485137);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(29,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(40,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetBinError(41,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_met179->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_met179->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_met179->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met179->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_WW_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_met180 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_met180","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(9,0.001061081);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(10,0.001898071);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(12,0.001875238);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(13,0.002290122);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(14,0.002894082);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(15,0.001335481);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(16,0.0007818795);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(17,0.001170349);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(18,0.001561961);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(20,0.001707726);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(21,0.0007797731);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(22,0.0006538501);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(24,0.001202226);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(25,0.001168168);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(26,0.001893896);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(27,0.0006416041);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(28,-0.0006289819);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(29,0.0005445301);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(30,0.001226432);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(31,0.0006591225);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(32,0.0004235577);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(35,0.0006083188);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(36,0.0004376478);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(38,0.0006398484);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinContent(41,0.003159082);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(9,0.0007514465);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(10,0.0009837396);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(12,0.00111025);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(13,0.001163362);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(14,0.001305828);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(15,0.0009571844);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(16,0.0007818795);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(17,0.000831984);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(18,0.001018162);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(20,0.001114346);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(21,0.0007797731);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(22,0.0006538501);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(24,0.0008693232);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(25,0.0008288097);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(26,0.001098376);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(27,0.0006416041);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(28,0.0006289819);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(29,0.0005445301);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(30,0.0008672203);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(31,0.0006591225);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(32,0.0004235577);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(35,0.0004716282);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(36,0.0004376478);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(38,0.0006398484);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetBinError(41,0.001250303);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_met180->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met180->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_VVV_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_met181 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_met181","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinContent(9,0.6844603);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinContent(10,0.5837656);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinContent(13,-0.03979167);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinContent(15,0.1439572);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinContent(16,0.03547572);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinContent(28,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinError(9,0.3390033);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinError(10,0.2478938);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinError(13,0.1251425);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinError(15,0.1245596);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinError(16,0.03547572);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetBinError(28,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_met181->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met181->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_Vg_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_met182 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_met182","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(9,0.05830918);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(10,0.2207018);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(11,0.1604082);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(12,0.04596292);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(13,0.01304562);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(14,0.08475227);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(15,0.04411533);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(16,0.1438652);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(17,0.03822494);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(18,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(22,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinContent(41,0.04400699);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(9,0.04439661);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(10,0.09467223);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(11,0.07855045);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(12,0.04596292);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(13,0.01304562);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(14,0.05994398);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(15,0.04411533);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(16,0.08314455);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(17,0.03822494);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(18,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(22,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetBinError(41,0.04400699);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_met182->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_ZZ_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_met183 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_met183","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(9,0.8861184);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(10,0.8234757);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(11,0.7278323);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(12,0.6088386);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(13,0.64379);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(14,0.5049684);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(15,0.4450662);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(16,0.4290843);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(17,0.3931129);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(18,0.3564204);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(19,0.2651212);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(20,0.2602557);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(21,0.214532);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(22,0.2766819);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(23,0.19957);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(24,0.1419299);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(25,0.1428665);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(26,0.1356657);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(27,0.1427575);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(28,0.1169478);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(29,0.0874706);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(30,0.09352321);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(31,0.08408564);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(32,0.06614704);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(33,0.03894734);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(34,0.01997184);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(35,0.04050213);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(36,0.02515249);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(37,0.03476531);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(38,0.04800389);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(39,0.02228679);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(40,0.02571922);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinContent(41,0.5846508);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(9,0.06987942);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(10,0.06731384);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(11,0.06228306);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(12,0.05731578);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(13,0.05983766);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(14,0.05188368);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(15,0.04867796);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(16,0.0485153);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(17,0.04742332);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(18,0.04341817);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(19,0.03748053);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(20,0.03675161);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(21,0.03416083);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(22,0.03881471);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(23,0.03261646);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(24,0.02743588);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(25,0.02785736);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(26,0.02708451);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(27,0.02766032);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(28,0.02484008);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(29,0.02175204);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(30,0.02214158);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(31,0.02135762);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(32,0.01883668);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(33,0.01477253);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(34,0.01014603);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(35,0.01424664);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(36,0.01070931);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(37,0.01463778);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(38,0.0161207);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(39,0.01103324);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(40,0.01142067);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetBinError(41,0.05754486);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_met183->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_WZ_wh3l_top_13TeV_met,"");
   thsBackground_grouped_wh3l_top_13TeV_met->Draw("hist same");
   
   Double_t _fx3045[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3045[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   4.68842,
   3.88353,
   3.265817,
   3.181916,
   3.359328,
   2.26896,
   3.358413,
   1.752583,
   3.169321,
   0.949526,
   1.634023,
   1.679765,
   0.857043,
   0.6024231,
   2.108631,
   2.38086,
   1.420194,
   1.808031,
   2.8133,
   0.04904224,
   0.6299251,
   -0.09872209,
   0.1860738,
   0.3274597,
   0.6797383,
   0.4758125,
   0.2112101,
   -0.00997299,
   0.624863,
   0.04864374,
   0.0171716,
   0.03877175};
   Double_t _felx3045[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3045[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.9213,
   1.749686,
   1.379419,
   1.35443,
   1.814882,
   1.126826,
   1.67326,
   1.024444,
   1.438857,
   0.6553883,
   0.8974145,
   1.042826,
   0.4918317,
   0.3731166,
   1.168784,
   1.222505,
   1.107095,
   1.076768,
   1.458864,
   0.3846881,
   0.5505003,
   0.1530126,
   0.1270365,
   0.2908768,
   0.6057689,
   0.4856385,
   0.1468584,
   0.04791303,
   0.5616403,
   0.0167606,
   0.01622119,
   0.02447584};
   Double_t _fehx3045[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3045[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.921301,
   1.749687,
   1.379419,
   1.35443,
   1.739217,
   1.126826,
   1.67326,
   1.024444,
   1.438856,
   0.7202768,
   0.8974147,
   1.042827,
   0.4918315,
   0.4187834,
   1.168785,
   1.222506,
   1.107095,
   1.076768,
   1.458864,
   0.3107775,
   0.5505003,
   0.1530125,
   0.1270365,
   0.4574533,
   0.6057689,
   0.4950855,
   0.1468584,
   0.04791303,
   0.5616403,
   0.01676059,
   0.01622119,
   0.02447584};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,0,220);
   Graph_Graph3045->SetMinimum(-1.030183);
   Graph_Graph3045->SetMaximum(7.304258);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineStyle(0);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("2");
   
   Double_t _fx3046[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3046[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3,
   4,
   5,
   3,
   3,
   2,
   1,
   3,
   1,
   1,
   3,
   1,
   2,
   2,
   0,
   1,
   1,
   0,
   0,
   0,
   0,
   2,
   0,
   0,
   0,
   1,
   0,
   1,
   0,
   0,
   0,
   0};
   Double_t _felx3046[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3046[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.632727,
   1.914367,
   2.159724,
   1.632727,
   1.632727,
   1.29183,
   0.8272524,
   1.632727,
   0.8272524,
   0.8272524,
   1.632727,
   0.8272524,
   1.29183,
   1.29183,
   0,
   0.8272524,
   0.8272524,
   0,
   0,
   0,
   0,
   1.29183,
   0,
   0,
   0,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0};
   Double_t _fehx3046[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3046[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.918242,
   3.162815,
   3.382539,
   2.918242,
   2.918242,
   2.63791,
   2.29957,
   2.918242,
   2.29957,
   2.29957,
   2.918242,
   2.29957,
   2.63791,
   2.63791,
   1.147908,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,0,220);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(9.220793);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineStyle(0);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy184 = new TH1F("hframe_copy184","",1000,0,200);
   hframe_copy184->SetMinimum(0);
   hframe_copy184->SetMaximum(18.09017);
   hframe_copy184->SetDirectory(0);
   hframe_copy184->SetStats(0);
   hframe_copy184->SetLineStyle(0);
   hframe_copy184->SetMarkerStyle(20);
   hframe_copy184->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy184->GetXaxis()->SetNdivisions(506);
   hframe_copy184->GetXaxis()->SetLabelFont(42);
   hframe_copy184->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy184->GetXaxis()->SetLabelSize(0.05);
   hframe_copy184->GetXaxis()->SetTitleSize(0.06);
   hframe_copy184->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy184->GetXaxis()->SetTitleFont(42);
   hframe_copy184->GetYaxis()->SetTitle("Events");
   hframe_copy184->GetYaxis()->SetLabelFont(42);
   hframe_copy184->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy184->GetYaxis()->SetLabelSize(0.05);
   hframe_copy184->GetYaxis()->SetTitleSize(0.06);
   hframe_copy184->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy184->GetYaxis()->SetTitleFont(42);
   hframe_copy184->GetZaxis()->SetLabelFont(42);
   hframe_copy184->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy184->GetZaxis()->SetLabelSize(0.05);
   hframe_copy184->GetZaxis()->SetTitleSize(0.06);
   hframe_copy184->GetZaxis()->SetTitleFont(42);
   hframe_copy184->Draw("sameaxis");
   ccwh3l_top_13TeV_met->Modified();
   ccwh3l_top_13TeV_met->cd();
   ccwh3l_top_13TeV_met->SetSelected(ccwh3l_top_13TeV_met);
}
