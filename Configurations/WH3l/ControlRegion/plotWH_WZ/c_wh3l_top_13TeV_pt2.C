void c_wh3l_top_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt2/cc
//=========  (Tue Jun 28 02:22:53 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt2 = new TCanvas("ccwh3l_top_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt2->Range(-88,-5.786353,524.5,38.72406);
   ccwh3l_top_13TeV_pt2->SetFillColor(0);
   ccwh3l_top_13TeV_pt2->SetBorderMode(0);
   ccwh3l_top_13TeV_pt2->SetBorderSize(2);
   ccwh3l_top_13TeV_pt2->SetTickx(1);
   ccwh3l_top_13TeV_pt2->SetTicky(1);
   ccwh3l_top_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_top_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_top_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe161 = new TH1F("hframe161","",1000,10,500);
   hframe161->SetMinimum(0);
   hframe161->SetMaximum(36.49854);
   hframe161->SetDirectory(0);
   hframe161->SetStats(0);
   hframe161->SetLineStyle(0);
   hframe161->SetMarkerStyle(20);
   hframe161->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe161->GetXaxis()->SetNdivisions(506);
   hframe161->GetXaxis()->SetLabelFont(42);
   hframe161->GetXaxis()->SetLabelOffset(0.007);
   hframe161->GetXaxis()->SetLabelSize(0.05);
   hframe161->GetXaxis()->SetTitleSize(0.06);
   hframe161->GetXaxis()->SetTitleOffset(0.9);
   hframe161->GetXaxis()->SetTitleFont(42);
   hframe161->GetYaxis()->SetTitle("Events");
   hframe161->GetYaxis()->SetLabelFont(42);
   hframe161->GetYaxis()->SetLabelOffset(0.007);
   hframe161->GetYaxis()->SetLabelSize(0.05);
   hframe161->GetYaxis()->SetTitleSize(0.06);
   hframe161->GetYaxis()->SetTitleOffset(1.25);
   hframe161->GetYaxis()->SetTitleFont(42);
   hframe161->GetZaxis()->SetLabelFont(42);
   hframe161->GetZaxis()->SetLabelOffset(0.007);
   hframe161->GetZaxis()->SetLabelSize(0.05);
   hframe161->GetZaxis()->SetTitleSize(0.06);
   hframe161->GetZaxis()->SetTitleFont(42);
   hframe161->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetName("thsBackground_grouped_wh3l_top_13TeV_pt2");
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33","thsBackground_grouped_wh3l_top_13TeV_pt2",50,10,500);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetMinimum(-0.2297009);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetMaximum(14.72493);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt2_stack_33);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt2162 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt2162","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(1,4.831845);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(2,11.34748);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(3,8.245144);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(4,8.305807);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(5,2.259341);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(6,2.658826);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(7,1.492322);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(8,0.9450397);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(9,0.5755545);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(10,0.120094);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(11,-0.03738869);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(14,0.07161654);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(16,0.1085946);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(27,0.01017037);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinContent(30,2.966947e-05);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(1,1.75484);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(2,2.676261);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(3,2.194396);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(4,1.934901);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(5,0.9334748);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(6,1.173852);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(7,0.643695);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(8,0.4417781);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(9,0.3458623);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(10,0.0884581);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(11,0.03738869);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(14,0.07161654);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(16,0.08024466);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(27,0.01017037);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetBinError(30,2.966947e-05);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetEntries(340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2162->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Fake_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt2163 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt2163","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(2,0.03290312);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(3,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(4,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(5,0.03780478);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(6,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(8,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(9,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(11,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinContent(13,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(2,0.02332429);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(3,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(4,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(5,0.02674989);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(6,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(8,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(9,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(11,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetBinError(13,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt2163->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2163->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_WW_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_pt2164 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_pt2164","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(1,0.001152704);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(2,0.0006321315);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(3,0.003651341);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(4,0.004157935);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(5,0.00415382);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(6,0.004931834);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(7,0.002504762);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(8,0.0002926199);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(9,0.00243494);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(10,0.00109611);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(11,0.0009821993);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(12,0.001115982);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(13,0.0007231124);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(14,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(15,0.0006685166);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(16,0.001122368);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(18,0.0006694431);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(20,0.0005374458);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(29,0.0001504978);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinContent(45,0.0001985917);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(1,0.0008170762);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(2,0.0006321315);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(3,0.00158356);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(4,0.001610076);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(5,0.001609442);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(6,0.001717045);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(7,0.001496792);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(8,0.0002926199);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(9,0.001242491);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(10,0.0007917949);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(11,0.0006981358);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(12,0.0007891231);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(13,0.0005803797);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(14,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(15,0.0006685166);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(16,0.0008208361);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(18,0.0006694431);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(20,0.0005374458);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(29,0.0001504978);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetBinError(45,0.0001985917);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetEntries(61);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2164->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_VVV_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt2165 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt2165","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(1,0.1580316);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(2,0.853355);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(3,0.6549119);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(4,0.204107);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(5,0.3567709);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(6,-0.1148504);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(7,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(10,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinContent(15,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(1,0.1258384);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(2,0.3608601);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(3,0.3721833);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(4,0.1987981);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(5,0.1856842);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(6,0.1148504);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(7,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(10,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetBinError(15,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetEntries(44);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2165->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Vg_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt2166 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt2166","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(1,0.0507196);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(2,0.1847596);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(3,0.1554435);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(4,0.1274601);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(5,0.1310504);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(6,0.06590979);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(7,0.0901437);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(8,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(9,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(10,0.1080331);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(14,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinContent(18,0.05143084);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(1,0.0507196);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(2,0.08558146);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(3,0.078451);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(4,0.07412588);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(5,0.07576109);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(6,0.05010457);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(7,0.063789);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(8,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(9,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(10,0.06521566);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(14,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetBinError(18,0.05143084);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetEntries(28);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2166->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt2167 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt2167","histo_ZZ",50,10,500);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(1,0.0507196);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(2,0.1847596);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(3,0.1554435);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(4,0.1274601);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(5,0.1310504);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(6,0.06590979);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(7,0.0901437);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(8,0.02044833);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(9,0.04314121);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(10,0.1080331);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(14,0.04545766);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinContent(18,0.05143084);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(1,0.0507196);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(2,0.08558146);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(3,0.078451);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(4,0.07412588);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(5,0.07576109);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(6,0.05010457);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(7,0.063789);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(8,0.02044833);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(9,0.04314121);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(10,0.06521566);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(14,0.04545766);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetBinError(18,0.05143084);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetEntries(28);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2167->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_WZ_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt2168 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt2168","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(1,0.02693258);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(2,0.08801689);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(3,0.09090298);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(4,0.07928247);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(5,0.06388927);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(6,0.03938568);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(7,0.01780225);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(8,0.01766071);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(9,0.01221992);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(10,0.006978803);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(11,0.002086559);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(12,0.004561894);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(13,0.002385343);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(14,0.0006606519);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(15,0.0027539);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(16,0.002593586);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(18,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(23,0.001596492);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinContent(29,0.0001531101);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(1,0.005578548);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(2,0.009531784);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(3,0.009578657);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(4,0.008991424);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(5,0.007999774);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(6,0.006372633);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(7,0.00369322);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(8,0.00436961);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(9,0.003072214);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(10,0.002235312);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(11,0.001094295);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(12,0.001831306);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(13,0.001073628);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(14,0.0005034192);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(15,0.001878666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(16,0.001791708);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(18,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(23,0.001596492);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetBinError(29,0.0001531101);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2168->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt2,"");
   thsBackground_grouped_wh3l_top_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetName("thsSignal_grouped_wh3l_top_13TeV_pt2");
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_top_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34","thsSignal_grouped_wh3l_top_13TeV_pt2",50,10,500);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetMaximum(0.1055057);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_pt2_stack_34);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt2169 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt2169","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(1,0.02693258);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(2,0.08801689);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(3,0.09090298);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(4,0.07928247);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(5,0.06388927);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(6,0.03938568);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(7,0.01780225);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(8,0.01766071);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(9,0.01221992);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(10,0.006978803);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(11,0.002086559);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(12,0.004561894);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(13,0.002385343);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(14,0.0006606519);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(15,0.0027539);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(16,0.002593586);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(18,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(23,0.001596492);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinContent(29,0.0001531101);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(1,0.005578548);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(2,0.009531784);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(3,0.009578657);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(4,0.008991424);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(5,0.007999774);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(6,0.006372633);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(7,0.00369322);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(8,0.00436961);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(9,0.003072214);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(10,0.002235312);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(11,0.001094295);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(12,0.001831306);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(13,0.001073628);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(14,0.0005034192);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(15,0.001878666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(16,0.001791708);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(18,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(23,0.001596492);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetBinError(29,0.0001531101);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2169->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt2,"");
   thsSignal_grouped_wh3l_top_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3033[50] = {
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
   Double_t _fy3033[50] = {
   5.787051,
   14.5114,
   10.59226,
   9.975793,
   3.767097,
   3.215264,
   2.13815,
   1.396127,
   0.9070617,
   0.5904069,
   0.1436818,
   0.1292598,
   0.1341911,
   0.2002106,
   0.1890791,
   0.1741514,
   0.05787021,
   0.1100573,
   0.03027769,
   0.05202063,
   0.03556547,
   0.01282268,
   0.004345311,
   0.009879242,
   0,
   0.00470128,
   0.02268948,
   0.01139881,
   0.01075792,
   0.00841809,
   0.002611107,
   0.006797433,
   0,
   0,
   0.003736489,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001985917,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3033[50] = {
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
   Double_t _fely3033[50] = {
   2.466019,
   4.709068,
   3.693244,
   3.398562,
   1.462637,
   1.622747,
   0.9739118,
   0.5969964,
   0.4748167,
   0.2633902,
   0.0867683,
   0.02711273,
   0.03953375,
   0.1397247,
   0.1206519,
   0.1043262,
   0.01788465,
   0.06986404,
   0.01214229,
   0.01720939,
   0.01339351,
   0.007707445,
   0.004345311,
   0.006987821,
   0,
   0.004701281,
   0.01928086,
   0.007320063,
   0.007653564,
   0.005986616,
   0.002611108,
   0.004807255,
   0,
   0,
   0.003736489,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.000198664,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3033[50] = {
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
   Double_t _fehy3033[50] = {
   2.466018,
   4.709069,
   3.693244,
   3.398561,
   1.462637,
   1.622747,
   0.9739115,
   0.5969964,
   0.4748167,
   0.2633902,
   0.0867683,
   0.02711273,
   0.03953374,
   0.1397247,
   0.1206519,
   0.1043262,
   0.01788465,
   0.06986404,
   0.01214229,
   0.01720939,
   0.0133935,
   0.007707446,
   0.004345311,
   0.006987821,
   0,
   0.004701281,
   0.01928086,
   0.007320064,
   0.007653563,
   0.005986616,
   0.002611108,
   0.004807256,
   0,
   0,
   0.003736489,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.000198664,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,549);
   Graph_Graph3033->SetMinimum(-1.922047);
   Graph_Graph3033->SetMaximum(21.14251);
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
   
   Double_t _fx3034[50] = {
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
   Double_t _fy3034[50] = {
   1,
   11,
   9,
   7,
   6,
   8,
   2,
   0,
   1,
   0,
   1,
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
   Double_t _felx3034[50] = {
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
   Double_t _fely3034[50] = {
   0.8272524,
   3.265636,
   2.943511,
   2.581513,
   2.379969,
   2.768432,
   1.29183,
   0,
   0.8272524,
   0,
   0.8272524,
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
   Double_t _fehx3034[50] = {
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
   Double_t _fehy3034[50] = {
   2.29957,
   4.416609,
   4.110286,
   3.770356,
   3.583713,
   3.94522,
   2.63791,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(50,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,549);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(16.95827);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt2","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy170 = new TH1F("hframe_copy170","",1000,10,500);
   hframe_copy170->SetMinimum(0);
   hframe_copy170->SetMaximum(36.49854);
   hframe_copy170->SetDirectory(0);
   hframe_copy170->SetStats(0);
   hframe_copy170->SetLineStyle(0);
   hframe_copy170->SetMarkerStyle(20);
   hframe_copy170->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy170->GetXaxis()->SetNdivisions(506);
   hframe_copy170->GetXaxis()->SetLabelFont(42);
   hframe_copy170->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetXaxis()->SetLabelSize(0.05);
   hframe_copy170->GetXaxis()->SetTitleSize(0.06);
   hframe_copy170->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy170->GetXaxis()->SetTitleFont(42);
   hframe_copy170->GetYaxis()->SetTitle("Events");
   hframe_copy170->GetYaxis()->SetLabelFont(42);
   hframe_copy170->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetYaxis()->SetLabelSize(0.05);
   hframe_copy170->GetYaxis()->SetTitleSize(0.06);
   hframe_copy170->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy170->GetYaxis()->SetTitleFont(42);
   hframe_copy170->GetZaxis()->SetLabelFont(42);
   hframe_copy170->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetZaxis()->SetLabelSize(0.05);
   hframe_copy170->GetZaxis()->SetTitleSize(0.06);
   hframe_copy170->GetZaxis()->SetTitleFont(42);
   hframe_copy170->Draw("sameaxis");
   ccwh3l_top_13TeV_pt2->Modified();
   ccwh3l_top_13TeV_pt2->cd();
   ccwh3l_top_13TeV_pt2->SetSelected(ccwh3l_top_13TeV_pt2);
}
