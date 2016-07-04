void c_wh3l_MET_JetV_ZVeto_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt2/cc
//=========  (Sun Jul  3 16:19:14 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt2 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->Range(-12,-2.281739,156.75,15.2701);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe331 = new TH1F("hframe331","",1000,15,150);
   hframe331->SetMinimum(0);
   hframe331->SetMaximum(14.39251);
   hframe331->SetDirectory(0);
   hframe331->SetStats(0);
   hframe331->SetLineStyle(0);
   hframe331->SetMarkerStyle(20);
   hframe331->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe331->GetXaxis()->SetNdivisions(506);
   hframe331->GetXaxis()->SetLabelFont(42);
   hframe331->GetXaxis()->SetLabelOffset(0.007);
   hframe331->GetXaxis()->SetLabelSize(0.05);
   hframe331->GetXaxis()->SetTitleSize(0.06);
   hframe331->GetXaxis()->SetTitleOffset(0.9);
   hframe331->GetXaxis()->SetTitleFont(42);
   hframe331->GetYaxis()->SetTitle("Events");
   hframe331->GetYaxis()->SetLabelFont(42);
   hframe331->GetYaxis()->SetLabelOffset(0.007);
   hframe331->GetYaxis()->SetLabelSize(0.05);
   hframe331->GetYaxis()->SetTitleSize(0.06);
   hframe331->GetYaxis()->SetTitleOffset(1.25);
   hframe331->GetYaxis()->SetTitleFont(42);
   hframe331->GetZaxis()->SetLabelFont(42);
   hframe331->GetZaxis()->SetLabelOffset(0.007);
   hframe331->GetZaxis()->SetLabelSize(0.05);
   hframe331->GetZaxis()->SetTitleSize(0.06);
   hframe331->GetZaxis()->SetTitleFont(42);
   hframe331->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2",25,15,150);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->SetMinimum(-1.138982);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->SetMaximum(6.044855);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_67);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332","histo_Fake",25,15,150);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(1,-0.3678217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(2,1.838026);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(3,3.994516);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(4,0.6013895);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(5,1.757972);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(6,-0.0791775);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(7,1.386241);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(8,0.1270679);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(9,-0.0005213583);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(10,0.4022812);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(11,0.2755572);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(12,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(14,0.356344);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(16,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(23,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinContent(26,-0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(1,0.7711607);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(2,0.7623793);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(3,1.570852);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(4,0.8642366);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(5,1.088392);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(6,0.1390801);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(7,0.9269794);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(8,0.1356179);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(9,0.0005618895);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(10,0.3670605);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(11,0.2772125);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(12,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(14,0.356344);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(16,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(23,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetBinError(26,0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetEntries(117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2332->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333","histo_WW",25,15,150);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinContent(4,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinContent(6,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinContent(10,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinError(4,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinError(6,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetBinError(10,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2333->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334","histo_VVV",25,15,150);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(1,0.007171459);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(2,0.03522307);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(3,0.03606625);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(4,0.05290329);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(5,0.04088478);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(6,0.02963257);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(7,0.04447938);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(8,0.03268688);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(9,0.02419455);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(10,0.0207686);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(11,0.01528713);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(12,0.005093439);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(13,0.006004091);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(14,0.01525729);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(15,0.009317061);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(16,0.01400827);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(17,0.0106129);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(19,0.002892504);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(20,-0.0001991108);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(21,0.004070891);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(22,0.004200245);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(23,0.00159006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(24,-0.0007490913);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(25,0.002271149);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinContent(26,0.01592051);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(1,0.003835332);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(2,0.008989707);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(3,0.01028585);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(4,0.01078768);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(5,0.009960698);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(6,0.01068885);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(7,0.01019709);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(8,0.008546473);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(9,0.007207499);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(10,0.007648182);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(11,0.005689651);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(12,0.005088651);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(13,0.005327972);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(14,0.005843366);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(15,0.004562029);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(16,0.005656365);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(17,0.00480178);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(19,0.004013105);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(20,0.003583751);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(21,0.002896714);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(22,0.003043239);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(23,0.00159006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(24,0.003311702);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(25,0.002271149);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetBinError(26,0.005820581);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetEntries(250);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2334->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335","histo_Vg",25,15,150);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinContent(1,0.3572982);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinContent(2,1.600766);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinContent(3,0.2597775);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinContent(4,0.2327434);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinContent(5,0.09276484);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinContent(6,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinContent(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinError(1,0.1719672);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinError(2,0.4034132);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinError(3,0.2693479);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinError(4,0.201249);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinError(5,0.09276484);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinError(6,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetBinError(15,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2335->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336","histo_ZZ",25,15,150);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(1,0.1317747);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(2,0.08348535);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(3,0.1378766);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(4,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(5,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(7,0.05112314);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(8,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(10,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinContent(13,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(1,0.06723137);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(2,0.05187297);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(3,0.07985823);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(4,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(5,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(7,0.05112314);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(8,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(10,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetBinError(13,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2336->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337","histo_WZ",25,15,150);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(1,1.149171);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(2,1.415087);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(3,1.172415);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(4,0.8233835);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(5,0.7365359);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(6,0.5987916);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(7,0.5271157);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(8,0.4405687);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(9,0.3837646);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(10,0.3041429);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(11,0.2252563);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(12,0.1868115);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(13,0.1868447);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(14,0.1577732);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(15,0.1172219);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(16,0.1211199);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(17,0.05458628);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(18,0.07832234);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(19,0.05293116);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(20,0.06429219);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(21,0.05772417);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(22,0.05276843);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(23,0.04316978);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(24,0.0374044);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(25,0.04437361);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinContent(26,0.4310883);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(1,0.07863106);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(2,0.08862676);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(3,0.0798738);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(4,0.06678564);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(5,0.06287794);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(6,0.0572863);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(7,0.05375511);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(8,0.04927751);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(9,0.04483315);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(10,0.04059208);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(11,0.03490391);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(12,0.03165031);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(13,0.03209852);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(14,0.02858648);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(15,0.02546802);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(16,0.025376);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(17,0.01706515);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(18,0.0196844);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(19,0.0163539);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(20,0.0182458);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(21,0.01863192);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(22,0.01725713);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(23,0.01534568);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(24,0.01370344);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(25,0.01548579);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetBinError(26,0.04802709);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetEntries(1942);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2337->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(1,0.07168962);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(2,0.09333819);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(3,0.1277613);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(4,0.1182337);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(5,0.07705518);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(6,0.05547152);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(7,0.06037554);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(8,0.0430441);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(9,0.02543809);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(10,0.02264802);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(11,0.02330389);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(12,0.01670568);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(13,0.01485864);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(14,0.01412485);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(15,0.009494404);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(16,0.009113916);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(17,0.01239273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(18,0.001874538);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(19,0.001695584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(20,0.0006046926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(21,0.003084204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(22,0.001005085);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(23,0.0002145779);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(24,0.001702008);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(25,0.001706028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinContent(26,0.009041972);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(1,0.009476501);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(2,0.01032179);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(3,0.01199419);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(4,0.01192829);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(5,0.009289649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(6,0.007699423);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(7,0.008760607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(8,0.00721);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(9,0.005143071);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(10,0.005145657);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(11,0.005499445);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(12,0.004956921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(13,0.0042736);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(14,0.004382365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(15,0.003294607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(16,0.003221877);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(17,0.004172641);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(18,0.001561799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(19,0.001695584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(20,0.0003994273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(21,0.001771028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(22,0.001005085);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(23,0.0002145779);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(24,0.001205348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(25,0.001362109);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetBinError(26,0.002861429);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2338->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2",25,15,150);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->SetMaximum(0.1467433);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_68);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(1,0.07168962);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(2,0.09333819);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(3,0.1277613);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(4,0.1182337);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(5,0.07705518);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(6,0.05547152);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(7,0.06037554);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(8,0.0430441);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(9,0.02543809);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(10,0.02264802);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(11,0.02330389);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(12,0.01670568);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(13,0.01485864);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(14,0.01412485);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(15,0.009494404);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(16,0.009113916);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(17,0.01239273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(18,0.001874538);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(19,0.001695584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(20,0.0006046926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(21,0.003084204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(22,0.001005085);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(23,0.0002145779);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(24,0.001702008);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(25,0.001706028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinContent(26,0.009041972);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(1,0.009476501);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(2,0.01032179);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(3,0.01199419);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(4,0.01192829);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(5,0.009289649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(6,0.007699423);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(7,0.008760607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(8,0.00721);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(9,0.005143071);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(10,0.005145657);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(11,0.005499445);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(12,0.004956921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(13,0.0042736);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(14,0.004382365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(15,0.003294607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(16,0.003221877);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(17,0.004172641);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(18,0.001561799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(19,0.001695584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(20,0.0003994273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(21,0.001771028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(22,0.001005085);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(23,0.0002145779);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(24,0.001205348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(25,0.001362109);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetBinError(26,0.002861429);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2339->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3067[25] = {
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
   Double_t _fy3067[25] = {
   1.277594,
   4.988712,
   5.629243,
   1.768223,
   2.667552,
   0.6682736,
   2.008959,
   0.6354603,
   0.4371979,
   0.7877746,
   0.5161006,
   0.2031,
   0.2214113,
   0.5293745,
   0.2323878,
   0.4465483,
   0.06519917,
   0.07832234,
   0.05582366,
   0.06409308,
   0.06179506,
   0.05696867,
   0.03005766,
   0.03665531,
   0.04664476};
   Double_t _felx3067[25] = {
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
   Double_t _fely3067[25] = {
   1.108017,
   1.486051,
   2.458869,
   0.963456,
   1.433083,
   0.3291042,
   1.150389,
   0.2270876,
   0.086553,
   0.4967685,
   0.3309899,
   0.04851436,
   0.06644391,
   0.4105259,
   0.136308,
   0.3596713,
   0.02437446,
   0.01997379,
   0.01960511,
   0.02203451,
   0.02198277,
   0.02091829,
   0.03210971,
   0.01707799,
   0.01809215};
   Double_t _fehx3067[25] = {
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
   Double_t _fehy3067[25] = {
   0.712392,
   1.48572,
   2.4667,
   1.220824,
   1.433046,
   0.2697432,
   1.150372,
   0.2353196,
   0.08651383,
   0.4967658,
   0.3325593,
   0.04851684,
   0.06644902,
   0.4105093,
   0.1363035,
   0.3596639,
   0.02435069,
   0.01985368,
   0.02070369,
   0.01866187,
   0.02196702,
   0.02092548,
   0.03210765,
   0.01454079,
   0.01804411};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3067,_fy3067,_felx3067,_fehx3067,_fely3067,_fehy3067);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3067 = new TH1F("Graph_Graph3067","",100,1.5,163.5);
   Graph_Graph3067->SetMinimum(-0.8118515);
   Graph_Graph3067->SetMaximum(8.905742);
   Graph_Graph3067->SetDirectory(0);
   Graph_Graph3067->SetStats(0);
   Graph_Graph3067->SetLineStyle(0);
   Graph_Graph3067->SetMarkerStyle(20);
   Graph_Graph3067->GetXaxis()->SetLabelFont(42);
   Graph_Graph3067->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3067->GetXaxis()->SetTitleFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3067->GetYaxis()->SetTitleFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3067);
   
   grae->Draw("2");
   
   Double_t _fx3068[25] = {
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
   Double_t _fy3068[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3068[25] = {
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
   Double_t _fely3068[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3068[25] = {
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
   Double_t _fehy3068[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3068,_fy3068,_felx3068,_fehx3068,_fely3068,_fehy3068);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3068 = new TH1F("Graph_Graph3068","",100,1.5,163.5);
   Graph_Graph3068->SetMinimum(0);
   Graph_Graph3068->SetMaximum(1.262698);
   Graph_Graph3068->SetDirectory(0);
   Graph_Graph3068->SetStats(0);
   Graph_Graph3068->SetLineStyle(0);
   Graph_Graph3068->SetMarkerStyle(20);
   Graph_Graph3068->GetXaxis()->SetLabelFont(42);
   Graph_Graph3068->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3068->GetXaxis()->SetTitleFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3068->GetYaxis()->SetTitleFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3068);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy340 = new TH1F("hframe_copy340","",1000,15,150);
   hframe_copy340->SetMinimum(0);
   hframe_copy340->SetMaximum(14.39251);
   hframe_copy340->SetDirectory(0);
   hframe_copy340->SetStats(0);
   hframe_copy340->SetLineStyle(0);
   hframe_copy340->SetMarkerStyle(20);
   hframe_copy340->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy340->GetXaxis()->SetNdivisions(506);
   hframe_copy340->GetXaxis()->SetLabelFont(42);
   hframe_copy340->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetXaxis()->SetLabelSize(0.05);
   hframe_copy340->GetXaxis()->SetTitleSize(0.06);
   hframe_copy340->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy340->GetXaxis()->SetTitleFont(42);
   hframe_copy340->GetYaxis()->SetTitle("Events");
   hframe_copy340->GetYaxis()->SetLabelFont(42);
   hframe_copy340->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetYaxis()->SetLabelSize(0.05);
   hframe_copy340->GetYaxis()->SetTitleSize(0.06);
   hframe_copy340->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy340->GetYaxis()->SetTitleFont(42);
   hframe_copy340->GetZaxis()->SetLabelFont(42);
   hframe_copy340->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetZaxis()->SetLabelSize(0.05);
   hframe_copy340->GetZaxis()->SetTitleSize(0.06);
   hframe_copy340->GetZaxis()->SetTitleFont(42);
   hframe_copy340->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_pt2);
}
