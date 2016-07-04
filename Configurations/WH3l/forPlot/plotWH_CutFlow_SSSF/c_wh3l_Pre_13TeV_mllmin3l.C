void c_wh3l_Pre_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 01:22:03 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_mllmin3l = new TCanvas("ccwh3l_Pre_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_mllmin3l->Range(-28,-2.406769,209.5,16.10684);
   ccwh3l_Pre_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_Pre_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_Pre_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe301 = new TH1F("hframe301","",1000,10,200);
   hframe301->SetMinimum(0);
   hframe301->SetMaximum(15.18116);
   hframe301->SetDirectory(0);
   hframe301->SetStats(0);
   hframe301->SetLineStyle(0);
   hframe301->SetMarkerStyle(20);
   hframe301->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe301->GetXaxis()->SetNdivisions(506);
   hframe301->GetXaxis()->SetLabelFont(42);
   hframe301->GetXaxis()->SetLabelOffset(0.007);
   hframe301->GetXaxis()->SetLabelSize(0.05);
   hframe301->GetXaxis()->SetTitleSize(0.06);
   hframe301->GetXaxis()->SetTitleOffset(0.9);
   hframe301->GetXaxis()->SetTitleFont(42);
   hframe301->GetYaxis()->SetTitle("Events");
   hframe301->GetYaxis()->SetLabelFont(42);
   hframe301->GetYaxis()->SetLabelOffset(0.007);
   hframe301->GetYaxis()->SetLabelSize(0.05);
   hframe301->GetYaxis()->SetTitleSize(0.06);
   hframe301->GetYaxis()->SetTitleOffset(1.25);
   hframe301->GetYaxis()->SetTitleFont(42);
   hframe301->GetZaxis()->SetLabelFont(42);
   hframe301->GetZaxis()->SetLabelOffset(0.007);
   hframe301->GetZaxis()->SetLabelSize(0.05);
   hframe301->GetZaxis()->SetTitleSize(0.06);
   hframe301->GetZaxis()->SetTitleFont(42);
   hframe301->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61","thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetMinimum(-0.602125);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetMaximum(7.986197);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(1,-0.2902164);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(2,1.21741);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(3,4.359985);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(4,2.661658);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(5,2.747349);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(6,5.9574);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(7,0.7922137);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(8,0.6493608);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(9,2.575329);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(10,-0.1202361);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(11,0.6729458);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(12,0.5784755);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(13,0.2141933);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(15,0.0706914);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(21,0.07334239);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(1,0.3119087);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(2,0.7659588);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(3,1.540071);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(4,1.073021);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(5,0.989761);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(6,1.648502);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(7,0.5025124);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(8,0.4707124);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(9,1.051078);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(10,0.2216248);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(11,0.4768716);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(12,0.6099518);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(13,0.1907643);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(15,0.0706914);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(21,0.08044876);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(1,0.004448378);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(2,0.01528641);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(3,0.03611739);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(6,0.03178083);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(7,0.04733625);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(8,0.01039136);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(13,0.01672248);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(15,0.01632439);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(16,0.01708511);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(1,0.004448378);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(2,0.01528641);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(3,0.02359763);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(6,0.0224726);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(7,0.0274253);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(8,0.01039136);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(13,0.01672248);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(15,0.01632439);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(16,0.01708511);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(1,0.002893069);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(2,0.01617291);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(3,0.02732162);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(4,0.04460226);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(5,0.04214618);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(6,0.02746847);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(7,0.04439091);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(8,0.02044008);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(9,0.02422944);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(10,0.01949375);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(11,0.003610137);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(12,0.01382457);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(13,0.02281626);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(14,-0.000275606);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(15,0.01020326);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(16,0.009785669);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(17,0.01052757);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(18,0.001560374);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(19,0.002590311);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(20,0.004777247);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(21,0.01949743);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(1,0.003976863);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(2,0.008964571);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(3,0.007878804);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(4,0.009762177);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(5,0.01050662);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(6,0.007708798);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(7,0.01019301);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(8,0.007000344);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(9,0.00978146);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(10,0.007256853);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(11,0.005859869);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(12,0.005751002);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(13,0.007055709);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(14,0.003628448);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(15,0.004907501);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(16,0.005100537);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(17,0.004828598);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(18,0.001560374);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(19,0.002590311);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(20,0.003387675);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(21,0.006370956);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(1,0.05367466);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(2,0.0655992);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(3,0.09921031);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(5,0.196876);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(6,-0.1061193);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(7,-0.1093623);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(1,0.05367466);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(2,0.05394478);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(3,0.2050252);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(5,0.1433916);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(6,0.1061193);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(7,0.1093623);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(3,0.07785033);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(5,0.08753125);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(3,0.05530859);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(5,0.06214201);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(1,0.05563692);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(2,0.1124022);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(3,0.3108019);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(4,0.3697234);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(5,0.246102);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(6,0.1116207);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(7,0.05942884);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(8,0.05392682);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(9,0.04248662);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(10,0.02380602);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(11,0.01541255);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(12,0.01751737);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(13,0.01918056);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(14,0.005757124);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(15,0.01062165);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(16,0.007369274);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(17,0.008007955);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(21,0.02521976);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(1,0.01658175);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(2,0.02526252);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(3,0.0409235);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(4,0.04596285);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(5,0.03662357);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(6,0.02370985);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(7,0.01811713);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(8,0.0176886);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(9,0.0154396);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(10,0.01204915);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(11,0.008925319);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(12,0.009456383);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(13,0.01019634);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(14,0.005757124);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(15,0.007524439);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(16,0.005211255);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(17,0.005931127);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(21,0.01142214);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(1,0.04681288);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(2,0.09346081);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(3,0.09977934);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(4,0.08281289);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(5,0.08655833);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(6,0.05031365);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(7,0.02621761);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(8,0.007912284);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(9,0.004606432);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(10,0.0008359845);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(12,0.0002088432);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(13,0.0003793327);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(14,0.0001418516);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(1,0.007811938);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(2,0.01101231);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(3,0.01047458);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(4,0.009196311);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(5,0.00932565);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(6,0.006300907);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(7,0.004815522);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(8,0.001869354);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(9,0.0014374);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(10,0.0004399068);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(12,0.0002088432);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(13,0.0003793327);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(14,0.0001418516);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62","thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetMaximum(0.1157666);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(1,0.04681288);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(2,0.09346081);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(3,0.09977934);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(4,0.08281289);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(5,0.08655833);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(6,0.05031365);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(7,0.02621761);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(8,0.007912284);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(9,0.004606432);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(10,0.0008359845);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(12,0.0002088432);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(13,0.0003793327);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(14,0.0001418516);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(1,0.007811938);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(2,0.01101231);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(3,0.01047458);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(4,0.009196311);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(5,0.00932565);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(6,0.006300907);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(7,0.004815522);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(8,0.001869354);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(9,0.0014374);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(10,0.0004399068);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(12,0.0002088432);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(13,0.0003793327);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(14,0.0001418516);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3061[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3061[20] = {
   -0.1735634,
   1.42687,
   4.911287,
   3.075984,
   3.320004,
   6.022151,
   0.8340074,
   0.7341191,
   2.642045,
   -0.07693633,
   0.6919685,
   0.6098174,
   0.2729126,
   0.005481518,
   0.1078407,
   0.03424005,
   0.01853552,
   0.001560374,
   0.002590311,
   0.004777247};
   Double_t _felx3061[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3061[20] = {
   0.4025569,
   0.9684032,
   2.335021,
   1.464201,
   1.571686,
   2.760262,
   0.7241728,
   0.5548896,
   1.40409,
   0.2453689,
   0.543146,
   0.6274076,
   0.2379503,
   0.009390982,
   0.1029914,
   0.02910734,
   0.01507083,
   0.002207554,
   0.003664618,
   0.00585841};
   Double_t _fehx3061[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3061[20] = {
   0.3826495,
   0.9683801,
   2.41608,
   1.46419,
   1.571674,
   2.760262,
   0.7241719,
   0.5548872,
   1.40409,
   0.1470267,
   0.545174,
   0.6572759,
   0.2379406,
   0.006040121,
   0.1029912,
   0.02910313,
   0.0150678,
   0.002207575,
   0.003664665,
   0.005858449};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3061,_fy3061,_felx3061,_fehx3061,_fely3061,_fehy3061);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3061 = new TH1F("Graph_Graph3061","",100,0,219);
   Graph_Graph3061->SetMinimum(-1.511974);
   Graph_Graph3061->SetMaximum(9.718266);
   Graph_Graph3061->SetDirectory(0);
   Graph_Graph3061->SetStats(0);
   Graph_Graph3061->SetLineStyle(0);
   Graph_Graph3061->SetMarkerStyle(20);
   Graph_Graph3061->GetXaxis()->SetLabelFont(42);
   Graph_Graph3061->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3061->GetXaxis()->SetTitleFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3061->GetYaxis()->SetTitleFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3061);
   
   grae->Draw("2");
   
   Double_t _fx3062[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3062[20] = {
   2,
   2,
   4,
   0,
   1,
   2,
   0,
   1,
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
   Double_t _felx3062[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3062[20] = {
   1.29183,
   1.29183,
   1.914367,
   0,
   0.8272524,
   1.29183,
   0,
   0.8272524,
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
   Double_t _fehx3062[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3062[20] = {
   2.63791,
   2.63791,
   3.162815,
   1.147908,
   2.29957,
   2.63791,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(20,_fx3062,_fy3062,_felx3062,_fehx3062,_fely3062,_fehy3062);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3062 = new TH1F("Graph_Graph3062","",100,0,219);
   Graph_Graph3062->SetMinimum(0);
   Graph_Graph3062->SetMaximum(7.879097);
   Graph_Graph3062->SetDirectory(0);
   Graph_Graph3062->SetStats(0);
   Graph_Graph3062->SetLineStyle(0);
   Graph_Graph3062->SetMarkerStyle(20);
   Graph_Graph3062->GetXaxis()->SetLabelFont(42);
   Graph_Graph3062->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3062->GetXaxis()->SetTitleFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3062->GetYaxis()->SetTitleFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3062);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy310 = new TH1F("hframe_copy310","",1000,10,200);
   hframe_copy310->SetMinimum(0);
   hframe_copy310->SetMaximum(15.18116);
   hframe_copy310->SetDirectory(0);
   hframe_copy310->SetStats(0);
   hframe_copy310->SetLineStyle(0);
   hframe_copy310->SetMarkerStyle(20);
   hframe_copy310->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy310->GetXaxis()->SetNdivisions(506);
   hframe_copy310->GetXaxis()->SetLabelFont(42);
   hframe_copy310->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetXaxis()->SetLabelSize(0.05);
   hframe_copy310->GetXaxis()->SetTitleSize(0.06);
   hframe_copy310->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy310->GetXaxis()->SetTitleFont(42);
   hframe_copy310->GetYaxis()->SetTitle("Events");
   hframe_copy310->GetYaxis()->SetLabelFont(42);
   hframe_copy310->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetYaxis()->SetLabelSize(0.05);
   hframe_copy310->GetYaxis()->SetTitleSize(0.06);
   hframe_copy310->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy310->GetYaxis()->SetTitleFont(42);
   hframe_copy310->GetZaxis()->SetLabelFont(42);
   hframe_copy310->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetZaxis()->SetLabelSize(0.05);
   hframe_copy310->GetZaxis()->SetTitleSize(0.06);
   hframe_copy310->GetZaxis()->SetTitleFont(42);
   hframe_copy310->Draw("sameaxis");
   ccwh3l_Pre_13TeV_mllmin3l->Modified();
   ccwh3l_Pre_13TeV_mllmin3l->cd();
   ccwh3l_Pre_13TeV_mllmin3l->SetSelected(ccwh3l_Pre_13TeV_mllmin3l);
}
