void c_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1/cc
//=========  (Sat Jul  2 21:44:12 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Range(-28,-1.353194,209.5,9.055993);
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
   
   TH1F *hframe641 = new TH1F("hframe641","",1000,10,200);
   hframe641->SetMinimum(0);
   hframe641->SetMaximum(8.535534);
   hframe641->SetDirectory(0);
   hframe641->SetStats(0);
   hframe641->SetLineStyle(0);
   hframe641->SetMarkerStyle(20);
   hframe641->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe641->GetXaxis()->SetNdivisions(506);
   hframe641->GetXaxis()->SetLabelFont(42);
   hframe641->GetXaxis()->SetLabelOffset(0.007);
   hframe641->GetXaxis()->SetLabelSize(0.05);
   hframe641->GetXaxis()->SetTitleSize(0.06);
   hframe641->GetXaxis()->SetTitleOffset(0.9);
   hframe641->GetXaxis()->SetTitleFont(42);
   hframe641->GetYaxis()->SetTitle("Events");
   hframe641->GetYaxis()->SetLabelFont(42);
   hframe641->GetYaxis()->SetLabelOffset(0.007);
   hframe641->GetYaxis()->SetLabelSize(0.05);
   hframe641->GetYaxis()->SetTitleSize(0.06);
   hframe641->GetYaxis()->SetTitleOffset(1.25);
   hframe641->GetYaxis()->SetTitleFont(42);
   hframe641->GetZaxis()->SetLabelFont(42);
   hframe641->GetZaxis()->SetLabelOffset(0.007);
   hframe641->GetZaxis()->SetLabelSize(0.05);
   hframe641->GetZaxis()->SetTitleSize(0.06);
   hframe641->GetZaxis()->SetTitleFont(42);
   hframe641->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetMinimum(-0.5613542);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetMaximum(1.953221);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(2,-0.07253187);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(3,0.6381416);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(4,0.7512907);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(5,0.769794);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(6,0.6194804);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(7,-0.2806771);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(8,0.3769465);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(9,-0.001650331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(10,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(11,0.3248683);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(13,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(2,0.04789861);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(3,0.4313782);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(4,0.7864417);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(5,0.6004272);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(6,0.5538478);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(7,0.2806771);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(8,0.3011719);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(9,0.001650331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(10,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(11,0.5564166);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(13,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetBinContent(9,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetBinError(9,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(2,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(3,0.004557814);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(4,0.01063504);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(5,0.00916302);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(6,0.01739464);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(7,0.0141929);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(8,0.003226167);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(9,0.006853151);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(10,0.004310629);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(12,0.002472892);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(13,0.001972121);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(14,0.0006504452);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(16,0.002256049);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(17,0.004292459);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(22,-0.002686125);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(26,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(2,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(3,0.003237096);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(4,0.004799357);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(5,0.004713224);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(6,0.006601276);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(7,0.005816116);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(8,0.00268432);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(9,0.003963406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(10,0.003056894);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(12,0.002472892);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(13,0.001972121);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(14,0.0006504452);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(16,0.002256049);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(17,0.003120605);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(22,0.002686125);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(26,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetEntries(41);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinContent(2,0.1353116);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinContent(3,0.3432775);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinContent(4,0.1424293);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinContent(5,0.3448636);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinContent(6,0.2745322);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinError(2,0.1120881);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinError(3,0.1894654);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinError(4,0.1931801);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinError(5,0.187893);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinError(6,0.1667175);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetEntries(18);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinContent(2,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinContent(3,0.07747763);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinContent(4,0.09183864);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinContent(6,0.02856185);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinContent(13,0.02711696);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinError(2,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinError(3,0.05497137);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinError(4,0.06531086);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinError(6,0.02856185);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinError(13,0.02711696);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetEntries(7);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(2,0.249635);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(3,0.7525804);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(4,0.7080683);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(5,0.6780649);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(6,0.3765371);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(7,0.2303166);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(8,0.2512749);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(9,0.146847);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(10,0.2137474);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(11,0.08004128);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(12,0.07148878);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(13,0.06591935);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(14,0.04129183);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(15,0.02493054);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(16,0.02617664);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(17,0.0122616);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(18,0.005719561);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(19,0.02878732);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(20,0.002646491);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(21,0.02260548);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(22,0.01077921);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(23,0.01358145);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(24,0.004608317);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(26,0.06966651);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(2,0.03656284);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(3,0.06446287);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(4,0.06184162);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(5,0.06151637);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(6,0.04489268);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(7,0.03383215);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(8,0.03651198);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(9,0.02878202);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(10,0.03487357);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(11,0.02126397);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(12,0.01956944);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(13,0.01910591);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(14,0.014006);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(15,0.01123621);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(16,0.01127981);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(17,0.00763778);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(18,0.005719561);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(19,0.0121541);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(20,0.002619607);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(21,0.01131915);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(22,0.007678522);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(23,0.008765194);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(24,0.004608317);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(26,0.01978756);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetEntries(837);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(3,0.02366123);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(4,0.04385077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(5,0.05832479);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(6,0.0317047);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(7,0.02982359);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(8,0.02284023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(9,0.02364894);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(10,0.01918782);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(11,0.007886548);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(12,0.008575957);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(13,0.01156926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(14,0.008218979);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(15,0.006809481);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(16,0.01262446);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(17,0.003439938);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(18,0.003427321);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(19,0.003913233);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(20,0.0006537957);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(21,0.001169563);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(22,0.002644286);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(23,0.001370754);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(24,0.003355404);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(25,0.001976509);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(26,0.01632216);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(3,0.005094013);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(4,0.007042271);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(5,0.009049275);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(6,0.006451348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(7,0.00682073);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(8,0.004737752);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(9,0.005503999);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(10,0.005166224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(11,0.003596523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(12,0.004069723);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(13,0.003644694);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(14,0.003406804);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(15,0.002690343);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(16,0.004244905);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(17,0.001830277);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(18,0.002424949);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(19,0.002355285);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(20,0.0003782585);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(21,0.0007604257);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(22,0.001777009);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(23,0.0008243344);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(24,0.001765349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(25,0.001658349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(26,0.004645851);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetMaximum(0.07074277);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(3,0.02366123);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(4,0.04385077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(5,0.05832479);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(6,0.0317047);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(7,0.02982359);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(8,0.02284023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(9,0.02364894);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(10,0.01918782);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(11,0.007886548);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(12,0.008575957);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(13,0.01156926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(14,0.008218979);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(15,0.006809481);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(16,0.01262446);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(17,0.003439938);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(18,0.003427321);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(19,0.003913233);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(20,0.0006537957);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(21,0.001169563);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(22,0.002644286);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(23,0.001370754);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(24,0.003355404);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(25,0.001976509);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(26,0.01632216);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(3,0.005094013);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(4,0.007042271);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(5,0.009049275);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(6,0.006451348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(7,0.00682073);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(8,0.004737752);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(9,0.005503999);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(10,0.005166224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(11,0.003596523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(12,0.004069723);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(13,0.003644694);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(14,0.003406804);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(15,0.002690343);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(16,0.004244905);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(17,0.001830277);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(18,0.002424949);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(19,0.002355285);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(20,0.0003782585);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(21,0.0007604257);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(22,0.001777009);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(23,0.0008243344);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(24,0.001765349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(25,0.001658349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(26,0.004645851);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3129[25] = {
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
   Double_t _fy3129[25] = {
   0,
   0.3409543,
   1.816035,
   1.704262,
   1.801885,
   1.316506,
   -0.03616762,
   0.6314476,
   0.1673536,
   0.3534637,
   0.4049096,
   0.07396168,
   0.1062034,
   0.04194228,
   0.02493054,
   0.02843269,
   0.01655406,
   0.005719561,
   0.02878732,
   0.002646491,
   0.02260548,
   0.008093086,
   0.01358145,
   0.004608317,
   0};
   Double_t _felx3129[25] = {
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
   Double_t _fely3129[25] = {
   0,
   0.2287712,
   0.7792022,
   1.060186,
   0.8975684,
   0.8304735,
   0.3355495,
   0.3652366,
   0.05082837,
   0.1799466,
   0.3643359,
   0.02246908,
   0.05993822,
   0.0147765,
   0.0114074,
   0.01382038,
   0.01161395,
   0.00571969,
   0.01224729,
   0.002620459,
   0.01138423,
   0.01070739,
   0.008787312,
   0.004615719,
   0};
   Double_t _fehx3129[25] = {
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
   Double_t _fehy3129[25] = {
   0,
   0.2287008,
   0.7790748,
   1.143342,
   0.8975309,
   0.8303996,
   0.3355234,
   0.3652371,
   0.05078206,
   0.1799286,
   0.5887681,
   0.02245604,
   0.05992523,
   0.01476898,
   0.01139481,
   0.01380362,
   0.01162048,
   0.005719692,
   0.01221812,
   0.002619917,
   0.01136996,
   0.01070779,
   0.008783019,
   0.004616657,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3129,_fy3129,_felx3129,_fehx3129,_fely3129,_fehy3129);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3129 = new TH1F("Graph_Graph3129","",100,0,219);
   Graph_Graph3129->SetMinimum(-0.6936493);
   Graph_Graph3129->SetMaximum(3.169536);
   Graph_Graph3129->SetDirectory(0);
   Graph_Graph3129->SetStats(0);
   Graph_Graph3129->SetLineStyle(0);
   Graph_Graph3129->SetMarkerStyle(20);
   Graph_Graph3129->GetXaxis()->SetLabelFont(42);
   Graph_Graph3129->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3129->GetXaxis()->SetTitleFont(42);
   Graph_Graph3129->GetYaxis()->SetLabelFont(42);
   Graph_Graph3129->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3129->GetYaxis()->SetTitleFont(42);
   Graph_Graph3129->GetZaxis()->SetLabelFont(42);
   Graph_Graph3129->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3129);
   
   grae->Draw("2");
   
   Double_t _fx3130[25] = {
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
   Double_t _fy3130[25] = {
   0,
   0,
   1,
   1,
   1,
   0,
   2,
   0,
   0,
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
   0,
   0,
   0};
   Double_t _felx3130[25] = {
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
   Double_t _fely3130[25] = {
   0,
   0,
   0.8272524,
   0.8272524,
   0.8272524,
   0,
   1.29183,
   0,
   0,
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
   0,
   0,
   0};
   Double_t _fehx3130[25] = {
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
   Double_t _fehy3130[25] = {
   1.147908,
   1.147908,
   2.29957,
   2.29957,
   2.29957,
   1.147908,
   2.63791,
   1.147908,
   1.147908,
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
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3130,_fy3130,_felx3130,_fehx3130,_fely3130,_fehy3130);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3130 = new TH1F("Graph_Graph3130","",100,0,219);
   Graph_Graph3130->SetMinimum(0);
   Graph_Graph3130->SetMaximum(5.101701);
   Graph_Graph3130->SetDirectory(0);
   Graph_Graph3130->SetStats(0);
   Graph_Graph3130->SetLineStyle(0);
   Graph_Graph3130->SetMarkerStyle(20);
   Graph_Graph3130->GetXaxis()->SetLabelFont(42);
   Graph_Graph3130->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3130->GetXaxis()->SetTitleFont(42);
   Graph_Graph3130->GetYaxis()->SetLabelFont(42);
   Graph_Graph3130->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3130->GetYaxis()->SetTitleFont(42);
   Graph_Graph3130->GetZaxis()->SetLabelFont(42);
   Graph_Graph3130->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3130);
   
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
   
   TH1F *hframe_copy650 = new TH1F("hframe_copy650","",1000,10,200);
   hframe_copy650->SetMinimum(0);
   hframe_copy650->SetMaximum(8.535534);
   hframe_copy650->SetDirectory(0);
   hframe_copy650->SetStats(0);
   hframe_copy650->SetLineStyle(0);
   hframe_copy650->SetMarkerStyle(20);
   hframe_copy650->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy650->GetXaxis()->SetNdivisions(506);
   hframe_copy650->GetXaxis()->SetLabelFont(42);
   hframe_copy650->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetXaxis()->SetLabelSize(0.05);
   hframe_copy650->GetXaxis()->SetTitleSize(0.06);
   hframe_copy650->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy650->GetXaxis()->SetTitleFont(42);
   hframe_copy650->GetYaxis()->SetTitle("Events");
   hframe_copy650->GetYaxis()->SetLabelFont(42);
   hframe_copy650->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetYaxis()->SetLabelSize(0.05);
   hframe_copy650->GetYaxis()->SetTitleSize(0.06);
   hframe_copy650->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy650->GetYaxis()->SetTitleFont(42);
   hframe_copy650->GetZaxis()->SetLabelFont(42);
   hframe_copy650->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetZaxis()->SetLabelSize(0.05);
   hframe_copy650->GetZaxis()->SetTitleSize(0.06);
   hframe_copy650->GetZaxis()->SetTitleFont(42);
   hframe_copy650->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1);
}
