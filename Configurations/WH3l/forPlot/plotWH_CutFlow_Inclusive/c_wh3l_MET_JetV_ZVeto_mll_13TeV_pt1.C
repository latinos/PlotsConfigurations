void c_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1/cc
//=========  (Sun Jul  3 16:19:24 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Range(-16,-1.435714,209,9.60824);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe491 = new TH1F("hframe491","",1000,20,200);
   hframe491->SetMinimum(0);
   hframe491->SetMaximum(9.056043);
   hframe491->SetDirectory(0);
   hframe491->SetStats(0);
   hframe491->SetLineStyle(0);
   hframe491->SetMarkerStyle(20);
   hframe491->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe491->GetXaxis()->SetNdivisions(506);
   hframe491->GetXaxis()->SetLabelFont(42);
   hframe491->GetXaxis()->SetLabelOffset(0.007);
   hframe491->GetXaxis()->SetLabelSize(0.05);
   hframe491->GetXaxis()->SetTitleSize(0.06);
   hframe491->GetXaxis()->SetTitleOffset(0.9);
   hframe491->GetXaxis()->SetTitleFont(42);
   hframe491->GetYaxis()->SetTitle("Events");
   hframe491->GetYaxis()->SetLabelFont(42);
   hframe491->GetYaxis()->SetLabelOffset(0.007);
   hframe491->GetYaxis()->SetLabelSize(0.05);
   hframe491->GetYaxis()->SetTitleSize(0.06);
   hframe491->GetYaxis()->SetTitleOffset(1.25);
   hframe491->GetYaxis()->SetTitleFont(42);
   hframe491->GetZaxis()->SetLabelFont(42);
   hframe491->GetZaxis()->SetLabelOffset(0.007);
   hframe491->GetZaxis()->SetLabelSize(0.05);
   hframe491->GetZaxis()->SetTitleSize(0.06);
   hframe491->GetZaxis()->SetTitleFont(42);
   hframe491->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1",25,20,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->SetMinimum(-0.8340949);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->SetMaximum(3.803538);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_99);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492","histo_Fake",25,20,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(1,-0.1454879);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(2,0.8635721);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(3,1.563846);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(4,1.187313);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(5,2.004499);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(6,-0.4402518);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(7,1.503246);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(8,0.9569054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(9,0.3577204);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(10,0.4397561);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(11,0.5749096);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(12,-0.0886245);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(14,3.916463e-05);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(20,-0.02257761);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(23,-0.008195123);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(1,0.07043816);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(2,0.6205576);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(3,0.9779928);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(4,0.8854119);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(5,1.173959);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(6,0.3938431);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(7,0.9309152);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(8,0.701622);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(9,0.4013468);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(10,0.596212);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(11,0.5626881);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(12,0.09402247);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(14,3.916463e-05);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(20,0.02257761);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(23,0.008195123);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1492->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493","histo_WW",25,20,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinContent(4,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinContent(5,0.03235779);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinContent(8,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinContent(9,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinError(4,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinError(5,0.02304949);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinError(8,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetBinError(9,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1493->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494","histo_VVV",25,20,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(1,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(2,0.008397149);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(3,0.02554516);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(4,0.03954024);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(5,0.02615233);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(6,0.02929);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(7,0.02269013);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(8,0.02145989);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(9,0.02989745);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(10,0.01525726);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(11,0.01396847);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(12,0.01609952);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(13,0.01428221);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(14,0.002674708);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(15,0.003034496);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(16,0.009862135);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(17,0.01266189);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(18,0.005834884);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(19,0.003496491);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(22,-0.0007551598);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(24,0.001089628);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinContent(26,0.012248);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(1,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(2,0.003997227);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(3,0.007344632);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(4,0.009750433);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(5,0.008747312);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(6,0.009680722);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(7,0.007275298);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(8,0.007403455);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(9,0.009024626);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(10,0.005653558);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(11,0.006689635);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(12,0.005773761);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(13,0.005628959);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(14,0.003860072);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(15,0.002386574);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(16,0.005955572);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(17,0.005109289);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(18,0.003731274);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(19,0.002482493);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(22,0.003308156);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(24,0.00219322);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetBinError(26,0.005297419);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1494->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495","histo_Vg",25,20,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinContent(1,0.2824016);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinContent(2,0.6483322);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinContent(3,0.7127835);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinContent(4,0.726277);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinContent(5,0.2966338);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinContent(7,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinContent(8,-0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinError(1,0.1529224);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinError(2,0.3322667);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinError(3,0.2665188);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinError(4,0.2598825);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinError(5,0.1626773);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinError(7,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetBinError(8,0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1495->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496","histo_ZZ",25,20,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(1,0.06194427);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(2,0.09277288);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(3,0.1255012);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(4,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(5,0.04248237);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(6,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(11,0.1094459);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(12,0.07239507);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(1,0.0442751);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(2,0.06590139);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(3,0.07257766);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(4,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(5,0.03177358);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(6,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(11,0.06568915);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(12,0.05277724);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1496->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497","histo_WZ",25,20,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(1,0.5006749);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(2,0.9695511);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(3,1.114704);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(4,0.9585287);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(5,0.6910529);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(6,0.4579572);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(7,0.4589784);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(8,0.3091051);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(9,0.3635052);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(10,0.2392952);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(11,0.2037113);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(12,0.1877854);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(13,0.1090304);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(14,0.1073756);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(15,0.07870884);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(16,0.05593185);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(17,0.06906476);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(18,0.0445281);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(19,0.04317831);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(20,0.03349211);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(21,0.04263632);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(22,0.03207864);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(23,0.03255722);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(24,0.01817225);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(25,0.01340563);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinContent(26,0.2542066);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(1,0.05264913);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(2,0.07295509);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(3,0.07743219);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(4,0.07303209);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(5,0.06119047);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(6,0.04908938);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(7,0.04940232);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(8,0.04059405);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(9,0.04465421);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(10,0.03624834);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(11,0.03364479);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(12,0.03228524);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(13,0.02436511);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(14,0.02393899);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(15,0.02037771);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(16,0.01581369);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(17,0.01932735);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(18,0.01583284);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(19,0.01493803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(20,0.01341155);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(21,0.01523641);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(22,0.01279333);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(23,0.0136934);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(24,0.009445118);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(25,0.007171629);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetBinError(26,0.03722384);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1497->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(1,0.01404214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(2,0.05101408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(3,0.08003701);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(4,0.08898488);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(5,0.07845765);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(6,0.07652273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(7,0.0557697);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(8,0.04634317);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(9,0.05849949);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(10,0.03023783);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(11,0.02811351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(12,0.02109384);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(13,0.02965876);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(14,0.02058555);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(15,0.01553135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(16,0.0283753);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(17,0.01306519);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(18,0.01240989);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(19,0.008147714);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(20,0.004891134);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(21,0.00340474);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(22,0.004617403);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(23,0.00104529);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(25,0.007579157);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinContent(26,0.02966098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(1,0.004105015);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(2,0.007095402);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(3,0.00955848);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(4,0.01054366);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(5,0.009621013);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(6,0.009818912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(7,0.007563332);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(8,0.007266249);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(9,0.009042331);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(10,0.006573034);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(11,0.005904644);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(12,0.00484267);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(13,0.005861869);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(14,0.004511126);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(15,0.004272491);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(16,0.006216599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(17,0.00388345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(18,0.003921174);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(19,0.003050854);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(20,0.001573952);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(21,0.001425204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(22,0.001891796);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(23,0.0005378982);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(25,0.003077584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetBinError(26,0.005712156);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1498->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1",25,20,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->SetMaximum(0.104505);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_100);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(1,0.01404214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(2,0.05101408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(3,0.08003701);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(4,0.08898488);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(5,0.07845765);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(6,0.07652273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(7,0.0557697);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(8,0.04634317);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(9,0.05849949);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(10,0.03023783);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(11,0.02811351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(12,0.02109384);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(13,0.02965876);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(14,0.02058555);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(15,0.01553135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(16,0.0283753);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(17,0.01306519);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(18,0.01240989);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(19,0.008147714);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(20,0.004891134);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(21,0.00340474);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(22,0.004617403);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(23,0.00104529);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(25,0.007579157);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinContent(26,0.02966098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(1,0.004105015);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(2,0.007095402);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(3,0.00955848);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(4,0.01054366);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(5,0.009621013);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(6,0.009818912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(7,0.007563332);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(8,0.007266249);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(9,0.009042331);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(10,0.006573034);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(11,0.005904644);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(12,0.00484267);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(13,0.005861869);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(14,0.004511126);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(15,0.004272491);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(16,0.006216599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(17,0.00388345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(18,0.003921174);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(19,0.003050854);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(20,0.001573952);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(21,0.001425204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(22,0.001891796);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(23,0.0005378982);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(25,0.003077584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetBinError(26,0.005712156);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1499->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3099[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3099[25] = {
   0.7016686,
   2.59875,
   3.54238,
   2.965429,
   3.093178,
   0.08970893,
   2.089734,
   1.178867,
   0.7664268,
   0.6943085,
   0.9020354,
   0.1876555,
   0.1233126,
   0.1100894,
   0.08174334,
   0.06579398,
   0.08172666,
   0.05036299,
   0.0466748,
   0.01091451,
   0.8902726,
   0.03132348,
   0.02436209,
   0.01926188,
   0.1479195};
   Double_t _felx3099[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3099[25] = {
   0.3307847,
   1.154838,
   1.507486,
   1.350353,
   1.621865,
   0.5198799,
   1.212904,
   0.9485487,
   0.4458483,
   0.505946,
   0.6985573,
   0.1884579,
   0.03333255,
   0.02744183,
   0.02322297,
   0.02403754,
   0.02763951,
   0.02034988,
   0.01807902,
   0.03686003,
   0.9124507,
   0.01614398,
   0.02210092,
   0.01059515,
   0.1493041};
   Double_t _fehx3099[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3099[25] = {
   0.3305134,
   1.154737,
   1.507247,
   1.350314,
   1.621816,
   0.5198489,
   1.212897,
   0.9485434,
   0.4877518,
   0.6566367,
   0.698562,
   0.1831343,
   0.033282,
   0.02840454,
   0.02318775,
   0.02403861,
   0.02761156,
   0.02034298,
   0.01795102,
   0.03685858,
   0.9124504,
   0.01358583,
   0.02209849,
   0.01169378,
   0.1493043};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3099,_fy3099,_felx3099,_fehx3099,_fely3099,_fehy3099);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3099 = new TH1F("Graph_Graph3099","",100,2.000001,218);
   Graph_Graph3099->SetMinimum(-0.9781508);
   Graph_Graph3099->SetMaximum(5.597607);
   Graph_Graph3099->SetDirectory(0);
   Graph_Graph3099->SetStats(0);
   Graph_Graph3099->SetLineStyle(0);
   Graph_Graph3099->SetMarkerStyle(20);
   Graph_Graph3099->GetXaxis()->SetLabelFont(42);
   Graph_Graph3099->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3099->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3099->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3099->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3099->GetXaxis()->SetTitleFont(42);
   Graph_Graph3099->GetYaxis()->SetLabelFont(42);
   Graph_Graph3099->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3099->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3099->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3099->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3099->GetYaxis()->SetTitleFont(42);
   Graph_Graph3099->GetZaxis()->SetLabelFont(42);
   Graph_Graph3099->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3099->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3099->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3099->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3099);
   
   grae->Draw("2");
   
   Double_t _fx3100[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3100[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3100[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3100[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3100[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3100[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3100,_fy3100,_felx3100,_fehx3100,_fely3100,_fehy3100);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3100 = new TH1F("Graph_Graph3100","",100,2.000001,218);
   Graph_Graph3100->SetMinimum(0);
   Graph_Graph3100->SetMaximum(1.262698);
   Graph_Graph3100->SetDirectory(0);
   Graph_Graph3100->SetStats(0);
   Graph_Graph3100->SetLineStyle(0);
   Graph_Graph3100->SetMarkerStyle(20);
   Graph_Graph3100->GetXaxis()->SetLabelFont(42);
   Graph_Graph3100->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3100->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3100->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3100->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3100->GetXaxis()->SetTitleFont(42);
   Graph_Graph3100->GetYaxis()->SetLabelFont(42);
   Graph_Graph3100->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3100->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3100->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3100->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3100->GetYaxis()->SetTitleFont(42);
   Graph_Graph3100->GetZaxis()->SetLabelFont(42);
   Graph_Graph3100->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3100->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3100->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3100->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3100);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy500 = new TH1F("hframe_copy500","",1000,20,200);
   hframe_copy500->SetMinimum(0);
   hframe_copy500->SetMaximum(9.056043);
   hframe_copy500->SetDirectory(0);
   hframe_copy500->SetStats(0);
   hframe_copy500->SetLineStyle(0);
   hframe_copy500->SetMarkerStyle(20);
   hframe_copy500->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy500->GetXaxis()->SetNdivisions(506);
   hframe_copy500->GetXaxis()->SetLabelFont(42);
   hframe_copy500->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy500->GetXaxis()->SetLabelSize(0.05);
   hframe_copy500->GetXaxis()->SetTitleSize(0.06);
   hframe_copy500->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy500->GetXaxis()->SetTitleFont(42);
   hframe_copy500->GetYaxis()->SetTitle("Events");
   hframe_copy500->GetYaxis()->SetLabelFont(42);
   hframe_copy500->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy500->GetYaxis()->SetLabelSize(0.05);
   hframe_copy500->GetYaxis()->SetTitleSize(0.06);
   hframe_copy500->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy500->GetYaxis()->SetTitleFont(42);
   hframe_copy500->GetZaxis()->SetLabelFont(42);
   hframe_copy500->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy500->GetZaxis()->SetLabelSize(0.05);
   hframe_copy500->GetZaxis()->SetTitleSize(0.06);
   hframe_copy500->GetZaxis()->SetTitleFont(42);
   hframe_copy500->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1);
}
