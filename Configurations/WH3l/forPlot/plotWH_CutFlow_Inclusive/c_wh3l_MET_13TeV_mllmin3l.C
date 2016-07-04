void c_wh3l_MET_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 16:19:04 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_13TeV_mllmin3l->Range(-28,-39.09437,209.5,261.6316);
   ccwh3l_MET_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe151 = new TH1F("hframe151","",1000,10,200);
   hframe151->SetMinimum(0);
   hframe151->SetMaximum(246.5953);
   hframe151->SetDirectory(0);
   hframe151->SetStats(0);
   hframe151->SetLineStyle(0);
   hframe151->SetMarkerStyle(20);
   hframe151->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe151->GetXaxis()->SetNdivisions(506);
   hframe151->GetXaxis()->SetLabelFont(42);
   hframe151->GetXaxis()->SetLabelOffset(0.007);
   hframe151->GetXaxis()->SetLabelSize(0.05);
   hframe151->GetXaxis()->SetTitleSize(0.06);
   hframe151->GetXaxis()->SetTitleOffset(0.9);
   hframe151->GetXaxis()->SetTitleFont(42);
   hframe151->GetYaxis()->SetTitle("Events");
   hframe151->GetYaxis()->SetLabelFont(42);
   hframe151->GetYaxis()->SetLabelOffset(0.007);
   hframe151->GetYaxis()->SetLabelSize(0.05);
   hframe151->GetYaxis()->SetTitleSize(0.06);
   hframe151->GetYaxis()->SetTitleOffset(1.25);
   hframe151->GetYaxis()->SetTitleFont(42);
   hframe151->GetZaxis()->SetLabelFont(42);
   hframe151->GetZaxis()->SetLabelOffset(0.007);
   hframe151->GetZaxis()->SetLabelSize(0.05);
   hframe151->GetZaxis()->SetTitleSize(0.06);
   hframe151->GetZaxis()->SetTitleFont(42);
   hframe151->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31","thsBackground_grouped_wh3l_MET_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->SetMinimum(-0.2351953);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->SetMaximum(103.57);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_31);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(1,2.196155);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(2,8.552575);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(3,10.85586);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(4,16.03449);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(5,10.68019);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(6,12.4604);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(7,7.912476);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(8,5.697952);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(9,5.987374);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(10,1.351473);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(11,1.174722);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(12,1.188982);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(13,0.4430658);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(14,0.403857);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(15,0.05234175);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(16,0.7622859);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(17,-0.01955674);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(18,0.07077175);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(20,0.07030044);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinContent(21,0.326087);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(1,1.657083);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(2,2.343414);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(3,2.589795);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(4,3.415405);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(5,2.535042);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(6,2.813182);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(7,2.039428);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(8,1.881509);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(9,2.249326);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(10,1.122603);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(11,0.83822);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(12,0.6029247);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(13,0.2221485);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(14,0.3009133);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(15,0.07533913);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(16,0.6019507);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(17,0.01877668);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(18,0.07077175);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(20,0.07030044);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetBinError(21,0.3682949);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetEntries(1194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l152->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(1,0.02447761);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(2,0.04580987);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(4,0.09750091);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(6,0.04501287);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(7,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(9,0.02998172);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(13,0.03054333);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinContent(15,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(1,0.01662295);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(2,0.02714864);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(4,0.04039564);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(6,0.02601417);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(7,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(9,0.02122177);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(13,0.02182423);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetBinError(15,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetEntries(25);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l153->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(1,0.08289695);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(2,0.1609244);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(3,0.230412);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(4,0.2895967);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(5,0.2920691);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(6,0.2643612);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(7,0.304328);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(8,0.3966606);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(9,1.50878);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(10,0.1973305);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(11,0.07115509);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(12,0.06829492);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(13,0.04611983);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(14,0.02830985);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(15,0.02285763);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(16,0.01541749);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(17,0.02269239);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(18,0.01174365);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(19,0.03164066);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(20,0.009479785);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinContent(21,0.08599697);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(1,0.01317299);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(2,0.01924073);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(3,0.02177916);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(4,0.02486022);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(5,0.02439616);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(6,0.02256943);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(7,0.02465712);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(8,0.02716107);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(9,0.05131984);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(10,0.02004422);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(11,0.01451958);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(12,0.01294718);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(13,0.009559716);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(14,0.008739578);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(15,0.007802017);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(16,0.006993343);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(17,0.007840282);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(18,0.004938026);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(19,0.008722591);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(20,0.004566467);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetBinError(21,0.01402695);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetEntries(3817);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l154->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(1,1.869968);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(2,1.473994);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(3,1.148438);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(4,1.772771);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(5,2.715042);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(6,1.292014);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(7,-0.00599489);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(8,0.2010648);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(9,0.9999423);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(10,-0.107833);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(12,0.1819414);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(13,0.09785095);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinContent(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(1,0.4287597);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(2,0.516892);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(3,0.4429117);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(4,0.4597801);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(5,0.54027);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(6,0.4187115);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(7,0.2292004);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(8,0.2013156);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(9,0.4538269);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(10,0.107833);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(12,0.1332888);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(13,0.09785095);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetBinError(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetEntries(194);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l155->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(1,0.5761161);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(2,0.7536209);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(3,1.002405);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(4,1.067198);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(5,0.7090736);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(6,1.20433);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(7,1.392702);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(8,0.9506212);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(9,4.465332);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(10,0.429411);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(11,0.04805082);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(12,0.0476643);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(13,0.04545766);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinContent(21,0.04204432);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(1,0.1545371);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(2,0.172119);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(3,0.2076186);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(4,0.2113902);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(5,0.1734434);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(6,0.2243542);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(7,0.2398924);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(8,0.1970213);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(9,0.4273317);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(10,0.1286237);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(11,0.04805082);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(12,0.0476643);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(13,0.04545766);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetBinError(21,0.04204432);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetEntries(350);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l156->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(1,6.606704);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(2,10.80912);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(3,14.4725);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(4,16.8211);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(5,17.21004);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(6,16.94066);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(7,17.36816);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(8,22.53809);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(9,84.82929);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(10,7.860958);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(11,1.504667);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(12,0.8552925);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(13,0.6794584);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(14,0.393402);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(15,0.2772951);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(16,0.2478481);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(17,0.1867409);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(18,0.1309172);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(19,0.1077045);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(20,0.1105501);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinContent(21,0.7929298);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(1,0.1893279);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(2,0.2425058);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(3,0.2805013);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(4,0.3034129);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(5,0.3059232);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(6,0.3029867);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(7,0.3071073);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(8,0.3498524);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(9,0.6790236);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(10,0.205971);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(11,0.08914647);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(12,0.06831476);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(13,0.06087772);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(14,0.04650027);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(15,0.03898163);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(16,0.03642531);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(17,0.03144755);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(18,0.02628876);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(19,0.02373245);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(20,0.02368799);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetBinError(21,0.06446415);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetEntries(45061);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l157->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(1,0.1900087);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(2,0.3435769);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(3,0.4183901);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(4,0.387482);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(5,0.3760234);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(6,0.2652619);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(7,0.2062946);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(8,0.2280475);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(9,0.8174081);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(10,0.0679643);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(11,0.0103081);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(12,0.005969136);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(1,0.01553523);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(2,0.02090073);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(3,0.02193355);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(4,0.02083404);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(5,0.01977738);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(6,0.01640111);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(7,0.0137419);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(8,0.01435109);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(9,0.02707179);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(10,0.007750717);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(11,0.002995927);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(12,0.002355716);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l158->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32","thsSignal_grouped_wh3l_MET_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->SetMaximum(0.8867039);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_32);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(1,0.1900087);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(2,0.3435769);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(3,0.4183901);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(4,0.387482);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(5,0.3760234);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(6,0.2652619);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(7,0.2062946);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(8,0.2280475);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(9,0.8174081);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(10,0.0679643);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(11,0.0103081);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(12,0.005969136);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(1,0.01553523);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(2,0.02090073);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(3,0.02193355);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(4,0.02083404);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(5,0.01977738);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(6,0.01640111);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(7,0.0137419);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(8,0.01435109);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(9,0.02707179);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(10,0.007750717);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(11,0.002995927);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(12,0.002355716);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l159->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3031[20] = {
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
   Double_t _fy3031[20] = {
   11.35632,
   21.79604,
   27.72573,
   36.08265,
   31.60642,
   32.20677,
   26.98714,
   29.78439,
   97.82069,
   9.745548,
   2.871849,
   2.342175,
   1.342496,
   0.8578037,
   0.3688188,
   1.025551,
   0.1898765,
   0.2134326,
   0.1925855,
   0.1903303};
   Double_t _felx3031[20] = {
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
   Double_t _fely3031[20] = {
   2.60734,
   4.501987,
   5.241152,
   7.198601,
   5.210207,
   5.811893,
   4.008553,
   3.373187,
   4.963074,
   1.687347,
   1.142331,
   0.9629741,
   0.4858527,
   0.4057224,
   0.1193747,
   0.6985369,
   0.06302024,
   0.1057046,
   0.09330653,
   0.1020355};
   Double_t _fehx3031[20] = {
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
   Double_t _fehy3031[20] = {
   2.605139,
   4.501498,
   5.239556,
   7.1965,
   5.208736,
   5.811463,
   3.850894,
   3.369119,
   4.921333,
   1.684684,
   1.142222,
   0.9627856,
   0.4857498,
   0.405679,
   0.1416344,
   0.6985646,
   0.06290156,
   0.1056804,
   0.1105266,
   0.1020667};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,219);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(113.0074);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineStyle(0);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetLabelFont(42);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3031->GetXaxis()->SetTitleFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3031->GetYaxis()->SetTitleFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2");
   
   Double_t _fx3032[20] = {
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
   Double_t _fy3032[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3032[20] = {
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
   Double_t _fely3032[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3032[20] = {
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
   Double_t _fehy3032[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,219);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(1.262698);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineStyle(0);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetLabelFont(42);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3032->GetXaxis()->SetTitleFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3032->GetYaxis()->SetTitleFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy160 = new TH1F("hframe_copy160","",1000,10,200);
   hframe_copy160->SetMinimum(0);
   hframe_copy160->SetMaximum(246.5953);
   hframe_copy160->SetDirectory(0);
   hframe_copy160->SetStats(0);
   hframe_copy160->SetLineStyle(0);
   hframe_copy160->SetMarkerStyle(20);
   hframe_copy160->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy160->GetXaxis()->SetNdivisions(506);
   hframe_copy160->GetXaxis()->SetLabelFont(42);
   hframe_copy160->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetXaxis()->SetLabelSize(0.05);
   hframe_copy160->GetXaxis()->SetTitleSize(0.06);
   hframe_copy160->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy160->GetXaxis()->SetTitleFont(42);
   hframe_copy160->GetYaxis()->SetTitle("Events");
   hframe_copy160->GetYaxis()->SetLabelFont(42);
   hframe_copy160->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetYaxis()->SetLabelSize(0.05);
   hframe_copy160->GetYaxis()->SetTitleSize(0.06);
   hframe_copy160->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy160->GetYaxis()->SetTitleFont(42);
   hframe_copy160->GetZaxis()->SetLabelFont(42);
   hframe_copy160->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetZaxis()->SetLabelSize(0.05);
   hframe_copy160->GetZaxis()->SetTitleSize(0.06);
   hframe_copy160->GetZaxis()->SetTitleFont(42);
   hframe_copy160->Draw("sameaxis");
   ccwh3l_MET_13TeV_mllmin3l->Modified();
   ccwh3l_MET_13TeV_mllmin3l->cd();
   ccwh3l_MET_13TeV_mllmin3l->SetSelected(ccwh3l_MET_13TeV_mllmin3l);
}
