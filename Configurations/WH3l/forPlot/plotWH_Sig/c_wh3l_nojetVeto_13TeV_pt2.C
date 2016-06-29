void c_wh3l_nojetVeto_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_nojetVeto_13TeV_pt2/cc
//=========  (Wed Jun 29 01:34:03 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_nojetVeto_13TeV_pt2 = new TCanvas("ccwh3l_nojetVeto_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_nojetVeto_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_nojetVeto_13TeV_pt2->Range(-28,-7.237202,209.5,48.43359);
   ccwh3l_nojetVeto_13TeV_pt2->SetFillColor(0);
   ccwh3l_nojetVeto_13TeV_pt2->SetBorderMode(0);
   ccwh3l_nojetVeto_13TeV_pt2->SetBorderSize(2);
   ccwh3l_nojetVeto_13TeV_pt2->SetTickx(1);
   ccwh3l_nojetVeto_13TeV_pt2->SetTicky(1);
   ccwh3l_nojetVeto_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_nojetVeto_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_nojetVeto_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_nojetVeto_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_nojetVeto_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_nojetVeto_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_nojetVeto_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_nojetVeto_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe281 = new TH1F("hframe281","",1000,10,200);
   hframe281->SetMinimum(0);
   hframe281->SetMaximum(45.65005);
   hframe281->SetDirectory(0);
   hframe281->SetStats(0);
   hframe281->SetLineStyle(0);
   hframe281->SetMarkerStyle(20);
   hframe281->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe281->GetXaxis()->SetNdivisions(506);
   hframe281->GetXaxis()->SetLabelFont(42);
   hframe281->GetXaxis()->SetLabelOffset(0.007);
   hframe281->GetXaxis()->SetLabelSize(0.05);
   hframe281->GetXaxis()->SetTitleSize(0.06);
   hframe281->GetXaxis()->SetTitleOffset(0.9);
   hframe281->GetXaxis()->SetTitleFont(42);
   hframe281->GetYaxis()->SetTitle("Events");
   hframe281->GetYaxis()->SetLabelFont(42);
   hframe281->GetYaxis()->SetLabelOffset(0.007);
   hframe281->GetYaxis()->SetLabelSize(0.05);
   hframe281->GetYaxis()->SetTitleSize(0.06);
   hframe281->GetYaxis()->SetTitleOffset(1.25);
   hframe281->GetYaxis()->SetTitleFont(42);
   hframe281->GetZaxis()->SetLabelFont(42);
   hframe281->GetZaxis()->SetLabelOffset(0.007);
   hframe281->GetZaxis()->SetLabelSize(0.05);
   hframe281->GetZaxis()->SetTitleSize(0.06);
   hframe281->GetZaxis()->SetTitleFont(42);
   hframe281->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->SetName("thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2");
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57 = new TH1F("thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57","thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->SetMinimum(-0.07477737);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->SetMaximum(19.17302);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->SetDirectory(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->SetStats(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->SetLineStyle(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2_stack_57);
   
   
   TH1D *new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282 = new TH1D("new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(1,1.404712);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(2,7.89048);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(3,13.63775);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(4,7.597699);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(5,6.496586);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(6,3.545206);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(7,2.213811);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(8,1.756405);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(9,1.292407);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(10,0.9562347);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(11,0.4050875);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(12,0.838231);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(13,0.120094);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(14,-0.03738869);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(17,0.05691437);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(20,0.0378228);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(21,0.07077175);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(23,-0.004633672);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinContent(26,0.01020004);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(1,1.275787);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(2,2.300868);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(3,2.745314);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(4,2.154996);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(5,1.692184);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(6,1.442968);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(7,0.9582213);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(8,0.9272949);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(9,0.6303331);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(10,0.44192);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(11,0.3647555);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(12,0.4588438);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(13,0.0884581);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(14,0.03738869);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(17,0.07311007);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(20,0.0378228);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(21,0.07077175);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(23,0.004633672);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetBinError(26,0.01017042);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetEntries(435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetFillColor(ci);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->SetLineColor(ci);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2282->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->Add(new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283 = new TH1D("new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(2,0.04902722);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(4,0.01892279);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(5,0.03015944);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(6,0.03780478);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(8,0.03162812);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(11,0.01546857);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(12,0.01461809);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(14,0.01749081);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinContent(16,0.01305253);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(2,0.02835506);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(4,0.01514254);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(5,0.02136152);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(6,0.02674989);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(8,0.0223761);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(11,0.01546857);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(12,0.01461809);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(14,0.01749081);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetBinError(16,0.01305253);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetEntries(17);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetFillColor(ci);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->SetLineColor(ci);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2283->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->Add(new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284 = new TH1D("new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(2,0.002556075);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(3,0.00604368);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(4,0.001236239);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(5,0.003585454);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(6,0.004085529);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(7,0.007041094);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(8,0.004305932);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(9,0.002610679);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(10,0.0001540927);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(11,0.00218303);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(12,0.002280967);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(14,0.0009821993);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(15,0.0006729142);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(16,0.001115626);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(17,0.000167398);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(18,0.0018074);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(20,0.0006685166);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(21,0.001122368);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(25,0.0005374458);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinContent(26,0.0003490894);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(2,0.001290009);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(3,0.001956775);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(4,0.000874693);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(5,0.001533685);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(6,0.001649983);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(7,0.001973246);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(8,0.001836576);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(9,0.001245102);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(10,0.0001540927);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(11,0.001154512);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(12,0.001073202);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(14,0.0006981358);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(15,0.0006729142);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(16,0.0007888721);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(17,0.000167398);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(18,0.00106155);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(20,0.0006685166);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(21,0.0008208361);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(25,0.0005374458);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetBinError(26,0.0002491751);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetEntries(83);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetFillColor(ci);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->SetLineColor(ci);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2284->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->Add(new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285 = new TH1D("new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(1,0.03629372);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(2,1.937459);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(3,1.123267);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(4,0.2056708);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(5,0.3675253);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(6,0.1950669);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(7,0.02657535);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(8,0.1067996);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(12,0.1721764);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinContent(19,0.09785095);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(1,0.04823149);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(2,0.4406526);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(3,0.4625687);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(4,0.2150867);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(5,0.2050749);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(6,0.1424647);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(7,0.02657535);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(8,0.1067996);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(12,0.1249133);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetBinError(19,0.09785095);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetEntries(69);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetFillColor(ci);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->SetLineColor(ci);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2285->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->Add(new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286 = new TH1D("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(1,0.1042404);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(2,0.2139266);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(3,0.3441968);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(4,0.1644187);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(5,0.0476643);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(6,0.2264918);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(7,0.1308068);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(8,0.08860458);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(9,0.04681723);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(10,0.04901091);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(12,0.04314121);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(13,0.06262714);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(15,0.02088597);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinContent(18,0.04545766);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(1,0.06328484);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(2,0.09215633);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(3,0.11743);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(4,0.08234775);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(5,0.0476643);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(6,0.1015747);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(7,0.06804948);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(8,0.0626681);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(9,0.04681723);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(10,0.0351277);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(12,0.04314121);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(13,0.04681215);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(15,0.02088597);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetBinError(18,0.04545766);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetEntries(44);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2286->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287 = new TH1D("new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(1,0.8238432);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(2,3.366213);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(3,2.876397);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(4,2.183744);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(5,1.783514);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(6,1.41509);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(7,1.146405);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(8,0.7981757);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(9,0.5708665);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(10,0.6013614);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(11,0.3775249);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(12,0.4142246);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(13,0.2726079);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(14,0.2277479);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(15,0.1943828);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(16,0.1617656);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(17,0.1309333);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(18,0.1108457);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(19,0.1227334);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(20,0.08861121);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(21,0.05557254);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(22,0.0933174);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(23,0.06009183);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(24,0.06174181);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(25,0.05817184);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinContent(26,0.3668555);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(1,0.06584976);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(2,0.1360844);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(3,0.1251565);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(4,0.1089065);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(5,0.09899916);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(6,0.08784589);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(7,0.07886229);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(8,0.06554514);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(9,0.05533024);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(10,0.05738277);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(11,0.04463995);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(12,0.0467353);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(13,0.03811628);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(14,0.03542629);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(15,0.03237987);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(16,0.02977206);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(17,0.02740175);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(18,0.0235699);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(19,0.02531658);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(20,0.02201369);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(21,0.01717743);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(22,0.02252792);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(23,0.01870738);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(24,0.01815553);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(25,0.01756796);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetBinError(26,0.04357531);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetEntries(3754);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetFillColor(ci);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->SetLineColor(ci);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2287->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->Add(new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288 = new TH1D("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(1,0.03950361);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(2,0.1875782);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(3,0.2437737);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(4,0.1936141);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(5,0.1513417);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(6,0.1392962);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(7,0.07609926);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(8,0.05080043);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(9,0.04740973);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(10,0.04323804);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(11,0.02203347);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(12,0.0242983);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(13,0.01659412);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(14,0.005180741);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(15,0.003830293);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(16,0.00544139);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(17,0.005191216);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(18,0.001899331);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(19,0.004937533);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(20,0.003305236);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(21,0.003032392);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(23,0.000332881);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinContent(26,0.003979069);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(1,0.0074777);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(2,0.01456299);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(3,0.01634238);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(4,0.0145339);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(5,0.01269692);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(6,0.01273144);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(7,0.00918589);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(8,0.007284965);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(9,0.007187138);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(10,0.007630628);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(11,0.00452674);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(12,0.005138884);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(13,0.004451686);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(14,0.002536536);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(15,0.001525682);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(16,0.002201087);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(17,0.002183336);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(18,0.001221309);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(19,0.002554728);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(20,0.001497884);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(21,0.001954);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(23,0.000332881);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetBinError(26,0.002379603);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2288->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2,"");
   thsBackground_grouped_wh3l_nojetVeto_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2->SetName("thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2");
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58 = new TH1F("thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58","thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->SetMinimum(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->SetMaximum(0.2731219);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->SetDirectory(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->SetStats(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->SetLineStyle(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2_stack_58);
   
   
   TH1D *new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289 = new TH1D("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(1,0.03950361);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(2,0.1875782);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(3,0.2437737);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(4,0.1936141);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(5,0.1513417);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(6,0.1392962);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(7,0.07609926);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(8,0.05080043);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(9,0.04740973);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(10,0.04323804);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(11,0.02203347);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(12,0.0242983);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(13,0.01659412);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(14,0.005180741);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(15,0.003830293);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(16,0.00544139);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(17,0.005191216);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(18,0.001899331);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(19,0.004937533);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(20,0.003305236);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(21,0.003032392);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(23,0.000332881);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinContent(26,0.003979069);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(1,0.0074777);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(2,0.01456299);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(3,0.01634238);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(4,0.0145339);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(5,0.01269692);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(6,0.01273144);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(7,0.00918589);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(8,0.007284965);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(9,0.007187138);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(10,0.007630628);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(11,0.00452674);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(12,0.005138884);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(13,0.004451686);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(14,0.002536536);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(15,0.001525682);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(16,0.002201087);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(17,0.002183336);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(18,0.001221309);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(19,0.002554728);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(20,0.001497884);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(21,0.001954);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(23,0.000332881);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetBinError(26,0.002379603);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2289->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2,"");
   thsSignal_grouped_wh3l_nojetVeto_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3057[25] = {
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
   Double_t _fy3057[25] = {
   2.369089,
   13.45966,
   18.01624,
   10.17169,
   8.729035,
   5.423745,
   3.524639,
   2.785919,
   1.912701,
   1.606761,
   0.800264,
   1.484672,
   0.455329,
   0.2088322,
   0.2159417,
   0.1759337,
   0.1880151,
   0.1581108,
   0.2205843,
   0.1271025,
   0.1274667,
   0.0933174,
   0.05545815,
   0.06174181,
   0.05870929};
   Double_t _felx3057[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3057[25] = {
   1.525094,
   4.087666,
   5.905539,
   3.698,
   3.073245,
   2.189275,
   1.37349,
   1.336562,
   0.8621073,
   0.6309142,
   0.4491502,
   0.7494014,
   0.1790147,
   0.09229333,
   0.05444735,
   0.04405276,
   0.08695282,
   0.07042988,
   0.1235775,
   0.06206664,
   0.09218575,
   0.02275451,
   0.02362141,
   0.01838219,
   0.01822991};
   Double_t _fehx3057[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3057[25] = {
   1.536312,
   4.087157,
   5.905474,
   3.704347,
   3.073191,
   2.189236,
   1.373472,
   1.336547,
   0.8620993,
   0.6309075,
   0.4491186,
   0.7493759,
   0.1787307,
   0.09224923,
   0.05437109,
   0.04401438,
   0.1027498,
   0.07035139,
   0.1235941,
   0.06204534,
   0.09218806,
   0.02273908,
   0.02353146,
   0.01830155,
   0.01822937};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3057,_fy3057,_felx3057,_fehx3057,_fely3057,_fehy3057);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3057 = new TH1F("Graph_Graph3057","",100,0,219);
   Graph_Graph3057->SetMinimum(0);
   Graph_Graph3057->SetMaximum(26.31071);
   Graph_Graph3057->SetDirectory(0);
   Graph_Graph3057->SetStats(0);
   Graph_Graph3057->SetLineStyle(0);
   Graph_Graph3057->SetMarkerStyle(20);
   Graph_Graph3057->GetXaxis()->SetLabelFont(42);
   Graph_Graph3057->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3057->GetXaxis()->SetTitleFont(42);
   Graph_Graph3057->GetYaxis()->SetLabelFont(42);
   Graph_Graph3057->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3057->GetYaxis()->SetTitleFont(42);
   Graph_Graph3057->GetZaxis()->SetLabelFont(42);
   Graph_Graph3057->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3057);
   
   grae->Draw("2");
   
   Double_t _fx3058[25] = {
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
   Double_t _fy3058[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3058[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3058[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3058[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3058[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3058,_fy3058,_felx3058,_fehx3058,_fely3058,_fehy3058);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3058 = new TH1F("Graph_Graph3058","",100,0,219);
   Graph_Graph3058->SetMinimum(0);
   Graph_Graph3058->SetMaximum(1.262698);
   Graph_Graph3058->SetDirectory(0);
   Graph_Graph3058->SetStats(0);
   Graph_Graph3058->SetLineStyle(0);
   Graph_Graph3058->SetMarkerStyle(20);
   Graph_Graph3058->GetXaxis()->SetLabelFont(42);
   Graph_Graph3058->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3058->GetXaxis()->SetTitleFont(42);
   Graph_Graph3058->GetYaxis()->SetLabelFont(42);
   Graph_Graph3058->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3058->GetYaxis()->SetTitleFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3058);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nojetVeto_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_nojetVeto_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nojetVeto_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nojetVeto_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nojetVeto_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nojetVeto_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nojetVeto_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy290 = new TH1F("hframe_copy290","",1000,10,200);
   hframe_copy290->SetMinimum(0);
   hframe_copy290->SetMaximum(45.65005);
   hframe_copy290->SetDirectory(0);
   hframe_copy290->SetStats(0);
   hframe_copy290->SetLineStyle(0);
   hframe_copy290->SetMarkerStyle(20);
   hframe_copy290->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy290->GetXaxis()->SetNdivisions(506);
   hframe_copy290->GetXaxis()->SetLabelFont(42);
   hframe_copy290->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetXaxis()->SetLabelSize(0.05);
   hframe_copy290->GetXaxis()->SetTitleSize(0.06);
   hframe_copy290->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy290->GetXaxis()->SetTitleFont(42);
   hframe_copy290->GetYaxis()->SetTitle("Events");
   hframe_copy290->GetYaxis()->SetLabelFont(42);
   hframe_copy290->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetYaxis()->SetLabelSize(0.05);
   hframe_copy290->GetYaxis()->SetTitleSize(0.06);
   hframe_copy290->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy290->GetYaxis()->SetTitleFont(42);
   hframe_copy290->GetZaxis()->SetLabelFont(42);
   hframe_copy290->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetZaxis()->SetLabelSize(0.05);
   hframe_copy290->GetZaxis()->SetTitleSize(0.06);
   hframe_copy290->GetZaxis()->SetTitleFont(42);
   hframe_copy290->Draw("sameaxis");
   ccwh3l_nojetVeto_13TeV_pt2->Modified();
   ccwh3l_nojetVeto_13TeV_pt2->cd();
   ccwh3l_nojetVeto_13TeV_pt2->SetSelected(ccwh3l_nojetVeto_13TeV_pt2);
}
