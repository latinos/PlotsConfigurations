void c_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3/cc
//=========  (Sat Jul  2 21:44:10 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3 = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Range(-28,-2.867954,209.5,19.19323);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe621 = new TH1F("hframe621","",1000,10,200);
   hframe621->SetMinimum(0);
   hframe621->SetMaximum(18.09017);
   hframe621->SetDirectory(0);
   hframe621->SetStats(0);
   hframe621->SetLineStyle(0);
   hframe621->SetMarkerStyle(20);
   hframe621->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe621->GetXaxis()->SetNdivisions(506);
   hframe621->GetXaxis()->SetLabelFont(42);
   hframe621->GetXaxis()->SetLabelOffset(0.007);
   hframe621->GetXaxis()->SetLabelSize(0.05);
   hframe621->GetXaxis()->SetTitleSize(0.06);
   hframe621->GetXaxis()->SetTitleOffset(0.9);
   hframe621->GetXaxis()->SetTitleFont(42);
   hframe621->GetYaxis()->SetTitle("Events");
   hframe621->GetYaxis()->SetLabelFont(42);
   hframe621->GetYaxis()->SetLabelOffset(0.007);
   hframe621->GetYaxis()->SetLabelSize(0.05);
   hframe621->GetYaxis()->SetTitleSize(0.06);
   hframe621->GetYaxis()->SetTitleOffset(1.25);
   hframe621->GetYaxis()->SetTitleFont(42);
   hframe621->GetZaxis()->SetLabelFont(42);
   hframe621->GetZaxis()->SetLabelOffset(0.007);
   hframe621->GetZaxis()->SetLabelSize(0.05);
   hframe621->GetZaxis()->SetTitleSize(0.06);
   hframe621->GetZaxis()->SetTitleFont(42);
   hframe621->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->SetMaximum(6.553798);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_125);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->SetBinContent(1,2.369291);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->SetBinContent(2,0.9029722);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->SetBinError(1,1.349541);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->SetBinError(2,0.3878358);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3622->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->SetBinContent(2,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->SetBinError(2,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3623->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinContent(1,0.04805804);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinContent(2,0.01747712);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinContent(3,0.01273413);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinContent(5,0.002472892);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinContent(6,0.002613457);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinError(1,0.01068722);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinError(2,0.007261926);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinError(3,0.005122922);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinError(5,0.002472892);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetBinError(6,0.002613457);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetEntries(41);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3624->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetBinContent(1,0.8940531);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetBinContent(2,0.2221348);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetBinContent(3,0.1242263);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetBinError(1,0.2985406);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetBinError(2,0.2105214);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetBinError(3,0.1242263);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetEntries(18);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3625->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->SetBinContent(1,0.2513989);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->SetBinError(1,0.09765056);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->SetEntries(7);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3626->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(1,2.512044);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(2,1.004656);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(3,0.3370908);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(4,0.1183316);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(5,0.05761413);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(6,0.0341688);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(7,0.01237459);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(8,0.005596609);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(9,0.005672474);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinContent(11,2.702264e-05);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(1,0.1165472);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(2,0.07425803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(3,0.04256228);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(4,0.02532336);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(5,0.01789525);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(6,0.01397607);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(7,0.009019527);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(8,0.005596609);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(9,0.005672474);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetBinError(11,2.702264e-05);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetEntries(837);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3627->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinContent(1,0.1668676);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinContent(2,0.1009861);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinContent(3,0.04496786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinContent(4,0.02169341);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinContent(5,0.01156587);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinContent(6,0.005112973);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinContent(7,0.005838872);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinError(1,0.01432424);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinError(2,0.01137305);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinError(3,0.008132059);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinError(4,0.005261335);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinError(5,0.004519135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinError(6,0.002954734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetBinError(7,0.002754884);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3628->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->SetMaximum(0.1902514);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_126);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinContent(1,0.1668676);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinContent(2,0.1009861);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinContent(3,0.04496786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinContent(4,0.02169341);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinContent(5,0.01156587);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinContent(6,0.005112973);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinContent(7,0.005838872);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinError(1,0.01432424);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinError(2,0.01137305);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinError(3,0.008132059);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinError(4,0.005261335);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinError(5,0.004519135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinError(6,0.002954734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetBinError(7,0.002754884);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3629->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3125[25] = {
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
   Double_t _fy3125[25] = {
   6.074845,
   2.162544,
   0.4740512,
   0.1183316,
   0.06008703,
   0.03678226,
   0.01237459,
   0.005596609,
   0.005672474,
   0,
   2.702264e-05,
   0,
   0,
   0,
   0,
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
   Double_t _felx3125[25] = {
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
   Double_t _fely3125[25] = {
   2.064844,
   0.764716,
   0.1725941,
   0.02536621,
   0.02052837,
   0.01680451,
   0.009028843,
   0.005605327,
   0.005673076,
   0,
   2.704127e-05,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3125[25] = {
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
   Double_t _fehy3125[25] = {
   2.063668,
   0.7646981,
   0.172587,
   0.02536025,
   0.02052791,
   0.01680289,
   0.009026943,
   0.005606759,
   0.00567309,
   0,
   2.704257e-05,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3125,_fy3125,_felx3125,_fehx3125,_fely3125,_fehy3125);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3125 = new TH1F("Graph_Graph3125","",100,0,219);
   Graph_Graph3125->SetMinimum(-0.8138609);
   Graph_Graph3125->SetMaximum(8.952366);
   Graph_Graph3125->SetDirectory(0);
   Graph_Graph3125->SetStats(0);
   Graph_Graph3125->SetLineStyle(0);
   Graph_Graph3125->SetMarkerStyle(20);
   Graph_Graph3125->GetXaxis()->SetLabelFont(42);
   Graph_Graph3125->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3125->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3125->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3125->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3125->GetXaxis()->SetTitleFont(42);
   Graph_Graph3125->GetYaxis()->SetLabelFont(42);
   Graph_Graph3125->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3125->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3125->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3125->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3125->GetYaxis()->SetTitleFont(42);
   Graph_Graph3125->GetZaxis()->SetLabelFont(42);
   Graph_Graph3125->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3125->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3125->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3125->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3125);
   
   grae->Draw("2");
   
   Double_t _fx3126[25] = {
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
   Double_t _fy3126[25] = {
   5,
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
   Double_t _felx3126[25] = {
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
   Double_t _fely3126[25] = {
   2.159724,
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
   Double_t _fehx3126[25] = {
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
   Double_t _fehy3126[25] = {
   3.382539,
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
   grae = new TGraphAsymmErrors(25,_fx3126,_fy3126,_felx3126,_fehx3126,_fely3126,_fehy3126);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3126 = new TH1F("Graph_Graph3126","",100,0,219);
   Graph_Graph3126->SetMinimum(0);
   Graph_Graph3126->SetMaximum(9.220793);
   Graph_Graph3126->SetDirectory(0);
   Graph_Graph3126->SetStats(0);
   Graph_Graph3126->SetLineStyle(0);
   Graph_Graph3126->SetMarkerStyle(20);
   Graph_Graph3126->GetXaxis()->SetLabelFont(42);
   Graph_Graph3126->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3126->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3126->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3126->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3126->GetXaxis()->SetTitleFont(42);
   Graph_Graph3126->GetYaxis()->SetLabelFont(42);
   Graph_Graph3126->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3126->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3126->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3126->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3126->GetYaxis()->SetTitleFont(42);
   Graph_Graph3126->GetZaxis()->SetLabelFont(42);
   Graph_Graph3126->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3126->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3126->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3126->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3126);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy630 = new TH1F("hframe_copy630","",1000,10,200);
   hframe_copy630->SetMinimum(0);
   hframe_copy630->SetMaximum(18.09017);
   hframe_copy630->SetDirectory(0);
   hframe_copy630->SetStats(0);
   hframe_copy630->SetLineStyle(0);
   hframe_copy630->SetMarkerStyle(20);
   hframe_copy630->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy630->GetXaxis()->SetNdivisions(506);
   hframe_copy630->GetXaxis()->SetLabelFont(42);
   hframe_copy630->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy630->GetXaxis()->SetLabelSize(0.05);
   hframe_copy630->GetXaxis()->SetTitleSize(0.06);
   hframe_copy630->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy630->GetXaxis()->SetTitleFont(42);
   hframe_copy630->GetYaxis()->SetTitle("Events");
   hframe_copy630->GetYaxis()->SetLabelFont(42);
   hframe_copy630->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy630->GetYaxis()->SetLabelSize(0.05);
   hframe_copy630->GetYaxis()->SetTitleSize(0.06);
   hframe_copy630->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy630->GetYaxis()->SetTitleFont(42);
   hframe_copy630->GetZaxis()->SetLabelFont(42);
   hframe_copy630->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy630->GetZaxis()->SetLabelSize(0.05);
   hframe_copy630->GetZaxis()->SetTitleSize(0.06);
   hframe_copy630->GetZaxis()->SetTitleFont(42);
   hframe_copy630->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3);
}
