void c_wh3l_plot_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_pt2/cc
//=========  (Tue Jun 28 13:56:30 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_pt2 = new TCanvas("ccwh3l_plot_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_plot_13TeV_pt2->Range(-28,-14.55464,209.5,97.40412);
   ccwh3l_plot_13TeV_pt2->SetFillColor(0);
   ccwh3l_plot_13TeV_pt2->SetBorderMode(0);
   ccwh3l_plot_13TeV_pt2->SetBorderSize(2);
   ccwh3l_plot_13TeV_pt2->SetTickx(1);
   ccwh3l_plot_13TeV_pt2->SetTicky(1);
   ccwh3l_plot_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe341 = new TH1F("hframe341","",1000,10,200);
   hframe341->SetMinimum(0);
   hframe341->SetMaximum(91.80619);
   hframe341->SetDirectory(0);
   hframe341->SetStats(0);
   hframe341->SetLineStyle(0);
   hframe341->SetMarkerStyle(20);
   hframe341->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe341->GetXaxis()->SetNdivisions(506);
   hframe341->GetXaxis()->SetLabelFont(42);
   hframe341->GetXaxis()->SetLabelOffset(0.007);
   hframe341->GetXaxis()->SetLabelSize(0.05);
   hframe341->GetXaxis()->SetTitleSize(0.06);
   hframe341->GetXaxis()->SetTitleOffset(0.9);
   hframe341->GetXaxis()->SetTitleFont(42);
   hframe341->GetYaxis()->SetTitle("Events");
   hframe341->GetYaxis()->SetLabelFont(42);
   hframe341->GetYaxis()->SetLabelOffset(0.007);
   hframe341->GetYaxis()->SetLabelSize(0.05);
   hframe341->GetYaxis()->SetTitleSize(0.06);
   hframe341->GetYaxis()->SetTitleOffset(1.25);
   hframe341->GetYaxis()->SetTitleFont(42);
   hframe341->GetZaxis()->SetLabelFont(42);
   hframe341->GetZaxis()->SetLabelOffset(0.007);
   hframe341->GetZaxis()->SetLabelSize(0.05);
   hframe341->GetZaxis()->SetTitleSize(0.06);
   hframe341->GetZaxis()->SetTitleFont(42);
   hframe341->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_pt2->SetName("thsBackground_grouped_wh3l_plot_13TeV_pt2");
   thsBackground_grouped_wh3l_plot_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69","thsBackground_grouped_wh3l_plot_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->SetMinimum(-0.6818501);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->SetMaximum(38.5586);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_69);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_pt2342 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_pt2342","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(1,0.5152099);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(2,3.201205);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(3,6.417045);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(4,6.307659);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(5,1.355583);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(6,1.698453);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(7,-0.05586531);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(8,0.6657094);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(9,-0.2412287);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(10,-0.02643965);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(11,0.4084226);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(12,0.3541409);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(13,-0.0544572);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(14,-0.08818095);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(15,0.1520616);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(16,-0.01909467);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(17,-0.01470217);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(18,0.4410789);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(19,-0.01737082);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(20,-0.02338661);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(21,0.1013218);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(22,-0.0197091);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(23,-0.004633672);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinContent(26,0.0924228);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(1,0.9385746);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(2,1.726005);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(3,2.446298);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(4,2.152074);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(5,1.166237);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(6,1.007339);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(7,0.6259848);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(8,0.4859754);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(9,0.1234555);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(10,0.09315229);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(11,0.3627104);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(12,0.3215668);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(13,0.1037645);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(14,0.08818095);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(15,0.1076735);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(16,0.01909467);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(17,0.01470217);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(18,0.4410789);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(19,0.01661759);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(20,0.02338661);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(21,0.1013218);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(22,0.0197091);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(23,0.004633672);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetBinError(26,0.08305176);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetEntries(455);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2342->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_Fake_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_pt2343 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_pt2343","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinContent(4,0.04280537);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinContent(5,0.04311147);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinContent(6,0.01816071);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinError(4,0.02513505);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinError(5,0.02489195);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinError(6,0.01816071);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2343->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_WW_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_pt2344 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_pt2344","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(1,0.001795681);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(2,0.009722077);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(3,0.01607578);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(4,0.02597931);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(5,0.02597033);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(6,0.0250683);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(7,0.01749794);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(8,0.01210909);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(9,0.007764988);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(10,0.00621351);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(11,0.003803371);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(12,0.002762039);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(13,0.003387948);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(14,0.003860813);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(15,0.005523135);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(16,0.0008794748);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(17,0.002022636);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(18,0.001363917);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(19,-0.0006520349);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(20,0.0005211808);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(21,0.0004213759);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinContent(26,0.003936442);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(1,0.001076057);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(2,0.002736995);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(3,0.003309614);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(4,0.004098593);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(5,0.004295252);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(6,0.003955875);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(7,0.003848216);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(8,0.003046812);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(9,0.002207167);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(10,0.00190013);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(11,0.001836439);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(12,0.001315491);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(13,0.001436475);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(14,0.001589122);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(15,0.001872341);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(16,0.000622053);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(17,0.001174126);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(18,0.00132224);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(19,0.0006522296);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(20,0.0005211808);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(21,0.0004213759);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetBinError(26,0.001538159);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetEntries(351);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2344->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_VVV_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_pt2345 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_pt2345","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(1,0.05942902);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(2,3.007629);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(3,2.760195);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(4,0.8131255);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(5,0.6299228);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(6,0.1435628);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(7,0.1398395);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(12,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinContent(19,0.1076973);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(1,0.04232062);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(2,0.5684383);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(3,0.6169316);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(4,0.3624969);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(5,0.2541529);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(6,0.1685033);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(7,0.1171666);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(12,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetBinError(19,0.1076973);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetEntries(107);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2345->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_Vg_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_pt2346 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_pt2346","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(1,0.06194558);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(2,0.8048742);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(3,1.41933);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(4,1.684216);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(5,1.842649);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(6,0.8134922);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(7,0.5487191);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(8,0.6752113);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(9,0.1849212);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(10,0.2365967);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(11,0.09226277);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(12,0.04463009);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(13,0.03541288);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(14,0.08988248);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(15,0.06673842);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(16,0.04317268);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(18,0.04165012);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(19,0.04495105);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(20,0.01974776);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(21,0.04303389);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(23,0.06098055);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(25,0.08250155);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinContent(26,0.04044262);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(1,0.0387746);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(2,0.1818661);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(3,0.2527025);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(4,0.2657074);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(5,0.2707072);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(6,0.1800819);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(7,0.1429435);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(8,0.1707197);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(9,0.08678353);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(10,0.09292341);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(11,0.05752291);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(12,0.04463009);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(13,0.03541288);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(14,0.06356808);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(15,0.05038522);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(16,0.04317268);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(18,0.04165012);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(19,0.04495105);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(20,0.01974776);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(21,0.04303389);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(23,0.06098055);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(25,0.05834451);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetBinError(26,0.04044262);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetEntries(250);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2346->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_pt2347 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_pt2347","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(1,1.17546);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(2,8.968287);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(3,20.10179);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(4,27.52545);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(5,23.23661);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(6,12.53216);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(7,7.603827);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(8,4.732126);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(9,2.990616);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(10,1.922879);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(11,1.49956);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(12,1.208504);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(13,0.8761855);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(14,0.7087849);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(15,0.5776529);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(16,0.4151583);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(17,0.3476662);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(18,0.2533613);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(19,0.1819367);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(20,0.1960726);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(21,0.1634778);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(22,0.1309782);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(23,0.08953585);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(24,0.09217615);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(25,0.08113015);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinContent(26,0.5026728);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(1,0.07840056);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(2,0.2217685);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(3,0.3309292);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(4,0.3858141);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(5,0.355566);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(6,0.2613855);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(7,0.2038581);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(8,0.1607773);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(9,0.1274854);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(10,0.1019968);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(11,0.08961391);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(12,0.08092312);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(13,0.06809746);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(14,0.06206182);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(15,0.05578294);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(16,0.04764252);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(17,0.04375096);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(18,0.03668508);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(19,0.03101591);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(20,0.03250749);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(21,0.03007931);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(22,0.02584116);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(23,0.02208607);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(24,0.02146183);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(25,0.02163749);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetBinError(26,0.05238221);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetEntries(24096);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2347->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_WZ_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt2348 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt2348","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(1,0.03323588);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(2,0.1964933);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(3,0.3236076);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(4,0.3232354);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(5,0.259879);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(6,0.225535);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(7,0.1396435);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(8,0.08592689);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(9,0.07859417);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(10,0.05508459);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(11,0.03302175);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(12,0.03337515);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(13,0.02792658);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(14,0.01413244);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(15,0.006698372);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(16,0.005842597);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(17,0.00494247);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(18,0.004603903);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(19,0.004145002);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(20,0.004321857);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(21,0.001818897);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(25,0.001923633);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinContent(26,0.005812571);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(1,0.006833781);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(2,0.01523935);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(3,0.01931483);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(4,0.01993007);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(5,0.01736525);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(6,0.0167295);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(7,0.01238676);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(8,0.009600398);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(9,0.009422556);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(10,0.007980769);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(11,0.005956104);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(12,0.006019809);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(13,0.005867141);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(14,0.004112151);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(15,0.002581099);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(16,0.002230748);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(17,0.002104253);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(18,0.002148086);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(19,0.002379163);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(20,0.002107237);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(21,0.001002689);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(25,0.001459573);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetBinError(26,0.002865362);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2348->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt2,"");
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_pt2->SetName("thsSignal_grouped_wh3l_plot_13TeV_pt2");
   thsSignal_grouped_wh3l_plot_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70","thsSignal_grouped_wh3l_plot_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->SetMaximum(0.3603238);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_70);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt2349 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt2349","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(1,0.03323588);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(2,0.1964933);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(3,0.3236076);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(4,0.3232354);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(5,0.259879);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(6,0.225535);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(7,0.1396435);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(8,0.08592689);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(9,0.07859417);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(10,0.05508459);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(11,0.03302175);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(12,0.03337515);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(13,0.02792658);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(14,0.01413244);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(15,0.006698372);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(16,0.005842597);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(17,0.00494247);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(18,0.004603903);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(19,0.004145002);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(20,0.004321857);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(21,0.001818897);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(25,0.001923633);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinContent(26,0.005812571);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(1,0.006833781);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(2,0.01523935);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(3,0.01931483);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(4,0.01993007);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(5,0.01736525);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(6,0.0167295);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(7,0.01238676);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(8,0.009600398);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(9,0.009422556);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(10,0.007980769);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(11,0.005956104);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(12,0.006019809);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(13,0.005867141);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(14,0.004112151);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(15,0.002581099);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(16,0.002230748);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(17,0.002104253);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(18,0.002148086);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(19,0.002379163);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(20,0.002107237);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(21,0.001002689);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(25,0.001459573);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetBinError(26,0.002865362);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2349->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt2,"");
   thsSignal_grouped_wh3l_plot_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3069[25] = {
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
   Double_t _fy3069[25] = {
   1.81384,
   16.00784,
   30.74302,
   36.39924,
   27.13384,
   15.2309,
   8.254018,
   6.100459,
   2.942073,
   2.13925,
   2.004049,
   1.715886,
   0.8605291,
   0.7143473,
   0.801976,
   0.4401157,
   0.3349867,
   0.7374543,
   0.3165621,
   0.1929549,
   0.3082549,
   0.1112691,
   0.1458827,
   0.09217615,
   0.1636317};
   Double_t _felx3069[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3069[25] = {
   0.6932402,
   2.883539,
   4.146821,
   3.714257,
   2.116425,
   1.693199,
   1.094097,
   0.8595615,
   0.3475886,
   0.2901551,
   0.5261555,
   0.5643895,
   0.2093526,
   0.2170332,
   0.2204936,
   0.1106871,
   0.05979021,
   0.537287,
   0.2010435,
   0.07648747,
   0.1774827,
   0.04593242,
   0.08772676,
   0.02146183,
   0.08001303};
   Double_t _fehx3069[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3069[25] = {
   1.109966,
   2.883538,
   4.146822,
   3.714259,
   2.116425,
   1.716996,
   0.5242988,
   0.8595616,
   0.3475886,
   0.2234971,
   0.5261557,
   0.5643895,
   0.1602426,
   0.2170331,
   0.2204936,
   0.1106871,
   0.05979021,
   0.5372869,
   0.2010433,
   0.07648746,
   0.1774827,
   0.04593243,
   0.08772678,
   0.02146182,
   0.08001302};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3069,_fy3069,_felx3069,_fehx3069,_fely3069,_fehy3069);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3069 = new TH1F("Graph_Graph3069","",100,0,219);
   Graph_Graph3069->SetMinimum(0);
   Graph_Graph3069->SetMaximum(44.11903);
   Graph_Graph3069->SetDirectory(0);
   Graph_Graph3069->SetStats(0);
   Graph_Graph3069->SetLineStyle(0);
   Graph_Graph3069->SetMarkerStyle(20);
   Graph_Graph3069->GetXaxis()->SetLabelFont(42);
   Graph_Graph3069->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3069->GetXaxis()->SetTitleFont(42);
   Graph_Graph3069->GetYaxis()->SetLabelFont(42);
   Graph_Graph3069->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3069->GetYaxis()->SetTitleFont(42);
   Graph_Graph3069->GetZaxis()->SetLabelFont(42);
   Graph_Graph3069->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3069);
   
   grae->Draw("2");
   
   Double_t _fx3070[25] = {
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
   Double_t _fy3070[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3070[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3070[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3070[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3070[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3070,_fy3070,_felx3070,_fehx3070,_fely3070,_fehy3070);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3070 = new TH1F("Graph_Graph3070","",100,0,219);
   Graph_Graph3070->SetMinimum(0);
   Graph_Graph3070->SetMaximum(1.262698);
   Graph_Graph3070->SetDirectory(0);
   Graph_Graph3070->SetStats(0);
   Graph_Graph3070->SetLineStyle(0);
   Graph_Graph3070->SetMarkerStyle(20);
   Graph_Graph3070->GetXaxis()->SetLabelFont(42);
   Graph_Graph3070->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3070->GetXaxis()->SetTitleFont(42);
   Graph_Graph3070->GetYaxis()->SetLabelFont(42);
   Graph_Graph3070->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3070->GetYaxis()->SetTitleFont(42);
   Graph_Graph3070->GetZaxis()->SetLabelFont(42);
   Graph_Graph3070->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3070);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy350 = new TH1F("hframe_copy350","",1000,10,200);
   hframe_copy350->SetMinimum(0);
   hframe_copy350->SetMaximum(91.80619);
   hframe_copy350->SetDirectory(0);
   hframe_copy350->SetStats(0);
   hframe_copy350->SetLineStyle(0);
   hframe_copy350->SetMarkerStyle(20);
   hframe_copy350->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy350->GetXaxis()->SetNdivisions(506);
   hframe_copy350->GetXaxis()->SetLabelFont(42);
   hframe_copy350->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetXaxis()->SetLabelSize(0.05);
   hframe_copy350->GetXaxis()->SetTitleSize(0.06);
   hframe_copy350->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy350->GetXaxis()->SetTitleFont(42);
   hframe_copy350->GetYaxis()->SetTitle("Events");
   hframe_copy350->GetYaxis()->SetLabelFont(42);
   hframe_copy350->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetYaxis()->SetLabelSize(0.05);
   hframe_copy350->GetYaxis()->SetTitleSize(0.06);
   hframe_copy350->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy350->GetYaxis()->SetTitleFont(42);
   hframe_copy350->GetZaxis()->SetLabelFont(42);
   hframe_copy350->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetZaxis()->SetLabelSize(0.05);
   hframe_copy350->GetZaxis()->SetTitleSize(0.06);
   hframe_copy350->GetZaxis()->SetTitleFont(42);
   hframe_copy350->Draw("sameaxis");
   ccwh3l_plot_13TeV_pt2->Modified();
   ccwh3l_plot_13TeV_pt2->cd();
   ccwh3l_plot_13TeV_pt2->SetSelected(ccwh3l_plot_13TeV_pt2);
}
