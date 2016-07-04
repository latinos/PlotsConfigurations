void c_wh3l_Pre_OSSF_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_OSSF_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 16:48:26 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_OSSF_13TeV_mllmin3l = new TCanvas("ccwh3l_Pre_OSSF_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->Range(-28,-91.61243,209.5,613.0986);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe51 = new TH1F("hframe51","",1000,10,200);
   hframe51->SetMinimum(0);
   hframe51->SetMaximum(577.863);
   hframe51->SetDirectory(0);
   hframe51->SetStats(0);
   hframe51->SetLineStyle(0);
   hframe51->SetMarkerStyle(20);
   hframe51->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe51->GetXaxis()->SetNdivisions(506);
   hframe51->GetXaxis()->SetLabelFont(42);
   hframe51->GetXaxis()->SetLabelOffset(0.007);
   hframe51->GetXaxis()->SetLabelSize(0.05);
   hframe51->GetXaxis()->SetTitleSize(0.06);
   hframe51->GetXaxis()->SetTitleOffset(0.9);
   hframe51->GetXaxis()->SetTitleFont(42);
   hframe51->GetYaxis()->SetTitle("Events");
   hframe51->GetYaxis()->SetLabelFont(42);
   hframe51->GetYaxis()->SetLabelOffset(0.007);
   hframe51->GetYaxis()->SetLabelSize(0.05);
   hframe51->GetYaxis()->SetTitleSize(0.06);
   hframe51->GetYaxis()->SetTitleOffset(1.25);
   hframe51->GetYaxis()->SetTitleFont(42);
   hframe51->GetZaxis()->SetLabelFont(42);
   hframe51->GetZaxis()->SetLabelOffset(0.007);
   hframe51->GetZaxis()->SetLabelSize(0.05);
   hframe51->GetZaxis()->SetTitleSize(0.06);
   hframe51->GetZaxis()->SetTitleFont(42);
   hframe51->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11 = new TH1F("thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11","thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->SetMinimum(-0.07989252);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->SetMaximum(242.7025);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52 = new TH1D("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(1,18.81047);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(2,29.74005);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(3,29.45521);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(4,40.91215);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(5,38.71769);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(6,32.26463);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(7,21.49161);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(8,22.1895);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(9,43.33964);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(10,6.234369);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(11,1.17366);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(12,1.489466);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(13,0.8112648);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(14,0.5714966);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(15,0.03921891);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(16,0.8379531);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(17,0.01606174);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(18,0.1609047);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(20,0.06974223);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinContent(21,0.4788985);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(1,3.624361);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(2,4.522195);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(3,4.649288);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(4,5.490109);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(5,4.669083);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(6,4.439645);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(7,3.625684);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(8,3.460851);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(9,4.841738);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(10,1.881678);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(11,0.9123405);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(12,0.6246685);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(13,0.4847768);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(14,0.3235759);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(15,0.08541559);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(16,0.6074177);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(17,0.07604646);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(18,0.1145975);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(20,0.07030265);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetBinError(21,0.3879628);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l52->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53 = new TH1D("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(1,0.05048886);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(2,0.05632944);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(3,0.02282063);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(4,0.09750091);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(5,0.02836005);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(6,0.06482966);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(9,0.02998172);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(13,0.03054333);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinContent(15,0.007199253);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(1,0.02700759);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(2,0.02928022);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(3,0.01626623);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(4,0.04039564);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(5,0.02077452);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(6,0.03339018);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(9,0.02122177);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(13,0.02182423);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetBinError(15,0.007199253);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54 = new TH1D("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(1,0.09961566);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(2,0.1850599);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(3,0.2614808);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(4,0.3341484);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(5,0.3547457);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(6,0.3271887);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(7,0.3957903);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(8,0.5214124);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(9,2.08744);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(10,0.2485372);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(11,0.08362614);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(12,0.06846886);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(13,0.03721621);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(14,0.03120678);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(15,0.02443436);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(16,0.01241279);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(17,0.0157201);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(18,0.01104275);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(19,0.0262459);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(20,0.00754161);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinContent(21,0.07653004);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(1,0.01374708);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(2,0.01978173);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(3,0.02273608);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(4,0.02605813);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(5,0.02674644);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(6,0.0244955);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(7,0.02737122);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(8,0.0305047);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(9,0.05953588);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(10,0.02252051);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(11,0.01556979);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(12,0.01293823);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(13,0.008519405);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(14,0.008332552);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(15,0.008638714);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(16,0.006214035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(17,0.006741165);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(18,0.004763197);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(19,0.008788561);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(20,0.004175717);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetBinError(21,0.01319253);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l54->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55 = new TH1D("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(1,29.1611);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(2,24.18013);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(3,28.35425);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(4,43.94384);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(5,38.4195);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(6,26.26269);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(7,7.203881);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(8,7.429784);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(9,17.04708);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(10,1.253364);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(11,0.9564938);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(12,0.6129605);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(13,0.4507259);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(14,0.1228777);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(15,0.1315364);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(16,0.1953081);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(17,0.1175713);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(18,0.2129172);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(19,0.1198037);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinContent(21,0.3621892);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(1,2.077291);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(2,1.964336);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(3,2.081404);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(4,2.638532);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(5,2.436972);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(6,1.917285);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(7,1.11827);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(8,1.160543);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(9,1.797232);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(10,0.5286398);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(11,0.31262);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(12,0.3778417);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(13,0.2738578);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(14,0.1776987);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(15,0.1315364);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(16,0.1195984);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(17,0.1974638);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(18,0.2168356);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(19,0.1198037);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetBinError(21,0.2724881);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l55->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56 = new TH1D("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(1,2.267017);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(2,2.514648);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(3,4.315312);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(4,5.431173);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(5,3.977512);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(6,4.319748);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(7,4.423534);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(8,5.244704);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(9,18.18582);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(10,1.953953);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(11,0.1966695);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(12,0.2568035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(13,0.1512323);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(14,0.03967978);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(15,0.02000878);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(19,0.05011636);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinContent(21,0.1697882);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(1,0.306764);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(2,0.317254);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(3,0.428359);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(4,0.4797826);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(5,0.4065787);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(6,0.4230284);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(7,0.4203273);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(8,0.4611182);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(9,0.8625402);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(10,0.2823259);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(11,0.09084764);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(12,0.100174);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(13,0.08079765);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(14,0.03967978);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(15,0.02000878);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(19,0.04303983);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetBinError(21,0.08568486);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l56->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57 = new TH1D("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(1,11.50101);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(2,17.57494);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(3,22.50579);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(4,25.14469);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(5,26.83604);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(6,26.90691);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(7,28.11792);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(8,37.50557);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(9,148.9929);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(10,14.21976);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(11,2.816621);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(12,1.56831);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(13,1.080665);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(14,0.7219614);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(15,0.5423027);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(16,0.4558828);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(17,0.3136663);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(18,0.2211427);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(19,0.1694785);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(20,0.2164764);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinContent(21,1.237331);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(1,0.2502113);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(2,0.3093344);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(3,0.3501382);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(4,0.3709999);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(5,0.3822838);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(6,0.382174);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(7,0.3911751);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(8,0.4521672);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(9,0.9016477);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(10,0.2777534);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(11,0.1230797);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(12,0.09260558);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(13,0.07711791);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(14,0.06294206);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(15,0.05464382);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(16,0.04951785);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(17,0.04098804);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(18,0.03452807);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(19,0.0297693);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(20,0.03372308);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetBinError(21,0.08095882);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(1,0.227964);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(2,0.4408487);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(3,0.5529474);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(4,0.5023379);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(5,0.5092713);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(6,0.3969099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(7,0.3626206);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(8,0.4004381);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(9,1.462305);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(10,0.1155305);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(11,0.01664852);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(12,0.01095377);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(13,0.001816203);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(14,0.002357608);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinContent(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(1,0.01712749);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(2,0.02357871);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(3,0.02597775);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(4,0.02368216);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(5,0.02378099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(6,0.02091602);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(7,0.01913152);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(8,0.01964644);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(9,0.03695727);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(10,0.009961522);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(11,0.003897776);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(12,0.003301763);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(13,0.0009095847);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(14,0.001440601);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetBinError(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l58->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12 = new TH1F("thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12","thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->SetMaximum(1.574226);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59 = new TH1D("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(1,0.227964);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(2,0.4408487);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(3,0.5529474);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(4,0.5023379);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(5,0.5092713);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(6,0.3969099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(7,0.3626206);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(8,0.4004381);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(9,1.462305);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(10,0.1155305);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(11,0.01664852);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(12,0.01095377);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(13,0.001816203);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(14,0.002357608);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinContent(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(1,0.01712749);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(2,0.02357871);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(3,0.02597775);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(4,0.02368216);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(5,0.02378099);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(6,0.02091602);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(7,0.01913152);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(8,0.01964644);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(9,0.03695727);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(10,0.009961522);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(11,0.003897776);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(12,0.003301763);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(13,0.0009095847);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(14,0.001440601);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetBinError(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l59->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_Pre_OSSF_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3011[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3011[20] = {
   61.88971,
   74.25115,
   84.91486,
   115.8635,
   108.3339,
   90.146,
   61.63273,
   72.89097,
   229.6829,
   23.92419,
   5.227071,
   3.996009,
   2.561648,
   1.519457,
   0.7647004,
   1.501557,
   0.4630195,
   0.6060073,
   0.4188847,
   0.2937602};
   Double_t _felx3011[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3011[20] = {
   9.31476,
   12.7668,
   12.97288,
   17.19963,
   15.8777,
   13.51234,
   9.410752,
   9.616716,
   17.85649,
   3.739524,
   1.515306,
   1.318416,
   0.9901404,
   0.6148866,
   0.2632844,
   0.8361335,
   0.182868,
   0.3715905,
   0.2571959,
   0.1108155};
   Double_t _fehx3011[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3011[20] = {
   9.300066,
   12.75896,
   12.95877,
   17.19241,
   15.87291,
   13.50956,
   9.408095,
   9.611899,
   17.81776,
   3.736694,
   1.515058,
   1.318593,
   0.9901403,
   0.6668026,
   0.3090469,
   0.8361495,
   0.3218557,
   0.3754494,
   0.2749712,
   0.1113445};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,219);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(272.2346);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2");
   
   Double_t _fx3012[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3012[20] = {
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
   Double_t _felx3012[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3012[20] = {
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
   Double_t _fehx3012[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3012[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,219);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(1.262698);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_OSSF_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_OSSF_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_OSSF_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_OSSF_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_OSSF_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_OSSF_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_OSSF_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_OSSF_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy60 = new TH1F("hframe_copy60","",1000,10,200);
   hframe_copy60->SetMinimum(0);
   hframe_copy60->SetMaximum(577.863);
   hframe_copy60->SetDirectory(0);
   hframe_copy60->SetStats(0);
   hframe_copy60->SetLineStyle(0);
   hframe_copy60->SetMarkerStyle(20);
   hframe_copy60->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy60->GetXaxis()->SetNdivisions(506);
   hframe_copy60->GetXaxis()->SetLabelFont(42);
   hframe_copy60->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetXaxis()->SetLabelSize(0.05);
   hframe_copy60->GetXaxis()->SetTitleSize(0.06);
   hframe_copy60->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy60->GetXaxis()->SetTitleFont(42);
   hframe_copy60->GetYaxis()->SetTitle("Events");
   hframe_copy60->GetYaxis()->SetLabelFont(42);
   hframe_copy60->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetYaxis()->SetLabelSize(0.05);
   hframe_copy60->GetYaxis()->SetTitleSize(0.06);
   hframe_copy60->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy60->GetYaxis()->SetTitleFont(42);
   hframe_copy60->GetZaxis()->SetLabelFont(42);
   hframe_copy60->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetZaxis()->SetLabelSize(0.05);
   hframe_copy60->GetZaxis()->SetTitleSize(0.06);
   hframe_copy60->GetZaxis()->SetTitleFont(42);
   hframe_copy60->Draw("sameaxis");
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->Modified();
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->cd();
   ccwh3l_Pre_OSSF_13TeV_mllmin3l->SetSelected(ccwh3l_Pre_OSSF_13TeV_mllmin3l);
}
