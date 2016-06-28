void c_wh3l_plot_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_pt3/cc
//=========  (Tue Jun 28 13:56:29 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_pt3 = new TCanvas("ccwh3l_plot_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_plot_13TeV_pt3->Range(-28,-16.79091,209.5,112.3699);
   ccwh3l_plot_13TeV_pt3->SetFillColor(0);
   ccwh3l_plot_13TeV_pt3->SetBorderMode(0);
   ccwh3l_plot_13TeV_pt3->SetBorderSize(2);
   ccwh3l_plot_13TeV_pt3->SetTickx(1);
   ccwh3l_plot_13TeV_pt3->SetTicky(1);
   ccwh3l_plot_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe331 = new TH1F("hframe331","",1000,10,200);
   hframe331->SetMinimum(0);
   hframe331->SetMaximum(105.9119);
   hframe331->SetDirectory(0);
   hframe331->SetStats(0);
   hframe331->SetLineStyle(0);
   hframe331->SetMarkerStyle(20);
   hframe331->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe331->GetXaxis()->SetNdivisions(506);
   hframe331->GetXaxis()->SetLabelFont(42);
   hframe331->GetXaxis()->SetLabelOffset(0.007);
   hframe331->GetXaxis()->SetLabelSize(0.05);
   hframe331->GetXaxis()->SetTitleSize(0.06);
   hframe331->GetXaxis()->SetTitleOffset(0.9);
   hframe331->GetXaxis()->SetTitleFont(42);
   hframe331->GetYaxis()->SetTitle("Events");
   hframe331->GetYaxis()->SetLabelFont(42);
   hframe331->GetYaxis()->SetLabelOffset(0.007);
   hframe331->GetYaxis()->SetLabelSize(0.05);
   hframe331->GetYaxis()->SetTitleSize(0.06);
   hframe331->GetYaxis()->SetTitleOffset(1.25);
   hframe331->GetYaxis()->SetTitleFont(42);
   hframe331->GetZaxis()->SetLabelFont(42);
   hframe331->GetZaxis()->SetLabelOffset(0.007);
   hframe331->GetZaxis()->SetLabelSize(0.05);
   hframe331->GetZaxis()->SetTitleSize(0.06);
   hframe331->GetZaxis()->SetTitleFont(42);
   hframe331->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_pt3->SetName("thsBackground_grouped_wh3l_plot_13TeV_pt3");
   thsBackground_grouped_wh3l_plot_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67","thsBackground_grouped_wh3l_plot_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->SetMinimum(-0.1907855);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->SetMaximum(44.48299);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_pt3_stack_67);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_pt3332 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_pt3332","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(1,13.5693);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(2,4.646747);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(3,1.429251);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(4,0.9914676);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(5,0.4246309);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(6,0.1777274);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(7,0.03057618);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(8,-0.0500566);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(11,-0.01470217);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(14,-0.01660391);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(17,-0.02338661);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinContent(19,-0.0197091);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(1,3.556469);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(2,1.793082);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(3,1.131479);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(4,0.782434);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(5,0.4462554);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(6,0.1291392);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(7,0.08150602);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(8,0.03572201);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(11,0.01470217);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(14,0.01660391);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(17,0.02338661);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetBinError(19,0.0197091);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetEntries(455);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt3332->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3->Add(new_histo_group_Fake_wh3l_plot_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_pt3333 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_pt3333","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetBinContent(1,0.1057945);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetBinContent(2,0.04382778);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetBinError(1,0.04078342);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetBinError(2,0.02531838);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt3333->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3->Add(new_histo_group_WW_wh3l_plot_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_pt3334 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_pt3334","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(1,0.01860088);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(2,0.03856088);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(3,0.04286679);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(4,0.02465667);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(5,0.01656984);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(6,0.01045438);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(7,0.006714169);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(8,0.005383695);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(9,0.004234101);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(10,0.001860826);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(11,0.001311713);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(13,0.0004502267);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(14,0.001540678);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(15,0.0008356085);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(17,0.0004507764);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(19,0.0005211808);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(23,0.0007301272);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinContent(26,0.0002847629);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(1,0.003478157);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(2,0.005243468);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(3,0.005799374);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(4,0.003952432);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(5,0.0033261);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(6,0.002817842);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(7,0.002051525);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(8,0.001866879);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(9,0.001620366);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(10,0.00108066);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(11,0.0009276616);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(13,0.0004500321);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(14,0.001089434);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(15,0.0005910937);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(17,0.0004507764);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(19,0.0005211808);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(23,0.0007301272);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetBinError(26,0.0002847629);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetEntries(351);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt3334->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3->Add(new_histo_group_VVV_wh3l_plot_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_pt3335 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_pt3335","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinContent(1,3.793964);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinContent(2,2.998008);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinContent(3,0.6695054);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinContent(4,-0.09539273);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinContent(6,0.295315);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinContent(8,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinError(1,0.6912745);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinError(2,0.6101919);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinError(3,0.2567046);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinError(4,0.09539273);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinError(6,0.1733317);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetBinError(8,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetEntries(107);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt3335->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3->Add(new_histo_group_Vg_wh3l_plot_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_pt3336 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_pt3336","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(1,1.944734);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(2,2.400055);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(3,1.66195);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(4,1.275799);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(5,0.7864407);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(6,0.4580906);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(7,0.06253609);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(8,0.154504);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(9,0.04241135);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(10,0.04333704);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(11,0.04463009);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(13,0.06098055);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinContent(15,0.0418944);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(1,0.287055);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(2,0.3158381);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(3,0.2595364);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(4,0.2224003);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(5,0.1791223);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(6,0.1393832);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(7,0.04659352);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(8,0.08028942);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(9,0.04241135);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(10,0.04333704);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(11,0.04463009);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(13,0.06098055);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetBinError(15,0.0418944);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetEntries(250);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt3336->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_plot_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_pt3337 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_pt3337","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(1,21.40962);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(2,31.72864);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(3,30.04443);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(4,18.39173);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(5,8.00791);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(6,3.402877);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(7,1.785538);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(8,1.104518);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(9,0.7618056);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(10,0.3645237);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(11,0.2951311);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(12,0.2350521);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(13,0.1769859);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(14,0.0689137);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(15,0.09559278);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(16,0.08692777);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(17,0.04234731);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(18,0.04705152);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(19,0.009425499);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(21,0.006291073);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(22,0.005472263);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(23,0.01006356);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(24,0.006102045);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(25,0.01070773);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinContent(26,0.01640541);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(1,0.3409321);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(2,0.4166809);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(3,0.4037409);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(4,0.3154757);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(5,0.208089);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(6,0.136332);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(7,0.09763614);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(8,0.07757909);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(9,0.06507019);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(10,0.04430324);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(11,0.03995103);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(12,0.03561581);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(13,0.03064006);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(14,0.01848307);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(15,0.02263182);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(16,0.0214776);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(17,0.0151207);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(18,0.01550121);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(19,0.006824628);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(21,0.006291073);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(22,0.005472263);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(23,0.00733257);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(24,0.006102045);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(25,0.007573399);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetBinError(26,0.009590857);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetEntries(24096);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt3337->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3->Add(new_histo_group_WZ_wh3l_plot_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt3338 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt3338","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(1,0.4898396);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(2,0.5089182);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(3,0.3702712);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(4,0.1907515);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(5,0.1349426);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(6,0.07420783);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(7,0.03023867);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(8,0.03016965);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(9,0.008936487);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(10,0.01528115);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(11,0.003008606);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(12,0.005890628);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(13,0.0027314);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(14,0.002039255);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(15,0.002483191);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(16,0.0002656808);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(17,0.00139038);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinContent(22,0.0004464625);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(1,0.02358065);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(2,0.02457829);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(3,0.02164449);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(4,0.01476801);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(5,0.01270865);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(6,0.009098857);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(7,0.005252712);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(8,0.005728738);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(9,0.002092855);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(10,0.00427669);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(11,0.001840274);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(12,0.002571369);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(13,0.001802684);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(14,0.001651442);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(15,0.001720899);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(16,0.0002100476);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(17,0.00139038);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetBinError(22,0.0004464625);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3338->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt3,"");
   thsBackground_grouped_wh3l_plot_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_pt3->SetName("thsSignal_grouped_wh3l_plot_13TeV_pt3");
   thsSignal_grouped_wh3l_plot_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68","thsSignal_grouped_wh3l_plot_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->SetMaximum(0.5601713);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_pt3_stack_68);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt3339 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt3339","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(1,0.4898396);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(2,0.5089182);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(3,0.3702712);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(4,0.1907515);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(5,0.1349426);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(6,0.07420783);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(7,0.03023867);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(8,0.03016965);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(9,0.008936487);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(10,0.01528115);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(11,0.003008606);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(12,0.005890628);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(13,0.0027314);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(14,0.002039255);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(15,0.002483191);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(16,0.0002656808);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(17,0.00139038);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinContent(22,0.0004464625);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(1,0.02358065);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(2,0.02457829);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(3,0.02164449);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(4,0.01476801);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(5,0.01270865);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(6,0.009098857);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(7,0.005252712);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(8,0.005728738);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(9,0.002092855);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(10,0.00427669);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(11,0.001840274);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(12,0.002571369);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(13,0.001802684);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(14,0.001651442);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(15,0.001720899);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(16,0.0002100476);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(17,0.00139038);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetBinError(22,0.0004464625);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt3339->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt3,"");
   thsSignal_grouped_wh3l_plot_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3067[25] = {
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
   Double_t _fy3067[25] = {
   40.84201,
   41.85584,
   33.86248,
   20.58826,
   9.235552,
   4.344465,
   1.885364,
   1.320198,
   0.808451,
   0.4097215,
   0.3263707,
   0.2350521,
   0.2384167,
   0.05385048,
   0.1383228,
   0.08692777,
   0.01941148,
   0.04705152,
   -0.009762418,
   0,
   0.006291073,
   0.005472263,
   0.01079369,
   0.006102045,
   0.01070773};
   Double_t _felx3067[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3067[25] = {
   6.387705,
   3.462807,
   2.116628,
   1.450848,
   0.8253486,
   0.58381,
   0.1771051,
   0.3017656,
   0.1091092,
   0.08872931,
   0.1003157,
   0.03561583,
   0.09208558,
   0.03651776,
   0.06512754,
   0.02147759,
   0.0395848,
   0.01550121,
   0.02769347,
   0,
   0.006291074,
   0.005472263,
   0.008062721,
   0.006102045,
   0.0075734};
   Double_t _fehx3067[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3067[25] = {
   6.387702,
   3.462807,
   2.116627,
   1.450847,
   0.8467133,
   0.5838102,
   0.2279795,
   0.3017656,
   0.1091093,
   0.08872934,
   0.1003156,
   0.03561583,
   0.09208558,
   0.03651776,
   0.06512754,
   0.02147759,
   0.0395848,
   0.01550121,
   0.02769348,
   0,
   0.006291074,
   0.005472263,
   0.008062721,
   0.006102045,
   0.0075734};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3067,_fy3067,_felx3067,_fehx3067,_fely3067,_fehy3067);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3067 = new TH1F("Graph_Graph3067","",100,0,219);
   Graph_Graph3067->SetMinimum(-4.764173);
   Graph_Graph3067->SetMaximum(51.95643);
   Graph_Graph3067->SetDirectory(0);
   Graph_Graph3067->SetStats(0);
   Graph_Graph3067->SetLineStyle(0);
   Graph_Graph3067->SetMarkerStyle(20);
   Graph_Graph3067->GetXaxis()->SetLabelFont(42);
   Graph_Graph3067->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3067->GetXaxis()->SetTitleFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3067->GetYaxis()->SetTitleFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3067);
   
   grae->Draw("2");
   
   Double_t _fx3068[25] = {
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
   Double_t _fy3068[25] = {
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
   Double_t _felx3068[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3068[25] = {
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
   Double_t _fehx3068[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3068[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3068,_fy3068,_felx3068,_fehx3068,_fely3068,_fehy3068);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3068 = new TH1F("Graph_Graph3068","",100,0,219);
   Graph_Graph3068->SetMinimum(0);
   Graph_Graph3068->SetMaximum(1.262698);
   Graph_Graph3068->SetDirectory(0);
   Graph_Graph3068->SetStats(0);
   Graph_Graph3068->SetLineStyle(0);
   Graph_Graph3068->SetMarkerStyle(20);
   Graph_Graph3068->GetXaxis()->SetLabelFont(42);
   Graph_Graph3068->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3068->GetXaxis()->SetTitleFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3068->GetYaxis()->SetTitleFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3068);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt3","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy340 = new TH1F("hframe_copy340","",1000,10,200);
   hframe_copy340->SetMinimum(0);
   hframe_copy340->SetMaximum(105.9119);
   hframe_copy340->SetDirectory(0);
   hframe_copy340->SetStats(0);
   hframe_copy340->SetLineStyle(0);
   hframe_copy340->SetMarkerStyle(20);
   hframe_copy340->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy340->GetXaxis()->SetNdivisions(506);
   hframe_copy340->GetXaxis()->SetLabelFont(42);
   hframe_copy340->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetXaxis()->SetLabelSize(0.05);
   hframe_copy340->GetXaxis()->SetTitleSize(0.06);
   hframe_copy340->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy340->GetXaxis()->SetTitleFont(42);
   hframe_copy340->GetYaxis()->SetTitle("Events");
   hframe_copy340->GetYaxis()->SetLabelFont(42);
   hframe_copy340->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetYaxis()->SetLabelSize(0.05);
   hframe_copy340->GetYaxis()->SetTitleSize(0.06);
   hframe_copy340->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy340->GetYaxis()->SetTitleFont(42);
   hframe_copy340->GetZaxis()->SetLabelFont(42);
   hframe_copy340->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetZaxis()->SetLabelSize(0.05);
   hframe_copy340->GetZaxis()->SetTitleSize(0.06);
   hframe_copy340->GetZaxis()->SetTitleFont(42);
   hframe_copy340->Draw("sameaxis");
   ccwh3l_plot_13TeV_pt3->Modified();
   ccwh3l_plot_13TeV_pt3->cd();
   ccwh3l_plot_13TeV_pt3->SetSelected(ccwh3l_plot_13TeV_pt3);
}
