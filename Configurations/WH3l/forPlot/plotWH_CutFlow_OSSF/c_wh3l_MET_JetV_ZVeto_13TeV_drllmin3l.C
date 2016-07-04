void c_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l/cc
//=========  (Sat Jul  2 21:43:56 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Range(-1.2,-6.129064,6.3,41.01759);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe461 = new TH1F("hframe461","",1000,0,6);
   hframe461->SetMinimum(0);
   hframe461->SetMaximum(38.66025);
   hframe461->SetDirectory(0);
   hframe461->SetStats(0);
   hframe461->SetLineStyle(0);
   hframe461->SetMarkerStyle(20);
   hframe461->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe461->GetXaxis()->SetNdivisions(506);
   hframe461->GetXaxis()->SetLabelFont(42);
   hframe461->GetXaxis()->SetLabelOffset(0.007);
   hframe461->GetXaxis()->SetLabelSize(0.05);
   hframe461->GetXaxis()->SetTitleSize(0.06);
   hframe461->GetXaxis()->SetTitleOffset(0.9);
   hframe461->GetXaxis()->SetTitleFont(42);
   hframe461->GetYaxis()->SetTitle("Events");
   hframe461->GetYaxis()->SetLabelFont(42);
   hframe461->GetYaxis()->SetLabelOffset(0.007);
   hframe461->GetYaxis()->SetLabelSize(0.05);
   hframe461->GetYaxis()->SetTitleSize(0.06);
   hframe461->GetYaxis()->SetTitleOffset(1.25);
   hframe461->GetYaxis()->SetTitleFont(42);
   hframe461->GetZaxis()->SetLabelFont(42);
   hframe461->GetZaxis()->SetLabelOffset(0.007);
   hframe461->GetZaxis()->SetLabelSize(0.05);
   hframe461->GetZaxis()->SetTitleSize(0.06);
   hframe461->GetZaxis()->SetTitleFont(42);
   hframe461->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->SetMinimum(-0.06920862);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->SetMaximum(11.12264);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_93);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetBinContent(1,1.353192);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetBinContent(2,4.194281);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetBinContent(3,2.087007);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetBinContent(4,-0.03460431);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetBinError(1,1.093652);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetBinError(2,1.628617);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetBinError(3,1.137675);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetBinError(4,0.03460431);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l462->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetBinContent(1,0.03345312);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetBinContent(2,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetBinContent(3,0.02465031);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetBinError(1,0.02374035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetBinError(2,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetBinError(3,0.0176327);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l463->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetBinContent(1,0.09401589);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetBinContent(2,0.1446696);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetBinContent(3,0.07745536);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetBinError(1,0.01534942);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetBinError(2,0.01927371);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetBinError(3,0.01409773);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l464->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetBinContent(1,0.2783427);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetBinContent(2,1.469862);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetBinContent(3,1.005813);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetBinError(1,0.275436);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetBinError(2,0.3784352);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetBinError(3,0.342173);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l465->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetBinContent(1,0.08294021);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetBinContent(2,0.4385263);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetBinContent(3,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetBinError(1,0.0586513);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetBinError(2,0.131989);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetBinError(3,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l466->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetBinContent(1,3.145323);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetBinContent(2,4.123798);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetBinContent(3,1.663486);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetBinContent(4,0.03896304);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetBinError(1,0.1302013);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetBinError(2,0.1497845);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetBinError(3,0.09536207);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetBinError(4,0.01551997);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l467->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetBinContent(1,0.3463614);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetBinContent(2,0.2073786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetBinContent(3,0.02963642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetBinError(1,0.02139248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetBinError(2,0.01474338);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetBinError(3,0.005238042);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l468->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->SetMaximum(0.3861416);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l_stack_94);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetBinContent(1,0.3463614);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetBinContent(2,0.2073786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetBinContent(3,0.02963642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetBinError(1,0.02139248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetBinError(2,0.01474338);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetBinError(3,0.005238042);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l469->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3093[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3093[5] = {
   4.987267,
   10.38561,
   4.884815,
   0.004358729,
   0};
   Double_t _felx3093[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3093[5] = {
   1.675684,
   2.762126,
   1.793603,
   0.05157109,
   0};
   Double_t _fehx3093[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3093[5] = {
   1.675085,
   2.761245,
   1.793378,
   0.05157086,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3093,_fy3093,_felx3093,_fehx3093,_fely3093,_fehy3093);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3093 = new TH1F("Graph_Graph3093","",100,0,6.6);
   Graph_Graph3093->SetMinimum(-1.366619);
   Graph_Graph3093->SetMaximum(14.46626);
   Graph_Graph3093->SetDirectory(0);
   Graph_Graph3093->SetStats(0);
   Graph_Graph3093->SetLineStyle(0);
   Graph_Graph3093->SetMarkerStyle(20);
   Graph_Graph3093->GetXaxis()->SetLabelFont(42);
   Graph_Graph3093->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3093->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3093->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3093->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3093->GetXaxis()->SetTitleFont(42);
   Graph_Graph3093->GetYaxis()->SetLabelFont(42);
   Graph_Graph3093->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3093->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3093->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3093->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3093->GetYaxis()->SetTitleFont(42);
   Graph_Graph3093->GetZaxis()->SetLabelFont(42);
   Graph_Graph3093->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3093->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3093->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3093->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3093);
   
   grae->Draw("2");
   
   Double_t _fx3094[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3094[5] = {
   6,
   12,
   6,
   1,
   0};
   Double_t _felx3094[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3094[5] = {
   2.379969,
   3.415326,
   2.379969,
   0.8272524,
   0};
   Double_t _fehx3094[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3094[5] = {
   3.583713,
   4.559911,
   3.583713,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3094,_fy3094,_felx3094,_fehx3094,_fely3094,_fehy3094);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3094 = new TH1F("Graph_Graph3094","",100,0,6.6);
   Graph_Graph3094->SetMinimum(0);
   Graph_Graph3094->SetMaximum(18.2159);
   Graph_Graph3094->SetDirectory(0);
   Graph_Graph3094->SetStats(0);
   Graph_Graph3094->SetLineStyle(0);
   Graph_Graph3094->SetMarkerStyle(20);
   Graph_Graph3094->GetXaxis()->SetLabelFont(42);
   Graph_Graph3094->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3094->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3094->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3094->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3094->GetXaxis()->SetTitleFont(42);
   Graph_Graph3094->GetYaxis()->SetLabelFont(42);
   Graph_Graph3094->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3094->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3094->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3094->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3094->GetYaxis()->SetTitleFont(42);
   Graph_Graph3094->GetZaxis()->SetLabelFont(42);
   Graph_Graph3094->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3094->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3094->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3094->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3094);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy470 = new TH1F("hframe_copy470","",1000,0,6);
   hframe_copy470->SetMinimum(0);
   hframe_copy470->SetMaximum(38.66025);
   hframe_copy470->SetDirectory(0);
   hframe_copy470->SetStats(0);
   hframe_copy470->SetLineStyle(0);
   hframe_copy470->SetMarkerStyle(20);
   hframe_copy470->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy470->GetXaxis()->SetNdivisions(506);
   hframe_copy470->GetXaxis()->SetLabelFont(42);
   hframe_copy470->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy470->GetXaxis()->SetLabelSize(0.05);
   hframe_copy470->GetXaxis()->SetTitleSize(0.06);
   hframe_copy470->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy470->GetXaxis()->SetTitleFont(42);
   hframe_copy470->GetYaxis()->SetTitle("Events");
   hframe_copy470->GetYaxis()->SetLabelFont(42);
   hframe_copy470->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy470->GetYaxis()->SetLabelSize(0.05);
   hframe_copy470->GetYaxis()->SetTitleSize(0.06);
   hframe_copy470->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy470->GetYaxis()->SetTitleFont(42);
   hframe_copy470->GetZaxis()->SetLabelFont(42);
   hframe_copy470->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy470->GetZaxis()->SetLabelSize(0.05);
   hframe_copy470->GetZaxis()->SetTitleSize(0.06);
   hframe_copy470->GetZaxis()->SetTitleFont(42);
   hframe_copy470->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_drllmin3l);
}
