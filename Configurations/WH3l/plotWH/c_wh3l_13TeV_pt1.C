void c_wh3l_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt1/cc
//=========  (Fri Jun 24 14:15:08 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_pt1 = new TCanvas("ccwh3l_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_13TeV_pt1->Range(-88,-41.43915,524.5,277.3236);
   ccwh3l_13TeV_pt1->SetFillColor(0);
   ccwh3l_13TeV_pt1->SetBorderMode(0);
   ccwh3l_13TeV_pt1->SetBorderSize(2);
   ccwh3l_13TeV_pt1->SetTickx(1);
   ccwh3l_13TeV_pt1->SetTicky(1);
   ccwh3l_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe82 = new TH1F("hframe82","",1000,10,500);
   hframe82->SetMinimum(0);
   hframe82->SetMaximum(261.3854);
   hframe82->SetDirectory(0);
   hframe82->SetStats(0);
   hframe82->SetLineStyle(0);
   hframe82->SetMarkerStyle(20);
   hframe82->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe82->GetXaxis()->SetNdivisions(506);
   hframe82->GetXaxis()->SetLabelFont(42);
   hframe82->GetXaxis()->SetLabelOffset(0.007);
   hframe82->GetXaxis()->SetLabelSize(0.05);
   hframe82->GetXaxis()->SetTitleSize(0.06);
   hframe82->GetXaxis()->SetTitleOffset(0.9);
   hframe82->GetXaxis()->SetTitleFont(42);
   hframe82->GetYaxis()->SetTitle("Events");
   hframe82->GetYaxis()->SetLabelFont(42);
   hframe82->GetYaxis()->SetLabelOffset(0.007);
   hframe82->GetYaxis()->SetLabelSize(0.05);
   hframe82->GetYaxis()->SetTitleSize(0.06);
   hframe82->GetYaxis()->SetTitleOffset(1.25);
   hframe82->GetYaxis()->SetTitleFont(42);
   hframe82->GetZaxis()->SetLabelFont(42);
   hframe82->GetZaxis()->SetLabelOffset(0.007);
   hframe82->GetZaxis()->SetLabelSize(0.05);
   hframe82->GetZaxis()->SetTitleSize(0.06);
   hframe82->GetZaxis()->SetTitleFont(42);
   hframe82->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt1->SetName("thsBackground_grouped_wh3l_13TeV_pt1");
   thsBackground_grouped_wh3l_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt1_stack_19 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt1_stack_19","thsBackground_grouped_wh3l_13TeV_pt1",50,10,500);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->SetMinimum(-1.466338);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->SetMaximum(109.7819);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt1_stack_19);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_pt183 = new TH1D("new_histo_group_DY_wh3l_13TeV_pt183","histo_DY",50,10,500);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(2,20.34825);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(3,56.13576);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(4,59.309);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(5,36.38405);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(6,17.53198);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(7,8.650606);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(8,3.144049);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(9,2.099911);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(10,-0.593421);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(11,0.5727648);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(12,0.7504632);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(13,0.5739203);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinContent(16,-0.733169);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(2,4.515422);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(3,6.846107);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(4,8.283219);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(5,6.676573);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(6,4.74051);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(7,2.835064);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(8,2.26355);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(9,1.076548);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(10,0.433998);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(11,0.5727648);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(12,0.7125856);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(13,0.5739203);
   new_histo_group_DY_wh3l_13TeV_pt183->SetBinError(16,0.733169);
   new_histo_group_DY_wh3l_13TeV_pt183->SetEntries(546);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_pt183->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_pt183->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_pt183->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_pt183->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt183->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_pt183->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt183->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_pt183->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_DY_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_pt184 = new TH1D("new_histo_group_top_wh3l_13TeV_pt184","histo_top",50,10,500);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(2,0.375185);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(3,0.8109029);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(4,1.220029);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(5,1.011498);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(6,1.039538);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(7,0.9084794);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(8,0.4962782);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(9,0.5622525);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(10,0.5759204);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(11,0.3067539);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(12,0.1610223);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(13,0.09987803);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(14,0.0965411);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(15,0.05997351);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(16,0.09735632);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(17,0.07045002);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(18,0.182464);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(20,0.02284534);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(21,0.04392768);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinContent(24,0.0243262);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(2,0.09177814);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(3,0.1547737);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(4,0.2117247);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(5,0.17168);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(6,0.1961028);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(7,0.16839);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(8,0.1043998);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(9,0.1336858);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(10,0.1373096);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(11,0.0798034);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(12,0.05757323);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(13,0.04562616);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(14,0.0488082);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(15,0.0352682);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(16,0.04902007);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(17,0.04067886);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(18,0.1153057);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(20,0.02284534);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(21,0.03141247);
   new_histo_group_top_wh3l_13TeV_pt184->SetBinError(24,0.0243262);
   new_histo_group_top_wh3l_13TeV_pt184->SetEntries(377);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_pt184->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_pt184->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_pt184->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_pt184->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt184->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_pt184->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt184->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_pt184->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_top_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt185 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt185","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(2,0.01398351);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(3,0.047111);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(4,0.03048565);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(5,0.0951609);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(6,0.02629112);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(7,0.0279872);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(8,0.0378339);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(9,0.003279302);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(10,0.01005404);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinContent(11,0.01308702);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(2,0.01398351);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(3,0.02573006);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(4,0.01996537);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(5,0.0382053);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(6,0.01906726);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(7,0.01987661);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(8,0.02509865);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(9,0.003279302);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(10,0.01005404);
   new_histo_group_WW_wh3l_13TeV_pt185->SetBinError(11,0.01308702);
   new_histo_group_WW_wh3l_13TeV_pt185->SetEntries(26);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt185->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt185->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt185->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt185->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt185->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt185->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt185->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt185->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_WW_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt186 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt186","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(2,0.001289804);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(3,0.004194878);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(4,0.01451723);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(5,0.03279835);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(6,0.03082993);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(7,0.02789586);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(8,0.02733236);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(9,0.02035911);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(10,0.0132809);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(11,0.009568812);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(12,0.007259699);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(13,0.008652189);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(14,0.007335901);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(15,0.006568619);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(16,0.003903789);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(17,0.002843913);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(18,0.002210292);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(19,0.002071898);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(20,0.001401426);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(21,0.005621451);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(22,0.0005601619);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(23,0.001840777);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(24,0.00123543);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(25,0.00128642);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(27,0.0008012583);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(28,0.001692145);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(29,-0.0003108601);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(30,0.0006443868);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(32,0.0004015027);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(35,0.0009730815);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(36,0.0007274884);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinContent(38,0.001153268);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(2,0.0009120321);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(3,0.001894319);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(4,0.003028987);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(5,0.004615579);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(6,0.004598799);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(7,0.004491107);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(8,0.004116527);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(9,0.004081222);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(10,0.002844242);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(11,0.002638289);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(12,0.002397389);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(13,0.002278021);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(14,0.002169952);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(15,0.002279111);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(16,0.001495969);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(17,0.001660482);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(18,0.001367565);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(19,0.001196774);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(20,0.0009943492);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(21,0.001888608);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(22,0.001214463);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(23,0.00106801);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(24,0.0008838187);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(25,0.0009103384);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(27,0.001204701);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(28,0.0009988113);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(29,0.0008541636);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(30,0.0006443868);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(32,0.0004015027);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(35,0.0007442763);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(36,0.000527022);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetBinError(38,0.0008168152);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetEntries(478);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt186->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt186->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt186->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_VVV_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_pt187 = new TH1D("new_histo_group_VZ_wh3l_13TeV_pt187","histo_VZ",50,10,500);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(2,7.52814);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(3,16.0511);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(4,43.74234);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(5,60.81394);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(6,48.0848);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(7,31.58545);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(8,20.84597);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(9,14.24341);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(10,9.070562);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(11,6.644191);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(12,4.732079);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(13,3.498693);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(14,2.457354);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(15,2.004082);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(16,1.388519);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(17,1.087241);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(18,0.7693796);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(19,0.5313488);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(20,0.7009976);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(21,0.3120796);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(22,0.3147454);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(23,0.4782873);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(24,0.2289942);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(25,0.2480508);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(26,0.3261829);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(27,0.1469585);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(28,0.164452);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(29,0.0730685);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(30,0.1476957);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(31,0.105109);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(32,0.1500014);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(33,0.08895551);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(34,0.03771575);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(35,0.01865241);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(36,0.09293923);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(37,0.04566485);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(38,0.04043177);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(39,0.03828338);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(40,0.01328758);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(42,0.02894335);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(43,0.008508989);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(44,0.01775095);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(45,0.02062832);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(46,0.009234849);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(47,0.001144166);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(48,0.00561147);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(49,0.01853109);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(50,0.005942831);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinContent(51,0.1053822);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(2,0.2993413);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(3,0.414787);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(4,0.7361482);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(5,0.8817818);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(6,0.7988861);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(7,0.6423559);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(8,0.5299814);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(9,0.4493389);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(10,0.3519684);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(11,0.3079541);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(12,0.2854669);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(13,0.213785);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(14,0.1885041);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(15,0.1691869);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(16,0.1395821);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(17,0.1140529);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(18,0.09118552);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(19,0.06355264);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(20,0.1073272);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(21,0.04782886);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(22,0.05887929);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(23,0.09570098);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(24,0.03548786);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(25,0.06846206);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(26,0.08478278);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(27,0.02835218);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(28,0.05610525);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(29,0.01991227);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(30,0.04880796);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(31,0.04575624);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(32,0.06392623);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(33,0.04259304);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(34,0.0144513);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(35,0.009583696);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(36,0.03867959);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(37,0.01624103);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(38,0.01425901);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(39,0.014645);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(40,0.0078903);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(42,0.01210855);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(43,0.006436134);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(44,0.01025279);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(45,0.01078538);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(46,0.006050892);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(47,0.001144166);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(48,0.00561147);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(49,0.01070543);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(50,0.005942831);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetBinError(51,0.04033287);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetEntries(46249);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_pt187->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_pt187->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_pt187->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_VZ_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt188 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt188","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(2,0.06660282);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(3,0.1841495);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(4,0.2378068);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(5,0.2109009);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(6,0.2070142);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(7,0.1244772);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(8,0.1221104);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(9,0.08803373);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(10,0.05124416);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(11,0.05906574);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(12,0.03114883);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(13,0.04123829);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(14,0.02017602);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(15,0.0131038);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(16,0.008843025);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(17,0.006632673);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(18,0.003525081);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(19,0.005500612);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(20,0.005331622);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(21,0.004861074);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(22,0.003194062);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(23,0.009814753);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(24,0.002979828);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(25,0.001933182);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(26,0.0008004193);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(27,0.0004231326);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(29,0.002864332);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(31,0.0004704924);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(32,0.0001309576);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(34,0.0005623807);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(35,0.0002342865);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(37,0.001583987);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(39,0.0001964016);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(40,0.0003048081);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(41,2.859349e-08);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(42,0.0002753932);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinContent(46,0.0002865297);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(2,0.008376847);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(3,0.01397826);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(4,0.01646351);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(5,0.01543129);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(6,0.01570128);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(7,0.01188236);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(8,0.01266747);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(9,0.0102405);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(10,0.007332974);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(11,0.0082132);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(12,0.005522602);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(13,0.007334455);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(14,0.005044887);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(15,0.003712618);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(16,0.002517849);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(17,0.002046064);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(18,0.00112135);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(19,0.00205775);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(20,0.002566277);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(21,0.002362279);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(22,0.001749906);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(23,0.003572831);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(24,0.001519294);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(25,0.001383065);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(26,0.0004765623);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(27,0.0002992156);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(29,0.001896812);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(31,0.0003454787);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(32,0.0001309576);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(34,0.0004099627);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(35,0.0002342865);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(37,0.001583987);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(39,0.0001964016);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(40,0.0003048081);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(41,2.859349e-08);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(42,0.0002192835);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetBinError(46,0.0002235295);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_pt1,"");
   thsBackground_grouped_wh3l_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt1->SetName("thsSignal_grouped_wh3l_13TeV_pt1");
   thsSignal_grouped_wh3l_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt1_stack_20 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt1_stack_20","thsSignal_grouped_wh3l_13TeV_pt1",50,10,500);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->SetMaximum(0.2669838);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt1_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt189 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt189","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(2,0.06660282);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(3,0.1841495);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(4,0.2378068);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(5,0.2109009);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(6,0.2070142);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(7,0.1244772);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(8,0.1221104);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(9,0.08803373);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(10,0.05124416);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(11,0.05906574);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(12,0.03114883);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(13,0.04123829);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(14,0.02017602);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(15,0.0131038);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(16,0.008843025);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(17,0.006632673);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(18,0.003525081);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(19,0.005500612);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(20,0.005331622);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(21,0.004861074);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(22,0.003194062);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(23,0.009814753);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(24,0.002979828);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(25,0.001933182);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(26,0.0008004193);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(27,0.0004231326);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(29,0.002864332);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(31,0.0004704924);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(32,0.0001309576);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(34,0.0005623807);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(35,0.0002342865);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(37,0.001583987);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(39,0.0001964016);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(40,0.0003048081);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(41,2.859349e-08);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(42,0.0002753932);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinContent(46,0.0002865297);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(2,0.008376847);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(3,0.01397826);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(4,0.01646351);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(5,0.01543129);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(6,0.01570128);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(7,0.01188236);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(8,0.01266747);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(9,0.0102405);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(10,0.007332974);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(11,0.0082132);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(12,0.005522602);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(13,0.007334455);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(14,0.005044887);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(15,0.003712618);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(16,0.002517849);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(17,0.002046064);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(18,0.00112135);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(19,0.00205775);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(20,0.002566277);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(21,0.002362279);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(22,0.001749906);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(23,0.003572831);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(24,0.001519294);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(25,0.001383065);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(26,0.0004765623);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(27,0.0002992156);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(29,0.001896812);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(31,0.0003454787);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(32,0.0001309576);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(34,0.0004099627);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(35,0.0002342865);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(37,0.001583987);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(39,0.0001964016);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(40,0.0003048081);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(41,2.859349e-08);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(42,0.0002192835);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetBinError(46,0.0002235295);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt189->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt189->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_pt1,"");
   thsSignal_grouped_wh3l_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3010[50] = {
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
   Double_t _fy3010[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3010[50] = {
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
   Double_t _fely3010[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3010[50] = {
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
   Double_t _fehy3010[50] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,549);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(1.262698);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_pt1","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_pt1","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_pt1","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt1","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_pt1","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_pt1","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_pt1","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt1","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy90 = new TH1F("hframe_copy90","",1000,10,500);
   hframe_copy90->SetMinimum(0);
   hframe_copy90->SetMaximum(261.3854);
   hframe_copy90->SetDirectory(0);
   hframe_copy90->SetStats(0);
   hframe_copy90->SetLineStyle(0);
   hframe_copy90->SetMarkerStyle(20);
   hframe_copy90->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy90->GetXaxis()->SetNdivisions(506);
   hframe_copy90->GetXaxis()->SetLabelFont(42);
   hframe_copy90->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetXaxis()->SetLabelSize(0.05);
   hframe_copy90->GetXaxis()->SetTitleSize(0.06);
   hframe_copy90->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy90->GetXaxis()->SetTitleFont(42);
   hframe_copy90->GetYaxis()->SetTitle("Events");
   hframe_copy90->GetYaxis()->SetLabelFont(42);
   hframe_copy90->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetYaxis()->SetLabelSize(0.05);
   hframe_copy90->GetYaxis()->SetTitleSize(0.06);
   hframe_copy90->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy90->GetYaxis()->SetTitleFont(42);
   hframe_copy90->GetZaxis()->SetLabelFont(42);
   hframe_copy90->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetZaxis()->SetLabelSize(0.05);
   hframe_copy90->GetZaxis()->SetTitleSize(0.06);
   hframe_copy90->GetZaxis()->SetTitleFont(42);
   hframe_copy90->Draw("sameaxis");
   ccwh3l_13TeV_pt1->Modified();
   ccwh3l_13TeV_pt1->cd();
   ccwh3l_13TeV_pt1->SetSelected(ccwh3l_13TeV_pt1);
}
