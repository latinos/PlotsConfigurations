void c_wh3l_13TeV_ossf_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_pt3/cc
//=========  (Wed Jun 29 01:33:58 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_pt3 = new TCanvas("ccwh3l_13TeV_ossf_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_pt3->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_pt3->Range(-28,-3.682934,209.5,24.64733);
   ccwh3l_13TeV_ossf_pt3->SetFillColor(0);
   ccwh3l_13TeV_ossf_pt3->SetBorderMode(0);
   ccwh3l_13TeV_ossf_pt3->SetBorderSize(2);
   ccwh3l_13TeV_ossf_pt3->SetTickx(1);
   ccwh3l_13TeV_ossf_pt3->SetTicky(1);
   ccwh3l_13TeV_ossf_pt3->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_pt3->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_pt3->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_pt3->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe171 = new TH1F("hframe171","",1000,10,200);
   hframe171->SetMinimum(0);
   hframe171->SetMaximum(23.23081);
   hframe171->SetDirectory(0);
   hframe171->SetStats(0);
   hframe171->SetLineStyle(0);
   hframe171->SetMarkerStyle(20);
   hframe171->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe171->GetXaxis()->SetNdivisions(506);
   hframe171->GetXaxis()->SetLabelFont(42);
   hframe171->GetXaxis()->SetLabelOffset(0.007);
   hframe171->GetXaxis()->SetLabelSize(0.05);
   hframe171->GetXaxis()->SetTitleSize(0.06);
   hframe171->GetXaxis()->SetTitleOffset(0.9);
   hframe171->GetXaxis()->SetTitleFont(42);
   hframe171->GetYaxis()->SetTitle("Events");
   hframe171->GetYaxis()->SetLabelFont(42);
   hframe171->GetYaxis()->SetLabelOffset(0.007);
   hframe171->GetYaxis()->SetLabelSize(0.05);
   hframe171->GetYaxis()->SetTitleSize(0.06);
   hframe171->GetYaxis()->SetTitleOffset(1.25);
   hframe171->GetYaxis()->SetTitleFont(42);
   hframe171->GetZaxis()->SetLabelFont(42);
   hframe171->GetZaxis()->SetLabelOffset(0.007);
   hframe171->GetZaxis()->SetLabelSize(0.05);
   hframe171->GetZaxis()->SetTitleSize(0.06);
   hframe171->GetZaxis()->SetTitleFont(42);
   hframe171->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetName("thsBackground_grouped_wh3l_13TeV_ossf_pt3");
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35","thsBackground_grouped_wh3l_13TeV_ossf_pt3",25,10,200);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->SetMinimum(-0.1258531);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->SetMaximum(9.756941);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_pt3172 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_pt3172","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetBinContent(1,4.167481);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetBinContent(2,2.063763);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetBinContent(3,0.2149783);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetBinContent(4,0.2726189);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetBinError(1,2.004089);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetBinError(2,0.7928858);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetBinError(3,0.3408314);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetBinError(4,0.2772462);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt3172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Fake_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_pt3173 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_pt3173","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetBinContent(1,0.0285913);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetBinContent(2,0.02951213);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetBinError(1,0.02093881);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetBinError(2,0.02088259);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt3173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_WW_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_pt3174 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_pt3174","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinContent(1,0.0009029573);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinContent(2,0.002136741);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinContent(3,0.002644338);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinContent(4,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinContent(8,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinError(1,0.0006779799);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinError(2,0.001133191);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinError(3,0.001323303);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinError(4,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetBinError(8,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt3174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_VVV_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_pt3175 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_pt3175","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetBinContent(1,1.177209);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetBinContent(2,1.346734);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetBinContent(3,0.1242263);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetBinError(1,0.3678475);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetBinError(2,0.4173879);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetBinError(3,0.1242263);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt3175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Vg_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinContent(1,0.3491162);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinContent(2,0.1083724);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinContent(3,0.04510369);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinContent(5,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinContent(7,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinError(1,0.1130887);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinError(2,0.0684451);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinError(3,0.04510369);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinError(5,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetBinError(7,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt3176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_pt3177 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_pt3177","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(1,3.341536);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(2,1.957116);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(3,0.7923265);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(4,0.3736949);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(5,0.176475);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(6,0.09045971);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(7,0.07123534);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(8,0.02892352);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(9,0.01669191);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(10,0.0166626);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(11,0.01715306);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(12,0.01787271);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(13,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(15,0.006282572);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinContent(16,0.008634566);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(1,0.1347982);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(2,0.1037598);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(3,0.06493389);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(4,0.04460098);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(5,0.03041322);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(6,0.02234785);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(7,0.01953239);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(8,0.0129566);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(9,0.009638129);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(10,0.009704447);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(11,0.01000479);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(12,0.01039688);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(13,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(15,0.006282572);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetBinError(16,0.006589555);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt3177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_WZ_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(1,0.2274894);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(2,0.1802342);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(3,0.08674856);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(4,0.04619732);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(5,0.02592089);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(6,0.01464203);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(7,0.006682086);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(8,0.005804505);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(9,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(10,0.002081552);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(11,-0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinContent(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(1,0.0160394);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(2,0.01471225);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(3,0.01051311);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(4,0.00763241);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(5,0.005676745);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(6,0.004250163);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(7,0.002798448);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(8,0.002872061);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(9,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(10,0.001846238);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(11,0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetBinError(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt3,"");
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetName("thsSignal_grouped_wh3l_13TeV_ossf_pt3");
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36","thsSignal_grouped_wh3l_13TeV_ossf_pt3",25,10,200);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->SetMinimum(-0.0006315881);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->SetMaximum(0.2557052);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(1,0.2274894);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(2,0.1802342);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(3,0.08674856);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(4,0.04619732);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(5,0.02592089);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(6,0.01464203);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(7,0.006682086);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(8,0.005804505);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(9,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(10,0.002081552);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(11,-0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinContent(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(1,0.0160394);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(2,0.01471225);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(3,0.01051311);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(4,0.00763241);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(5,0.005676745);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(6,0.004250163);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(7,0.002798448);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(8,0.002872061);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(9,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(10,0.001846238);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(11,0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetBinError(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt3179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt3,"");
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->Draw("hist same noclear");
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
   9.064836,
   5.507634,
   1.193753,
   0.6469481,
   0.2217532,
   0.09045971,
   0.09212131,
   0.02959644,
   0.01669191,
   0.0166626,
   0.01715306,
   0.01787271,
   0.005313793,
   0,
   0.006282572,
   0.008634566,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3035[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3035[25] = {
   3.033425,
   1.582253,
   0.4713779,
   0.3318976,
   0.0757794,
   0.02241985,
   0.04045975,
   0.01365208,
   0.00964543,
   0.009720106,
   0.01001349,
   0.01042118,
   0.005320137,
   0,
   0.006282842,
   0.006599031,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3035[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3035[25] = {
   3.032183,
   1.582215,
   0.5958893,
   0.3363312,
   0.07576972,
   0.0224102,
   0.04045517,
   0.01365487,
   0.009643755,
   0.009721527,
   0.01001044,
   0.01042405,
   0.005320925,
   0,
   0.006282845,
   0.006600415,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,219);
   Graph_Graph3035->SetMinimum(-1.209709);
   Graph_Graph3035->SetMaximum(13.30672);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineStyle(0);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2");
   
   Double_t _fx3036[25] = {
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
   Double_t _fy3036[25] = {
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
   Double_t _felx3036[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3036[25] = {
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
   Double_t _fehx3036[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3036[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,219);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.262698);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineStyle(0);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt3","Data","EPL");
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
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,10,200);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(23.23081);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy180->GetXaxis()->SetNdivisions(506);
   hframe_copy180->GetXaxis()->SetLabelFont(42);
   hframe_copy180->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetXaxis()->SetLabelSize(0.05);
   hframe_copy180->GetXaxis()->SetTitleSize(0.06);
   hframe_copy180->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy180->GetXaxis()->SetTitleFont(42);
   hframe_copy180->GetYaxis()->SetTitle("Events");
   hframe_copy180->GetYaxis()->SetLabelFont(42);
   hframe_copy180->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetYaxis()->SetLabelSize(0.05);
   hframe_copy180->GetYaxis()->SetTitleSize(0.06);
   hframe_copy180->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy180->GetYaxis()->SetTitleFont(42);
   hframe_copy180->GetZaxis()->SetLabelFont(42);
   hframe_copy180->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetZaxis()->SetLabelSize(0.05);
   hframe_copy180->GetZaxis()->SetTitleSize(0.06);
   hframe_copy180->GetZaxis()->SetTitleFont(42);
   hframe_copy180->Draw("sameaxis");
   ccwh3l_13TeV_ossf_pt3->Modified();
   ccwh3l_13TeV_ossf_pt3->cd();
   ccwh3l_13TeV_ossf_pt3->SetSelected(ccwh3l_13TeV_ossf_pt3);
}
