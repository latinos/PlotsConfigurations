void c_wh3l_noMET_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_noMET_13TeV_pt3/cc
//=========  (Wed Jun 29 01:51:36 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_noMET_13TeV_pt3 = new TCanvas("ccwh3l_noMET_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_noMET_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_noMET_13TeV_pt3->Range(-28,-32.37036,209.5,216.6324);
   ccwh3l_noMET_13TeV_pt3->SetFillColor(0);
   ccwh3l_noMET_13TeV_pt3->SetBorderMode(0);
   ccwh3l_noMET_13TeV_pt3->SetBorderSize(2);
   ccwh3l_noMET_13TeV_pt3->SetTickx(1);
   ccwh3l_noMET_13TeV_pt3->SetTicky(1);
   ccwh3l_noMET_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_noMET_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_noMET_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_noMET_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_noMET_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_noMET_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe71 = new TH1F("hframe71","",1000,10,200);
   hframe71->SetMinimum(0);
   hframe71->SetMaximum(204.1823);
   hframe71->SetDirectory(0);
   hframe71->SetStats(0);
   hframe71->SetLineStyle(0);
   hframe71->SetMarkerStyle(20);
   hframe71->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_noMET_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->SetName("thsBackground_grouped_wh3l_noMET_13TeV_pt3");
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_noMET_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15 = new TH1F("thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15","thsBackground_grouped_wh3l_noMET_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->SetMinimum(-0.09350085);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->SetMaximum(85.75657);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_noMET_13TeV_pt3_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_noMET_13TeV_pt372 = new TH1D("new_histo_group_Fake_wh3l_noMET_13TeV_pt372","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(1,25.4103);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(2,10.34955);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(3,0.5108979);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(4,1.043622);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(5,0.9022339);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(6,-0.05454291);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(7,0.1340049);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(8,0.07122875);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(10,0.06912838);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(11,-0.01470217);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinContent(13,-0.02845447);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(1,4.848383);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(2,2.137911);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(3,0.4621594);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(4,0.6616782);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(5,0.5032674);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(6,0.03895794);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(7,0.1121962);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(8,0.07122875);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(10,0.06912838);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(11,0.01470217);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetBinError(13,0.02845447);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetEntries(607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetFillColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->SetLineColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt372->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->Add(new_histo_group_Fake_wh3l_noMET_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_noMET_13TeV_pt373 = new TH1D("new_histo_group_WW_wh3l_noMET_13TeV_pt373","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinContent(1,0.1546986);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinContent(2,0.07406186);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinContent(3,0.02758511);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinContent(4,0.009663942);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinContent(6,0.01582978);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinError(1,0.05036035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinError(2,0.03360382);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinError(3,0.01952944);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinError(4,0.009663942);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetBinError(6,0.01582978);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetEntries(19);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetFillColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->SetLineColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt373->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->Add(new_histo_group_WW_wh3l_noMET_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_noMET_13TeV_pt374 = new TH1D("new_histo_group_VVV_wh3l_noMET_13TeV_pt374","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(1,0.0009950438);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(2,0.002136741);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(3,0.003907349);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(4,0.001151339);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(5,0.0006836765);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(6,0.001603657);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(7,0.00182944);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(8,0.001304739);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(9,0.0007143628);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinContent(10,0.0005289153);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(1,0.001239648);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(2,0.001133191);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(3,0.00154619);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(4,0.000818334);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(5,0.0006836765);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(6,0.000937701);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(7,0.001074416);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(8,0.0008209247);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(9,0.0007143628);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetBinError(10,0.0005289153);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetEntries(29);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetFillColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->SetLineColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt374->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->Add(new_histo_group_VVV_wh3l_noMET_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_noMET_13TeV_pt375 = new TH1D("new_histo_group_Vg_wh3l_noMET_13TeV_pt375","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(1,46.25557);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(2,27.81225);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(3,3.995687);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(4,0.8153924);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(5,0.5242593);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(6,0.3063096);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(7,0.1141894);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(8,0.3404592);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(9,0.2456419);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(11,0.1147983);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinContent(20,0.104439);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(1,2.519651);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(2,1.953838);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(3,0.765099);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(4,0.3338737);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(5,0.2174245);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(6,0.1807848);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(7,0.1916892);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(8,0.1968022);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(9,0.1746253);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(11,0.1147983);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetBinError(20,0.104439);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetEntries(1050);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetFillColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->SetLineColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt375->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->Add(new_histo_group_Vg_wh3l_noMET_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_noMET_13TeV_pt376 = new TH1D("new_histo_group_ZZ_wh3l_noMET_13TeV_pt376","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(1,1.255348);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(2,0.8056558);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(3,0.2974126);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(4,0.3504481);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(5,0.3939016);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(6,0.2941499);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(7,0.1114254);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(8,0.1754776);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(10,0.04905465);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(11,0.1267164);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(14,0.04134612);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinContent(26,0.03538685);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(1,0.2259581);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(2,0.182013);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(3,0.1074684);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(4,0.1208858);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(5,0.1257969);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(6,0.106457);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(7,0.06735204);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(8,0.08789951);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(10,0.04905465);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(11,0.06923734);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(14,0.04134612);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetBinError(26,0.03538685);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetEntries(105);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt376->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_noMET_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_noMET_13TeV_pt377 = new TH1D("new_histo_group_WZ_wh3l_noMET_13TeV_pt377","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(1,8.133912);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(2,4.409002);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(3,2.231507);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(4,1.427331);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(5,1.104538);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(6,0.5250523);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(7,0.3970892);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(8,0.298862);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(9,0.180888);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(10,0.1202759);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(11,0.0625071);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(12,0.08118095);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(13,0.07174833);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(14,0.01972193);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(15,0.01392386);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(16,0.04300995);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(17,0.029114);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(18,0.01533083);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(19,0.003408781);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(20,0.005628261);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(21,0.006291073);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(23,0.01006356);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(24,0.005675652);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(25,0.005814016);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinContent(26,0.00996888);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(1,0.2104409);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(2,0.1557696);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(3,0.1105325);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(4,0.08799495);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(5,0.07704484);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(6,0.05310912);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(7,0.04610107);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(8,0.04014085);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(9,0.03017397);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(10,0.02537094);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(11,0.01855904);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(12,0.0212606);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(13,0.01927981);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(14,0.01019955);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(15,0.009137892);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(16,0.01497085);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(17,0.01310812);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(18,0.009053287);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(19,0.003408781);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(20,0.005628261);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(21,0.006291073);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(23,0.00733257);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(24,0.005675652);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(25,0.005814016);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetBinError(26,0.007110243);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetEntries(3898);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetFillColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->SetLineColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt377->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->Add(new_histo_group_WZ_wh3l_noMET_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_pt378 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_pt378","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(1,0.4620904);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(2,0.3668289);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(3,0.1915747);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(4,0.1090943);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(5,0.05369756);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(6,0.02410647);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(7,0.0142094);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(8,0.01302325);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(9,0.001288333);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(10,0.002251168);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(11,-0.0001113016);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinContent(16,0.0006308894);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(1,0.02268567);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(2,0.02068384);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(3,0.01513852);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(4,0.01152603);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(5,0.007927843);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(6,0.005375352);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(7,0.003946335);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(8,0.004151313);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(9,0.0009539556);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(10,0.001854013);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(11,0.0003762221);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetBinError(16,0.0004213043);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt378->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_pt3,"");
   thsBackground_grouped_wh3l_noMET_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_noMET_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_noMET_13TeV_pt3->SetName("thsSignal_grouped_wh3l_noMET_13TeV_pt3");
   thsSignal_grouped_wh3l_noMET_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_noMET_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16 = new TH1F("thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16","thsSignal_grouped_wh3l_noMET_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->SetMinimum(-0.0004875237);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->SetMaximum(0.5090148);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_noMET_13TeV_pt3_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_pt379 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_pt379","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(1,0.4620904);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(2,0.3668289);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(3,0.1915747);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(4,0.1090943);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(5,0.05369756);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(6,0.02410647);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(7,0.0142094);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(8,0.01302325);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(9,0.001288333);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(10,0.002251168);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(11,-0.0001113016);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinContent(16,0.0006308894);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(1,0.02268567);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(2,0.02068384);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(3,0.01513852);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(4,0.01152603);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(5,0.007927843);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(6,0.005375352);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(7,0.003946335);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(8,0.004151313);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(9,0.0009539556);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(10,0.001854013);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(11,0.0003762221);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetBinError(16,0.0004213043);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt379->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_pt3,"");
   thsSignal_grouped_wh3l_noMET_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3015[25] = {
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
   Double_t _fy3015[25] = {
   81.21083,
   43.45266,
   7.066998,
   3.647609,
   2.925617,
   1.088402,
   0.7585384,
   0.8873323,
   0.4272443,
   0.2389879,
   0.2893197,
   0.08118095,
   0.04329386,
   0.06106804,
   0.01392386,
   0.04300995,
   0.029114,
   0.01533083,
   0.003408781,
   0.1100673,
   0.006291073,
   0,
   0.01006356,
   0.005675652,
   0.005814016};
   Double_t _felx3015[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3015[25] = {
   12.33651,
   5.861528,
   1.485043,
   1.269519,
   0.9777669,
   0.3972915,
   0.3443883,
   0.3982922,
   0.2057059,
   0.1461961,
   0.2177801,
   0.02151238,
   0.04890302,
   0.05173149,
   0.009156065,
   0.01510906,
   0.01317925,
   0.009093164,
   0.003413261,
   0.1102825,
   0.006291273,
   0,
   0.007334187,
   0.005677644,
   0.005816361};
   Double_t _fehx3015[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3015[25] = {
   12.3016,
   5.859199,
   1.485024,
   1.269504,
   0.9776658,
   0.3971708,
   0.4212416,
   0.3982547,
   0.20569,
   0.1461975,
   0.2178064,
   0.02148721,
   0.04886411,
   0.05172958,
   0.009159505,
   0.01511257,
   0.01317515,
   0.0090831,
   0.00341371,
   0.1102594,
   0.006291275,
   0,
   0.007333824,
   0.005677789,
   0.005816475};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,219);
   Graph_Graph3015->SetMinimum(-9.357413);
   Graph_Graph3015->SetMaximum(102.8642);
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
   
   Double_t _fx3016[25] = {
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
   Double_t _fy3016[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3016[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3016[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3016[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3016[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,219);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,10,200);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(204.1823);
   hframe_copy80->SetDirectory(0);
   hframe_copy80->SetStats(0);
   hframe_copy80->SetLineStyle(0);
   hframe_copy80->SetMarkerStyle(20);
   hframe_copy80->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
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
   ccwh3l_noMET_13TeV_pt3->Modified();
   ccwh3l_noMET_13TeV_pt3->cd();
   ccwh3l_noMET_13TeV_pt3->SetSelected(ccwh3l_noMET_13TeV_pt3);
}
