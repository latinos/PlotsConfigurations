void c_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 16:19:15 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Range(-28,-1.884527,209.5,12.61184);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe351 = new TH1F("hframe351","",1000,10,200);
   hframe351->SetMinimum(0);
   hframe351->SetMaximum(11.88702);
   hframe351->SetDirectory(0);
   hframe351->SetStats(0);
   hframe351->SetLineStyle(0);
   hframe351->SetMarkerStyle(20);
   hframe351->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe351->GetXaxis()->SetNdivisions(506);
   hframe351->GetXaxis()->SetLabelFont(42);
   hframe351->GetXaxis()->SetLabelOffset(0.007);
   hframe351->GetXaxis()->SetLabelSize(0.05);
   hframe351->GetXaxis()->SetTitleSize(0.06);
   hframe351->GetXaxis()->SetTitleOffset(0.9);
   hframe351->GetXaxis()->SetTitleFont(42);
   hframe351->GetYaxis()->SetTitle("Events");
   hframe351->GetYaxis()->SetLabelFont(42);
   hframe351->GetYaxis()->SetLabelOffset(0.007);
   hframe351->GetYaxis()->SetLabelSize(0.05);
   hframe351->GetYaxis()->SetTitleSize(0.06);
   hframe351->GetYaxis()->SetTitleOffset(1.25);
   hframe351->GetYaxis()->SetTitleFont(42);
   hframe351->GetZaxis()->SetLabelFont(42);
   hframe351->GetZaxis()->SetLabelOffset(0.007);
   hframe351->GetZaxis()->SetLabelSize(0.05);
   hframe351->GetZaxis()->SetTitleSize(0.06);
   hframe351->GetZaxis()->SetTitleFont(42);
   hframe351->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->SetMinimum(-0.5415397);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->SetMaximum(4.992548);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_71);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(1,0.3565084);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(2,1.811932);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(3,1.607775);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(4,2.696661);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(5,1.91562);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(6,1.145918);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(7,-0.02201848);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(8,-0.1109757);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(9,0.3274007);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(11,-0.03826347);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(14,0.2766957);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(17,-0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinContent(21,0.3070375);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(1,0.8980481);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(2,0.9062131);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(3,0.883223);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(4,1.473938);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(5,0.8838968);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(6,1.039414);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(7,0.1199198);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(8,0.1037094);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(9,0.3670586);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(11,0.03826347);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(12,0.3114201);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(14,0.2813675);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(17,0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetBinError(21,0.358322);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetEntries(117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l352->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinContent(4,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinContent(6,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinError(4,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinError(6,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l353->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(1,0.01878614);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(2,0.04007982);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(3,0.03336873);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(4,0.06210694);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(5,0.07038427);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(6,0.03416787);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(7,0.01856171);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(8,0.01464064);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(9,0.01295399);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(10,0.01512721);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(11,0.00235936);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(12,0.02361804);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(13,0.0151273);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(14,0.008126946);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(15,0.003593045);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(16,0.003731576);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(17,0.01012519);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(18,0.002535909);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(19,0.004591641);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(20,0.00520535);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinContent(21,0.03039649);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(1,0.006443553);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(2,0.01111971);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(3,0.008556359);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(4,0.01244328);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(5,0.01333841);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(6,0.009668208);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(7,0.006396713);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(8,0.005603047);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(9,0.0075953);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(10,0.00564131);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(11,0.004625883);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(12,0.007739943);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(13,0.005454324);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(14,0.004385626);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(15,0.002734737);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(16,0.004411042);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(17,0.006006655);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(18,0.002535909);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(19,0.003246781);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(20,0.003414617);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetBinError(21,0.008127902);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetEntries(250);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l354->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinContent(1,0.3820383);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinContent(2,0.3075112);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinContent(3,0.4384879);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinContent(4,0.4695703);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinContent(5,0.4647019);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinContent(6,0.5858595);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinContent(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinError(1,0.1831067);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinError(2,0.2412625);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinError(3,0.2109827);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinError(4,0.2707473);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinError(5,0.2532026);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinError(6,0.2264765);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetBinError(21,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l355->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinContent(1,0.1184806);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinContent(2,0.0779526);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinContent(3,0.132816);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinContent(4,0.05331504);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinContent(5,0.07486387);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinContent(6,0.09445183);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinContent(7,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinContent(9,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinError(1,0.06857912);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinError(2,0.0576159);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinError(3,0.06761644);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinError(4,0.04178168);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinError(5,0.05403712);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinError(6,0.06701456);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinError(7,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetBinError(9,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l356->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(1,1.164584);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(2,1.364976);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(3,1.53854);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(4,1.289302);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(5,0.8178967);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(6,0.752057);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(7,0.1689606);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(8,0.1285872);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(9,0.09382656);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(10,0.1242295);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(11,0.07042757);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(12,0.3300341);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(13,0.3689417);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(14,0.2425813);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(15,0.1398307);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(16,0.1320375);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(17,0.09025413);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(18,0.07832975);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(19,0.04752229);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(20,0.05939343);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinContent(21,0.4603517);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(1,0.07927825);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(2,0.08597056);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(3,0.09167351);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(4,0.08437508);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(5,0.06611298);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(6,0.06386561);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(7,0.02986237);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(8,0.02610465);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(9,0.02237739);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(10,0.02636721);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(11,0.019386);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(12,0.04234847);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(13,0.04545907);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(14,0.03666423);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(15,0.02732592);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(16,0.02682471);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(17,0.02200632);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(18,0.01987559);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(19,0.01611416);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(20,0.01742303);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetBinError(21,0.04935104);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetEntries(1942);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l357->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(1,0.09627287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(2,0.16464);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(3,0.181667);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(4,0.1552605);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(5,0.1221738);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(6,0.06109137);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(7,0.02319443);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(8,0.004353786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(9,0.003354065);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinContent(12,0.003970309);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(1,0.01116642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(2,0.01492996);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(3,0.01512636);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(4,0.01342072);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(5,0.01073253);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(6,0.007458207);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(7,0.005195418);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(8,0.001067668);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(9,0.001290276);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetBinError(12,0.002167029);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l358->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->SetMaximum(0.206633);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l_stack_72);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(1,0.09627287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(2,0.16464);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(3,0.181667);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(4,0.1552605);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(5,0.1221738);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(6,0.06109137);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(7,0.02319443);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(8,0.004353786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(9,0.003354065);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinContent(12,0.003970309);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(1,0.01116642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(2,0.01492996);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(3,0.01512636);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(4,0.01342072);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(5,0.01073253);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(6,0.007458207);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(7,0.005195418);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(8,0.001067668);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(9,0.001290276);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetBinError(12,0.002167029);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l359->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3071[20] = {
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
   Double_t _fy3071[20] = {
   2.055701,
   3.602452,
   3.767112,
   4.599547,
   3.343467,
   2.626928,
   0.1940664,
   0.03225215,
   0.4794594,
   0.1535652,
   0.03452346,
   0.6650722,
   0.384069,
   0.5274039,
   0.1536642,
   0.1357691,
   0.09958234,
   0.08086566,
   0.05211393,
   0.06459878};
   Double_t _felx3071[20] = {
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
   Double_t _fely3071[20] = {
   0.7275228,
   1.452316,
   1.400949,
   2.127166,
   1.438985,
   1.477431,
   0.1858449,
   0.1416719,
   0.4188485,
   0.04852767,
   0.06154539,
   0.3784227,
   0.05352433,
   0.3323376,
   0.04074082,
   0.03094199,
   0.03070758,
   0.02267245,
   0.01992263,
   0.02145897};
   Double_t _fehx3071[20] = {
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
   Double_t _fehy3071[20] = {
   1.260764,
   1.452254,
   1.400672,
   2.127098,
   1.438939,
   1.477394,
   0.08915854,
   0.1416603,
   0.457103,
   0.0485211,
   0.06375542,
   0.3784011,
   0.0534127,
   0.3367972,
   0.04070507,
   0.03160384,
   0.03064322,
   0.02264548,
   0.01991859,
   0.02144801};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3071,_fy3071,_felx3071,_fehx3071,_fely3071,_fehy3071);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3071 = new TH1F("Graph_Graph3071","",100,0,219);
   Graph_Graph3071->SetMinimum(-0.7930262);
   Graph_Graph3071->SetMaximum(7.410251);
   Graph_Graph3071->SetDirectory(0);
   Graph_Graph3071->SetStats(0);
   Graph_Graph3071->SetLineStyle(0);
   Graph_Graph3071->SetMarkerStyle(20);
   Graph_Graph3071->GetXaxis()->SetLabelFont(42);
   Graph_Graph3071->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3071->GetXaxis()->SetTitleFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3071->GetYaxis()->SetTitleFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3071);
   
   grae->Draw("2");
   
   Double_t _fx3072[20] = {
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
   Double_t _fy3072[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3072[20] = {
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
   Double_t _fely3072[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3072[20] = {
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
   Double_t _fehy3072[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3072,_fy3072,_felx3072,_fehx3072,_fely3072,_fehy3072);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3072 = new TH1F("Graph_Graph3072","",100,0,219);
   Graph_Graph3072->SetMinimum(0);
   Graph_Graph3072->SetMaximum(1.262698);
   Graph_Graph3072->SetDirectory(0);
   Graph_Graph3072->SetStats(0);
   Graph_Graph3072->SetLineStyle(0);
   Graph_Graph3072->SetMarkerStyle(20);
   Graph_Graph3072->GetXaxis()->SetLabelFont(42);
   Graph_Graph3072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3072->GetXaxis()->SetTitleFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3072->GetYaxis()->SetTitleFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3072);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy360 = new TH1F("hframe_copy360","",1000,10,200);
   hframe_copy360->SetMinimum(0);
   hframe_copy360->SetMaximum(11.88702);
   hframe_copy360->SetDirectory(0);
   hframe_copy360->SetStats(0);
   hframe_copy360->SetLineStyle(0);
   hframe_copy360->SetMarkerStyle(20);
   hframe_copy360->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy360->GetXaxis()->SetNdivisions(506);
   hframe_copy360->GetXaxis()->SetLabelFont(42);
   hframe_copy360->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetXaxis()->SetLabelSize(0.05);
   hframe_copy360->GetXaxis()->SetTitleSize(0.06);
   hframe_copy360->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy360->GetXaxis()->SetTitleFont(42);
   hframe_copy360->GetYaxis()->SetTitle("Events");
   hframe_copy360->GetYaxis()->SetLabelFont(42);
   hframe_copy360->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetYaxis()->SetLabelSize(0.05);
   hframe_copy360->GetYaxis()->SetTitleSize(0.06);
   hframe_copy360->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy360->GetYaxis()->SetTitleFont(42);
   hframe_copy360->GetZaxis()->SetLabelFont(42);
   hframe_copy360->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetZaxis()->SetLabelSize(0.05);
   hframe_copy360->GetZaxis()->SetTitleSize(0.06);
   hframe_copy360->GetZaxis()->SetTitleFont(42);
   hframe_copy360->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_mllmin3l);
}
