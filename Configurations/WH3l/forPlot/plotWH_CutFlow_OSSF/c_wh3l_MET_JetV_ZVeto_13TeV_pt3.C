void c_wh3l_MET_JetV_ZVeto_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt3/cc
//=========  (Sat Jul  2 21:43:58 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt3 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt3->Range(-28,-6.129064,209.5,41.01759);
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
   hframe491->SetMaximum(38.66025);
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
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->SetMinimum(-0.1569679);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_99->SetMaximum(10.19691);
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
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(1,4.44881);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(2,2.063763);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(3,0.1861584);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(4,0.6243292);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinContent(5,0.2768158);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(1,2.023738);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(2,0.7928858);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(3,0.3431262);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(4,0.4515174);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetBinError(5,0.3133368);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt3492->SetEntries(89);

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
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinContent(1,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinContent(2,0.02951213);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinError(1,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinError(2,0.02088259);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt3493->SetEntries(5);

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
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(1,0.08712399);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(2,0.07755401);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(3,0.02932332);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(4,0.03289448);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(5,0.03833755);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(6,0.02456454);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(7,0.002386697);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(8,0.002297441);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(9,0.00455864);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(10,0.008397475);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(11,-0.000564634);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(12,0.007272026);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinContent(13,0.001995288);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(1,0.01498813);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(2,0.01452288);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(3,0.008593776);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(4,0.009134805);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(5,0.009347534);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(6,0.007367301);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(7,0.003883529);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(8,0.002297441);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(9,0.003223514);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(10,0.004241376);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(11,0.000564634);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(12,0.004275166);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetBinError(13,0.001995288);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt3494->SetEntries(183);

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
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinContent(1,1.177209);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinContent(2,1.346734);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinContent(3,0.1242263);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinContent(8,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinError(1,0.3678475);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinError(2,0.4173879);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinError(3,0.1242263);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetBinError(8,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt3495->SetEntries(43);

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
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinContent(1,0.3491162);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinContent(2,0.1083724);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinContent(3,0.04510369);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinContent(5,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinError(1,0.1130887);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinError(2,0.0684451);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinError(3,0.04510369);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetBinError(5,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt3496->SetEntries(16);

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
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(1,3.393462);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(2,2.134228);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(3,1.110171);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(4,0.8345967);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(5,0.5005245);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(6,0.2634879);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(7,0.1775919);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(8,0.1803004);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(9,0.1000134);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(10,0.0548992);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(11,0.02943141);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(12,0.06018547);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(13,0.03973784);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(14,0.009518557);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(15,0.007379639);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(16,0.02911704);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(17,0.01058535);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(18,0.01001529);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(21,0.006291073);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(23,0.01006356);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinContent(26,0.00996888);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(1,0.1359405);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(2,0.1086471);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(3,0.07722038);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(4,0.06698844);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(5,0.05148527);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(6,0.03794406);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(7,0.03009743);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(8,0.03132035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(9,0.0227557);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(10,0.01692983);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(11,0.01252325);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(12,0.01844942);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(13,0.01440947);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(14,0.006984266);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(15,0.006377638);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(16,0.0125465);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(17,0.007554668);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(18,0.007328511);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(21,0.006291073);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(23,0.00733257);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetBinError(26,0.007110243);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt3497->SetEntries(1841);

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
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(1,0.2270313);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(2,0.1809051);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(3,0.0874839);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(4,0.03954081);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(5,0.02224767);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(6,0.01324129);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(7,0.006308981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(8,0.004564001);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(9,0.0004071734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(10,0.001895509);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(11,-0.0003157941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinContent(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(1,0.01603286);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(2,0.01476251);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(3,0.01061189);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(4,0.007098843);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(5,0.005362234);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(6,0.004186712);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(7,0.002773465);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(8,0.002711466);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(9,0.0003654983);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(10,0.001699495);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(11,0.0003157941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetBinError(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3498->SetEntries(919);
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
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->SetMinimum(-0.0006315881);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt3_stack_100->SetMaximum(0.2552174);
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
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(1,0.2270313);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(2,0.1809051);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(3,0.0874839);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(4,0.03954081);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(5,0.02224767);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(6,0.01324129);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(7,0.006308981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(8,0.004564001);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(9,0.0004071734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(10,0.001895509);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(11,-0.0003157941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinContent(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(1,0.01603286);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(2,0.01476251);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(3,0.01061189);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(4,0.007098843);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(5,0.005362234);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(6,0.004186712);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(7,0.002773465);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(8,0.002711466);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(9,0.0003654983);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(10,0.001699495);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(11,0.0003157941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetBinError(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt3499->SetEntries(919);
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
   9.484312,
   5.760164,
   1.509457,
   1.49182,
   0.8609559,
   0.2880524,
   0.1799786,
   0.2884467,
   0.1045721,
   0.06329668,
   0.02886678,
   0.0674575,
   0.04173313,
   0.009518556,
   0.007379639,
   0.02911703,
   0.01058535,
   0.01001529,
   0,
   0,
   0.006291073,
   0,
   0.01006356,
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
   3.114112,
   1.600745,
   0.4619671,
   0.5722159,
   0.3969319,
   0.05188077,
   0.03278748,
   0.1396436,
   0.02658148,
   0.02284483,
   0.01312639,
   0.02398387,
   0.01667012,
   0.007012584,
   0.006378396,
   0.01259763,
   0.007580997,
   0.007343469,
   0,
   0,
   0.006291273,
   0,
   0.007334187,
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
   3.112787,
   1.600662,
   0.6173112,
   0.5721875,
   0.432247,
   0.05160219,
   0.03425996,
   0.1396299,
   0.02655605,
   0.02284221,
   0.01312285,
   0.02397727,
   0.01662252,
   0.007000187,
   0.0063785,
   0.01259376,
   0.007586067,
   0.007335069,
   0,
   0,
   0.006291275,
   0,
   0.007333824,
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
   Graph_Graph3099->SetMinimum(-1.25971);
   Graph_Graph3099->SetMaximum(13.85681);
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
   12,
   6,
   5,
   1,
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
   3.415326,
   2.379969,
   2.159724,
   0.8272524,
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
   4.559911,
   3.583713,
   3.382539,
   2.29957,
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
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3100,_fy3100,_felx3100,_fehx3100,_fely3100,_fehy3100);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3100 = new TH1F("Graph_Graph3100","",100,0,219);
   Graph_Graph3100->SetMinimum(0);
   Graph_Graph3100->SetMaximum(18.2159);
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
   hframe_copy500->SetMaximum(38.66025);
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
