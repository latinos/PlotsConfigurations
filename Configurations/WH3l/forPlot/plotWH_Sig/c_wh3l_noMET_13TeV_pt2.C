void c_wh3l_noMET_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_noMET_13TeV_pt2/cc
//=========  (Wed Jun 29 01:51:37 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_noMET_13TeV_pt2 = new TCanvas("ccwh3l_noMET_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_noMET_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_noMET_13TeV_pt2->Range(-28,-23.65513,209.5,158.3074);
   ccwh3l_noMET_13TeV_pt2->SetFillColor(0);
   ccwh3l_noMET_13TeV_pt2->SetBorderMode(0);
   ccwh3l_noMET_13TeV_pt2->SetBorderSize(2);
   ccwh3l_noMET_13TeV_pt2->SetTickx(1);
   ccwh3l_noMET_13TeV_pt2->SetTicky(1);
   ccwh3l_noMET_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_noMET_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_noMET_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_noMET_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_noMET_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_noMET_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe81 = new TH1F("hframe81","",1000,10,200);
   hframe81->SetMinimum(0);
   hframe81->SetMaximum(149.2093);
   hframe81->SetDirectory(0);
   hframe81->SetStats(0);
   hframe81->SetLineStyle(0);
   hframe81->SetMarkerStyle(20);
   hframe81->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe81->GetXaxis()->SetNdivisions(506);
   hframe81->GetXaxis()->SetLabelFont(42);
   hframe81->GetXaxis()->SetLabelOffset(0.007);
   hframe81->GetXaxis()->SetLabelSize(0.05);
   hframe81->GetXaxis()->SetTitleSize(0.06);
   hframe81->GetXaxis()->SetTitleOffset(0.9);
   hframe81->GetXaxis()->SetTitleFont(42);
   hframe81->GetYaxis()->SetTitle("Events");
   hframe81->GetYaxis()->SetLabelFont(42);
   hframe81->GetYaxis()->SetLabelOffset(0.007);
   hframe81->GetYaxis()->SetLabelSize(0.05);
   hframe81->GetYaxis()->SetTitleSize(0.06);
   hframe81->GetYaxis()->SetTitleOffset(1.25);
   hframe81->GetYaxis()->SetTitleFont(42);
   hframe81->GetZaxis()->SetLabelFont(42);
   hframe81->GetZaxis()->SetLabelOffset(0.007);
   hframe81->GetZaxis()->SetLabelSize(0.05);
   hframe81->GetZaxis()->SetTitleSize(0.06);
   hframe81->GetZaxis()->SetTitleFont(42);
   hframe81->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_noMET_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->SetName("thsBackground_grouped_wh3l_noMET_13TeV_pt2");
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_noMET_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17 = new TH1F("thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17","thsBackground_grouped_wh3l_noMET_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->SetMinimum(-0.08746953);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->SetMaximum(62.66789);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->SetDirectory(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->SetStats(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->SetLineStyle(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_noMET_13TeV_pt2_stack_17);
   
   
   TH1D *new_histo_group_Fake_wh3l_noMET_13TeV_pt282 = new TH1D("new_histo_group_Fake_wh3l_noMET_13TeV_pt282","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(1,4.057602);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(2,16.07432);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(3,9.876424);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(4,2.932287);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(5,0.8711322);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(6,2.335679);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(7,0.4658592);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(8,1.068432);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(9,-0.02560763);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(10,0.0803234);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(11,0.3960251);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(12,0.4089024);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(15,-0.03500577);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(17,-0.01470217);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(18,-0.04373476);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(20,-0.02845447);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(22,-0.0005581505);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(23,-0.004633672);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinContent(26,-0.02101554);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(1,1.768599);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(2,3.740899);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(3,2.739278);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(4,1.495482);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(5,0.5908404);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(6,1.121929);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(7,0.2153647);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(8,0.4909622);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(9,0.02344718);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(10,0.070029);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(11,0.3646514);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(12,0.3263208);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(15,0.03500577);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(17,0.01470217);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(18,0.04373476);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(20,0.02845447);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(22,0.0005581505);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(23,0.004633672);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetBinError(26,0.02101554);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetEntries(607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetFillColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->SetLineColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt282->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->Add(new_histo_group_Fake_wh3l_noMET_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_noMET_13TeV_pt283 = new TH1D("new_histo_group_WW_wh3l_noMET_13TeV_pt283","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinContent(1,0.01285941);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinContent(3,0.08511079);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinContent(4,0.06887279);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinContent(5,0.0142084);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinContent(7,0.01582978);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinContent(8,0.05572331);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinContent(14,0.0131107);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinError(1,0.01285941);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinError(3,0.03911902);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinError(4,0.03156392);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinError(5,0.0142084);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinError(7,0.01582978);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinError(8,0.02853899);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetBinError(14,0.0131107);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetEntries(19);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetFillColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->SetLineColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt283->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->Add(new_histo_group_WW_wh3l_noMET_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_noMET_13TeV_pt284 = new TH1D("new_histo_group_VVV_wh3l_noMET_13TeV_pt284","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(2,0.000717011);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(3,0.003127295);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(5,0.0006343185);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(6,0.0006836765);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(7,0.003536289);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(8,0.001610907);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(9,0.001318135);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(10,0.0008684555);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(12,0.0006403264);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(15,0.0006729142);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinContent(18,0.001045936);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(2,0.001211446);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(3,0.001363818);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(5,0.0006343185);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(6,0.0006836765);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(7,0.001449584);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(8,0.0009446823);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(9,0.0009449532);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(10,0.0007307933);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(12,0.000477819);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(15,0.0006729142);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetBinError(18,0.0007396364);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetEntries(29);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetFillColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->SetLineColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt284->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->Add(new_histo_group_VVV_wh3l_noMET_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_noMET_13TeV_pt285 = new TH1D("new_histo_group_Vg_wh3l_noMET_13TeV_pt285","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(1,4.096151);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(2,37.82284);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(3,25.22902);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(4,6.284576);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(5,1.66336);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(6,1.156805);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(7,0.4304002);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(8,0.6644234);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(9,0.7359301);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(10,0.4586237);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(11,0.1157837);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(12,0.4587681);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(13,0.3053127);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(14,0.2180721);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(17,0.1830351);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(18,0.1167461);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(19,0.2590793);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(22,0.1147983);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(24,0.1057938);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(25,0.1050401);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinContent(26,0.104439);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(1,0.7891034);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(2,2.217376);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(3,1.934366);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(4,0.9427167);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(5,0.4235593);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(6,0.3554757);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(7,0.3204788);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(8,0.2956372);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(9,0.3186112);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(10,0.2297741);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(11,0.1811169);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(12,0.2296938);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(13,0.1803234);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(14,0.1542041);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(17,0.1320644);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(18,0.1167461);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(19,0.1833937);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(22,0.1147983);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(24,0.1057938);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(25,0.1050401);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetBinError(26,0.104439);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetEntries(1050);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetFillColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->SetLineColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt285->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->Add(new_histo_group_Vg_wh3l_noMET_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_noMET_13TeV_pt286 = new TH1D("new_histo_group_ZZ_wh3l_noMET_13TeV_pt286","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(1,0.1578681);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(2,0.9561715);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(3,0.541769);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(4,0.2798469);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(5,0.08764536);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(6,0.2920299);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(7,0.4404189);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(8,0.2584008);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(9,0.06900174);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(10,0.1236241);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(11,0.2723376);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(12,0.09288742);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(15,0.06359055);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(18,0.08629444);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(21,0.04635774);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(24,0.08533217);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinContent(26,0.08274698);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(1,0.07334408);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(2,0.1967667);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(3,0.1531401);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(4,0.1053669);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(5,0.05459844);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(6,0.1086178);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(7,0.1343061);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(8,0.106012);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(9,0.04948553);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(10,0.06844714);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(11,0.10603);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(12,0.05958586);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(15,0.04753846);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(18,0.06107252);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(21,0.04635774);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(24,0.06053411);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetBinError(26,0.05912031);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetEntries(105);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt286->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_noMET_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_noMET_13TeV_pt287 = new TH1D("new_histo_group_WZ_wh3l_noMET_13TeV_pt287","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(1,1.390691);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(2,4.616672);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(3,3.134231);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(4,2.052526);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(5,1.523674);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(6,1.31042);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(7,1.099958);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(8,0.8291237);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(9,0.6075419);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(10,0.4973342);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(11,0.3658821);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(12,0.2830037);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(13,0.1645283);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(14,0.1723284);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(15,0.1498153);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(16,0.1187732);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(17,0.09295304);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(18,0.09341097);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(19,0.07401975);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(20,0.06746132);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(21,0.06290134);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(22,0.06655732);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(23,0.05465871);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(24,0.04960522);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(25,0.03311544);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinContent(26,0.3006607);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(1,0.08607212);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(2,0.1597897);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(3,0.1307008);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(4,0.1052374);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(5,0.09090066);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(6,0.08463401);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(7,0.07754545);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(8,0.06689979);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(9,0.0577988);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(10,0.05240853);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(11,0.04438419);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(12,0.03931023);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(13,0.02967874);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(14,0.03001177);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(15,0.02825575);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(16,0.02571786);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(17,0.02227323);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(18,0.02242672);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(19,0.01925424);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(20,0.01959834);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(21,0.01919361);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(22,0.01854744);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(23,0.01724052);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(24,0.01616127);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(25,0.01359379);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetBinError(26,0.0397146);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetEntries(3898);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetFillColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->SetLineColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt287->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->Add(new_histo_group_WZ_wh3l_noMET_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_pt288 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_pt288","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(1,0.03993567);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(2,0.1968662);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(3,0.2628235);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(4,0.1870501);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(5,0.1474413);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(6,0.1167055);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(7,0.07296736);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(8,0.04073438);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(9,0.04639679);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(10,0.04131661);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(11,0.02126274);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(12,0.0194793);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(13,0.01808841);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(14,0.005474515);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(15,0.003106554);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(16,0.003623047);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(17,0.002824565);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(18,0.002234619);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(19,0.002548841);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(20,0.002760258);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(21,0.001317216);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(24,0.002173942);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(25,0.0004818593);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinContent(26,0.002534276);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(1,0.007206719);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(2,0.01463663);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(3,0.01708942);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(4,0.01482828);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(5,0.01307083);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(6,0.01192213);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(7,0.009282117);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(8,0.006841621);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(9,0.00721632);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(10,0.00745148);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(11,0.005085632);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(12,0.004748727);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(13,0.005104532);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(14,0.002791784);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(15,0.001652388);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(16,0.001851187);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(17,0.001905768);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(18,0.001317766);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(19,0.001769358);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(20,0.001444453);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(21,0.0009361016);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(24,0.001154769);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(25,0.0003941882);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetBinError(26,0.00178415);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt288->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_pt2,"");
   thsBackground_grouped_wh3l_noMET_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_noMET_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_noMET_13TeV_pt2->SetName("thsSignal_grouped_wh3l_noMET_13TeV_pt2");
   thsSignal_grouped_wh3l_noMET_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_noMET_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18 = new TH1F("thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18","thsSignal_grouped_wh3l_noMET_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->SetMinimum(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->SetMaximum(0.2939085);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->SetDirectory(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->SetStats(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->SetLineStyle(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_noMET_13TeV_pt2_stack_18);
   
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_pt289 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_pt289","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(1,0.03993567);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(2,0.1968662);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(3,0.2628235);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(4,0.1870501);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(5,0.1474413);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(6,0.1167055);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(7,0.07296736);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(8,0.04073438);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(9,0.04639679);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(10,0.04131661);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(11,0.02126274);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(12,0.0194793);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(13,0.01808841);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(14,0.005474515);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(15,0.003106554);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(16,0.003623047);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(17,0.002824565);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(18,0.002234619);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(19,0.002548841);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(20,0.002760258);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(21,0.001317216);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(24,0.002173942);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(25,0.0004818593);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinContent(26,0.002534276);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(1,0.007206719);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(2,0.01463663);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(3,0.01708942);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(4,0.01482828);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(5,0.01307083);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(6,0.01192213);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(7,0.009282117);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(8,0.006841621);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(9,0.00721632);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(10,0.00745148);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(11,0.005085632);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(12,0.004748727);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(13,0.005104532);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(14,0.002791784);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(15,0.001652388);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(16,0.001851187);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(17,0.001905768);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(18,0.001317766);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(19,0.001769358);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(20,0.001444453);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(21,0.0009361016);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(24,0.001154769);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(25,0.0003941882);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetBinError(26,0.00178415);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt289->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_pt2,"");
   thsSignal_grouped_wh3l_noMET_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3017[25] = {
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
   Double_t _fy3017[25] = {
   9.715171,
   59.48684,
   38.86968,
   11.61811,
   4.160654,
   5.095617,
   2.456002,
   2.877714,
   1.388184,
   1.160774,
   1.150028,
   1.244202,
   0.469841,
   0.4035112,
   0.179073,
   0.1187731,
   0.261286,
   0.2537626,
   0.333099,
   0.03900684,
   0.1092591,
   0.1807975,
   0.05002504,
   0.2407312,
   0.1381555};
   Double_t _felx3017[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3017[25] = {
   3.100414,
   8.756488,
   6.207481,
   2.901723,
   1.21807,
   1.861954,
   0.7834129,
   1.058208,
   0.4517066,
   0.4236487,
   0.646201,
   0.6712518,
   0.2120138,
   0.1986324,
   0.1125198,
   0.02623095,
   0.1692401,
   0.2467096,
   0.2029956,
   0.04917471,
   0.06558483,
   0.1342463,
   0.02207631,
   0.1826782,
   0.1188485};
   Double_t _fehx3017[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3017[25] = {
   3.100568,
   8.744834,
   6.199445,
   2.899283,
   1.217248,
   1.86189,
   0.7833702,
   1.058182,
   0.4516975,
   0.42323,
   0.710081,
   0.671242,
   0.2116492,
   0.1981348,
   0.1125018,
   0.02612131,
   0.1692385,
   0.2458098,
   0.2029355,
   0.04915646,
   0.06558333,
   0.1342801,
   0.02200504,
   0.1826748,
   0.1188637};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,219);
   Graph_Graph3017->SetMinimum(-6.834352);
   Graph_Graph3017->SetMaximum(75.05586);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("2");
   
   Double_t _fx3018[25] = {
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
   Double_t _fy3018[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3018[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3018[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3018[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3018[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,219);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(1.262698);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineStyle(0);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy90 = new TH1F("hframe_copy90","",1000,10,200);
   hframe_copy90->SetMinimum(0);
   hframe_copy90->SetMaximum(149.2093);
   hframe_copy90->SetDirectory(0);
   hframe_copy90->SetStats(0);
   hframe_copy90->SetLineStyle(0);
   hframe_copy90->SetMarkerStyle(20);
   hframe_copy90->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy90->GetXaxis()->SetNdivisions(506);
   hframe_copy90->GetXaxis()->SetLabelFont(42);
   hframe_copy90->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetXaxis()->SetLabelSize(0.05);
   hframe_copy90->GetXaxis()->SetTitleSize(0.06);
   hframe_copy90->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy90->GetXaxis()->SetTitleFont(42);
   hframe_copy90->GetYaxis()->SetTitle("Events");
   hframe_copy90->GetYaxis()->SetLabelFont(42);
   hframe_copy90->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetYaxis()->SetLabelSize(0.05);
   hframe_copy90->GetYaxis()->SetTitleSize(0.06);
   hframe_copy90->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy90->GetYaxis()->SetTitleFont(42);
   hframe_copy90->GetZaxis()->SetLabelFont(42);
   hframe_copy90->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetZaxis()->SetLabelSize(0.05);
   hframe_copy90->GetZaxis()->SetTitleSize(0.06);
   hframe_copy90->GetZaxis()->SetTitleFont(42);
   hframe_copy90->Draw("sameaxis");
   ccwh3l_noMET_13TeV_pt2->Modified();
   ccwh3l_noMET_13TeV_pt2->cd();
   ccwh3l_noMET_13TeV_pt2->SetSelected(ccwh3l_noMET_13TeV_pt2);
}
