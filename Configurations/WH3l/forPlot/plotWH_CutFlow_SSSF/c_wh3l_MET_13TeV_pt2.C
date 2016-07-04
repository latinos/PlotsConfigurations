void c_wh3l_MET_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_pt2/cc
//=========  (Sun Jul  3 01:21:55 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_pt2 = new TCanvas("ccwh3l_MET_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_13TeV_pt2->Range(-28,-2.263118,209.5,15.14548);
   ccwh3l_MET_13TeV_pt2->SetFillColor(0);
   ccwh3l_MET_13TeV_pt2->SetBorderMode(0);
   ccwh3l_MET_13TeV_pt2->SetBorderSize(2);
   ccwh3l_MET_13TeV_pt2->SetTickx(1);
   ccwh3l_MET_13TeV_pt2->SetTicky(1);
   ccwh3l_MET_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe181 = new TH1F("hframe181","",1000,10,200);
   hframe181->SetMinimum(0);
   hframe181->SetMaximum(14.27505);
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
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37","thsBackground_grouped_wh3l_MET_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->SetMinimum(-0.2122385);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->SetMaximum(7.257915);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_37);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_pt2182 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_pt2182","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(1,-0.05118248);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(2,2.550868);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(3,2.936257);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(4,5.28623);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(5,3.330484);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(6,1.168487);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(7,1.865844);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(8,1.060445);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(9,0.3394906);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(10,0.6534942);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(11,-0.0005603257);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(13,-0.000561121);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(17,-0.01470217);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(20,0.0378228);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinContent(26,0.01017037);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(1,0.05118248);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(2,1.17236);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(3,1.213185);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(4,1.626071);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(5,1.183285);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(6,0.716801);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(7,0.851168);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(8,0.7340948);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(9,0.2115436);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(10,0.4203793);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(11,0.0005603257);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(13,0.000561121);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(17,0.01470217);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(20,0.0378228);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetBinError(26,0.01017037);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_pt2183 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_pt2183","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinContent(2,0.03141051);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinContent(4,0.03192485);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinContent(5,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinContent(8,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinContent(11,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinError(2,0.02221848);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinError(4,0.02048583);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinError(5,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinError(8,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetBinError(11,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_pt2184 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_pt2184","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(2,0.01830739);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(3,0.02926418);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(4,0.05522167);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(5,0.02918618);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(6,0.02597176);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(7,0.03268136);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(8,0.02353611);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(9,0.007504805);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(10,0.009285668);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(11,0.00992981);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(12,0.01210694);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(13,0.008434718);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(14,0.01386886);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(15,0.001271515);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(16,0.007108731);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(17,0.00544711);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(18,0.00554309);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(19,0.002213453);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(21,0.007895922);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(23,0.001881694);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinContent(26,0.006902047);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(2,0.00769755);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(3,0.01098006);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(4,0.0110156);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(5,0.01045031);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(6,0.007177533);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(7,0.008618444);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(8,0.008311732);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(9,0.005541999);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(10,0.006025967);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(11,0.004240198);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(12,0.005172484);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(13,0.004245047);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(14,0.005702045);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(15,0.003824938);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(16,0.004130606);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(17,0.003230301);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(18,0.003888564);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(19,0.002009852);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(21,0.004232933);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(23,0.001881694);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetBinError(26,0.003812129);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetEntries(198);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_pt2185 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_pt2185","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetBinContent(2,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetBinContent(3,-0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetBinContent(4,0.0522728);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetBinContent(6,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetBinError(2,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetBinError(3,0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetBinError(4,0.0522728);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetBinError(6,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetEntries(4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_pt2186 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_pt2186","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetBinContent(2,0.0427135);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetBinContent(3,0.04768794);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetBinContent(7,0.03513683);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetBinError(2,0.0427135);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetBinError(3,0.04768794);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetBinError(7,0.03513683);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetEntries(3);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_pt2187 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_pt2187","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(1,0.1033999);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(2,0.2197488);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(3,0.1772909);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(4,0.2177409);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(5,0.1129576);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(6,0.07969796);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(7,0.1105676);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(8,0.03082297);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(9,0.01843495);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(10,0.03362807);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(11,0.005713332);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(12,0.01768463);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(14,0.01777942);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(15,0.01555235);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(16,0.0106445);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(17,0.005827953);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(19,0.00557515);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinContent(26,0.00380545);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(1,0.02415293);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(2,0.03496032);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(3,0.03031342);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(4,0.03415723);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(5,0.02486384);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(6,0.02099493);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(7,0.02438726);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(8,0.01305306);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(9,0.01004107);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(10,0.01393262);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(11,0.005713332);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(12,0.009568991);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(14,0.01030483);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(15,0.009074673);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(16,0.007566352);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(17,0.005827953);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(19,0.00557515);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetBinError(26,0.00380545);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetEntries(244);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt2188 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt2188","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(1,0.01392617);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(2,0.06960801);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(3,0.07528461);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(4,0.06663078);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(5,0.06181326);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(6,0.03243655);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(7,0.02221407);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(8,0.01761639);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(9,0.01296874);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(10,0.01034347);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(11,0.006116845);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(12,0.006249618);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(13,0.005627972);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(14,0.0002196867);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(15,0.0009145424);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(17,0.001414153);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(19,0.001458335);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(20,0.001048555);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinContent(26,0.002650551);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(1,0.003868813);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(2,0.00836595);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(3,0.008959801);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(4,0.009076295);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(5,0.007949237);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(6,0.00581945);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(7,0.004604417);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(8,0.004110637);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(9,0.003466864);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(10,0.004000167);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(11,0.002610275);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(12,0.002720235);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(13,0.002826016);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(14,0.0002196867);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(15,0.0005055186);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(17,0.001045976);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(19,0.001330069);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(20,0.0005452872);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetBinError(26,0.001690865);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38","thsSignal_grouped_wh3l_MET_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->SetMaximum(0.08845663);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_38);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt2189 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt2189","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(1,0.01392617);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(2,0.06960801);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(3,0.07528461);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(4,0.06663078);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(5,0.06181326);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(6,0.03243655);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(7,0.02221407);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(8,0.01761639);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(9,0.01296874);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(10,0.01034347);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(11,0.006116845);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(12,0.006249618);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(13,0.005627972);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(14,0.0002196867);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(15,0.0009145424);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(17,0.001414153);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(19,0.001458335);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(20,0.001048555);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinContent(26,0.002650551);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(1,0.003868813);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(2,0.00836595);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(3,0.008959801);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(4,0.009076295);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(5,0.007949237);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(6,0.00581945);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(7,0.004604417);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(8,0.004110637);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(9,0.003466864);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(10,0.004000167);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(11,0.002610275);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(12,0.002720235);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(13,0.002826016);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(14,0.0002196867);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(15,0.0005055186);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(17,0.001045976);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(19,0.001330069);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(20,0.0005452872);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetBinError(26,0.001690865);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2189->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_13TeV_pt2->Draw("hist same noclear");
   
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
   0.05221738,
   2.974257,
   3.084381,
   5.64339,
   3.488579,
   1.396896,
   2.044229,
   1.131129,
   0.3654303,
   0.6964079,
   0.03055139,
   0.02979157,
   0.007873597,
   0.03164828,
   0.01682387,
   0.01775323,
   -0.003427109,
   0.00554309,
   0.007788603,
   0.0378228,
   0.007895922,
   0,
   0.001881694,
   0,
   0};
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
   0.0778017,
   1.65325,
   1.743643,
   2.543191,
   1.698151,
   0.9596099,
   1.128125,
   0.8566809,
   0.2564396,
   0.4962827,
   0.02789591,
   0.01868344,
   0.009721526,
   0.02122147,
   0.01036838,
   0.0136946,
   0.0249181,
   0.006774893,
   0.007908083,
   0.04007253,
   0.008346548,
   0,
   0.002662076,
   0,
   0};
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
   0.0777771,
   1.653248,
   1.743639,
   2.543179,
   1.698148,
   0.9596087,
   1.128121,
   0.8566796,
   0.256442,
   0.4962865,
   0.02788387,
   0.01867948,
   0.009721687,
   0.02119972,
   0.01291503,
   0.01368909,
   0.02491691,
   0.006775105,
   0.007907326,
   0.04007253,
   0.00834533,
   0,
   0.002662109,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,219);
   Graph_Graph3037->SetMinimum(-0.8498366);
   Graph_Graph3037->SetMaximum(9.00806);
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
   0,
   1,
   3,
   2,
   1,
   0,
   1,
   3,
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
   0,
   0.8272524,
   1.632727,
   1.29183,
   0.8272524,
   0,
   0.8272524,
   1.632727,
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
   1.147908,
   2.29957,
   2.918242,
   2.63791,
   2.29957,
   1.147908,
   2.29957,
   2.918242,
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
   grae = new TGraphAsymmErrors(25,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,219);
   Graph_Graph3038->SetMinimum(0);
   Graph_Graph3038->SetMaximum(6.510067);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt2","Data","EPL");
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
   hframe_copy190->SetMaximum(14.27505);
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
   ccwh3l_MET_13TeV_pt2->Modified();
   ccwh3l_MET_13TeV_pt2->cd();
   ccwh3l_MET_13TeV_pt2->SetSelected(ccwh3l_MET_13TeV_pt2);
}
