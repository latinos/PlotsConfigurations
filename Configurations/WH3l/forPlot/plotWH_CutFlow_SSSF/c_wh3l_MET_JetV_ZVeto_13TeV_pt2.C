void c_wh3l_MET_JetV_ZVeto_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt2/cc
//=========  (Sun Jul  3 01:22:13 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt2 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->Range(-28,-1.875508,209.5,12.55148);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe441 = new TH1F("hframe441","",1000,10,200);
   hframe441->SetMinimum(0);
   hframe441->SetMaximum(11.83013);
   hframe441->SetDirectory(0);
   hframe441->SetStats(0);
   hframe441->SetLineStyle(0);
   hframe441->SetMarkerStyle(20);
   hframe441->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe441->GetXaxis()->SetNdivisions(506);
   hframe441->GetXaxis()->SetLabelFont(42);
   hframe441->GetXaxis()->SetLabelOffset(0.007);
   hframe441->GetXaxis()->SetLabelSize(0.05);
   hframe441->GetXaxis()->SetTitleSize(0.06);
   hframe441->GetXaxis()->SetTitleOffset(0.9);
   hframe441->GetXaxis()->SetTitleFont(42);
   hframe441->GetYaxis()->SetTitle("Events");
   hframe441->GetYaxis()->SetLabelFont(42);
   hframe441->GetYaxis()->SetLabelOffset(0.007);
   hframe441->GetYaxis()->SetLabelSize(0.05);
   hframe441->GetYaxis()->SetTitleSize(0.06);
   hframe441->GetYaxis()->SetTitleOffset(1.25);
   hframe441->GetYaxis()->SetTitleFont(42);
   hframe441->GetZaxis()->SetLabelFont(42);
   hframe441->GetZaxis()->SetLabelOffset(0.007);
   hframe441->GetZaxis()->SetLabelSize(0.05);
   hframe441->GetZaxis()->SetTitleSize(0.06);
   hframe441->GetZaxis()->SetTitleFont(42);
   hframe441->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetMinimum(-0.4900019);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetMaximum(2.234425);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(2,0.5315295);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(3,-0.1796619);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(4,1.170661);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(5,0.1035289);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(6,0.9195533);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(7,-0.008101332);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(8,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(17,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(2,0.419973);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(3,0.31034);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(4,0.9573621);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(5,0.1780403);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(6,0.7001762);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(7,0.007561613);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(8,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(17,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinContent(4,0.02747647);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinError(4,0.01999703);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(2,0.009074716);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(3,0.01416231);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(4,0.02862185);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(5,0.00861415);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(6,0.01919155);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(7,0.01288863);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(8,0.01045722);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(9,0.001573326);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(10,0.004784018);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(11,0.002204823);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(12,0.002307349);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(13,0.004200559);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(14,0.007523579);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(15,-0.002830734);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(16,0.00256931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(17,0.00159006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(21,0.002516829);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(26,0.0004927442);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(2,0.005795888);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(3,0.007217735);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(4,0.007826326);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(5,0.006129967);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(6,0.006286301);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(7,0.005393714);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(8,0.004977353);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(9,0.004224576);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(10,0.003410929);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(11,0.002204823);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(12,0.002307349);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(13,0.00298072);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(14,0.00435944);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(15,0.002830734);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(16,0.00256931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(17,0.00159006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(21,0.002516829);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(26,0.0004927442);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinContent(4,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinError(4,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(2,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(7,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(2,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(7,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(1,0.05830142);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(2,0.1452895);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(3,0.1212991);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(4,0.126697);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(5,0.05546958);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(6,0.04986151);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(7,0.03273749);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(8,0.01609509);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(9,0.01114254);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(10,0.003593794);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(11,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(12,0.01036159);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(14,0.011118);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(15,0.006224889);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(16,0.004775882);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(17,0.005827953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(1,0.01806022);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(2,0.02823911);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(3,0.02475323);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(4,0.02615293);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(5,0.01690675);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(6,0.01617768);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(7,0.01346836);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(8,0.009524);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(9,0.007921916);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(10,0.003593794);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(11,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(12,0.007354595);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(14,0.00786224);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(15,0.006224889);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(16,0.004775882);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(17,0.005827953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(1,0.01264166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(2,0.04660306);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(3,0.05474935);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(4,0.04635016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(5,0.0492552);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(6,0.01452218);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(7,0.01024667);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(8,0.01083929);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(9,0.009321209);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(10,0.008611076);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(11,0.004717868);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(12,0.002483983);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(13,0.005483022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(17,0.001219663);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(19,0.001323184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(20,0.0001701444);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(26,0.0009009495);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(1,0.00373365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(2,0.006623917);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(3,0.007724997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(4,0.00767364);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(5,0.007338705);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(6,0.003685182);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(7,0.002802975);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(8,0.003517269);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(9,0.003205587);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(10,0.003790345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(11,0.002359426);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(12,0.001677719);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(13,0.002822296);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(17,0.001027735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(19,0.001323184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(20,0.0001701444);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(26,0.0005355324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetMaximum(0.06559807);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(1,0.01264166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(2,0.04660306);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(3,0.05474935);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(4,0.04635016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(5,0.0492552);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(6,0.01452218);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(7,0.01024667);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(8,0.01083929);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(9,0.009321209);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(10,0.008611076);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(11,0.004717868);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(12,0.002483983);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(13,0.005483022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(17,0.001219663);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(19,0.001323184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(20,0.0001701444);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(26,0.0009009495);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(1,0.00373365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(2,0.006623917);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(3,0.007724997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(4,0.00767364);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(5,0.007338705);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(6,0.003685182);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(7,0.002802975);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(8,0.003517269);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(9,0.003205587);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(10,0.003790345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(11,0.002359426);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(12,0.001677719);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(13,0.002822296);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(17,0.001027735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(19,0.001323184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(20,0.0001701444);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(26,0.0005355324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3089[25] = {
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
   Double_t _fy3089[25] = {
   0.05830142,
   0.7447314,
   -0.04420042,
   1.40573,
   0.1676127,
   0.9886063,
   0.07266162,
   0.3916682,
   0.01271586,
   0.008377812,
   0.007918155,
   0.01266893,
   0.004200559,
   0.01864157,
   0.003394155,
   0.007345191,
   -0.007284159,
   0,
   0,
   0,
   0.002516829,
   0,
   0,
   0,
   0};
   Double_t _felx3089[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3089[25] = {
   0.0185311,
   0.5456898,
   0.3483585,
   1.140189,
   0.1319356,
   0.7913043,
   0.06299917,
   0.4006861,
   0.009633504,
   0.008489615,
   0.008226695,
   0.009942209,
   0.005153742,
   0.01437921,
   0.009488133,
   0.007784031,
   0.02276825,
   0,
   0,
   0,
   0.003560456,
   0,
   0,
   0,
   0};
   Double_t _fehx3089[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3089[25] = {
   0.01851039,
   0.5456856,
   0.2212837,
   1.140178,
   0.2044988,
   0.7913043,
   0.06299484,
   0.4006858,
   0.01225382,
   0.008487654,
   0.008223959,
   0.009941494,
   0.005153767,
   0.01436157,
   0.009488134,
   0.007782211,
   0.02276736,
   0,
   0,
   0,
   0.003560123,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3089,_fy3089,_felx3089,_fehx3089,_fely3089,_fehy3089);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3089 = new TH1F("Graph_Graph3089","",100,0,219);
   Graph_Graph3089->SetMinimum(-0.6864055);
   Graph_Graph3089->SetMaximum(2.839754);
   Graph_Graph3089->SetDirectory(0);
   Graph_Graph3089->SetStats(0);
   Graph_Graph3089->SetLineStyle(0);
   Graph_Graph3089->SetMarkerStyle(20);
   Graph_Graph3089->GetXaxis()->SetLabelFont(42);
   Graph_Graph3089->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3089->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3089->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3089->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3089->GetXaxis()->SetTitleFont(42);
   Graph_Graph3089->GetYaxis()->SetLabelFont(42);
   Graph_Graph3089->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3089->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3089->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3089->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3089->GetYaxis()->SetTitleFont(42);
   Graph_Graph3089->GetZaxis()->SetLabelFont(42);
   Graph_Graph3089->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3089->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3089->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3089->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3089);
   
   grae->Draw("2");
   
   Double_t _fx3090[25] = {
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
   Double_t _fy3090[25] = {
   0,
   0,
   3,
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
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3090[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3090[25] = {
   0,
   0,
   1.632727,
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
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3090[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3090[25] = {
   1.147908,
   1.147908,
   2.918242,
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
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3090,_fy3090,_felx3090,_fehx3090,_fely3090,_fehy3090);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3090 = new TH1F("Graph_Graph3090","",100,0,219);
   Graph_Graph3090->SetMinimum(0);
   Graph_Graph3090->SetMaximum(6.510067);
   Graph_Graph3090->SetDirectory(0);
   Graph_Graph3090->SetStats(0);
   Graph_Graph3090->SetLineStyle(0);
   Graph_Graph3090->SetMarkerStyle(20);
   Graph_Graph3090->GetXaxis()->SetLabelFont(42);
   Graph_Graph3090->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3090->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3090->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3090->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3090->GetXaxis()->SetTitleFont(42);
   Graph_Graph3090->GetYaxis()->SetLabelFont(42);
   Graph_Graph3090->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3090->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3090->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3090->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3090->GetYaxis()->SetTitleFont(42);
   Graph_Graph3090->GetZaxis()->SetLabelFont(42);
   Graph_Graph3090->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3090->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3090->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3090->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3090);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy450 = new TH1F("hframe_copy450","",1000,10,200);
   hframe_copy450->SetMinimum(0);
   hframe_copy450->SetMaximum(11.83013);
   hframe_copy450->SetDirectory(0);
   hframe_copy450->SetStats(0);
   hframe_copy450->SetLineStyle(0);
   hframe_copy450->SetMarkerStyle(20);
   hframe_copy450->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy450->GetXaxis()->SetNdivisions(506);
   hframe_copy450->GetXaxis()->SetLabelFont(42);
   hframe_copy450->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy450->GetXaxis()->SetLabelSize(0.05);
   hframe_copy450->GetXaxis()->SetTitleSize(0.06);
   hframe_copy450->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy450->GetXaxis()->SetTitleFont(42);
   hframe_copy450->GetYaxis()->SetTitle("Events");
   hframe_copy450->GetYaxis()->SetLabelFont(42);
   hframe_copy450->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy450->GetYaxis()->SetLabelSize(0.05);
   hframe_copy450->GetYaxis()->SetTitleSize(0.06);
   hframe_copy450->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy450->GetYaxis()->SetTitleFont(42);
   hframe_copy450->GetZaxis()->SetLabelFont(42);
   hframe_copy450->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy450->GetZaxis()->SetLabelSize(0.05);
   hframe_copy450->GetZaxis()->SetTitleSize(0.06);
   hframe_copy450->GetZaxis()->SetTitleFont(42);
   hframe_copy450->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_pt2);
}
