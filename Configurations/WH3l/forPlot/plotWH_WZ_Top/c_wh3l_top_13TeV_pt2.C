void c_wh3l_top_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt2/cc
//=========  (Sat Jul  2 20:54:38 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt2 = new TCanvas("ccwh3l_top_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt2->Range(-28,-4.34367,209.5,29.06917);
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
   
   TH1F *hframe181 = new TH1F("hframe181","",1000,10,200);
   hframe181->SetMinimum(0);
   hframe181->SetMaximum(27.39853);
   hframe181->SetDirectory(0);
   hframe181->SetStats(0);
   hframe181->SetLineStyle(0);
   hframe181->SetMarkerStyle(20);
   hframe181->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe181->GetXaxis()->SetNdivisions(506);
   hframe181->GetXaxis()->SetLabelFont(42);
   hframe181->GetXaxis()->SetLabelOffset(0.007);
   hframe181->GetXaxis()->SetLabelSize(0.05);
   hframe181->GetXaxis()->SetTitleSize(0.06);
   hframe181->GetXaxis()->SetTitleOffset(0.9);
   hframe181->GetXaxis()->SetTitleFont(42);
   hframe181->GetYaxis()->SetTitle("Events");
   hframe181->GetYaxis()->SetLabelFont(42);
   hframe181->GetYaxis()->SetLabelOffset(0.007);
   hframe181->GetYaxis()->SetLabelSize(0.05);
   hframe181->GetYaxis()->SetTitleSize(0.06);
   hframe181->GetYaxis()->SetTitleOffset(1.25);
   hframe181->GetYaxis()->SetTitleFont(42);
   hframe181->GetZaxis()->SetLabelFont(42);
   hframe181->GetZaxis()->SetLabelOffset(0.007);
   hframe181->GetZaxis()->SetLabelSize(0.05);
   hframe181->GetZaxis()->SetTitleSize(0.06);
   hframe181->GetZaxis()->SetTitleFont(42);
   hframe181->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetName("thsBackground_grouped_wh3l_top_13TeV_pt2");
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37","thsBackground_grouped_wh3l_top_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->SetMinimum(-0.08775089);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->SetMaximum(11.89329);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt2_stack_37);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt2182 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt2182","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(1,1.275971);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(2,6.549017);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(3,9.151488);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(4,6.201354);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(5,5.992556);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(6,2.271698);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(7,2.087063);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(8,1.076916);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(9,1.294057);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(10,0.9450397);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(11,0.04874358);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(12,0.5268109);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(13,0.120094);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(14,-0.03738869);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(17,0.07161654);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(20,0.0378228);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(21,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinContent(26,0.01020004);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(1,1.094999);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(2,2.132297);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(3,2.175451);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(4,1.822882);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(5,1.597414);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(6,1.114212);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(7,0.9485757);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(8,0.8051697);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(9,0.6303309);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(10,0.4417781);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(11,0.07788171);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(12,0.3369795);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(13,0.0884581);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(14,0.03738869);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(17,0.07161654);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(20,0.0378228);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(21,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetBinError(26,0.01017042);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt2182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Fake_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt2183 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt2183","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(2,0.03290312);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(4,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(5,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(6,0.03780478);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(8,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(11,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(12,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(14,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinContent(16,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(2,0.02332429);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(4,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(5,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(6,0.02674989);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(8,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(11,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(12,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(14,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetBinError(16,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt2183->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt2183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_WW_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_pt2184 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_pt2184","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(2,0.02952641);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(3,0.0628059);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(4,0.05884348);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(5,0.06049611);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(6,0.03342126);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(7,0.03619797);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(8,0.04529531);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(9,0.03851819);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(10,0.01340449);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(11,0.02877405);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(12,0.01474212);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(13,0.01500375);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(14,0.01815354);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(15,0.01081877);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(16,0.01541266);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(17,0.01411624);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(18,0.0117225);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(19,0.01345245);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(20,0.001124459);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(21,0.01280454);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(22,0.002474109);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(23,0.004241291);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(24,0.004986157);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinContent(26,0.02832373);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(2,0.009608671);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(3,0.01279306);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(4,0.0119513);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(5,0.01287817);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(6,0.00849767);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(7,0.009812134);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(8,0.01118381);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(9,0.009520309);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(10,0.007812806);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(11,0.007770685);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(12,0.006265469);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(13,0.005734415);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(14,0.006054282);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(15,0.004964307);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(16,0.005767781);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(17,0.006076865);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(18,0.005284112);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(19,0.005467083);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(20,0.001124459);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(21,0.005341629);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(22,0.002474109);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(23,0.003018025);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(24,0.003533734);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetBinError(26,0.007894336);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetEntries(364);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt2184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_VVV_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt2185 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt2185","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(1,-0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(2,0.3822979);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(3,0.2559279);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(4,0.1149633);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(5,0.1699419);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(6,0.1950669);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(7,0.02657535);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(8,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(12,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinContent(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(1,0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(2,0.1889865);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(3,0.2431629);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(4,0.2027142);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(5,0.1498782);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(6,0.1424647);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(7,0.02657535);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(8,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(12,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetBinError(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt2185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Vg_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt2186 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt2186","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(1,0.0507196);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(2,0.09319035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(3,0.1219885);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(4,0.1250242);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(5,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(6,0.09056495);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(8,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(10,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(13,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinContent(18,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(1,0.0507196);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(2,0.06629982);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(3,0.06207944);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(4,0.07231337);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(5,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(6,0.0640536);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(8,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(10,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(13,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetBinError(18,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt2186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt2187 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt2187","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(1,0.3130518);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(2,1.449646);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(3,1.307755);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(4,1.076074);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(5,0.9069638);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(6,0.7437623);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(7,0.5488224);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(8,0.369439);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(9,0.3249186);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(10,0.3198793);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(11,0.1945363);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(12,0.227635);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(13,0.1935492);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(14,0.1245054);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(15,0.1133932);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(16,0.09425646);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(17,0.05793895);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(18,0.05621181);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(19,0.07744278);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(20,0.04934057);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(21,0.02956037);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(22,0.03689207);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(23,0.03549644);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(24,0.02065475);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(25,0.04176364);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinContent(26,0.1543736);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(1,0.04081529);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(2,0.08896418);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(3,0.08440971);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(4,0.07681783);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(5,0.07070441);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(6,0.06376535);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(7,0.05468944);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(8,0.04443438);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(9,0.04183146);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(10,0.04202825);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(11,0.03181355);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(12,0.03439296);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(13,0.03237695);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(14,0.02694406);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(15,0.02482748);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(16,0.02249811);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(17,0.01836413);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(18,0.01638466);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(19,0.02035843);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(20,0.0161939);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(21,0.01242721);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(22,0.01442838);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(23,0.0145182);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(24,0.01049345);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(25,0.01478964);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetBinError(26,0.02789132);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt2187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_WZ_wh3l_top_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt2188 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt2188","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(1,0.0119678);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(2,0.06161654);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(3,0.05944746);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(4,0.06198578);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(5,0.05412487);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(6,0.05460613);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(7,0.02754819);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(8,0.01665685);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(9,0.0121373);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(10,0.01019774);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(11,0.00959493);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(12,0.007162079);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(13,0.002885127);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(14,0.001941609);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(15,0.002762479);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(16,0.001336293);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(17,0.002366651);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(18,0.0001972938);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(19,0.0027539);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(20,0.0008784106);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(21,0.001715176);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(23,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinContent(26,0.001749602);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(1,0.003956338);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(2,0.008258979);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(3,0.007490433);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(4,0.007764987);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(5,0.007335836);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(6,0.007478731);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(7,0.005511711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(8,0.003659888);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(9,0.00331193);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(10,0.003289461);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(11,0.002895086);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(12,0.002515249);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(13,0.00136489);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(14,0.001084653);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(15,0.001397741);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(16,0.001088815);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(17,0.001065367);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(18,0.0001967997);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(19,0.001878666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(20,0.0005180628);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(21,0.001715176);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(23,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetBinError(26,0.001603817);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt2,"");
   thsBackground_grouped_wh3l_top_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetName("thsSignal_grouped_wh3l_top_13TeV_pt2");
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_top_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38","thsSignal_grouped_wh3l_top_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->SetMaximum(0.0733693);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_pt2_stack_38);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt2189 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt2189","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(1,0.0119678);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(2,0.06161654);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(3,0.05944746);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(4,0.06198578);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(5,0.05412487);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(6,0.05460613);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(7,0.02754819);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(8,0.01665685);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(9,0.0121373);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(10,0.01019774);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(11,0.00959493);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(12,0.007162079);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(13,0.002885127);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(14,0.001941609);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(15,0.002762479);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(16,0.001336293);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(17,0.002366651);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(18,0.0001972938);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(19,0.0027539);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(20,0.0008784106);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(21,0.001715176);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(23,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinContent(26,0.001749602);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(1,0.003956338);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(2,0.008258979);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(3,0.007490433);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(4,0.007764987);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(5,0.007335836);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(6,0.007478731);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(7,0.005511711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(8,0.003659888);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(9,0.00331193);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(10,0.003289461);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(11,0.002895086);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(12,0.002515249);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(13,0.00136489);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(14,0.001084653);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(15,0.001397741);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(16,0.001088815);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(17,0.001065367);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(18,0.0001967997);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(19,0.001878666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(20,0.0005180628);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(21,0.001715176);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(23,0.000332881);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetBinError(26,0.001603817);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt2189->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt2,"");
   thsSignal_grouped_wh3l_top_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3037[25] = {
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
   Double_t _fy3037[25] = {
   1.616607,
   8.536581,
   10.89997,
   7.580708,
   7.193573,
   3.372319,
   2.698659,
   1.658101,
   1.657494,
   1.298772,
   0.2875226,
   0.8501337,
   0.3706912,
   0.122761,
   0.1242119,
   0.1227216,
   0.1436717,
   0.113392,
   0.1887462,
   0.08828783,
   0.1131367,
   0.03936618,
   0.03973773,
   0.02564091,
   0.04176364};
   Double_t _felx3037[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3037[25] = {
   1.289719,
   3.400427,
   4.112615,
   3.023562,
   2.827128,
   1.627684,
   1.271125,
   1.095125,
   0.8193693,
   0.6098307,
   0.108883,
   0.494544,
   0.1748981,
   0.09071233,
   0.03207773,
   0.04411621,
   0.1001688,
   0.0683528,
   0.1247382,
   0.05677314,
   0.09270763,
   0.01711232,
   0.01813465,
   0.01493257,
   0.01484482};
   Double_t _fehx3037[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3037[25] = {
   1.289713,
   3.40038,
   4.112664,
   3.085229,
   2.827073,
   1.627665,
   1.271098,
   1.095147,
   0.819298,
   0.6098254,
   0.1367985,
   0.4945416,
   0.1746459,
   0.09069091,
   0.03192902,
   0.04405487,
   0.1004185,
   0.06823765,
   0.1247156,
   0.05676062,
   0.09270284,
   0.01710661,
   0.01811639,
   0.01490246,
   0.01484486};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,219);
   Graph_Graph3037->SetMinimum(0);
   Graph_Graph3037->SetMaximum(16.51282);
   Graph_Graph3037->SetDirectory(0);
   Graph_Graph3037->SetStats(0);
   Graph_Graph3037->SetLineStyle(0);
   Graph_Graph3037->SetMarkerStyle(20);
   Graph_Graph3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3037);
   
   grae->Draw("2");
   
   Double_t _fx3038[25] = {
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
   Double_t _fy3038[25] = {
   1,
   8,
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
   Double_t _felx3038[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3038[25] = {
   0.8272524,
   2.768432,
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
   Double_t _fehx3038[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3038[25] = {
   2.29957,
   3.94522,
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
   grae = new TGraphAsymmErrors(25,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,219);
   Graph_Graph3038->SetMinimum(0);
   Graph_Graph3038->SetMaximum(13.13974);
   Graph_Graph3038->SetDirectory(0);
   Graph_Graph3038->SetStats(0);
   Graph_Graph3038->SetLineStyle(0);
   Graph_Graph3038->SetMarkerStyle(20);
   Graph_Graph3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph3038->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3038);
   
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
   
   TH1F *hframe_copy190 = new TH1F("hframe_copy190","",1000,10,200);
   hframe_copy190->SetMinimum(0);
   hframe_copy190->SetMaximum(27.39853);
   hframe_copy190->SetDirectory(0);
   hframe_copy190->SetStats(0);
   hframe_copy190->SetLineStyle(0);
   hframe_copy190->SetMarkerStyle(20);
   hframe_copy190->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy190->GetXaxis()->SetNdivisions(506);
   hframe_copy190->GetXaxis()->SetLabelFont(42);
   hframe_copy190->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetXaxis()->SetLabelSize(0.05);
   hframe_copy190->GetXaxis()->SetTitleSize(0.06);
   hframe_copy190->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy190->GetXaxis()->SetTitleFont(42);
   hframe_copy190->GetYaxis()->SetTitle("Events");
   hframe_copy190->GetYaxis()->SetLabelFont(42);
   hframe_copy190->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetYaxis()->SetLabelSize(0.05);
   hframe_copy190->GetYaxis()->SetTitleSize(0.06);
   hframe_copy190->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy190->GetYaxis()->SetTitleFont(42);
   hframe_copy190->GetZaxis()->SetLabelFont(42);
   hframe_copy190->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetZaxis()->SetLabelSize(0.05);
   hframe_copy190->GetZaxis()->SetTitleSize(0.06);
   hframe_copy190->GetZaxis()->SetTitleFont(42);
   hframe_copy190->Draw("sameaxis");
   ccwh3l_top_13TeV_pt2->Modified();
   ccwh3l_top_13TeV_pt2->cd();
   ccwh3l_top_13TeV_pt2->SetSelected(ccwh3l_top_13TeV_pt2);
}
