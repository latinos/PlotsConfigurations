void c_wh3l_MET_JetV_ZVeto_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt2/cc
//=========  (Sat Jul  2 21:43:54 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt2 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->Range(-28,-4.291755,209.5,28.72174);
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
   
   TH1F *hframe441 = new TH1F("hframe441","",1000,10,200);
   hframe441->SetMinimum(0);
   hframe441->SetMaximum(27.07107);
   hframe441->SetDirectory(0);
   hframe441->SetStats(0);
   hframe441->SetLineStyle(0);
   hframe441->SetMarkerStyle(20);
   hframe441->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe441->GetXaxis()->SetNdivisions(506);
   hframe441->GetXaxis()->SetLabelFont(42);
   hframe441->GetXaxis()->SetLabelOffset(0.007);
   hframe441->GetXaxis()->SetLabelSize(0.05);
   hframe441->GetXaxis()->SetTitleSize(0.06);
   hframe441->GetXaxis()->SetTitleOffset(0.9);
   hframe441->GetXaxis()->SetTitleFont(42);
   hframe441->GetYaxis()->SetTitle("Events");
   hframe441->GetYaxis()->SetLabelFont(42);
   hframe441->GetYaxis()->SetLabelOffset(0.007);
   hframe441->GetYaxis()->SetLabelSize(0.05);
   hframe441->GetYaxis()->SetTitleSize(0.06);
   hframe441->GetYaxis()->SetTitleOffset(1.25);
   hframe441->GetYaxis()->SetTitleFont(42);
   hframe441->GetZaxis()->SetLabelFont(42);
   hframe441->GetZaxis()->SetLabelOffset(0.007);
   hframe441->GetZaxis()->SetLabelSize(0.05);
   hframe441->GetZaxis()->SetTitleSize(0.06);
   hframe441->GetZaxis()->SetTitleFont(42);
   hframe441->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetMinimum(-0.5259424);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetMaximum(7.454906);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_89);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(1,0.1287405);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(2,0.923535);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(3,4.449622);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(4,0.2256832);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(5,0.3958489);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(6,0.3539545);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(7,0.1354449);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(8,0.3143729);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(9,-0.001650331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(10,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(11,0.356344);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinContent(23,-0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(1,0.6546829);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(2,0.7653551);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(3,1.665469);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(4,0.6360561);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(5,0.5292248);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(6,0.5919806);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(7,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(8,0.2797639);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(9,0.001650331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(10,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(11,0.356344);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetBinError(23,0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2442->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinContent(4,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinContent(5,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinError(4,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinError(5,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2443->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(1,0.00210428);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(2,0.02611904);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(3,0.03823794);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(4,0.05664592);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(5,0.03095186);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(6,0.03833686);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(7,0.02715294);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(8,0.02438578);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(9,0.007656404);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(10,0.008029778);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(11,0.01515338);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(12,0.01419033);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(13,0.006412337);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(14,-0.002002467);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(15,0.002631623);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(16,0.004070891);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(17,0.001630936);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(18,-0.0007490913);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(19,0.001706515);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(21,0.004291318);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(22,0.000464675);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(23,0.0005093239);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(25,0.002297577);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinContent(26,0.005912681);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(1,0.00210428);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(2,0.007712488);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(3,0.009998222);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(4,0.0116683);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(5,0.009934473);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(6,0.009618866);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(7,0.007543429);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(8,0.008182637);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(9,0.00392154);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(10,0.005700061);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(11,0.005700835);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(12,0.00573304);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(13,0.003764625);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(14,0.002002467);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(15,0.002197775);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(16,0.002896714);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(17,0.001630936);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(18,0.003311702);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(19,0.002340284);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(21,0.003052211);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(22,0.000464675);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(23,0.0005093239);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(25,0.002297577);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetBinError(26,0.003451514);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2444->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinContent(1,0.05942902);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinContent(2,1.555161);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinContent(3,0.7452881);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinContent(4,0.09070755);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinContent(5,0.1975834);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinContent(12,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinError(1,0.04232062);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinError(2,0.3980689);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinError(3,0.3740925);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinError(4,0.07189745);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinError(5,0.1399723);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetBinError(12,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2445->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(1,0.05352081);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(2,0.07802278);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(3,0.2222083);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(4,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(6,0.05112314);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(7,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(8,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinContent(10,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(1,0.03784829);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(2,0.04767264);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(3,0.09967927);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(4,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(6,0.05112314);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(7,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(8,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetBinError(10,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2446->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(1,0.4698275);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(2,1.787697);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(3,1.480567);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(4,1.030791);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(5,0.8328029);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(6,0.6372758);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(7,0.5707418);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(8,0.4132773);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(9,0.239794);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(10,0.2723104);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(11,0.1715432);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(12,0.176228);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(13,0.07905871);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(14,0.09212455);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(15,0.0747647);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(16,0.06273324);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(17,0.06716641);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(18,0.05463392);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(19,0.0452906);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(20,0.03927064);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(21,0.02601218);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(22,0.05642533);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(23,0.02459539);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(24,0.04108705);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(25,0.0164082);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinContent(26,0.209143);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(1,0.04946215);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(2,0.09946632);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(3,0.09001859);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(4,0.07448653);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(5,0.06767439);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(6,0.05896001);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(7,0.05551305);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(8,0.04731124);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(9,0.03568885);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(10,0.03850169);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(11,0.03025104);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(12,0.03077698);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(13,0.02011427);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(14,0.02161539);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(15,0.01983186);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(16,0.01890506);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(17,0.0194846);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(18,0.01694352);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(19,0.0150487);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(20,0.01491174);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(21,0.01185869);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(22,0.01730112);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(23,0.0117978);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(24,0.0148159);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(25,0.009481543);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetBinError(26,0.03331265);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2447->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(1,0.01547162);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(2,0.09077451);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(3,0.1353968);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(4,0.09357758);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(5,0.0479491);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(6,0.06396322);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(7,0.03411488);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(8,0.01713612);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(9,0.02200946);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(10,0.01909934);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(11,0.008866284);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(12,0.01422494);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(13,0.007240695);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(16,0.00181767);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(18,0.001702037);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(19,0.001338515);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(20,0.002256681);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(21,0.0001691847);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(24,0.001244385);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinContent(26,0.001328518);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(1,0.005145784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(2,0.01048335);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(3,0.01243357);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(4,0.01024028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(5,0.007238064);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(6,0.009248888);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(7,0.006351676);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(8,0.004486371);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(9,0.005321939);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(10,0.005097951);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(11,0.003270771);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(12,0.004143154);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(13,0.003082573);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(16,0.001664619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(18,0.001205348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(19,0.001008903);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(20,0.001395105);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(21,0.0001691847);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(24,0.001054138);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetBinError(26,0.001674362);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2448->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetMaximum(0.1552219);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2_stack_90);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(1,0.01547162);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(2,0.09077451);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(3,0.1353968);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(4,0.09357758);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(5,0.0479491);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(6,0.06396322);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(7,0.03411488);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(8,0.01713612);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(9,0.02200946);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(10,0.01909934);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(11,0.008866284);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(12,0.01422494);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(13,0.007240695);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(16,0.00181767);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(18,0.001702037);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(19,0.001338515);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(20,0.002256681);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(21,0.0001691847);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(24,0.001244385);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinContent(26,0.001328518);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(1,0.005145784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(2,0.01048335);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(3,0.01243357);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(4,0.01024028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(5,0.007238064);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(6,0.009248888);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(7,0.006351676);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(8,0.004486371);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(9,0.005321939);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(10,0.005097951);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(11,0.003270771);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(12,0.004143154);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(13,0.003082573);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(16,0.001664619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(18,0.001205348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(19,0.001008903);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(20,0.001395105);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(21,0.0001691847);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(24,0.001054138);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetBinError(26,0.001674362);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2449->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3089[25] = {
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
   Double_t _fy3089[25] = {
   0.713622,
   4.370534,
   6.964514,
   1.457697,
   1.471395,
   1.08069,
   0.7630998,
   0.8126179,
   0.2458001,
   0.3200978,
   0.5430405,
   0.6076873,
   0.08547104,
   0.09012209,
   0.07739633,
   0.06680413,
   0.06879734,
   0.05388483,
   0.04699712,
   0.03927064,
   0.03030349,
   0.05689,
   0.02047104,
   0.04108705,
   0.01870577};
   Double_t _felx3089[25] = {
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
   Double_t _fely3089[25] = {
   0.2703002,
   1.370087,
   2.74647,
   0.4498953,
   0.6439813,
   0.4913305,
   0.2351149,
   0.4117343,
   0.04254085,
   0.08470239,
   0.4119647,
   0.4669685,
   0.02492366,
   0.02390636,
   0.02243371,
   0.02234629,
   0.02131318,
   0.02041578,
   0.01697879,
   0.01500667,
   0.01552786,
   0.01792435,
   0.01709654,
   0.01493181,
   0.01204158};
   Double_t _fehx3089[25] = {
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
   Double_t _fehy3089[25] = {
   0.7896735,
   1.369271,
   2.746353,
   0.8543321,
   0.774467,
   0.7235287,
   0.235084,
   0.4117185,
   0.04254146,
   0.08469162,
   0.4119534,
   0.4669572,
   0.02483597,
   0.02390044,
   0.02241507,
   0.02232842,
   0.0213246,
   0.01786775,
   0.0175941,
   0.01497996,
   0.01552518,
   0.01791667,
   0.01704877,
   0.01491591,
   0.01204167};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3089,_fy3089,_felx3089,_fehx3089,_fely3089,_fehy3089);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3089 = new TH1F("Graph_Graph3089","",100,0,219);
   Graph_Graph3089->SetMinimum(0);
   Graph_Graph3089->SetMaximum(10.68162);
   Graph_Graph3089->SetDirectory(0);
   Graph_Graph3089->SetStats(0);
   Graph_Graph3089->SetLineStyle(0);
   Graph_Graph3089->SetMarkerStyle(20);
   Graph_Graph3089->GetXaxis()->SetLabelFont(42);
   Graph_Graph3089->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3089->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3089->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3089->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3089->GetXaxis()->SetTitleFont(42);
   Graph_Graph3089->GetYaxis()->SetLabelFont(42);
   Graph_Graph3089->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3089->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3089->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3089->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3089->GetYaxis()->SetTitleFont(42);
   Graph_Graph3089->GetZaxis()->SetLabelFont(42);
   Graph_Graph3089->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3089->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3089->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3089->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3089);
   
   grae->Draw("2");
   
   Double_t _fx3090[25] = {
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
   Double_t _fy3090[25] = {
   1,
   4,
   8,
   5,
   4,
   2,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0};
   Double_t _felx3090[25] = {
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
   Double_t _fely3090[25] = {
   0.8272524,
   1.914367,
   2.768432,
   2.159724,
   1.914367,
   1.29183,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0};
   Double_t _fehx3090[25] = {
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
   Double_t _fehy3090[25] = {
   2.29957,
   3.162815,
   3.94522,
   3.382539,
   3.162815,
   2.63791,
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
   2.29957,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3090,_fy3090,_felx3090,_fehx3090,_fely3090,_fehy3090);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3090 = new TH1F("Graph_Graph3090","",100,0,219);
   Graph_Graph3090->SetMinimum(0);
   Graph_Graph3090->SetMaximum(13.13974);
   Graph_Graph3090->SetDirectory(0);
   Graph_Graph3090->SetStats(0);
   Graph_Graph3090->SetLineStyle(0);
   Graph_Graph3090->SetMarkerStyle(20);
   Graph_Graph3090->GetXaxis()->SetLabelFont(42);
   Graph_Graph3090->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3090->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3090->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3090->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3090->GetXaxis()->SetTitleFont(42);
   Graph_Graph3090->GetYaxis()->SetLabelFont(42);
   Graph_Graph3090->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3090->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3090->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3090->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3090->GetYaxis()->SetTitleFont(42);
   Graph_Graph3090->GetZaxis()->SetLabelFont(42);
   Graph_Graph3090->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3090->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3090->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3090->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3090);
   
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
   
   TH1F *hframe_copy450 = new TH1F("hframe_copy450","",1000,10,200);
   hframe_copy450->SetMinimum(0);
   hframe_copy450->SetMaximum(27.07107);
   hframe_copy450->SetDirectory(0);
   hframe_copy450->SetStats(0);
   hframe_copy450->SetLineStyle(0);
   hframe_copy450->SetMarkerStyle(20);
   hframe_copy450->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy450->GetXaxis()->SetNdivisions(506);
   hframe_copy450->GetXaxis()->SetLabelFont(42);
   hframe_copy450->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy450->GetXaxis()->SetLabelSize(0.05);
   hframe_copy450->GetXaxis()->SetTitleSize(0.06);
   hframe_copy450->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy450->GetXaxis()->SetTitleFont(42);
   hframe_copy450->GetYaxis()->SetTitle("Events");
   hframe_copy450->GetYaxis()->SetLabelFont(42);
   hframe_copy450->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy450->GetYaxis()->SetLabelSize(0.05);
   hframe_copy450->GetYaxis()->SetTitleSize(0.06);
   hframe_copy450->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy450->GetYaxis()->SetTitleFont(42);
   hframe_copy450->GetZaxis()->SetLabelFont(42);
   hframe_copy450->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy450->GetZaxis()->SetLabelSize(0.05);
   hframe_copy450->GetZaxis()->SetTitleSize(0.06);
   hframe_copy450->GetZaxis()->SetTitleFont(42);
   hframe_copy450->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt2->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_pt2);
}
