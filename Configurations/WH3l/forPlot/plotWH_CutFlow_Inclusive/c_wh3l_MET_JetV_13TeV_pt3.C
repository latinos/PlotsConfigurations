void c_wh3l_MET_JetV_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_pt3/cc
//=========  (Sun Jul  3 16:19:00 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_pt3 = new TCanvas("ccwh3l_MET_JetV_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_pt3->Range(-7.999999,-8.283649,104.5,55.43673);
   ccwh3l_MET_JetV_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe71 = new TH1F("hframe71","",1000,10,100);
   hframe71->SetMinimum(0);
   hframe71->SetMaximum(52.25071);
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15","thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3",25,10,100);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->SetMinimum(-0.2348008);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->SetMaximum(21.9453);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372","histo_Fake",25,10,100);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(1,10.03597);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(2,3.22432);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(3,2.800993);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(4,2.03903);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(5,0.5883832);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(6,0.7250295);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(7,0.8076717);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(8,0.5509502);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(9,0.1775917);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(10,-0.1072496);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(11,0.2469994);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(12,0.1782855);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(13,-0.01370889);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(14,0.04372698);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(16,-0.02843639);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(17,-0.02162022);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(22,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinContent(26,-0.05969961);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(1,2.757349);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(2,2.134143);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(3,1.615458);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(4,1.029897);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(5,0.7904939);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(6,0.642463);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(7,0.7352716);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(8,0.587792);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(9,0.3307276);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(10,0.1275512);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(11,0.2776542);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(12,0.129138);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(13,0.01316264);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(14,0.0804381);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(16,0.02843639);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(17,0.02162022);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(22,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetBinError(26,0.03480045);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetEntries(453);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt372->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373","histo_WW",25,10,100);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinContent(1,0.05167476);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinContent(2,0.05411973);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinContent(3,0.02852406);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinContent(4,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinContent(7,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinError(1,0.02986957);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinError(2,0.02776861);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinError(3,0.0201697);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinError(4,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetBinError(7,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt373->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374","histo_VVV",25,10,100);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(1,0.07641085);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(2,0.1003639);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(3,0.1179246);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(4,0.09793055);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(5,0.09618901);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(6,0.08991379);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(7,0.08024453);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(8,0.06304447);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(9,0.0446478);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(10,0.05837361);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(11,0.03424357);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(12,0.03510595);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(13,0.01837869);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(14,0.008089511);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(15,0.02250849);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(16,0.008882284);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(17,0.004081457);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(18,0.005287494);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(19,0.009216538);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(20,0.01074691);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(21,0.003599896);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(22,0.007538599);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(23,-0.000564634);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(24,0.00180645);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(25,0.002929666);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinContent(26,0.01426536);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(1,0.01425782);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(2,0.01450127);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(3,0.01617223);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(4,0.01588832);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(5,0.01402662);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(6,0.01273876);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(7,0.01375967);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(8,0.01110773);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(9,0.01003161);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(10,0.01103258);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(11,0.00802377);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(12,0.008491494);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(13,0.007683463);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(14,0.003576326);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(15,0.006489155);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(16,0.004216735);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(17,0.002307775);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(18,0.003103081);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(19,0.004107161);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(20,0.004356521);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(21,0.003995188);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(22,0.004039123);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(23,0.000564634);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(24,0.00180645);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(25,0.002929666);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetBinError(26,0.005099699);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetEntries(806);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt374->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375","histo_Vg",25,10,100);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(1,1.290696);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(2,1.854965);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(3,2.071959);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(4,1.524284);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(5,0.5035375);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(6,0.1905588);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(8,-0.09539273);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(11,0.295315);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinContent(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(1,0.4320614);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(2,0.4685552);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(3,0.4704215);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(4,0.4491027);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(5,0.2653182);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(6,0.125851);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(8,0.09539273);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(11,0.1733317);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetBinError(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt375->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376","histo_ZZ",25,10,100);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(1,0.8576262);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(2,0.8256743);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(3,1.426021);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(4,0.7757247);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(5,0.9300559);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(6,0.6498122);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(7,0.4490008);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(8,0.3983844);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(9,0.3647659);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(10,0.2108571);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(11,0.1447433);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(12,0.1996585);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(16,0.08973357);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(17,0.01974776);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(19,0.04241135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinContent(22,0.04463009);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(1,0.1932348);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(2,0.1830825);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(3,0.2459523);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(4,0.1777897);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(5,0.1960727);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(6,0.1669843);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(7,0.1308176);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(8,0.134183);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(9,0.1223104);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(10,0.09486868);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(11,0.07702153);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(12,0.09084631);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(16,0.0634774);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(17,0.01974776);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(19,0.04241135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetBinError(22,0.04463009);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetEntries(200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt376->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377","histo_WZ",25,10,100);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(1,8.232278);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(2,11.55948);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(3,14.20548);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(4,15.66738);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(5,15.41729);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(6,13.94309);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(7,11.2922);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(8,8.484834);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(9,5.922122);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(10,3.562313);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(11,2.206312);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(12,1.746796);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(13,1.145534);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(14,0.8723912);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(15,0.6512174);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(16,0.5309763);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(17,0.4220462);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(18,0.420896);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(19,0.3062724);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(20,0.2104545);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(21,0.1467611);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(22,0.1382943);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(23,0.107245);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(24,0.2203081);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(25,0.05958882);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinContent(26,0.5943415);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(1,0.2102747);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(2,0.251411);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(3,0.2790285);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(4,0.2923575);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(5,0.2898177);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(6,0.2751805);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(7,0.2469325);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(8,0.2142373);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(9,0.1796273);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(10,0.1388778);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(11,0.108734);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(12,0.0973107);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(13,0.0790791);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(14,0.06879839);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(15,0.05832485);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(16,0.05371779);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(17,0.04795474);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(18,0.04805361);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(19,0.04149894);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(20,0.03331002);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(21,0.02870537);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(22,0.02714152);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(23,0.02391419);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(24,0.03497796);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(25,0.01731066);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetBinError(26,0.05604831);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetEntries(24086);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt377->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(1,0.2061202);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(2,0.2524429);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(3,0.24938);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(4,0.2163101);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(5,0.1898865);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(6,0.1441597);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(7,0.1021432);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(8,0.07348722);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(9,0.05666407);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(10,0.04919901);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(11,0.04356773);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(12,0.02884304);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(13,0.0221126);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(14,0.01246222);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(15,0.01076657);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(16,0.008881133);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(17,0.01142517);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(18,0.003486744);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(19,0.002750861);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(20,0.005449541);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(21,0.006517846);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(22,0.0009028499);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(23,0.0003669332);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(24,0.001893076);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(25,0.001712538);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinContent(26,0.008570092);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(1,0.01539454);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(2,0.01679803);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(3,0.01720222);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(4,0.01592592);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(5,0.01545);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(6,0.01338535);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(7,0.01076386);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(8,0.009158185);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(9,0.008468026);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(10,0.007869143);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(11,0.006960297);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(12,0.005964397);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(13,0.005096169);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(14,0.003392979);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(15,0.003017566);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(16,0.003371825);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(17,0.003636538);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(18,0.001328949);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(19,0.001168988);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(20,0.002453829);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(21,0.002618075);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(22,0.0005686508);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(23,0.0003669332);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(24,0.001710846);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(25,0.001325461);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetBinError(26,0.00324971);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt378->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16","thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3",25,10,100);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->SetMaximum(0.2827029);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(1,0.2061202);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(2,0.2524429);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(3,0.24938);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(4,0.2163101);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(5,0.1898865);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(6,0.1441597);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(7,0.1021432);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(8,0.07348722);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(9,0.05666407);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(10,0.04919901);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(11,0.04356773);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(12,0.02884304);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(13,0.0221126);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(14,0.01246222);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(15,0.01076657);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(16,0.008881133);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(17,0.01142517);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(18,0.003486744);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(19,0.002750861);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(20,0.005449541);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(21,0.006517846);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(22,0.0009028499);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(23,0.0003669332);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(24,0.001893076);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(25,0.001712538);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinContent(26,0.008570092);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(1,0.01539454);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(2,0.01679803);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(3,0.01720222);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(4,0.01592592);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(5,0.01545);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(6,0.01338535);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(7,0.01076386);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(8,0.009158185);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(9,0.008468026);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(10,0.007869143);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(11,0.006960297);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(12,0.005964397);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(13,0.005096169);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(14,0.003392979);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(15,0.003017566);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(16,0.003371825);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(17,0.003636538);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(18,0.001328949);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(19,0.001168988);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(20,0.002453829);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(21,0.002618075);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(22,0.0005686508);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(23,0.0003669332);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(24,0.001710846);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(25,0.001325461);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetBinError(26,0.00324971);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt379->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3015[25] = {
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
   Double_t _fy3015[25] = {
   20.54465,
   17.61893,
   20.65091,
   20.11965,
   17.53546,
   15.5984,
   12.64359,
   9.40182,
   6.509128,
   3.724294,
   2.927613,
   2.159846,
   1.150203,
   0.9242077,
   0.7795748,
   0.6011557,
   0.4242552,
   0.4261835,
   0.3579003,
   0.2212014,
   0.150361,
   0.1757608,
   0.1066804,
   0.2221146,
   0.06251849};
   Double_t _felx3015[25] = {
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
   Double_t _fely3015[25] = {
   5.10851,
   3.347252,
   2.874291,
   2.14256,
   1.397831,
   1.265019,
   1.185456,
   1.028958,
   0.4986955,
   0.3801374,
   0.6216477,
   0.3346202,
   0.1030003,
   0.1187588,
   0.1729624,
   0.1513075,
   0.09280442,
   0.05276552,
   0.08884346,
   0.03942954,
   0.03295371,
   0.09111783,
   0.02492923,
   0.03761587,
   0.0205183};
   Double_t _fehx3015[25] = {
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
   Double_t _fehy3015[25] = {
   5.104265,
   3.342022,
   2.873399,
   2.14121,
   1.593106,
   1.264374,
   1.184706,
   1.064666,
   0.6492604,
   0.3598447,
   0.6517817,
   0.3343745,
   0.1024071,
   0.1546599,
   0.1729203,
   0.1511047,
   0.0926036,
   0.05241822,
   0.08877149,
   0.03934126,
   0.0332354,
   0.09110606,
   0.02468757,
   0.03741672,
   0.0205042};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,1.000001,109);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(28.20961);
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
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,1.000001,109);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,10,100);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(52.25071);
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
   ccwh3l_MET_JetV_13TeV_pt3->Modified();
   ccwh3l_MET_JetV_13TeV_pt3->cd();
   ccwh3l_MET_JetV_13TeV_pt3->SetSelected(ccwh3l_MET_JetV_13TeV_pt3);
}
