void c_wh3l_top_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt2/cc
//=========  (Tue Jun 28 16:49:10 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt2 = new TCanvas("ccwh3l_top_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt2->Range(-28,-4.756097,209.5,31.82927);
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
   
   TH1F *hframe201 = new TH1F("hframe201","",1000,10,200);
   hframe201->SetMinimum(0);
   hframe201->SetMaximum(30);
   hframe201->SetDirectory(0);
   hframe201->SetStats(0);
   hframe201->SetLineStyle(0);
   hframe201->SetMarkerStyle(20);
   hframe201->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe201->GetXaxis()->SetNdivisions(506);
   hframe201->GetXaxis()->SetLabelFont(42);
   hframe201->GetXaxis()->SetLabelOffset(0.007);
   hframe201->GetXaxis()->SetLabelSize(0.05);
   hframe201->GetXaxis()->SetTitleSize(0.06);
   hframe201->GetXaxis()->SetTitleOffset(0.9);
   hframe201->GetXaxis()->SetTitleFont(42);
   hframe201->GetYaxis()->SetTitle("Events");
   hframe201->GetYaxis()->SetLabelFont(42);
   hframe201->GetYaxis()->SetLabelOffset(0.007);
   hframe201->GetYaxis()->SetLabelSize(0.05);
   hframe201->GetYaxis()->SetTitleSize(0.06);
   hframe201->GetYaxis()->SetTitleOffset(1.25);
   hframe201->GetYaxis()->SetTitleFont(42);
   hframe201->GetZaxis()->SetLabelFont(42);
   hframe201->GetZaxis()->SetLabelOffset(0.007);
   hframe201->GetZaxis()->SetLabelSize(0.05);
   hframe201->GetZaxis()->SetTitleSize(0.06);
   hframe201->GetZaxis()->SetTitleFont(42);
   hframe201->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetName("thsBackground_grouped_wh3l_top_13TeV_pt2");
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26","thsBackground_grouped_wh3l_top_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->SetMinimum(-0.08775089);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->SetMaximum(11.89329);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt2_stack_26);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt2202 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt2202","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(1,1.275971);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(2,6.549017);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(3,9.151488);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(4,6.201354);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(5,5.992556);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(6,2.271698);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(7,2.087063);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(8,1.076916);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(9,1.294057);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(10,0.9450397);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(11,0.04874358);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(12,0.5268109);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(13,0.120094);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(14,-0.03738869);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(17,0.07161654);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(20,0.0378228);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(21,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinContent(26,0.01020004);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(1,1.094999);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(2,2.132297);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(3,2.175451);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(4,1.822882);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(5,1.597414);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(6,1.114212);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(7,0.9485757);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(8,0.8051697);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(9,0.6303309);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(10,0.4417781);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(11,0.07788171);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(12,0.3369795);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(13,0.0884581);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(14,0.03738869);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(17,0.07161654);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(20,0.0378228);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(21,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetBinError(26,0.01017042);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2202->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Fake_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt2203 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt2203","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(2,0.03290312);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(4,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(5,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(6,0.03780478);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(8,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(11,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(12,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(14,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinContent(16,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(2,0.02332429);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(4,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(5,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(6,0.02674989);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(8,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(11,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(12,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(14,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetBinError(16,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt2203->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2203->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_WW_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_pt2204 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_pt2204","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(2,0.001152704);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(3,0.002916385);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(4,0.001236239);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(5,0.002951136);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(6,0.003401853);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(7,0.003504806);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(8,0.003232563);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(9,0.002061603);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(11,0.00218303);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(12,0.00164064);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(14,0.0009821993);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(16,0.001115626);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(17,0.000167398);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(20,0.0006685166);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(21,0.001122368);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(25,0.0005374458);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinContent(26,0.0003490894);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(2,0.0008170762);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(3,0.0014032);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(4,0.000874693);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(5,0.001396362);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(6,0.001501676);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(7,0.001338808);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(8,0.001664192);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(9,0.001117495);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(11,0.001154512);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(12,0.0009609642);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(14,0.0006981358);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(16,0.0007888721);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(17,0.000167398);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(20,0.0006685166);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(21,0.0008208361);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(25,0.0005374458);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetBinError(26,0.0002491751);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2204->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_VVV_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt2205 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt2205","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(1,-0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(2,0.3822979);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(3,0.3779786);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(4,0.1149633);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(5,0.1699419);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(6,0.1950669);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(7,0.02657535);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(8,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(12,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinContent(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(1,0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(2,0.1889865);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(3,0.2720745);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(4,0.2027142);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(5,0.1498782);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(6,0.1424647);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(7,0.02657535);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(8,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(12,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetBinError(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2205->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Vg_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt2206 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt2206","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(1,0.0507196);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(2,0.09319035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(3,0.1219885);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(4,0.1250242);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(5,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(6,0.1753687);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(7,0.06590979);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(8,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(9,0.04681723);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(10,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(12,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(13,0.06262714);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinContent(18,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(1,0.0507196);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(2,0.06629982);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(3,0.06207944);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(4,0.07231337);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(5,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(6,0.08777159);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(7,0.05010457);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(8,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(9,0.04681723);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(10,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(12,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(13,0.04681215);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetBinError(18,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2206->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt2207 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt2207","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(1,0.3130518);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(2,1.449646);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(3,1.313454);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(4,1.079858);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(5,0.9069638);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(6,0.7437623);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(7,0.5488224);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(8,0.369439);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(9,0.3249186);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(10,0.3254572);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(11,0.1945363);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(12,0.227635);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(13,0.1935492);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(14,0.1245054);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(15,0.1133932);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(16,0.09425646);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(17,0.05793895);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(18,0.05621181);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(19,0.07744278);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(20,0.04934057);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(21,0.02956037);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(22,0.03689207);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(23,0.03549644);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(24,0.02065475);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(25,0.04176364);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinContent(26,0.1577125);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(1,0.04081529);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(2,0.08896418);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(3,0.08460182);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(4,0.07691093);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(5,0.07070441);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(6,0.06376535);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(7,0.05468944);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(8,0.04443438);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(9,0.04183146);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(10,0.04239677);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(11,0.03181355);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(12,0.03439296);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(13,0.03237695);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(14,0.02694406);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(15,0.02482748);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(16,0.02249811);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(17,0.01836413);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(18,0.01638466);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(19,0.02035843);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(20,0.0161939);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(21,0.01242721);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(22,0.01442838);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(23,0.0145182);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(24,0.01049345);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(25,0.01478964);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetBinError(26,0.02809047);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2207->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_WZ_wh3l_top_13TeV_pt2,"");
   thsBackground_grouped_wh3l_top_13TeV_pt2->Draw("hist same");
   
   Double_t _fx3051[25] = {
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
   Double_t _fy3051[25] = {
   1.616607,
   8.508207,
   10.96782,
   7.526884,
   7.136028,
   3.427103,
   2.731875,
   1.616038,
   1.667854,
   1.290945,
   0.2609315,
   0.8801734,
   0.3762703,
   0.1055897,
   0.1133932,
   0.1084246,
   0.1297229,
   0.1024309,
   0.1752937,
   0.08783189,
   0.1014545,
   0.03689207,
   0.03549644,
   0.02065475,
   0.04230109};
   Double_t _felx3051[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3051[25] = {
   1.268791,
   3.180206,
   3.778207,
   2.799869,
   2.603406,
   1.589972,
   1.249482,
   1.067778,
   0.8180799,
   0.5788125,
   0.0982758,
   0.5209821,
   0.1714833,
   0.083282,
   0.02482772,
   0.03634157,
   0.09267754,
   0.06261656,
   0.118239,
   0.05585049,
   0.08666088,
   0.01442838,
   0.01451822,
   0.01049345,
   0.01533267};
   Double_t _fehx3051[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3051[25] = {
   1.268791,
   3.180204,
   3.778207,
   2.86604,
   2.603406,
   1.589971,
   1.249482,
   1.067778,
   0.8180797,
   0.5788126,
   0.1271632,
   0.520982,
   0.1714833,
   0.08328199,
   0.02482772,
   0.03634158,
   0.09267752,
   0.06261656,
   0.118239,
   0.05585048,
   0.08666088,
   0.01442839,
   0.01451822,
   0.01049345,
   0.01533266};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,219);
   Graph_Graph3051->SetMinimum(0);
   Graph_Graph3051->SetMaximum(16.21962);
   Graph_Graph3051->SetDirectory(0);
   Graph_Graph3051->SetStats(0);
   Graph_Graph3051->SetLineStyle(0);
   Graph_Graph3051->SetMarkerStyle(20);
   Graph_Graph3051->GetXaxis()->SetLabelFont(42);
   Graph_Graph3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3051->GetXaxis()->SetTitleFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3051->GetYaxis()->SetTitleFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3051);
   
   grae->Draw("2");
   
   Double_t _fx3052[25] = {
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
   Double_t _fy3052[25] = {
   1,
   9,
   3,
   7,
   3,
   5,
   5,
   6,
   1,
   0,
   1,
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
   0,
   0,
   0,
   0};
   Double_t _felx3052[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3052[25] = {
   0.8272524,
   2.943511,
   1.632727,
   2.581513,
   1.632727,
   2.159724,
   2.159724,
   2.379969,
   0.8272524,
   0,
   0.8272524,
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
   0,
   0,
   0,
   0};
   Double_t _fehx3052[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3052[25] = {
   2.29957,
   4.110286,
   2.918242,
   3.770356,
   2.918242,
   3.382539,
   3.382539,
   3.583713,
   2.29957,
   1.147908,
   2.29957,
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
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,219);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(14.42131);
   Graph_Graph3052->SetDirectory(0);
   Graph_Graph3052->SetStats(0);
   Graph_Graph3052->SetLineStyle(0);
   Graph_Graph3052->SetMarkerStyle(20);
   Graph_Graph3052->GetXaxis()->SetLabelFont(42);
   Graph_Graph3052->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3052->GetXaxis()->SetTitleFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3052->GetYaxis()->SetTitleFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3052);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   TH1F *hframe_copy208 = new TH1F("hframe_copy208","",1000,10,200);
   hframe_copy208->SetMinimum(0);
   hframe_copy208->SetMaximum(30);
   hframe_copy208->SetDirectory(0);
   hframe_copy208->SetStats(0);
   hframe_copy208->SetLineStyle(0);
   hframe_copy208->SetMarkerStyle(20);
   hframe_copy208->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy208->GetXaxis()->SetNdivisions(506);
   hframe_copy208->GetXaxis()->SetLabelFont(42);
   hframe_copy208->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy208->GetXaxis()->SetLabelSize(0.05);
   hframe_copy208->GetXaxis()->SetTitleSize(0.06);
   hframe_copy208->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy208->GetXaxis()->SetTitleFont(42);
   hframe_copy208->GetYaxis()->SetTitle("Events");
   hframe_copy208->GetYaxis()->SetLabelFont(42);
   hframe_copy208->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy208->GetYaxis()->SetLabelSize(0.05);
   hframe_copy208->GetYaxis()->SetTitleSize(0.06);
   hframe_copy208->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy208->GetYaxis()->SetTitleFont(42);
   hframe_copy208->GetZaxis()->SetLabelFont(42);
   hframe_copy208->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy208->GetZaxis()->SetLabelSize(0.05);
   hframe_copy208->GetZaxis()->SetTitleSize(0.06);
   hframe_copy208->GetZaxis()->SetTitleFont(42);
   hframe_copy208->Draw("sameaxis");
   ccwh3l_top_13TeV_pt2->Modified();
   ccwh3l_top_13TeV_pt2->cd();
   ccwh3l_top_13TeV_pt2->SetSelected(ccwh3l_top_13TeV_pt2);
}
