void c_wh3l_wz_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 20:39:35 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_zveto_3l = new TCanvas("ccwh3l_wz_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_zveto_3l->Range(-20,-53.97391,105,361.21);
   ccwh3l_wz_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_wz_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_wz_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_wz_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_wz_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_wz_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe10 = new TH1F("hframe10","",1000,0,100);
   hframe10->SetMinimum(0);
   hframe10->SetMaximum(340.4508);
   hframe10->SetDirectory(0);
   hframe10->SetStats(0);
   hframe10->SetLineStyle(0);
   hframe10->SetMarkerStyle(20);
   hframe10->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe10->GetXaxis()->SetNdivisions(506);
   hframe10->GetXaxis()->SetLabelFont(42);
   hframe10->GetXaxis()->SetLabelOffset(0.007);
   hframe10->GetXaxis()->SetLabelSize(0.05);
   hframe10->GetXaxis()->SetTitleSize(0.06);
   hframe10->GetXaxis()->SetTitleOffset(0.9);
   hframe10->GetXaxis()->SetTitleFont(42);
   hframe10->GetYaxis()->SetTitle("Events");
   hframe10->GetYaxis()->SetLabelFont(42);
   hframe10->GetYaxis()->SetLabelOffset(0.007);
   hframe10->GetYaxis()->SetLabelSize(0.05);
   hframe10->GetYaxis()->SetTitleSize(0.06);
   hframe10->GetYaxis()->SetTitleOffset(1.25);
   hframe10->GetYaxis()->SetTitleFont(42);
   hframe10->GetZaxis()->SetLabelFont(42);
   hframe10->GetZaxis()->SetLabelOffset(0.007);
   hframe10->GetZaxis()->SetLabelSize(0.05);
   hframe10->GetZaxis()->SetTitleSize(0.06);
   hframe10->GetZaxis()->SetTitleFont(42);
   hframe10->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3","thsBackground_grouped_wh3l_wz_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->SetMinimum(-0.6592924);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->SetMaximum(108.0147);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_zveto_3l_stack_3);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinContent(1,7.630437);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinContent(2,0.3812846);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinContent(3,2.102353);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinContent(4,0.6579952);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinContent(5,-0.1936938);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinError(1,2.872801);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinError(2,1.001575);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinError(3,1.078301);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinError(4,0.6609701);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetBinError(5,0.4655986);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->SetBinContent(1,0.04987764);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->SetBinContent(5,0.02551711);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->SetBinError(1,0.02894052);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->SetBinError(5,0.01822775);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_zveto_3l12->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinContent(1,1.585114);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinContent(2,0.359364);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinContent(3,0.5328983);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinContent(4,1.096138);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinContent(5,1.41424);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinError(1,0.4777896);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinError(2,0.2213816);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinError(3,0.23687);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinError(4,0.3478079);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetBinError(5,0.41864);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinContent(1,5.260219);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinContent(2,0.9828467);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinContent(3,0.4122734);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinContent(4,0.07847158);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinContent(5,0.06931598);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinError(1,0.4661092);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinError(2,0.200245);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinError(3,0.1522521);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinError(4,0.05571412);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetBinError(5,0.05004546);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l14->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinContent(1,87.72253);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinContent(2,12.72651);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinContent(3,4.288334);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinContent(4,2.233008);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinContent(5,1.632858);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinError(1,0.6909023);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinError(2,0.2627317);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinError(3,0.1520976);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinError(4,0.1090673);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetBinError(5,0.09463752);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinContent(1,0.6229593);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinContent(2,0.1245154);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinContent(3,0.05500727);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinContent(4,0.04305257);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinContent(5,0.04798927);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinError(1,0.02717862);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinError(2,0.01198938);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinError(3,0.007849315);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinError(4,0.006794082);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetBinError(5,0.007406042);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l16->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_wz_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4","thsSignal_grouped_wh3l_wz_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->SetMaximum(0.6826449);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_zveto_3l_stack_4);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinContent(1,0.6229593);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinContent(2,0.1245154);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinContent(3,0.05500727);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinContent(4,0.04305257);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinContent(5,0.04798927);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinError(1,0.02717862);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinError(2,0.01198938);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinError(3,0.007849315);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinError(4,0.006794082);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetBinError(5,0.007406042);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l17->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_wz_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3003[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3003[20] = {
   102.2482,
   14.45001,
   7.335858,
   4.065612,
   2.948237,
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
   Double_t _felx3003[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3003[20] = {
   5.668692,
   1.126804,
   1.78558,
   1.19632,
   1.052853,
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
   Double_t _fehx3003[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3003[20] = {
   5.645668,
   1.721559,
   1.785134,
   1.199092,
   0.7826919,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,110);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(118.6832);
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
   
   Double_t _fx3004[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3004[20] = {
   125,
   24,
   8,
   4,
   4,
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
   Double_t _felx3004[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3004[20] = {
   11.1656,
   4.864704,
   2.768432,
   1.914367,
   1.914367,
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
   Double_t _fehx3004[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3004[20] = {
   12.21044,
   5.967054,
   3.94522,
   3.162815,
   3.162815,
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
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,110);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(150.9315);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy18 = new TH1F("hframe_copy18","",1000,0,100);
   hframe_copy18->SetMinimum(0);
   hframe_copy18->SetMaximum(340.4508);
   hframe_copy18->SetDirectory(0);
   hframe_copy18->SetStats(0);
   hframe_copy18->SetLineStyle(0);
   hframe_copy18->SetMarkerStyle(20);
   hframe_copy18->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy18->GetXaxis()->SetNdivisions(506);
   hframe_copy18->GetXaxis()->SetLabelFont(42);
   hframe_copy18->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetXaxis()->SetLabelSize(0.05);
   hframe_copy18->GetXaxis()->SetTitleSize(0.06);
   hframe_copy18->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy18->GetXaxis()->SetTitleFont(42);
   hframe_copy18->GetYaxis()->SetTitle("Events");
   hframe_copy18->GetYaxis()->SetLabelFont(42);
   hframe_copy18->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetYaxis()->SetLabelSize(0.05);
   hframe_copy18->GetYaxis()->SetTitleSize(0.06);
   hframe_copy18->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy18->GetYaxis()->SetTitleFont(42);
   hframe_copy18->GetZaxis()->SetLabelFont(42);
   hframe_copy18->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetZaxis()->SetLabelSize(0.05);
   hframe_copy18->GetZaxis()->SetTitleSize(0.06);
   hframe_copy18->GetZaxis()->SetTitleFont(42);
   hframe_copy18->Draw("sameaxis");
   ccwh3l_wz_13TeV_zveto_3l->Modified();
   ccwh3l_wz_13TeV_zveto_3l->cd();
   ccwh3l_wz_13TeV_zveto_3l->SetSelected(ccwh3l_wz_13TeV_zveto_3l);
}
