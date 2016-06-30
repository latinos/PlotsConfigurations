void c_wh3l_13TeV_ossf_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_pt2/cc
//=========  (Wed Jun 29 22:36:10 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_pt2 = new TCanvas("ccwh3l_13TeV_ossf_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_pt2->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_pt2->Range(-88,-3.067729,524.5,20.53019);
   ccwh3l_13TeV_ossf_pt2->SetFillColor(0);
   ccwh3l_13TeV_ossf_pt2->SetBorderMode(0);
   ccwh3l_13TeV_ossf_pt2->SetBorderSize(2);
   ccwh3l_13TeV_ossf_pt2->SetTickx(1);
   ccwh3l_13TeV_ossf_pt2->SetTicky(1);
   ccwh3l_13TeV_ossf_pt2->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_pt2->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_pt2->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_pt2->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt2->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe71 = new TH1F("hframe71","",1000,10,500);
   hframe71->SetMinimum(0);
   hframe71->SetMaximum(19.35029);
   hframe71->SetDirectory(0);
   hframe71->SetStats(0);
   hframe71->SetLineStyle(0);
   hframe71->SetMarkerStyle(20);
   hframe71->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe71->GetXaxis()->SetNdivisions(506);
   hframe71->GetXaxis()->SetLabelFont(42);
   hframe71->GetXaxis()->SetLabelOffset(0.007);
   hframe71->GetXaxis()->SetLabelSize(0.05);
   hframe71->GetXaxis()->SetTitleSize(0.06);
   hframe71->GetXaxis()->SetTitleOffset(0.9);
   hframe71->GetXaxis()->SetTitleFont(42);
   hframe71->GetYaxis()->SetTitle("Events");
   hframe71->GetYaxis()->SetLabelFont(42);
   hframe71->GetYaxis()->SetLabelOffset(0.007);
   hframe71->GetYaxis()->SetLabelSize(0.05);
   hframe71->GetYaxis()->SetTitleSize(0.06);
   hframe71->GetYaxis()->SetTitleOffset(1.25);
   hframe71->GetYaxis()->SetTitleFont(42);
   hframe71->GetZaxis()->SetLabelFont(42);
   hframe71->GetZaxis()->SetLabelOffset(0.007);
   hframe71->GetZaxis()->SetLabelSize(0.05);
   hframe71->GetZaxis()->SetTitleSize(0.06);
   hframe71->GetZaxis()->SetTitleFont(42);
   hframe71->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_pt2 = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetName("thsBackground_grouped_wh3l_13TeV_ossf_pt2");
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_pt2");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15","thsBackground_grouped_wh3l_13TeV_ossf_pt2",50,10,500);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetMinimum(-0.8165748);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetMaximum(8.127123);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_pt272 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_pt272","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(1,-0.09269641);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(2,3.391535);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(3,2.051616);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(4,0.4068909);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(5,0.6375776);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(6,0.03716537);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(7,0.2755572);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(8,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(1,0.7238784);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(2,1.420952);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(3,1.249889);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(4,0.5467564);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(5,0.596158);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(6,0.03773371);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(7,0.2772125);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(8,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Fake_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_pt273 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_pt273","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinContent(2,0.0285913);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinContent(4,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinContent(6,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinError(2,0.02093881);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinError(4,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinError(6,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_WW_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_pt274 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_pt274","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(1,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(2,0.0004978514);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(3,0.00125327);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(5,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(6,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(1,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(2,0.0003568516);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(3,0.0008864147);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(5,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(6,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_VVV_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_pt275 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_pt275","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(1,0.3572982);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(2,1.736318);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(3,0.3569698);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(4,0.1975834);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(1,0.1719672);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(2,0.4688905);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(3,0.2365023);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(4,0.1399723);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Vg_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_pt276 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_pt276","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(1,0.08906122);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(2,0.2213619);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(3,0.04332869);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(5,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(6,0.07503828);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(8,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(1,0.0519193);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(2,0.09522679);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(3,0.04332869);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(5,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(6,0.05418279);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(8,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_pt277 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_pt277","histo_WZ",50,10,500);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(1,0.9279545);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(2,2.206234);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(3,1.399333);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(4,0.8605485);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(5,0.5379037);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(6,0.3063354);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(7,0.172767);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(8,0.1339317);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(9,0.116041);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(10,0.04989666);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(11,0.0577562);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(12,0.03427221);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(13,0.01225677);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(14,0.01746577);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(15,0.02314037);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(16,0.005197554);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(17,0.02143776);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(18,0.01271547);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(19,0.005507303);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(21,0.003710265);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(23,0.01228969);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(24,0.00368251);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(1,0.07053634);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(2,0.1104334);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(3,0.08678454);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(4,0.06860647);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(5,0.05405676);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(6,0.04063937);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(7,0.03066646);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(8,0.02672324);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(9,0.02483791);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(10,0.01561878);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(11,0.01702009);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(12,0.01404297);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(13,0.008667237);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(14,0.008993574);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(15,0.01159673);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(16,0.005197554);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(17,0.0107478);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(18,0.00838211);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(19,0.005507303);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(21,0.003710265);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(23,0.008731292);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(24,0.00368251);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_WZ_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt278 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt278","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(1,0.03339496);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(2,0.1555796);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(3,0.1397385);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(4,0.06193118);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(5,0.07519111);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(6,0.02777735);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(7,0.02338651);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(8,0.01989137);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(9,0.0164386);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(10,0.01275317);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(11,0.003373806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(12,0.0001608402);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(13,0.00165683);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(14,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(15,0.002156077);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(16,0.001608304);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(17,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(19,0.001345154);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(21,-0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(22,0.001644312);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(1,0.006796822);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(2,0.01329464);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(3,0.01281377);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(4,0.00843218);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(5,0.009936543);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(6,0.0055987);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(7,0.005452049);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(8,0.005158951);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(9,0.004538973);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(10,0.004009275);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(11,0.002296885);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(12,0.0001608402);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(13,0.00165683);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(14,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(15,0.001298573);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(16,0.001143038);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(17,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(19,0.001058943);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(21,0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(22,0.001644312);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt2,"");
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_pt2 = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetName("thsSignal_grouped_wh3l_13TeV_ossf_pt2");
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_pt2");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16","thsSignal_grouped_wh3l_13TeV_ossf_pt2",50,10,500);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetMinimum(-0.0006315881);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetMaximum(0.1773179);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt279 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt279","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(1,0.03339496);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(2,0.1555796);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(3,0.1397385);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(4,0.06193118);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(5,0.07519111);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(6,0.02777735);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(7,0.02338651);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(8,0.01989137);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(9,0.0164386);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(10,0.01275317);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(11,0.003373806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(12,0.0001608402);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(13,0.00165683);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(14,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(15,0.002156077);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(16,0.001608304);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(17,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(19,0.001345154);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(21,-0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(22,0.001644312);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(1,0.006796822);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(2,0.01329464);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(3,0.01281377);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(4,0.00843218);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(5,0.009936543);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(6,0.0055987);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(7,0.005452049);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(8,0.005158951);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(9,0.004538973);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(10,0.004009275);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(11,0.002296885);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(12,0.0001608402);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(13,0.00165683);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(14,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(15,0.001298573);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(16,0.001143038);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(17,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(19,0.001058943);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(21,0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(22,0.001644312);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt2,"");
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->Draw("hist same noclear");
   
   Double_t _fx3015[50] = {
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
   Double_t _fy3015[50] = {
   1.282242,
   7.584538,
   3.866976,
   1.518626,
   1.227255,
   0.4344966,
   0.4483242,
   0.1736893,
   0.116041,
   0.04989666,
   0.0577562,
   0.03427221,
   0.01225677,
   0.01746577,
   0.02314037,
   0.005197554,
   0.02143776,
   0.01271547,
   0.005507302,
   0,
   0.003710265,
   0,
   0.01228969,
   0.00368251,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3015[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
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
   Double_t _fely3015[50] = {
   1.025703,
   2.43398,
   1.783789,
   0.6846014,
   0.7367633,
   0.1491102,
   0.3210981,
   0.06678256,
   0.02504965,
   0.01579627,
   0.0171728,
   0.01415132,
   0.008669072,
   0.009046968,
   0.01164344,
   0.005211324,
   0.01076168,
   0.008391357,
   0.005516877,
   0,
   0.003711846,
   0,
   0.008737262,
   0.003682785,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3015[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
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
   Double_t _fehy3015[50] = {
   0.4038919,
   2.433592,
   1.783781,
   0.821772,
   0.7367442,
   0.1497367,
   0.322678,
   0.06675799,
   0.02503794,
   0.01573126,
   0.01718378,
   0.01416486,
   0.00866919,
   0.00905492,
   0.01161851,
   0.005209664,
   0.01076216,
   0.008392176,
   0.005515794,
   0,
   0.003711944,
   0,
   0.008735563,
   0.003682788,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,549);
   Graph_Graph3015->SetMinimum(-1.001828);
   Graph_Graph3015->SetMaximum(11.01994);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2");
   
   Double_t _fx3016[50] = {
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
   Double_t _fy3016[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3016[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
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
   Double_t _fely3016[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3016[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
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
   Double_t _fehy3016[50] = {
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
   grae = new TGraphAsymmErrors(50,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,549);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(1.262698);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineStyle(0);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt2","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,10,500);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(19.35029);
   hframe_copy80->SetDirectory(0);
   hframe_copy80->SetStats(0);
   hframe_copy80->SetLineStyle(0);
   hframe_copy80->SetMarkerStyle(20);
   hframe_copy80->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy80->GetXaxis()->SetNdivisions(506);
   hframe_copy80->GetXaxis()->SetLabelFont(42);
   hframe_copy80->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetXaxis()->SetLabelSize(0.05);
   hframe_copy80->GetXaxis()->SetTitleSize(0.06);
   hframe_copy80->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy80->GetXaxis()->SetTitleFont(42);
   hframe_copy80->GetYaxis()->SetTitle("Events");
   hframe_copy80->GetYaxis()->SetLabelFont(42);
   hframe_copy80->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetYaxis()->SetLabelSize(0.05);
   hframe_copy80->GetYaxis()->SetTitleSize(0.06);
   hframe_copy80->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy80->GetYaxis()->SetTitleFont(42);
   hframe_copy80->GetZaxis()->SetLabelFont(42);
   hframe_copy80->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetZaxis()->SetLabelSize(0.05);
   hframe_copy80->GetZaxis()->SetTitleSize(0.06);
   hframe_copy80->GetZaxis()->SetTitleFont(42);
   hframe_copy80->Draw("sameaxis");
   ccwh3l_13TeV_ossf_pt2->Modified();
   ccwh3l_13TeV_ossf_pt2->cd();
   ccwh3l_13TeV_ossf_pt2->SetSelected(ccwh3l_13TeV_ossf_pt2);
}
