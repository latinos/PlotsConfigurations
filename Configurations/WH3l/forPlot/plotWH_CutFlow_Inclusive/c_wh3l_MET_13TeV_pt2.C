void c_wh3l_MET_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_pt2/cc
//=========  (Sun Jul  3 16:19:03 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_pt2 = new TCanvas("ccwh3l_MET_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_13TeV_pt2->Range(-12,-19.07255,156.75,127.6394);
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
   
   TH1F *hframe131 = new TH1F("hframe131","",1000,15,150);
   hframe131->SetMinimum(0);
   hframe131->SetMaximum(120.3038);
   hframe131->SetDirectory(0);
   hframe131->SetStats(0);
   hframe131->SetLineStyle(0);
   hframe131->SetMarkerStyle(20);
   hframe131->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe131->GetXaxis()->SetNdivisions(506);
   hframe131->GetXaxis()->SetLabelFont(42);
   hframe131->GetXaxis()->SetLabelOffset(0.007);
   hframe131->GetXaxis()->SetLabelSize(0.05);
   hframe131->GetXaxis()->SetTitleSize(0.06);
   hframe131->GetXaxis()->SetTitleOffset(0.9);
   hframe131->GetXaxis()->SetTitleFont(42);
   hframe131->GetYaxis()->SetTitle("Events");
   hframe131->GetYaxis()->SetLabelFont(42);
   hframe131->GetYaxis()->SetLabelOffset(0.007);
   hframe131->GetYaxis()->SetLabelSize(0.05);
   hframe131->GetYaxis()->SetTitleSize(0.06);
   hframe131->GetYaxis()->SetTitleOffset(1.25);
   hframe131->GetYaxis()->SetTitleFont(42);
   hframe131->GetZaxis()->SetLabelFont(42);
   hframe131->GetZaxis()->SetLabelOffset(0.007);
   hframe131->GetZaxis()->SetLabelSize(0.05);
   hframe131->GetZaxis()->SetTitleSize(0.06);
   hframe131->GetZaxis()->SetTitleFont(42);
   hframe131->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27","thsBackground_grouped_wh3l_MET_13TeV_pt2",25,15,150);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->SetMinimum(-0.3356557);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->SetMaximum(50.52759);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_pt2_stack_27);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_pt2132 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_pt2132","histo_Fake",25,15,150);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(1,6.143614);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(2,11.38558);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(3,16.65337);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(4,15.14823);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(5,8.553759);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(6,9.453735);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(7,5.587839);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(8,3.083649);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(9,1.737762);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(10,1.678472);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(11,1.829205);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(12,1.343703);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(13,0.6783762);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(14,1.081372);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(15,0.4119822);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(16,0.9638692);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(17,0.009755953);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(18,-0.1207637);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(19,-0.1932477);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(20,0.08073445);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(21,0.1337377);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(22,-0.0635516);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(23,0.05691437);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(24,0.4203562);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(25,-0.01727074);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinContent(26,0.2138516);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(1,2.442924);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(2,2.942282);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(3,3.322005);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(4,3.063829);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(5,2.511813);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(6,2.222732);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(7,1.800942);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(8,1.360453);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(9,1.18152);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(10,1.023368);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(11,0.9343992);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(12,0.7146993);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(13,0.5066053);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(14,0.5679336);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(15,0.5660595);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(16,0.4772942);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(17,0.1444079);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(18,0.09400807);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(19,0.142408);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(20,0.08066);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(21,0.1540535);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(22,0.04838414);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(23,0.07311007);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(24,0.4415655);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(25,0.01661729);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetBinError(26,0.2545026);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetEntries(1194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt2132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_pt2133 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_pt2133","histo_WW",25,15,150);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(2,0.04902722);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(3,0.04845343);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(4,0.04725375);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(6,0.0444751);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(7,0.07055291);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(10,0.04729418);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(14,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(15,0.01461809);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(18,0.01749081);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinContent(21,0.01305253);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(2,0.02835506);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(3,0.02626559);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(4,0.02552565);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(6,0.02571483);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(7,0.03547057);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(10,0.02731511);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(14,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(15,0.01461809);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(18,0.01749081);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetBinError(21,0.01305253);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetEntries(25);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt2133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_pt2134 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_pt2134","histo_VVV",25,15,150);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(1,0.0565523);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(2,0.1656933);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(3,0.2730305);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(4,0.3394828);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(5,0.3395527);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(6,0.326489);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(7,0.3462773);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(8,0.3005951);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(9,0.2709479);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(10,0.2266941);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(11,0.1573728);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(12,0.1539313);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(13,0.1166146);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(14,0.1273273);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(15,0.1112514);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(16,0.09942991);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(17,0.0880613);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(18,0.07855869);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(19,0.06893027);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(20,0.06209333);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(21,0.03263288);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(22,0.04999441);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(23,0.03229597);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(24,0.01937071);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(25,0.03366902);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinContent(26,0.264219);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(1,0.009990385);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(2,0.01867282);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(3,0.02387346);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(4,0.0256011);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(5,0.0254416);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(6,0.02602586);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(7,0.02517909);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(8,0.02327602);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(9,0.02256407);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(10,0.02152511);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(11,0.01806894);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(12,0.01731949);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(13,0.01583854);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(14,0.01570386);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(15,0.01466615);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(16,0.01338204);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(17,0.01229387);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(18,0.01282929);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(19,0.0120169);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(20,0.01199348);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(21,0.007957073);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(22,0.01051913);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(23,0.008513195);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(24,0.007055039);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(25,0.008811947);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetBinError(26,0.02268813);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetEntries(3817);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt2134->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_pt2135 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_pt2135","histo_Vg",25,15,150);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(1,0.9348457);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(2,3.445547);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(3,2.783719);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(4,1.541977);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(5,0.7538087);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(6,0.5387323);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(7,0.4004867);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(8,0.4917601);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(9,0.002462262);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(10,0.2087186);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(11,0.1995715);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(12,0.1164036);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(14,-0.02577758);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(15,0.1146155);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(16,0.06632758);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(22,-0.107833);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(25,0.1076973);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinContent(26,0.2452393);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(1,0.3062838);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(2,0.608903);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(3,0.6257618);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(4,0.5472131);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(5,0.3547772);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(6,0.3108403);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(7,0.2038115);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(8,0.2547573);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(9,0.1662035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(10,0.1349948);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(11,0.1693277);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(12,0.1164036);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(14,0.1438056);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(15,0.1947009);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(16,0.06632758);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(22,0.107833);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(25,0.1076973);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetBinError(26,0.1467834);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetEntries(194);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt2135->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_pt2136 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_pt2136","histo_ZZ",25,15,150);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(1,0.6122451);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(2,0.958404);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(3,1.195484);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(4,2.115542);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(5,1.512768);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(6,1.669725);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(7,1.032961);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(8,0.6304292);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(9,0.3608385);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(10,0.762234);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(11,0.3745053);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(12,0.04997661);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(13,0.2285196);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(14,0.1693205);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(15,0.01004884);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(16,0.1567143);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(17,0.1127178);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(18,0.1296147);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(19,0.04585245);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(21,0.1997005);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(24,0.04545766);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(25,0.0404218);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinContent(26,0.3205451);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(1,0.1584552);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(2,0.2021468);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(3,0.2282702);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(4,0.2977744);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(5,0.2478052);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(6,0.2608433);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(7,0.2015783);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(8,0.1548829);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(9,0.1252046);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(10,0.1817671);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(11,0.1243354);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(12,0.04997661);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(13,0.0885175);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(14,0.07644097);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(15,0.01004884);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(16,0.07968921);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(17,0.06673593);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(18,0.07490071);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(19,0.04585245);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(21,0.09213663);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(24,0.04545766);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(25,0.0404218);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetBinError(26,0.1169485);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetEntries(350);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt2136->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_pt2137 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_pt2137","histo_WZ",25,15,150);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(1,5.560694);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(2,12.89551);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(3,21.55852);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(4,28.55795);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(5,30.95502);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(6,26.84145);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(7,19.83958);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(8,14.51794);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(9,11.09522);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(10,8.791791);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(11,6.958585);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(12,5.380024);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(13,4.396545);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(14,3.459185);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(15,2.917019);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(16,2.503672);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(17,2.237063);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(18,1.769711);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(19,1.292409);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(20,1.26084);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(21,1.08359);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(22,0.9656656);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(23,0.6671392);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(24,0.7075176);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(25,0.5709893);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinContent(26,3.959799);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(1,0.1728196);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(2,0.2661282);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(3,0.3431864);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(4,0.3931604);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(5,0.4090536);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(6,0.3823527);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(7,0.3295942);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(8,0.2810747);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(9,0.2456142);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(10,0.2191588);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(11,0.1944771);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(12,0.1706764);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(13,0.1551605);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(14,0.1359375);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(15,0.1262163);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(16,0.11553);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(17,0.1097346);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(18,0.09739886);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(19,0.08338033);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(20,0.08186495);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(21,0.07663403);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(22,0.07230652);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(23,0.06016237);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(24,0.06166171);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(25,0.05548244);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetBinError(26,0.1454706);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetEntries(45061);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt2137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt2138 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt2138","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(1,0.1359735);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(2,0.2438963);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(3,0.3464598);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(4,0.3710814);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(5,0.3582465);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(6,0.3041338);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(7,0.2961151);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(8,0.2451772);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(9,0.1859105);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(10,0.1336389);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(11,0.1222668);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(12,0.1124303);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(13,0.08105212);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(14,0.06690896);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(15,0.06503189);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(16,0.04744765);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(17,0.0440235);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(18,0.03406321);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(19,0.01495174);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(20,0.01639133);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(21,0.01605098);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(22,0.008571612);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(23,0.009012873);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(24,0.009034826);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(25,0.007128018);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinContent(26,0.04748848);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(1,0.01256493);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(2,0.0165322);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(3,0.01939229);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(4,0.02038821);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(5,0.02044341);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(6,0.01770286);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(7,0.01793484);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(8,0.01613925);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(9,0.01307035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(10,0.0107978);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(11,0.01081264);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(12,0.01039252);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(13,0.008286438);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(14,0.007792236);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(15,0.007861118);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(16,0.006151057);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(17,0.006565089);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(18,0.005920596);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(19,0.00336663);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(20,0.003438997);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(21,0.00338043);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(22,0.002317927);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(23,0.002460386);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(24,0.002678654);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(25,0.00242712);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetBinError(26,0.006765893);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28","thsSignal_grouped_wh3l_MET_13TeV_pt2",25,15,150);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->SetMaximum(0.4110431);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_pt2_stack_28);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt2139 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt2139","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(1,0.1359735);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(2,0.2438963);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(3,0.3464598);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(4,0.3710814);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(5,0.3582465);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(6,0.3041338);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(7,0.2961151);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(8,0.2451772);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(9,0.1859105);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(10,0.1336389);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(11,0.1222668);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(12,0.1124303);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(13,0.08105212);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(14,0.06690896);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(15,0.06503189);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(16,0.04744765);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(17,0.0440235);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(18,0.03406321);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(19,0.01495174);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(20,0.01639133);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(21,0.01605098);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(22,0.008571612);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(23,0.009012873);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(24,0.009034826);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(25,0.007128018);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinContent(26,0.04748848);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(1,0.01256493);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(2,0.0165322);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(3,0.01939229);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(4,0.02038821);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(5,0.02044341);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(6,0.01770286);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(7,0.01793484);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(8,0.01613925);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(9,0.01307035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(10,0.0107978);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(11,0.01081264);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(12,0.01039252);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(13,0.008286438);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(14,0.007792236);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(15,0.007861118);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(16,0.006151057);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(17,0.006565089);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(18,0.005920596);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(19,0.00336663);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(20,0.003438997);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(21,0.00338043);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(22,0.002317927);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(23,0.002460386);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(24,0.002678654);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(25,0.00242712);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetBinError(26,0.006765893);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt2139->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3027[25] = {
   17.7,
   23.1,
   28.5,
   33.9,
   39.3,
   44.7,
   50.1,
   55.5,
   60.9,
   66.3,
   71.7,
   77.1,
   82.5,
   87.9,
   93.3,
   98.7,
   104.1,
   109.5,
   114.9,
   120.3,
   125.7,
   131.1,
   136.5,
   141.9,
   147.3};
   Double_t _fy3027[25] = {
   13.30795,
   28.89975,
   42.51258,
   47.75044,
   42.11491,
   38.8746,
   27.27769,
   19.02438,
   13.46723,
   11.7152,
   9.519239,
   7.044039,
   5.420055,
   4.826896,
   3.579535,
   3.790013,
   2.447598,
   1.874612,
   1.213944,
   1.403668,
   1.462714,
   0.8442754,
   0.7563496,
   1.192702,
   0.7355067};
   Double_t _felx3027[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fely3027[25] = {
   3.796819,
   5.745584,
   7.451839,
   6.903078,
   4.696928,
   4.652326,
   3.282507,
   2.36647,
   1.722703,
   1.736682,
   1.591597,
   1.180794,
   0.8172569,
   1.038374,
   0.718554,
   0.833271,
   0.2329038,
   0.3178819,
   0.3043657,
   0.1906959,
   0.3328429,
   0.2468885,
   0.1324152,
   0.5557377,
   0.2325602};
   Double_t _fehx3027[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fehy3027[25] = {
   3.795816,
   5.744669,
   7.450123,
   6.90164,
   4.692644,
   4.650987,
   3.279953,
   2.366432,
   1.871314,
   1.736765,
   1.590713,
   1.180288,
   0.8154914,
   0.9296456,
   0.945501,
   0.8323148,
   0.350553,
   0.3140723,
   0.3019694,
   0.1890926,
   0.3518574,
   0.2463679,
   0.1478355,
   0.5759999,
   0.2320859};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,1.5,163.5);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(60.06699);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineStyle(0);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2");
   
   Double_t _fx3028[25] = {
   17.7,
   23.1,
   28.5,
   33.9,
   39.3,
   44.7,
   50.1,
   55.5,
   60.9,
   66.3,
   71.7,
   77.1,
   82.5,
   87.9,
   93.3,
   98.7,
   104.1,
   109.5,
   114.9,
   120.3,
   125.7,
   131.1,
   136.5,
   141.9,
   147.3};
   Double_t _fy3028[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3028[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fely3028[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3028[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fehy3028[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,1.5,163.5);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.262698);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineStyle(0);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);
   
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
   
   TH1F *hframe_copy140 = new TH1F("hframe_copy140","",1000,15,150);
   hframe_copy140->SetMinimum(0);
   hframe_copy140->SetMaximum(120.3038);
   hframe_copy140->SetDirectory(0);
   hframe_copy140->SetStats(0);
   hframe_copy140->SetLineStyle(0);
   hframe_copy140->SetMarkerStyle(20);
   hframe_copy140->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy140->GetXaxis()->SetNdivisions(506);
   hframe_copy140->GetXaxis()->SetLabelFont(42);
   hframe_copy140->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetXaxis()->SetLabelSize(0.05);
   hframe_copy140->GetXaxis()->SetTitleSize(0.06);
   hframe_copy140->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy140->GetXaxis()->SetTitleFont(42);
   hframe_copy140->GetYaxis()->SetTitle("Events");
   hframe_copy140->GetYaxis()->SetLabelFont(42);
   hframe_copy140->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetYaxis()->SetLabelSize(0.05);
   hframe_copy140->GetYaxis()->SetTitleSize(0.06);
   hframe_copy140->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy140->GetYaxis()->SetTitleFont(42);
   hframe_copy140->GetZaxis()->SetLabelFont(42);
   hframe_copy140->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetZaxis()->SetLabelSize(0.05);
   hframe_copy140->GetZaxis()->SetTitleSize(0.06);
   hframe_copy140->GetZaxis()->SetTitleFont(42);
   hframe_copy140->Draw("sameaxis");
   ccwh3l_MET_13TeV_pt2->Modified();
   ccwh3l_MET_13TeV_pt2->cd();
   ccwh3l_MET_13TeV_pt2->SetSelected(ccwh3l_MET_13TeV_pt2);
}
