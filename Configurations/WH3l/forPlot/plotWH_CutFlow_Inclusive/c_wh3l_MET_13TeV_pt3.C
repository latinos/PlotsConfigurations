void c_wh3l_MET_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_pt3/cc
//=========  (Sun Jul  3 16:19:05 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_pt3 = new TCanvas("ccwh3l_MET_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_13TeV_pt3->Range(-7.999999,-17.42233,104.5,116.5956);
   ccwh3l_MET_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe171 = new TH1F("hframe171","",1000,10,100);
   hframe171->SetMinimum(0);
   hframe171->SetMaximum(109.8947);
   hframe171->SetDirectory(0);
   hframe171->SetStats(0);
   hframe171->SetLineStyle(0);
   hframe171->SetMarkerStyle(20);
   hframe171->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe171->GetXaxis()->SetNdivisions(506);
   hframe171->GetXaxis()->SetLabelFont(42);
   hframe171->GetXaxis()->SetLabelOffset(0.007);
   hframe171->GetXaxis()->SetLabelSize(0.05);
   hframe171->GetXaxis()->SetTitleSize(0.06);
   hframe171->GetXaxis()->SetTitleOffset(0.9);
   hframe171->GetXaxis()->SetTitleFont(42);
   hframe171->GetYaxis()->SetTitle("Events");
   hframe171->GetYaxis()->SetLabelFont(42);
   hframe171->GetYaxis()->SetLabelOffset(0.007);
   hframe171->GetYaxis()->SetLabelSize(0.05);
   hframe171->GetYaxis()->SetTitleSize(0.06);
   hframe171->GetYaxis()->SetTitleOffset(1.25);
   hframe171->GetYaxis()->SetTitleFont(42);
   hframe171->GetZaxis()->SetLabelFont(42);
   hframe171->GetZaxis()->SetLabelOffset(0.007);
   hframe171->GetZaxis()->SetLabelSize(0.05);
   hframe171->GetZaxis()->SetTitleSize(0.06);
   hframe171->GetZaxis()->SetTitleFont(42);
   hframe171->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35","thsBackground_grouped_wh3l_MET_13TeV_pt3",25,10,100);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->SetMinimum(-0.1495178);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->SetMaximum(46.15577);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_pt3_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_pt3172 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_pt3172","histo_Fake",25,10,100);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(1,24.77995);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(2,14.55533);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(3,12.40456);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(4,11.35583);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(5,5.417731);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(6,5.252324);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(7,4.818704);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(8,2.42254);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(9,1.626158);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(10,1.626121);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(11,0.4233372);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(12,0.3408201);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(13,0.00342155);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(14,0.9524889);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(15,0.264188);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(16,0.04138462);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(17,0.001692833);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(18,0.01479339);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(19,0.04934769);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(22,-0.03542495);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(23,-0.0005627758);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinContent(26,-0.05969961);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(1,4.543302);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(2,3.579954);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(3,2.810072);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(4,2.288351);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(5,1.65287);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(6,1.501042);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(7,1.443215);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(8,1.036638);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(9,0.824916);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(10,0.8255931);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(11,0.3160061);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(12,0.1798946);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(13,0.1529393);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(14,0.5605382);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(15,0.3164536);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(16,0.07538966);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(17,0.08050826);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(18,0.09368035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(19,0.0774754);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(22,0.02540841);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(23,0.0005627758);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetBinError(26,0.03480045);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetEntries(1194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt3172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_pt3173 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_pt3173","histo_WW",25,10,100);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(1,0.06929147);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(2,0.08487471);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(3,0.08591383);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(4,0.01530373);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(5,0.03315687);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(6,0.004725511);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(7,0.01447441);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(8,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(12,0.03094249);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinContent(21,0.01305253);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(1,0.03467765);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(2,0.03527105);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(3,0.03703078);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(4,0.01530373);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(5,0.02348093);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(6,0.004725511);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(7,0.01447441);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(8,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(12,0.02191288);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetBinError(21,0.01305253);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetEntries(25);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt3173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_pt3174 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_pt3174","histo_VVV",25,10,100);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(1,0.2462138);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(2,0.4049846);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(3,0.4041181);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(4,0.4004525);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(5,0.3732);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(6,0.3602755);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(7,0.3722194);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(8,0.2431173);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(9,0.2258474);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(10,0.1753121);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(11,0.1793095);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(12,0.1309549);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(13,0.09000876);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(14,0.05879614);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(15,0.07273916);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(16,0.06462312);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(17,0.03880033);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(18,0.03790533);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(19,0.03772929);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(20,0.03659507);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(21,0.0214254);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(22,0.02324861);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(23,0.008367537);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(24,0.01405669);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(25,0.01598458);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinContent(26,0.1047828);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(1,0.02321138);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(2,0.0279475);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(3,0.02873263);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(4,0.02879281);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(5,0.02664888);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(6,0.02624747);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(7,0.0270291);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(8,0.02158614);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(9,0.02027027);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(10,0.01871345);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(11,0.01781866);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(12,0.01574023);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(13,0.01394534);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(14,0.01102619);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(15,0.01206034);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(16,0.01090433);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(17,0.008116732);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(18,0.007956096);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(19,0.008911557);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(20,0.008819297);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(21,0.007398057);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(22,0.007738878);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(23,0.003735632);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(24,0.005084914);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(25,0.006178737);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetBinError(26,0.01419883);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetEntries(3817);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt3174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_pt3175 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_pt3175","histo_Vg",25,10,100);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(1,1.768793);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(2,2.601618);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(3,3.140474);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(4,1.762859);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(5,1.234076);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(6,0.2580678);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(7,0.1795728);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(8,0.2584899);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(10,0.07712928);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(11,0.2953488);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(13,0.1274534);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(18,0.1164036);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinContent(26,-0.107833);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(1,0.523933);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(2,0.5694555);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(3,0.5660347);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(4,0.5845041);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(5,0.4331168);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(6,0.2287659);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(7,0.2078709);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(8,0.2185664);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(10,0.07712928);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(11,0.1733317);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(13,0.1274534);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(18,0.1164036);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetBinError(26,0.107833);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetEntries(194);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt3175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_pt3176 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_pt3176","histo_ZZ",25,10,100);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(1,1.349684);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(2,1.329087);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(3,1.888722);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(4,1.532798);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(5,1.398012);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(6,1.18302);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(7,1.015976);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(8,0.6723906);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(9,0.7120104);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(10,0.4670859);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(11,0.2611731);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(12,0.3555593);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(13,0.1015775);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(14,0.08702117);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(16,0.08973357);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(17,0.1088925);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(18,0.05751115);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(19,0.04241135);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(22,0.04463009);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinContent(26,0.0367305);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(1,0.2374277);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(2,0.2344775);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(3,0.2779016);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(4,0.2525686);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(5,0.2374646);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(6,0.2243438);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(7,0.1996575);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(8,0.1668969);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(9,0.1702614);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(10,0.1413587);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(11,0.1029782);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(12,0.1219395);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(13,0.06125468);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(14,0.06156819);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(16,0.0634774);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(17,0.06617446);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(18,0.05751115);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(19,0.04241135);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(22,0.04463009);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetBinError(26,0.0367305);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetEntries(350);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt3176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_pt3177 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_pt3177","histo_WZ",25,10,100);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(1,14.79226);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(2,20.69605);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(3,25.60855);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(4,27.32597);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(5,26.59365);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(6,24.23068);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(7,20.21183);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(8,15.66455);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(9,11.62994);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(10,7.839363);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(11,5.391202);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(12,4.180488);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(13,3.008845);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(14,2.464509);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(15,1.983506);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(16,1.473675);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(17,1.16863);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(18,1.096401);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(19,0.9166752);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(20,0.6493895);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(21,0.5115417);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(22,0.5058776);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(23,0.3735425);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(24,0.4138077);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(25,0.2788147);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinContent(26,1.733672);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(1,0.2813121);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(2,0.3354797);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(3,0.3748313);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(4,0.386127);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(5,0.3807146);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(6,0.3627764);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(7,0.3305597);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(8,0.2909374);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(9,0.2512406);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(10,0.2068437);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(11,0.1708019);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(12,0.150414);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(13,0.1280478);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(14,0.1150345);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(15,0.1034488);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(16,0.08996251);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(17,0.07918167);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(18,0.07761854);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(19,0.07173735);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(20,0.05913203);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(21,0.05310555);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(22,0.05160917);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(23,0.04542576);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(24,0.0475005);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(25,0.03876922);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetBinError(26,0.09575992);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetEntries(45061);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt3177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt3178 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt3178","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(1,0.3643923);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(2,0.4370448);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(3,0.4255447);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(4,0.3989588);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(5,0.3433186);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(6,0.2765582);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(7,0.222722);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(8,0.176362);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(9,0.1300192);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(10,0.1170587);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(11,0.09595853);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(12,0.07208776);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(13,0.04754322);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(14,0.02766835);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(15,0.0399113);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(16,0.02394979);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(17,0.02456494);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(18,0.02165251);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(19,0.009351337);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(20,0.0126282);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(21,0.01409568);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(22,0.004037459);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(23,0.004265656);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(24,0.01078767);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(25,0.003829682);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinContent(26,0.01817611);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(1,0.01965841);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(2,0.02171369);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(3,0.02145734);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(4,0.02047783);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(5,0.01943321);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(6,0.01727804);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(7,0.01506847);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(8,0.01306323);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(9,0.01183592);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(10,0.01095753);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(11,0.009396871);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(12,0.008515594);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(13,0.006491642);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(14,0.004608353);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(15,0.005985607);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(16,0.00461093);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(17,0.004899486);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(18,0.004425403);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(19,0.002199569);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(20,0.003276232);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(21,0.003386332);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(22,0.001239976);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(23,0.001679768);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(24,0.003673965);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(25,0.001591267);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetBinError(26,0.004089286);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36","thsSignal_grouped_wh3l_MET_13TeV_pt3",25,10,100);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->SetMaximum(0.4816964);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_pt3_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt3179 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt3179","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(1,0.3643923);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(2,0.4370448);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(3,0.4255447);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(4,0.3989588);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(5,0.3433186);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(6,0.2765582);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(7,0.222722);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(8,0.176362);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(9,0.1300192);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(10,0.1170587);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(11,0.09595853);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(12,0.07208776);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(13,0.04754322);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(14,0.02766835);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(15,0.0399113);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(16,0.02394979);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(17,0.02456494);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(18,0.02165251);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(19,0.009351337);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(20,0.0126282);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(21,0.01409568);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(22,0.004037459);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(23,0.004265656);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(24,0.01078767);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(25,0.003829682);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinContent(26,0.01817611);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(1,0.01965841);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(2,0.02171369);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(3,0.02145734);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(4,0.02047783);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(5,0.01943321);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(6,0.01727804);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(7,0.01506847);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(8,0.01306323);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(9,0.01183592);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(10,0.01095753);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(11,0.009396871);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(12,0.008515594);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(13,0.006491642);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(14,0.004608353);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(15,0.005985607);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(16,0.00461093);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(17,0.004899486);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(18,0.004425403);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(19,0.002199569);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(20,0.003276232);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(21,0.003386332);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(22,0.001239976);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(23,0.001679768);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(24,0.003673965);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(25,0.001591267);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetBinError(26,0.004089286);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt3179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3035[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3035[25] = {
   43.0062,
   39.67194,
   43.53233,
   42.39322,
   35.04982,
   31.2891,
   26.61278,
   19.27704,
   14.19395,
   10.18501,
   6.55037,
   5.038765,
   3.331306,
   3.562815,
   2.426282,
   1.669417,
   1.318016,
   1.323014,
   1.046164,
   0.6859846,
   0.5460197,
   0.5383314,
   0.3813472,
   0.4278644,
   0.2947992};
   Double_t _felx3035[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3035[25] = {
   10.42886,
   7.096988,
   6.05249,
   5.389326,
   3.396478,
   3.018668,
   2.798187,
   1.9643,
   1.406804,
   1.40242,
   0.8119482,
   0.5223917,
   0.3477581,
   0.8225755,
   0.5008903,
   0.2166024,
   0.1631275,
   0.2780507,
   0.1779048,
   0.07906667,
   0.07699735,
   0.133038,
   0.05230382,
   0.05593884,
   0.04739209};
   Double_t _fehx3035[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3035[25] = {
   10.42226,
   7.090708,
   6.051176,
   5.386765,
   3.394382,
   3.016474,
   2.819781,
   1.962576,
   1.405728,
   1.401249,
   0.8113395,
   0.5210612,
   0.4918552,
   0.8219025,
   0.5511166,
   0.2486524,
   0.2381794,
   0.3558807,
   0.2047885,
   0.07816273,
   0.07675585,
   0.13284,
   0.05153651,
   0.05539738,
   0.04732};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,1.000001,109);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(58.74657);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineStyle(0);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2");
   
   Double_t _fx3036[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3036[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3036[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3036[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3036[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3036[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,1.000001,109);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.262698);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineStyle(0);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,10,100);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(109.8947);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy180->GetXaxis()->SetNdivisions(506);
   hframe_copy180->GetXaxis()->SetLabelFont(42);
   hframe_copy180->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetXaxis()->SetLabelSize(0.05);
   hframe_copy180->GetXaxis()->SetTitleSize(0.06);
   hframe_copy180->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy180->GetXaxis()->SetTitleFont(42);
   hframe_copy180->GetYaxis()->SetTitle("Events");
   hframe_copy180->GetYaxis()->SetLabelFont(42);
   hframe_copy180->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetYaxis()->SetLabelSize(0.05);
   hframe_copy180->GetYaxis()->SetTitleSize(0.06);
   hframe_copy180->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy180->GetYaxis()->SetTitleFont(42);
   hframe_copy180->GetZaxis()->SetLabelFont(42);
   hframe_copy180->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetZaxis()->SetLabelSize(0.05);
   hframe_copy180->GetZaxis()->SetTitleSize(0.06);
   hframe_copy180->GetZaxis()->SetTitleFont(42);
   hframe_copy180->Draw("sameaxis");
   ccwh3l_MET_13TeV_pt3->Modified();
   ccwh3l_MET_13TeV_pt3->cd();
   ccwh3l_MET_13TeV_pt3->SetSelected(ccwh3l_MET_13TeV_pt3);
}
