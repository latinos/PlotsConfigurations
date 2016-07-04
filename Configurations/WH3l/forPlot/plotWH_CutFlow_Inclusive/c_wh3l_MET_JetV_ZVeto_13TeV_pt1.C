void c_wh3l_MET_JetV_ZVeto_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt1/cc
//=========  (Sun Jul  3 16:19:18 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->Range(-16,-1.443455,209,9.660048);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe391 = new TH1F("hframe391","",1000,20,200);
   hframe391->SetMinimum(0);
   hframe391->SetMaximum(9.104873);
   hframe391->SetDirectory(0);
   hframe391->SetStats(0);
   hframe391->SetLineStyle(0);
   hframe391->SetMarkerStyle(20);
   hframe391->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe391->GetXaxis()->SetNdivisions(506);
   hframe391->GetXaxis()->SetLabelFont(42);
   hframe391->GetXaxis()->SetLabelOffset(0.007);
   hframe391->GetXaxis()->SetLabelSize(0.05);
   hframe391->GetXaxis()->SetTitleSize(0.06);
   hframe391->GetXaxis()->SetTitleOffset(0.9);
   hframe391->GetXaxis()->SetTitleFont(42);
   hframe391->GetYaxis()->SetTitle("Events");
   hframe391->GetYaxis()->SetLabelFont(42);
   hframe391->GetYaxis()->SetLabelOffset(0.007);
   hframe391->GetYaxis()->SetLabelSize(0.05);
   hframe391->GetYaxis()->SetTitleSize(0.06);
   hframe391->GetYaxis()->SetTitleOffset(1.25);
   hframe391->GetYaxis()->SetTitleFont(42);
   hframe391->GetZaxis()->SetLabelFont(42);
   hframe391->GetZaxis()->SetLabelOffset(0.007);
   hframe391->GetZaxis()->SetLabelSize(0.05);
   hframe391->GetZaxis()->SetTitleSize(0.06);
   hframe391->GetZaxis()->SetTitleFont(42);
   hframe391->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1",25,20,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->SetMinimum(-0.8340949);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->SetMaximum(3.824047);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_79);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392","histo_Fake",25,20,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(1,-0.1454879);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(2,0.8635721);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(3,1.563846);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(4,1.187313);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(5,1.969894);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(6,-0.4402518);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(7,1.503246);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(8,1.238235);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(9,0.3577204);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(10,0.4397561);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(11,0.8480663);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(12,-0.0886245);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(14,0.3563831);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(16,-0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(20,-0.02257761);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(23,-0.008195123);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(24,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinContent(26,-0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(1,0.07043816);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(2,0.6205576);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(3,0.9779928);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(4,0.8854119);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(5,1.174469);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(6,0.3938431);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(7,0.9309152);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(8,0.755923);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(9,0.4013468);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(10,0.596212);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(11,0.6442549);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(12,0.09402247);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(14,0.356344);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(16,0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(20,0.02257761);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(23,0.008195123);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(24,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetBinError(26,0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetEntries(117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1392->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393","histo_WW",25,20,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinContent(4,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinContent(5,0.03235779);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinContent(8,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinContent(9,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinError(4,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinError(5,0.02304949);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinError(8,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetBinError(9,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1393->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394","histo_VVV",25,20,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(1,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(2,0.008397149);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(3,0.02832804);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(4,0.03954024);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(5,0.02615233);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(6,0.0321348);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(7,0.03085665);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(8,0.02476291);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(9,0.03537457);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(10,0.01929868);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(11,0.01626591);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(12,0.02252427);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(13,0.02574972);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(14,0.005054284);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(15,0.008493233);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(16,0.01890799);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(17,0.01790457);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(18,0.01013279);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(19,0.0006657571);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(20,0.00481084);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(21,0.009448464);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(22,0.003346212);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(23,0.002276018);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(24,0.001089628);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(25,0.005221744);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinContent(26,0.03071567);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(1,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(2,0.003997227);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(3,0.007854174);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(4,0.009750433);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(5,0.008747312);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(6,0.01009006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(7,0.008259708);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(8,0.007784406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(9,0.009573815);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(10,0.00743246);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(11,0.00707315);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(12,0.006993654);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(13,0.007488436);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(14,0.004534593);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(15,0.004546964);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(16,0.007357083);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(17,0.006207936);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(18,0.004867761);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(19,0.00376508);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(20,0.003405745);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(21,0.004729289);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(22,0.004402313);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(23,0.002276018);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(24,0.00219322);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(25,0.003692798);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetBinError(26,0.008906205);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetEntries(250);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1394->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395","histo_Vg",25,20,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinContent(1,0.2824016);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinContent(2,0.6483322);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinContent(3,0.7127835);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinContent(4,0.726277);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinContent(5,0.2966338);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinContent(7,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinContent(8,-0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinError(1,0.1529224);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinError(2,0.3322667);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinError(3,0.2665188);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinError(4,0.2598825);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinError(5,0.1626773);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinError(7,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinError(8,0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1395->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396","histo_ZZ",25,20,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(1,0.06194427);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(2,0.09277288);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(3,0.1255012);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(4,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(5,0.04248237);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(6,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(11,0.1094459);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(12,0.07239507);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(1,0.0442751);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(2,0.06590139);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(3,0.07257766);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(4,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(5,0.03177358);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(6,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(11,0.06568915);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(12,0.05277724);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1396->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397","histo_WZ",25,20,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(1,0.5006749);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(2,0.9695511);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(3,1.131453);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(4,0.9664822);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(5,0.7316945);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(6,0.5441956);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(7,0.5520297);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(8,0.4217829);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(9,0.4577998);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(10,0.4096829);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(11,0.3277291);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(12,0.3105292);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(13,0.2146744);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(14,0.200556);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(15,0.1450759);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(16,0.1566768);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(17,0.137111);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(18,0.09436967);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(19,0.08986384);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(20,0.07743703);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(21,0.06862977);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(22,0.08138521);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(23,0.0800884);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(24,0.03875419);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(25,0.03423046);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinContent(26,0.7202065);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(1,0.05264913);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(2,0.07295509);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(3,0.07804175);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(4,0.07335069);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(5,0.06301013);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(6,0.0539029);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(7,0.05402829);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(8,0.04795078);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(9,0.04974719);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(10,0.04784818);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(11,0.04226113);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(12,0.04124817);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(13,0.03382716);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(14,0.03256171);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(15,0.02767059);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(16,0.02852318);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(17,0.02747595);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(18,0.02259264);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(19,0.0216973);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(20,0.01983043);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(21,0.01904977);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(22,0.02107252);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(23,0.02104319);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(24,0.0142653);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(25,0.01324209);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetBinError(26,0.06236737);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetEntries(1942);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1397->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(1,0.01404214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(2,0.05101408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(3,0.08003701);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(4,0.08898488);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(5,0.07845765);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(6,0.07652273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(7,0.0557697);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(8,0.04634317);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(9,0.05965811);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(10,0.03023783);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(11,0.02811351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(12,0.02265254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(13,0.02965876);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(14,0.02058555);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(15,0.01553135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(16,0.0283753);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(17,0.01306519);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(18,0.01277269);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(19,0.009037908);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(20,0.004891134);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(21,0.00340474);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(22,0.004617403);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(23,0.00104529);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(25,0.007579157);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinContent(26,0.02966098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(1,0.004105015);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(2,0.007095402);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(3,0.00955848);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(4,0.01054366);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(5,0.009621013);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(6,0.009818912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(7,0.007563332);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(8,0.007266249);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(9,0.009116257);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(10,0.006573034);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(11,0.005904644);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(12,0.005087338);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(13,0.005861869);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(14,0.004511126);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(15,0.004272491);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(16,0.006216599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(17,0.00388345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(18,0.003937921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(19,0.003178074);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(20,0.001573952);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(21,0.001425204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(22,0.001891796);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(23,0.0005378982);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(25,0.003077584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetBinError(26,0.005712156);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1398->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1",25,20,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->SetMaximum(0.104505);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_80);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(1,0.01404214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(2,0.05101408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(3,0.08003701);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(4,0.08898488);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(5,0.07845765);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(6,0.07652273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(7,0.0557697);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(8,0.04634317);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(9,0.05965811);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(10,0.03023783);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(11,0.02811351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(12,0.02265254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(13,0.02965876);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(14,0.02058555);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(15,0.01553135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(16,0.0283753);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(17,0.01306519);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(18,0.01277269);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(19,0.009037908);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(20,0.004891134);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(21,0.00340474);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(22,0.004617403);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(23,0.00104529);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(25,0.007579157);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinContent(26,0.02966098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(1,0.004105015);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(2,0.007095402);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(3,0.00955848);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(4,0.01054366);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(5,0.009621013);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(6,0.009818912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(7,0.007563332);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(8,0.007266249);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(9,0.009116257);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(10,0.006573034);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(11,0.005904644);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(12,0.005087338);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(13,0.005861869);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(14,0.004511126);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(15,0.004272491);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(16,0.006216599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(17,0.00388345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(18,0.003937921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(19,0.003178074);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(20,0.001573952);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(21,0.001425204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(22,0.001891796);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(23,0.0005378982);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(25,0.003077584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetBinError(26,0.005712156);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1399->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3079[25] = {
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
   Double_t _fy3079[25] = {
   0.7016686,
   2.59875,
   3.561912,
   2.973383,
   3.099215,
   0.1787921,
   2.190951,
   1.576177,
   0.8661985,
   0.8687376,
   1.301507,
   0.316824,
   0.2404241,
   0.5619934,
   0.1638096,
   0.1747878,
   0.1550156,
   0.1045025,
   0.1963784,
   0.05967027,
   0.9257145,
   0.08473142,
   0.0741693,
   0.02514165,
   0.1739661};
   Double_t _felx3079[25] = {
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
   Double_t _fely3079[25] = {
   0.3307847,
   1.154838,
   1.508599,
   1.350657,
   1.618777,
   0.525071,
   1.218157,
   1.04379,
   0.4516458,
   0.5188754,
   0.8154933,
   0.1992278,
   0.04916505,
   0.4128557,
   0.0436855,
   0.04169181,
   0.03836945,
   0.02926189,
   0.1284379,
   0.04681206,
   0.9205846,
   0.02484004,
   0.03187531,
   0.03051915,
   0.1586886};
   Double_t _fehx3079[25] = {
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
   Double_t _fehy3079[25] = {
   0.3305134,
   1.154737,
   1.508358,
   1.350618,
   1.618729,
   0.5250362,
   1.218149,
   1.043783,
   0.4935525,
   0.6697821,
   0.8154981,
   0.1938519,
   0.04891502,
   0.4128293,
   0.04362219,
   0.04159684,
   0.03833408,
   0.0292493,
   0.1314819,
   0.04680849,
   0.920584,
   0.02582343,
   0.03181363,
   0.0316073,
   0.1586879};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3079,_fy3079,_felx3079,_fehx3079,_fely3079,_fehy3079);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3079 = new TH1F("Graph_Graph3079","",100,2.000001,218);
   Graph_Graph3079->SetMinimum(-0.8879338);
   Graph_Graph3079->SetMaximum(5.611925);
   Graph_Graph3079->SetDirectory(0);
   Graph_Graph3079->SetStats(0);
   Graph_Graph3079->SetLineStyle(0);
   Graph_Graph3079->SetMarkerStyle(20);
   Graph_Graph3079->GetXaxis()->SetLabelFont(42);
   Graph_Graph3079->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3079->GetXaxis()->SetTitleFont(42);
   Graph_Graph3079->GetYaxis()->SetLabelFont(42);
   Graph_Graph3079->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3079->GetYaxis()->SetTitleFont(42);
   Graph_Graph3079->GetZaxis()->SetLabelFont(42);
   Graph_Graph3079->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3079);
   
   grae->Draw("2");
   
   Double_t _fx3080[25] = {
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
   Double_t _fy3080[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3080[25] = {
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
   Double_t _fely3080[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3080[25] = {
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
   Double_t _fehy3080[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3080,_fy3080,_felx3080,_fehx3080,_fely3080,_fehy3080);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3080 = new TH1F("Graph_Graph3080","",100,2.000001,218);
   Graph_Graph3080->SetMinimum(0);
   Graph_Graph3080->SetMaximum(1.262698);
   Graph_Graph3080->SetDirectory(0);
   Graph_Graph3080->SetStats(0);
   Graph_Graph3080->SetLineStyle(0);
   Graph_Graph3080->SetMarkerStyle(20);
   Graph_Graph3080->GetXaxis()->SetLabelFont(42);
   Graph_Graph3080->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3080->GetXaxis()->SetTitleFont(42);
   Graph_Graph3080->GetYaxis()->SetLabelFont(42);
   Graph_Graph3080->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3080->GetYaxis()->SetTitleFont(42);
   Graph_Graph3080->GetZaxis()->SetLabelFont(42);
   Graph_Graph3080->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3080);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy400 = new TH1F("hframe_copy400","",1000,20,200);
   hframe_copy400->SetMinimum(0);
   hframe_copy400->SetMaximum(9.104873);
   hframe_copy400->SetDirectory(0);
   hframe_copy400->SetStats(0);
   hframe_copy400->SetLineStyle(0);
   hframe_copy400->SetMarkerStyle(20);
   hframe_copy400->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy400->GetXaxis()->SetNdivisions(506);
   hframe_copy400->GetXaxis()->SetLabelFont(42);
   hframe_copy400->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetXaxis()->SetLabelSize(0.05);
   hframe_copy400->GetXaxis()->SetTitleSize(0.06);
   hframe_copy400->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy400->GetXaxis()->SetTitleFont(42);
   hframe_copy400->GetYaxis()->SetTitle("Events");
   hframe_copy400->GetYaxis()->SetLabelFont(42);
   hframe_copy400->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetYaxis()->SetLabelSize(0.05);
   hframe_copy400->GetYaxis()->SetTitleSize(0.06);
   hframe_copy400->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy400->GetYaxis()->SetTitleFont(42);
   hframe_copy400->GetZaxis()->SetLabelFont(42);
   hframe_copy400->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetZaxis()->SetLabelSize(0.05);
   hframe_copy400->GetZaxis()->SetTitleSize(0.06);
   hframe_copy400->GetZaxis()->SetTitleFont(42);
   hframe_copy400->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_pt1);
}
