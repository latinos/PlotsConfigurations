void c_wh3l_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt2/cc
//=========  (Fri Jun 24 14:14:43 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_pt2 = new TCanvas("ccwh3l_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_13TeV_pt2->Range(-88,-49.88158,524.5,333.8229);
   ccwh3l_13TeV_pt2->SetFillColor(0);
   ccwh3l_13TeV_pt2->SetBorderMode(0);
   ccwh3l_13TeV_pt2->SetBorderSize(2);
   ccwh3l_13TeV_pt2->SetTickx(1);
   ccwh3l_13TeV_pt2->SetTicky(1);
   ccwh3l_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe37 = new TH1F("hframe37","",1000,10,500);
   hframe37->SetMinimum(0);
   hframe37->SetMaximum(314.6376);
   hframe37->SetDirectory(0);
   hframe37->SetStats(0);
   hframe37->SetLineStyle(0);
   hframe37->SetMarkerStyle(20);
   hframe37->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe37->GetXaxis()->SetNdivisions(506);
   hframe37->GetXaxis()->SetLabelFont(42);
   hframe37->GetXaxis()->SetLabelOffset(0.007);
   hframe37->GetXaxis()->SetLabelSize(0.05);
   hframe37->GetXaxis()->SetTitleSize(0.06);
   hframe37->GetXaxis()->SetTitleOffset(0.9);
   hframe37->GetXaxis()->SetTitleFont(42);
   hframe37->GetYaxis()->SetTitle("Events");
   hframe37->GetYaxis()->SetLabelFont(42);
   hframe37->GetYaxis()->SetLabelOffset(0.007);
   hframe37->GetYaxis()->SetLabelSize(0.05);
   hframe37->GetYaxis()->SetTitleSize(0.06);
   hframe37->GetYaxis()->SetTitleOffset(1.25);
   hframe37->GetYaxis()->SetTitleFont(42);
   hframe37->GetZaxis()->SetLabelFont(42);
   hframe37->GetZaxis()->SetLabelOffset(0.007);
   hframe37->GetZaxis()->SetLabelSize(0.05);
   hframe37->GetZaxis()->SetTitleSize(0.06);
   hframe37->GetZaxis()->SetTitleFont(42);
   hframe37->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt2->SetName("thsBackground_grouped_wh3l_13TeV_pt2");
   thsBackground_grouped_wh3l_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt2_stack_9 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt2_stack_9","thsBackground_grouped_wh3l_13TeV_pt2",50,10,500);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->SetMinimum(-2.448007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->SetMaximum(132.1478);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt2_stack_9);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_pt238 = new TH1D("new_histo_group_DY_wh3l_13TeV_pt238","histo_DY",50,10,500);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(1,25.29102);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(2,85.97899);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(3,53.14935);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(4,35.58489);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(5,4.375112);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(6,-1.095296);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(7,1.010407);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(8,0.03894246);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(11,-0.733169);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinContent(12,0.5739203);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(1,4.738955);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(2,9.188557);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(3,8.285718);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(4,6.052736);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(5,1.917641);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(6,1.352711);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(7,0.7607133);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(8,0.03894246);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(11,0.733169);
   new_histo_group_DY_wh3l_13TeV_pt238->SetBinError(12,0.5739203);
   new_histo_group_DY_wh3l_13TeV_pt238->SetEntries(546);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_pt238->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_pt238->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_pt238->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_pt238->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt238->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_pt238->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt238->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_pt238->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_DY_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_pt239 = new TH1D("new_histo_group_top_wh3l_13TeV_pt239","histo_top",50,10,500);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(1,0.5423873);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(2,1.72484);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(3,2.35177);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(4,1.171346);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(5,0.7979669);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(6,0.4042142);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(7,0.2771111);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(8,0.3769617);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(9,0.2320058);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(10,0.04812793);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(11,0.03540132);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(12,0.1321224);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(13,0.04704189);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinContent(20,0.0243262);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(1,0.1084561);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(2,0.2202102);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(3,0.2690331);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(4,0.2129254);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(5,0.1676777);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(6,0.09536202);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(7,0.07679704);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(8,0.1194632);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(9,0.0711734);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(10,0.03406699);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(11,0.02516801);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(12,0.109627);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(13,0.03377834);
   new_histo_group_top_wh3l_13TeV_pt239->SetBinError(20,0.0243262);
   new_histo_group_top_wh3l_13TeV_pt239->SetEntries(377);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_pt239->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_pt239->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_pt239->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_pt239->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt239->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_pt239->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt239->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_pt239->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt239->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_top_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt240 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt240","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinContent(1,0.01398351);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinContent(2,0.08447827);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinContent(3,0.07451401);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinContent(4,0.05146799);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinContent(5,0.031895);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinContent(6,0.03332101);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinContent(7,0.002526849);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinContent(11,0.01308702);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinError(1,0.01398351);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinError(2,0.03570437);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinError(3,0.03112588);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinError(4,0.0264111);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinError(5,0.02267914);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinError(6,0.0236394);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinError(7,0.002526849);
   new_histo_group_WW_wh3l_13TeV_pt240->SetBinError(11,0.01308702);
   new_histo_group_WW_wh3l_13TeV_pt240->SetEntries(26);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt240->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt240->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt240->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt240->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt240->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt240->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt240->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt240->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt240->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt240->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt240->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt240->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt240->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt240->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt240->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_WW_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt241 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt241","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(1,0.004857765);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(2,0.0203504);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(3,0.04718056);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(4,0.05162209);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(5,0.03425254);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(6,0.02400736);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(7,0.01648923);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(8,0.01099099);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(9,0.003838598);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(10,0.005604373);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(11,0.004855032);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(12,0.006377072);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(13,0.00265398);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(14,0.001956032);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(15,4.554705e-05);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(16,0.0005201241);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(17,0.0004213774);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(22,0.0007300887);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(23,0.001262324);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(24,0.001077701);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(25,0.0005111804);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(30,0.0002827117);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(36,0.0004447767);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinContent(37,0.000609602);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(1,0.001746346);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(2,0.003992187);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(3,0.005492732);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(4,0.005911835);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(5,0.004921687);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(6,0.004320432);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(7,0.003361009);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(8,0.002580945);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(9,0.00179952);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(10,0.001834094);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(11,0.001863076);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(12,0.001958283);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(13,0.001341027);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(14,0.001448834);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(15,0.0009399526);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(16,0.001167275);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(17,0.0004213774);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(22,0.0007300887);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(23,0.0008927936);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(24,0.0007864147);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(25,0.0005111804);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(30,0.0002827117);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(36,0.0004447767);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetBinError(37,0.000609602);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetEntries(478);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt241->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt241->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt241->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt241->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_VVV_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_pt242 = new TH1D("new_histo_group_VZ_wh3l_13TeV_pt242","histo_VZ",50,10,500);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(1,10.7115);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(2,35.43503);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(3,69.8859);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(4,69.77576);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(5,36.49356);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(6,21.11018);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(7,12.21957);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(8,6.643755);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(9,4.896176);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(10,3.032744);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(11,2.069453);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(12,1.536119);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(13,1.089115);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(14,0.8970336);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(15,0.7003818);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(16,0.4405654);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(17,0.3217836);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(18,0.2440122);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(19,0.30545);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(20,0.2587696);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(21,0.1329264);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(22,0.1212131);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(23,0.05022165);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(24,0.1148896);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(25,0.09645058);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(26,0.02862545);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(27,0.1973055);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(28,0.024863);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(29,0.03688624);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(30,0.03801164);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(31,0.01321027);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(32,0.006475086);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(33,0.02699568);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(34,0.03538598);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(35,0.01049276);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(36,0.0157297);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(37,0.005323014);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(38,0.002571031);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(40,0.009286404);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(43,0.005775807);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(45,0.005543554);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(46,0.00581399);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(48,0.006042653);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(49,0.002648994);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(50,0.00584366);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinContent(51,0.007436867);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(1,0.308819);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(2,0.6322292);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(3,0.9077479);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(4,0.9307743);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(5,0.7236226);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(6,0.5759778);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(7,0.4499872);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(8,0.3143817);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(9,0.2879811);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(10,0.2244583);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(11,0.1861691);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(12,0.161334);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(13,0.1389241);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(14,0.1273337);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(15,0.104597);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(16,0.08735868);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(17,0.05333184);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(18,0.06864178);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(19,0.08005985);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(20,0.07936967);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(21,0.04604319);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(22,0.04105428);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(23,0.01568338);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(24,0.04177571);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(25,0.04988853);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(26,0.01186523);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(27,0.08553917);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(28,0.01163012);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(29,0.01428202);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(30,0.01452597);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(31,0.008047754);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(32,0.006475086);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(33,0.01274954);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(34,0.03538598);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(35,0.007485218);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(36,0.009294337);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(37,0.005323014);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(38,0.002571031);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(40,0.006707737);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(43,0.005775807);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(45,0.005543554);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(46,0.00581399);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(48,0.006042653);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(49,0.002648994);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(50,0.00584366);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetBinError(51,0.005969534);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetEntries(46249);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_pt242->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_pt242->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_pt242->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt242->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_VZ_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt243 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt243","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(1,0.1158414);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(2,0.3921122);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(3,0.3463487);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(4,0.2263486);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(5,0.1766534);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(6,0.07531324);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(7,0.05845002);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(8,0.04591759);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(9,0.02771498);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(10,0.02201668);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(11,0.009279246);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(12,0.002705369);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(13,0.00369989);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(14,0.001920427);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(15,0.004649775);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(16,0.002993026);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(17,0.0006185299);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(19,0.002667637);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(20,0.0001964016);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(21,-0.0003162469);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(22,0.002385771);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinContent(32,0.0003048081);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(1,0.01168187);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(2,0.02047697);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(3,0.01981535);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(4,0.01596117);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(5,0.01499844);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(6,0.008983669);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(7,0.008413533);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(8,0.007507802);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(9,0.005632814);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(10,0.005447104);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(11,0.003596604);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(12,0.000827147);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(13,0.001983191);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(14,0.001225323);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(15,0.002055071);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(16,0.001491003);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(17,0.000441458);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(19,0.001222333);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(20,0.0001964016);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(21,0.0003162469);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(22,0.001725108);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetBinError(32,0.0003048081);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt243->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt243->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_pt2,"");
   thsBackground_grouped_wh3l_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt2->SetName("thsSignal_grouped_wh3l_13TeV_pt2");
   thsSignal_grouped_wh3l_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt2_stack_10 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt2_stack_10","thsSignal_grouped_wh3l_13TeV_pt2",50,10,500);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->SetMinimum(-0.0006324938);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->SetMaximum(0.4332186);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt2_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt244 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt244","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(1,0.1158414);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(2,0.3921122);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(3,0.3463487);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(4,0.2263486);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(5,0.1766534);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(6,0.07531324);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(7,0.05845002);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(8,0.04591759);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(9,0.02771498);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(10,0.02201668);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(11,0.009279246);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(12,0.002705369);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(13,0.00369989);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(14,0.001920427);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(15,0.004649775);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(16,0.002993026);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(17,0.0006185299);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(19,0.002667637);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(20,0.0001964016);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(21,-0.0003162469);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(22,0.002385771);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinContent(32,0.0003048081);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(1,0.01168187);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(2,0.02047697);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(3,0.01981535);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(4,0.01596117);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(5,0.01499844);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(6,0.008983669);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(7,0.008413533);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(8,0.007507802);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(9,0.005632814);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(10,0.005447104);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(11,0.003596604);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(12,0.000827147);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(13,0.001983191);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(14,0.001225323);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(15,0.002055071);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(16,0.001491003);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(17,0.000441458);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(19,0.001222333);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(20,0.0001964016);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(21,0.0003162469);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(22,0.001725108);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetBinError(32,0.0003048081);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt244->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt244->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_pt2,"");
   thsSignal_grouped_wh3l_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3005[50] = {
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
   Double_t _fy3005[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3005[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
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
   Double_t _fely3005[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3005[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
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
   Double_t _fehy3005[50] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,549);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(1.262698);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_pt2","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_pt2","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_pt2","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt2","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_pt2","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_pt2","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_pt2","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt2","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy45 = new TH1F("hframe_copy45","",1000,10,500);
   hframe_copy45->SetMinimum(0);
   hframe_copy45->SetMaximum(314.6376);
   hframe_copy45->SetDirectory(0);
   hframe_copy45->SetStats(0);
   hframe_copy45->SetLineStyle(0);
   hframe_copy45->SetMarkerStyle(20);
   hframe_copy45->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy45->GetXaxis()->SetNdivisions(506);
   hframe_copy45->GetXaxis()->SetLabelFont(42);
   hframe_copy45->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetXaxis()->SetLabelSize(0.05);
   hframe_copy45->GetXaxis()->SetTitleSize(0.06);
   hframe_copy45->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy45->GetXaxis()->SetTitleFont(42);
   hframe_copy45->GetYaxis()->SetTitle("Events");
   hframe_copy45->GetYaxis()->SetLabelFont(42);
   hframe_copy45->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetYaxis()->SetLabelSize(0.05);
   hframe_copy45->GetYaxis()->SetTitleSize(0.06);
   hframe_copy45->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy45->GetYaxis()->SetTitleFont(42);
   hframe_copy45->GetZaxis()->SetLabelFont(42);
   hframe_copy45->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetZaxis()->SetLabelSize(0.05);
   hframe_copy45->GetZaxis()->SetTitleSize(0.06);
   hframe_copy45->GetZaxis()->SetTitleFont(42);
   hframe_copy45->Draw("sameaxis");
   ccwh3l_13TeV_pt2->Modified();
   ccwh3l_13TeV_pt2->cd();
   ccwh3l_13TeV_pt2->SetSelected(ccwh3l_13TeV_pt2);
}
