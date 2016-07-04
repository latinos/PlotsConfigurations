void c_wh3l_MET_JetV_ZVeto_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt3/cc
//=========  (Sun Jul  3 01:22:17 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt3 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->Range(-28,-1.353194,209.5,9.055993);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe491 = new TH1F("hframe491","",1000,10,200);
   hframe491->SetMinimum(0);
   hframe491->SetMaximum(8.535534);
   hframe491->SetDirectory(0);
   hframe491->SetStats(0);
   hframe491->SetLineStyle(0);
   hframe491->SetMarkerStyle(20);
   hframe491->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->SetMinimum(-0.3520574);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->SetMaximum(3.947669);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(1,2.471154);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(2,0.3883896);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(3,-0.02176431);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(4,-0.2112765);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(5,0.2761226);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(11,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(1,1.28853);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(2,0.2585534);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(3,0.1460137);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(4,0.1407809);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(5,0.2761226);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(11,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinContent(1,0.03320921);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinContent(2,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinError(1,0.02349229);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinError(2,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(1,0.0216987);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(2,0.02979448);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(3,0.02871046);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(4,0.0155413);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(5,0.01737523);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(6,0.00858407);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(7,-0.0005291138);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(8,0.004635501);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(10,0.004131661);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(1,0.006839365);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(2,0.0108583);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(3,0.007674663);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(4,0.007183869);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(5,0.006436129);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(6,0.004436378);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(7,0.003656416);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(8,0.003307144);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(10,0.00292843);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinContent(1,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinContent(4,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinError(1,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinError(4,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(1,0.2801012);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(2,0.1890059);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(3,0.1447518);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(4,0.02626564);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(5,0.005519799);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(6,0.002874792);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(8,0.004988727);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(10,0.01100077);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(1,0.03938096);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(2,0.03132249);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(3,0.02799995);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(4,0.01088964);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(5,0.005519799);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(6,0.002874792);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(8,0.004988727);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(10,0.007845909);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(1,0.111708);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(2,0.08209566);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(3,0.03995977);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(4,0.02437542);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(5,0.01328271);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(6,0.003455574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(7,0.002339709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(8,0.004666879);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(9,0.0008811597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(10,0.0001696153);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(11,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(1,0.01084375);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(2,0.009635222);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(3,0.00655351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(4,0.005400248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(5,0.00388932);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(6,0.001763178);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(7,0.001225187);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(8,0.002577331);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(9,0.0008811597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(10,0.0001696153);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(11,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->SetMaximum(0.1286794);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(1,0.111708);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(2,0.08209566);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(3,0.03995977);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(4,0.02437542);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(5,0.01328271);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(6,0.003455574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(7,0.002339709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(8,0.004666879);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(9,0.0008811597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(10,0.0001696153);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(11,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(1,0.01084375);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(2,0.009635222);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(3,0.00655351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(4,0.005400248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(5,0.00388932);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(6,0.001763178);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(7,0.001225187);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(8,0.002577331);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(9,0.0008811597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(10,0.0001696153);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(11,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3099[25] = {
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
   Double_t _fy3099[25] = {
   2.90115,
   0.6175814,
   0.151698,
   -0.1343327,
   0.2990176,
   0.01145886,
   -0.0005291138,
   0.009624229,
   0,
   0.01513243,
   -0.01470217,
   0,
   0,
   0,
   0,
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
   Double_t _felx3099[25] = {
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
   Double_t _fely3099[25] = {
   1.691428,
   0.3408682,
   0.1841216,
   0.2081967,
   0.304354,
   0.01127873,
   0.003694639,
   0.009504958,
   0,
   0.01154517,
   0.01557667,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3099[25] = {
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
   Double_t _fehy3099[25] = {
   1.691401,
   0.3408607,
   0.06470118,
   0.2081955,
   0.3043538,
   0.01127848,
   0.0007489772,
   0.009504986,
   0,
   0.01154289,
   0.01557667,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3099,_fy3099,_felx3099,_fehx3099,_fely3099,_fehy3099);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3099 = new TH1F("Graph_Graph3099","",100,0,219);
   Graph_Graph3099->SetMinimum(-0.8360374);
   Graph_Graph3099->SetMaximum(5.086058);
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
   Double_t _fy3100[25] = {
   1,
   1,
   2,
   0,
   0,
   0,
   0,
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
   Double_t _felx3100[25] = {
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
   Double_t _fely3100[25] = {
   0.8272524,
   0.8272524,
   1.29183,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3100[25] = {
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
   Double_t _fehy3100[25] = {
   2.29957,
   2.29957,
   2.63791,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
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
   grae = new TGraphAsymmErrors(25,_fx3100,_fy3100,_felx3100,_fehx3100,_fely3100,_fehy3100);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3100 = new TH1F("Graph_Graph3100","",100,0,219);
   Graph_Graph3100->SetMinimum(0);
   Graph_Graph3100->SetMaximum(5.101701);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy500 = new TH1F("hframe_copy500","",1000,10,200);
   hframe_copy500->SetMinimum(0);
   hframe_copy500->SetMaximum(8.535534);
   hframe_copy500->SetDirectory(0);
   hframe_copy500->SetStats(0);
   hframe_copy500->SetLineStyle(0);
   hframe_copy500->SetMarkerStyle(20);
   hframe_copy500->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
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
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_pt3);
}
