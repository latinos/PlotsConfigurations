void c_wh3l_MET_JetV_ZVeto_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt1/cc
//=========  (Sat Jul  2 21:44:00 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->Range(-28,-3.823011,209.5,25.58477);
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
   
   TH1F *hframe511 = new TH1F("hframe511","",1000,10,200);
   hframe511->SetMinimum(0);
   hframe511->SetMaximum(24.11438);
   hframe511->SetDirectory(0);
   hframe511->SetStats(0);
   hframe511->SetLineStyle(0);
   hframe511->SetMarkerStyle(20);
   hframe511->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe511->GetXaxis()->SetNdivisions(506);
   hframe511->GetXaxis()->SetLabelFont(42);
   hframe511->GetXaxis()->SetLabelOffset(0.007);
   hframe511->GetXaxis()->SetLabelSize(0.05);
   hframe511->GetXaxis()->SetTitleSize(0.06);
   hframe511->GetXaxis()->SetTitleOffset(0.9);
   hframe511->GetXaxis()->SetTitleFont(42);
   hframe511->GetYaxis()->SetTitle("Events");
   hframe511->GetYaxis()->SetLabelFont(42);
   hframe511->GetYaxis()->SetLabelOffset(0.007);
   hframe511->GetYaxis()->SetLabelSize(0.05);
   hframe511->GetYaxis()->SetTitleSize(0.06);
   hframe511->GetYaxis()->SetTitleOffset(1.25);
   hframe511->GetYaxis()->SetTitleFont(42);
   hframe511->GetZaxis()->SetLabelFont(42);
   hframe511->GetZaxis()->SetLabelOffset(0.007);
   hframe511->GetZaxis()->SetLabelSize(0.05);
   hframe511->GetZaxis()->SetTitleSize(0.06);
   hframe511->GetZaxis()->SetTitleFont(42);
   hframe511->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetMinimum(-0.8259209);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetMaximum(3.499277);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(2,-0.07253187);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(3,0.5578663);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(4,1.680171);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(5,0.5930959);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(6,2.024545);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(7,-0.4321505);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(8,0.3769465);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(9,0.5945979);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(10,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(11,0.7220002);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(12,0.3237906);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(13,-0.08191734);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(14,0.3563831);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(17,-0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(20,-0.02257761);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(23,-0.008195123);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(26,-0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(2,0.04789861);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(3,0.5810336);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(4,0.9769723);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(5,0.6519216);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(6,1.186292);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(7,0.3937705);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(8,0.3011719);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(9,0.3967574);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(10,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(11,0.8022963);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(12,0.3116891);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(13,0.09378294);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(14,0.356344);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(15,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(17,0.0007969784);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(20,0.02257761);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(23,0.008195123);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(26,0.004633672);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinContent(5,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinContent(6,0.03235779);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinError(5,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinError(6,0.02304949);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(2,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(3,0.004557814);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(4,0.02542012);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(5,0.02210042);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(6,0.02087564);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(7,0.02962067);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(8,0.01894663);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(9,0.02109652);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(10,0.02797808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(11,0.01051419);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(12,0.01803837);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(13,0.0167009);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(14,0.0105304);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(15,0.002669068);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(16,0.01136563);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(17,0.01499397);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(18,0.01144121);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(19,0.004399697);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(20,0.002289213);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(21,0.01197009);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(22,-0.0007551598);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(23,0.004213052);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(24,-0.0009071797);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(25,0.002652434);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(26,0.02329334);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(2,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(3,0.003237096);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(4,0.007414548);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(5,0.007154708);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(6,0.008135999);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(7,0.009165874);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(8,0.006434118);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(9,0.007329267);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(10,0.007840952);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(11,0.006947976);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(12,0.006311523);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(13,0.005633171);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(14,0.004987111);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(15,0.003863332);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(16,0.005178171);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(17,0.005682047);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(18,0.004951881);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(19,0.003138607);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(20,0.002289213);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(21,0.00535955);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(22,0.003308156);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(23,0.002988705);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(24,0.0009071797);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(25,0.002652434);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(26,0.007937697);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(2,0.1353116);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(3,1.011405);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(4,0.3778996);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(5,0.7303915);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(6,0.4114199);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(8,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(9,-0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(2,0.1120881);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(3,0.3128352);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(4,0.2832874);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(5,0.2617258);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(6,0.1990974);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(8,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(9,0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(2,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(3,0.07747764);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(4,0.1369423);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(5,0.08272321);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(6,0.04248237);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(11,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(12,0.1261614);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(13,0.02711696);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(2,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(3,0.05497137);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(4,0.0793716);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(5,0.05856026);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(6,0.03177358);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(11,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(12,0.07449396);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(13,0.02711696);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(2,0.2758234);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(3,0.9017204);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(4,1.048873);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(5,1.070182);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(6,0.720451);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(7,0.523984);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(8,0.5480499);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(9,0.4272982);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(10,0.4849011);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(11,0.3595807);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(12,0.3451973);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(13,0.2796118);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(14,0.2089796);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(15,0.2014076);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(16,0.1641275);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(17,0.1223687);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(18,0.07834455);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(19,0.1178238);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(20,0.08025498);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(21,0.06430792);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(22,0.08940953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(23,0.06882208);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(24,0.0386543);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(25,0.03690323);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(26,0.7144932);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(2,0.03854678);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(3,0.07051147);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(4,0.07562137);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(5,0.07738898);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(6,0.06245572);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(7,0.05263679);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(8,0.05363847);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(9,0.04857973);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(10,0.05170516);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(11,0.04470737);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(12,0.04287789);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(13,0.03932359);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(14,0.03308483);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(15,0.03270742);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(16,0.02996883);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(17,0.0250947);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(18,0.02047932);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(19,0.02493542);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(20,0.01995918);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(21,0.01854459);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(22,0.02204336);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(23,0.01968823);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(24,0.01424693);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(25,0.01350913);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(26,0.06210513);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(3,0.02766027);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(4,0.06333875);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(5,0.07760951);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(6,0.05378792);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(7,0.04774233);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(8,0.04101628);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(9,0.03842649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(10,0.03716551);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(11,0.02102844);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(12,0.0172509);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(13,0.02311651);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(14,0.01895109);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(15,0.01351324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(16,0.02236016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(17,0.009224622);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(18,0.01071898);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(19,0.006028319);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(20,0.001553539);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(21,0.003035749);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(22,0.003824841);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(23,0.001815698);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(25,0.003884233);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(26,0.02637084);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(3,0.005298203);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(4,0.008178052);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(5,0.01033229);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(6,0.008048568);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(7,0.008155718);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(8,0.006165537);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(9,0.006801022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(10,0.006853409);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(11,0.005249528);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(12,0.005087222);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(13,0.005038427);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(14,0.004840801);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(15,0.003572524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(16,0.005709786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(17,0.003091398);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(18,0.003671218);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(19,0.002573989);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(20,0.0007530353);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(21,0.001332354);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(22,0.001848086);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(23,0.0008824004);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(25,0.002381204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(26,0.005638022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetMaximum(0.09233889);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(3,0.02766027);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(4,0.06333875);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(5,0.07760951);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(6,0.05378792);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(7,0.04774233);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(8,0.04101628);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(9,0.03842649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(10,0.03716551);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(11,0.02102844);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(12,0.0172509);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(13,0.02311651);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(14,0.01895109);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(15,0.01351324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(16,0.02236016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(17,0.009224622);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(18,0.01071898);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(19,0.006028319);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(20,0.001553539);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(21,0.003035749);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(22,0.003824841);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(23,0.001815698);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(25,0.003884233);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(26,0.02637084);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(3,0.005298203);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(4,0.008178052);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(5,0.01033229);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(6,0.008048568);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(7,0.008155718);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(8,0.006165537);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(9,0.006801022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(10,0.006853409);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(11,0.005249528);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(12,0.005087222);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(13,0.005038427);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(14,0.004840801);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(15,0.003572524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(16,0.005709786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(17,0.003091398);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(18,0.003671218);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(19,0.002573989);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(20,0.0007530353);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(21,0.001332354);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(22,0.001848086);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(23,0.0008824004);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(25,0.002381204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(26,0.005638022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3103[25] = {
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
   Double_t _fy3103[25] = {
   0,
   0.3671426,
   2.553028,
   3.269306,
   2.508935,
   3.252132,
   0.1214542,
   1.048762,
   0.949693,
   0.6482849,
   1.120658,
   0.8131877,
   0.2415123,
   0.5758931,
   0.2143172,
   0.1754931,
   0.1365657,
   0.08978576,
   0.2280723,
   0.05996658,
   0.9239143,
   0.08865438,
   0.06484001,
   0.03774713,
   0.03955567};
   Double_t _felx3103[25] = {
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
   Double_t _fely3103[25] = {
   0,
   0.2309221,
   1.022408,
   1.541195,
   1.032599,
   1.669722,
   0.4812877,
   0.4852393,
   0.6324572,
   0.2030137,
   0.8411778,
   0.4504544,
   0.1695819,
   0.4138688,
   0.04659053,
   0.03734008,
   0.0352634,
   0.02779493,
   0.1342241,
   0.04564971,
   0.9207338,
   0.02550932,
   0.03142118,
   0.01518959,
   0.01642421};
   Double_t _fehx3103[25] = {
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
   Double_t _fehy3103[25] = {
   0,
   0.2308512,
   1.044883,
   1.541013,
   1.090078,
   1.669642,
   0.4812502,
   0.4852275,
   0.6324441,
   0.2029688,
   0.9180728,
   0.4504612,
   0.1579006,
   0.4138484,
   0.04757425,
   0.03722578,
   0.03519558,
   0.02778892,
   0.1341642,
   0.04565363,
   0.9207332,
   0.02295537,
   0.03136746,
   0.01519078,
   0.01641892};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3103,_fy3103,_felx3103,_fehx3103,_fely3103,_fehy3103);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3103 = new TH1F("Graph_Graph3103","",100,0,219);
   Graph_Graph3103->SetMinimum(-0.8879943);
   Graph_Graph3103->SetMaximum(5.449935);
   Graph_Graph3103->SetDirectory(0);
   Graph_Graph3103->SetStats(0);
   Graph_Graph3103->SetLineStyle(0);
   Graph_Graph3103->SetMarkerStyle(20);
   Graph_Graph3103->GetXaxis()->SetLabelFont(42);
   Graph_Graph3103->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3103->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3103->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3103->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3103->GetXaxis()->SetTitleFont(42);
   Graph_Graph3103->GetYaxis()->SetLabelFont(42);
   Graph_Graph3103->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3103->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3103->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3103->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3103->GetYaxis()->SetTitleFont(42);
   Graph_Graph3103->GetZaxis()->SetLabelFont(42);
   Graph_Graph3103->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3103->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3103->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3103->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3103);
   
   grae->Draw("2");
   
   Double_t _fx3104[25] = {
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
   Double_t _fy3104[25] = {
   0,
   0,
   4,
   3,
   7,
   3,
   4,
   0,
   0,
   0,
   2,
   0,
   1,
   0,
   0,
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
   Double_t _felx3104[25] = {
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
   Double_t _fely3104[25] = {
   0,
   0,
   1.914367,
   1.632727,
   2.581513,
   1.632727,
   1.914367,
   0,
   0,
   0,
   1.29183,
   0,
   0.8272524,
   0,
   0,
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
   Double_t _fehx3104[25] = {
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
   Double_t _fehy3104[25] = {
   1.147908,
   1.147908,
   3.162815,
   2.918242,
   3.770356,
   2.918242,
   3.162815,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(25,_fx3104,_fy3104,_felx3104,_fehx3104,_fely3104,_fehy3104);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3104 = new TH1F("Graph_Graph3104","",100,0,219);
   Graph_Graph3104->SetMinimum(0);
   Graph_Graph3104->SetMaximum(11.84739);
   Graph_Graph3104->SetDirectory(0);
   Graph_Graph3104->SetStats(0);
   Graph_Graph3104->SetLineStyle(0);
   Graph_Graph3104->SetMarkerStyle(20);
   Graph_Graph3104->GetXaxis()->SetLabelFont(42);
   Graph_Graph3104->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3104->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3104->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3104->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3104->GetXaxis()->SetTitleFont(42);
   Graph_Graph3104->GetYaxis()->SetLabelFont(42);
   Graph_Graph3104->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3104->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3104->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3104->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3104->GetYaxis()->SetTitleFont(42);
   Graph_Graph3104->GetZaxis()->SetLabelFont(42);
   Graph_Graph3104->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3104->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3104->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3104->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3104);
   
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
   
   TH1F *hframe_copy520 = new TH1F("hframe_copy520","",1000,10,200);
   hframe_copy520->SetMinimum(0);
   hframe_copy520->SetMaximum(24.11438);
   hframe_copy520->SetDirectory(0);
   hframe_copy520->SetStats(0);
   hframe_copy520->SetLineStyle(0);
   hframe_copy520->SetMarkerStyle(20);
   hframe_copy520->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy520->GetXaxis()->SetNdivisions(506);
   hframe_copy520->GetXaxis()->SetLabelFont(42);
   hframe_copy520->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy520->GetXaxis()->SetLabelSize(0.05);
   hframe_copy520->GetXaxis()->SetTitleSize(0.06);
   hframe_copy520->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy520->GetXaxis()->SetTitleFont(42);
   hframe_copy520->GetYaxis()->SetTitle("Events");
   hframe_copy520->GetYaxis()->SetLabelFont(42);
   hframe_copy520->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy520->GetYaxis()->SetLabelSize(0.05);
   hframe_copy520->GetYaxis()->SetTitleSize(0.06);
   hframe_copy520->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy520->GetYaxis()->SetTitleFont(42);
   hframe_copy520->GetZaxis()->SetLabelFont(42);
   hframe_copy520->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy520->GetZaxis()->SetLabelSize(0.05);
   hframe_copy520->GetZaxis()->SetTitleSize(0.06);
   hframe_copy520->GetZaxis()->SetTitleFont(42);
   hframe_copy520->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_pt1);
}
