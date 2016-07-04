void c_wh3l_zjets_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zjets_13TeV_drllmin3l/cc
//=========  (Sun Jul  3 13:02:10 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zjets_13TeV_drllmin3l = new TCanvas("ccwh3l_zjets_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zjets_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_zjets_13TeV_drllmin3l->Range(-1.2,-68.428,6.3,457.9412);
   ccwh3l_zjets_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_zjets_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_zjets_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_zjets_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_zjets_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_zjets_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_zjets_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_zjets_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_zjets_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_zjets_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zjets_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_zjets_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zjets_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe11 = new TH1F("hframe11","",1000,0,6);
   hframe11->SetMinimum(0);
   hframe11->SetMaximum(431.6228);
   hframe11->SetDirectory(0);
   hframe11->SetStats(0);
   hframe11->SetLineStyle(0);
   hframe11->SetMarkerStyle(20);
   hframe11->GetXaxis()->SetTitle("min #Delta R_{ll} [GeV]");
   hframe11->GetXaxis()->SetNdivisions(506);
   hframe11->GetXaxis()->SetLabelFont(42);
   hframe11->GetXaxis()->SetLabelOffset(0.007);
   hframe11->GetXaxis()->SetLabelSize(0.05);
   hframe11->GetXaxis()->SetTitleSize(0.06);
   hframe11->GetXaxis()->SetTitleOffset(0.9);
   hframe11->GetXaxis()->SetTitleFont(42);
   hframe11->GetYaxis()->SetTitle("Events");
   hframe11->GetYaxis()->SetLabelFont(42);
   hframe11->GetYaxis()->SetLabelOffset(0.007);
   hframe11->GetYaxis()->SetLabelSize(0.05);
   hframe11->GetYaxis()->SetTitleSize(0.06);
   hframe11->GetYaxis()->SetTitleOffset(1.25);
   hframe11->GetYaxis()->SetTitleFont(42);
   hframe11->GetZaxis()->SetLabelFont(42);
   hframe11->GetZaxis()->SetLabelOffset(0.007);
   hframe11->GetZaxis()->SetLabelSize(0.05);
   hframe11->GetZaxis()->SetTitleSize(0.06);
   hframe11->GetZaxis()->SetTitleFont(42);
   hframe11->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3 = new TH1F("thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3","thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->SetMinimum(-0.1630802);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->SetMaximum(158.1305);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->SetDirectory(0);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->SetStats(0);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->SetLineStyle(0);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l_stack_3);
   
   
   TH1D *new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12 = new TH1D("new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetBinContent(1,17.9991);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetBinContent(2,53.18329);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetBinContent(3,64.25572);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetBinContent(4,0.5967587);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetBinError(1,3.030732);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetBinError(2,5.488323);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetBinError(3,6.16373);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetBinError(4,0.3331697);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetEntries(1524);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l12->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13 = new TH1D("new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->SetBinContent(3,0.01034371);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->SetBinError(3,0.01034371);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->SetFillColor(ci);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->SetLineColor(ci);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14 = new TH1D("new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetBinContent(1,0.02636548);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetBinContent(2,0.1234617);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetBinContent(3,0.05087433);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetBinError(1,0.006824023);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetBinError(2,0.01594274);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetBinError(3,0.01100091);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetEntries(193);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l14->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15 = new TH1D("new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetBinContent(1,17.96927);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetBinContent(2,37.95806);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetBinContent(3,37.23485);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetBinContent(4,0.004832751);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetBinError(1,1.677631);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetBinError(2,2.367183);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetBinError(3,2.319584);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetBinError(4,0.167913);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetEntries(1250);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16 = new TH1D("new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetBinContent(1,3.168752);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetBinContent(2,12.92475);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetBinContent(3,6.444576);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetBinContent(4,0.04450247);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetBinError(1,0.3633897);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetBinError(2,0.7280135);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetBinError(3,0.5150483);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetBinError(4,0.04450247);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetEntries(604);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l16->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17 = new TH1D("new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetBinContent(1,8.894218);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetBinContent(2,46.00524);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetBinContent(3,30.39107);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetBinContent(4,0.3084741);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetBinError(1,0.2204851);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetBinError(2,0.5017288);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetBinError(3,0.4083275);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetBinError(4,0.03969449);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetEntries(17146);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18 = new TH1D("new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetBinContent(1,0.1242964);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetBinContent(2,0.4056835);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetBinContent(3,0.1371409);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetBinError(1,0.01266417);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetBinError(2,0.02224086);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetBinError(3,0.01308816);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetEntries(855);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l18->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_zjets_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4 = new TH1F("thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4","thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->SetMinimum(0);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->SetMaximum(0.4493206);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->SetDirectory(0);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->SetStats(0);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->SetLineStyle(0);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l_stack_4);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19 = new TH1D("new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetBinContent(1,0.1242964);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetBinContent(2,0.4056835);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetBinContent(3,0.1371409);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetBinError(1,0.01266417);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetBinError(2,0.02224086);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetBinError(3,0.01308816);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetEntries(855);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l19->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_zjets_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3003[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3003[5] = {
   48.05771,
   150.1948,
   138.3874,
   0.954568,
   0};
   Double_t _felx3003[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3003[5] = {
   8.295364,
   20.86028,
   24.47839,
   0.4711172,
   0};
   Double_t _fehx3003[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3003[5] = {
   8.290867,
   20.85469,
   24.47709,
   0.6215189,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,6.6);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(188.1544);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2");
   
   Double_t _fx3004[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3004[5] = {
   41,
   160,
   156,
   1,
   0};
   Double_t _felx3004[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3004[5] = {
   6.377022,
   12.63615,
   12.47686,
   0.8272524,
   0};
   Double_t _fehx3004[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3004[5] = {
   7.45534,
   13.67578,
   13.51699,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,6.6);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(191.0434);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineStyle(0);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zjets_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zjets_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zjets_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zjets_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zjets_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zjets_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zjets_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zjets_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zjets_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy20 = new TH1F("hframe_copy20","",1000,0,6);
   hframe_copy20->SetMinimum(0);
   hframe_copy20->SetMaximum(431.6228);
   hframe_copy20->SetDirectory(0);
   hframe_copy20->SetStats(0);
   hframe_copy20->SetLineStyle(0);
   hframe_copy20->SetMarkerStyle(20);
   hframe_copy20->GetXaxis()->SetTitle("min #Delta R_{ll} [GeV]");
   hframe_copy20->GetXaxis()->SetNdivisions(506);
   hframe_copy20->GetXaxis()->SetLabelFont(42);
   hframe_copy20->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetXaxis()->SetLabelSize(0.05);
   hframe_copy20->GetXaxis()->SetTitleSize(0.06);
   hframe_copy20->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy20->GetXaxis()->SetTitleFont(42);
   hframe_copy20->GetYaxis()->SetTitle("Events");
   hframe_copy20->GetYaxis()->SetLabelFont(42);
   hframe_copy20->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetYaxis()->SetLabelSize(0.05);
   hframe_copy20->GetYaxis()->SetTitleSize(0.06);
   hframe_copy20->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy20->GetYaxis()->SetTitleFont(42);
   hframe_copy20->GetZaxis()->SetLabelFont(42);
   hframe_copy20->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetZaxis()->SetLabelSize(0.05);
   hframe_copy20->GetZaxis()->SetTitleSize(0.06);
   hframe_copy20->GetZaxis()->SetTitleFont(42);
   hframe_copy20->Draw("sameaxis");
   ccwh3l_zjets_13TeV_drllmin3l->Modified();
   ccwh3l_zjets_13TeV_drllmin3l->cd();
   ccwh3l_zjets_13TeV_drllmin3l->SetSelected(ccwh3l_zjets_13TeV_drllmin3l);
}
