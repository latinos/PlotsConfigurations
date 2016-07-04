void c_wh3l_Pre_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 21:43:43 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_mllmin3l = new TCanvas("ccwh3l_Pre_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_mllmin3l->Range(-28,-111.0739,209.5,743.3409);
   ccwh3l_Pre_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_Pre_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_Pre_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe301 = new TH1F("hframe301","",1000,10,200);
   hframe301->SetMinimum(0);
   hframe301->SetMaximum(700.6202);
   hframe301->SetDirectory(0);
   hframe301->SetStats(0);
   hframe301->SetLineStyle(0);
   hframe301->SetMarkerStyle(20);
   hframe301->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe301->GetXaxis()->SetNdivisions(506);
   hframe301->GetXaxis()->SetLabelFont(42);
   hframe301->GetXaxis()->SetLabelOffset(0.007);
   hframe301->GetXaxis()->SetLabelSize(0.05);
   hframe301->GetXaxis()->SetTitleSize(0.06);
   hframe301->GetXaxis()->SetTitleOffset(0.9);
   hframe301->GetXaxis()->SetTitleFont(42);
   hframe301->GetYaxis()->SetTitle("Events");
   hframe301->GetYaxis()->SetLabelFont(42);
   hframe301->GetYaxis()->SetLabelOffset(0.007);
   hframe301->GetYaxis()->SetLabelSize(0.05);
   hframe301->GetYaxis()->SetTitleSize(0.06);
   hframe301->GetYaxis()->SetTitleOffset(1.25);
   hframe301->GetYaxis()->SetTitleFont(42);
   hframe301->GetZaxis()->SetLabelFont(42);
   hframe301->GetZaxis()->SetLabelOffset(0.007);
   hframe301->GetZaxis()->SetLabelSize(0.05);
   hframe301->GetZaxis()->SetTitleSize(0.06);
   hframe301->GetZaxis()->SetTitleFont(42);
   hframe301->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61","thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetMinimum(-0.07989252);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetMaximum(242.7025);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l_stack_61);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(1,18.81047);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(2,29.74005);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(3,29.45521);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(4,40.91215);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(5,38.71769);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(6,32.26463);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(7,21.49161);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(8,22.1895);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(9,43.33964);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(10,6.234369);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(11,1.17366);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(12,1.489466);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(13,0.8112648);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(14,0.5714966);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(15,0.03921891);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(16,0.8379531);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(17,0.01606174);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(18,0.1609047);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(20,0.06974223);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinContent(21,0.4788985);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(1,3.624361);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(2,4.522195);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(3,4.649288);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(4,5.490109);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(5,4.669083);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(6,4.439645);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(7,3.625684);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(8,3.460851);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(9,4.841738);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(10,1.881678);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(11,0.9123405);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(12,0.6246685);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(13,0.4847768);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(14,0.3235759);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(15,0.08541559);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(16,0.6074177);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(17,0.07604646);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(18,0.1145975);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(20,0.07030265);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetBinError(21,0.3879628);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l302->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(1,0.05048886);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(2,0.05632944);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(3,0.02282063);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(4,0.09750091);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(5,0.02836005);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(6,0.06482966);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(9,0.02998172);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(13,0.03054333);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinContent(15,0.007199253);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(1,0.02700759);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(2,0.02928022);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(3,0.01626623);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(4,0.04039564);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(5,0.02077452);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(6,0.03339018);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(9,0.02122177);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(13,0.02182423);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetBinError(15,0.007199253);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l303->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(1,0.09961566);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(2,0.1850599);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(3,0.2614808);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(4,0.3341484);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(5,0.3547457);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(6,0.3271887);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(7,0.3957903);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(8,0.5214124);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(9,2.08744);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(10,0.2485372);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(11,0.08362614);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(12,0.06846886);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(13,0.03721621);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(14,0.03120678);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(15,0.02443436);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(16,0.01241279);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(17,0.0157201);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(18,0.01104275);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(19,0.0262459);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(20,0.00754161);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinContent(21,0.07653004);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(1,0.01374708);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(2,0.01978173);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(3,0.02273608);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(4,0.02605813);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(5,0.02674644);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(6,0.0244955);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(7,0.02737122);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(8,0.0305047);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(9,0.05953588);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(10,0.02252051);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(11,0.01556979);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(12,0.01293823);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(13,0.008519405);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(14,0.008332552);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(15,0.008638714);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(16,0.006214035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(17,0.006741165);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(18,0.004763197);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(19,0.008788561);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(20,0.004175717);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetBinError(21,0.01319253);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l304->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(1,29.1611);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(2,24.18013);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(3,28.35425);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(4,43.94384);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(5,38.4195);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(6,26.26269);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(7,7.203881);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(8,7.429784);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(9,17.04708);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(10,1.253364);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(11,0.9564938);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(12,0.6129605);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(13,0.4507259);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(14,0.1228777);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(15,0.1315364);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(16,0.1953081);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(17,0.1175713);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(18,0.2129172);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(19,0.1198037);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinContent(21,0.3621892);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(1,2.077291);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(2,1.964336);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(3,2.081404);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(4,2.638532);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(5,2.436972);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(6,1.917285);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(7,1.11827);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(8,1.160543);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(9,1.797232);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(10,0.5286398);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(11,0.31262);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(12,0.3778417);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(13,0.2738578);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(14,0.1776987);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(15,0.1315364);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(16,0.1195984);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(17,0.1974638);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(18,0.2168356);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(19,0.1198037);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetBinError(21,0.2724881);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l305->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(1,2.267017);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(2,2.514648);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(3,4.315312);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(4,5.431173);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(5,3.977512);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(6,4.319748);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(7,4.423534);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(8,5.244704);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(9,18.18582);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(10,1.953953);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(11,0.1966695);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(12,0.2568035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(13,0.1512323);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(14,0.03967978);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(15,0.02000878);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(19,0.05011636);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinContent(21,0.1697882);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(1,0.306764);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(2,0.317254);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(3,0.428359);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(4,0.4797826);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(5,0.4065787);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(6,0.4230284);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(7,0.4203273);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(8,0.4611182);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(9,0.8625402);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(10,0.2823259);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(11,0.09084764);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(12,0.100174);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(13,0.08079765);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(14,0.03967978);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(15,0.02000878);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(19,0.04303983);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetBinError(21,0.08568486);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l306->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(1,11.50101);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(2,17.57494);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(3,22.50579);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(4,25.14469);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(5,26.83604);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(6,26.90691);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(7,28.11792);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(8,37.50557);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(9,148.9929);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(10,14.21976);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(11,2.816621);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(12,1.56831);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(13,1.080665);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(14,0.7219614);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(15,0.5423027);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(16,0.4558828);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(17,0.3136663);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(18,0.2211427);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(19,0.1694785);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(20,0.2164764);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinContent(21,1.237331);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(1,0.2502113);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(2,0.3093344);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(3,0.3501382);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(4,0.3709999);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(5,0.3822838);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(6,0.382174);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(7,0.3911751);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(8,0.4521672);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(9,0.9016477);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(10,0.2777534);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(11,0.1230797);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(12,0.09260558);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(13,0.07711791);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(14,0.06294206);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(15,0.05464382);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(16,0.04951785);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(17,0.04098804);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(18,0.03452807);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(19,0.0297693);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(20,0.03372308);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetBinError(21,0.08095882);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l307->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(1,0.227964);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(2,0.4408487);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(3,0.5529474);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(4,0.5023379);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(5,0.5092713);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(6,0.3969099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(7,0.3626206);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(8,0.4004381);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(9,1.462305);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(10,0.1155305);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(11,0.01664852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(12,0.01095377);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(13,0.001816203);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(14,0.002357608);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinContent(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(1,0.01712749);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(2,0.02357871);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(3,0.02597775);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(4,0.02368216);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(5,0.02378099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(6,0.02091602);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(7,0.01913152);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(8,0.01964644);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(9,0.03695727);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(10,0.009961522);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(11,0.003897776);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(12,0.003301763);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(13,0.0009095847);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(14,0.001440601);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetBinError(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l308->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62","thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetMaximum(1.574226);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l_stack_62);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(1,0.227964);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(2,0.4408487);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(3,0.5529474);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(4,0.5023379);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(5,0.5092713);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(6,0.3969099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(7,0.3626206);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(8,0.4004381);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(9,1.462305);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(10,0.1155305);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(11,0.01664852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(12,0.01095377);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(13,0.001816203);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(14,0.002357608);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinContent(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(1,0.01712749);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(2,0.02357871);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(3,0.02597775);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(4,0.02368216);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(5,0.02378099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(6,0.02091602);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(7,0.01913152);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(8,0.01964644);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(9,0.03695727);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(10,0.009961522);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(11,0.003897776);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(12,0.003301763);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(13,0.0009095847);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(14,0.001440601);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetBinError(18,0.0002894645);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l309->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3061[20] = {
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
   Double_t _fy3061[20] = {
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
   Double_t _felx3061[20] = {
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
   Double_t _fely3061[20] = {
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
   Double_t _fehx3061[20] = {
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
   Double_t _fehy3061[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3061,_fy3061,_felx3061,_fehx3061,_fely3061,_fehy3061);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3061 = new TH1F("Graph_Graph3061","",100,0,219);
   Graph_Graph3061->SetMinimum(0);
   Graph_Graph3061->SetMaximum(272.2346);
   Graph_Graph3061->SetDirectory(0);
   Graph_Graph3061->SetStats(0);
   Graph_Graph3061->SetLineStyle(0);
   Graph_Graph3061->SetMarkerStyle(20);
   Graph_Graph3061->GetXaxis()->SetLabelFont(42);
   Graph_Graph3061->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3061->GetXaxis()->SetTitleFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3061->GetYaxis()->SetTitleFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3061);
   
   grae->Draw("2");
   
   Double_t _fx3062[20] = {
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
   Double_t _fy3062[20] = {
   59,
   66,
   94,
   123,
   116,
   109,
   79,
   86,
   264,
   34,
   8,
   3,
   3,
   2,
   2,
   0,
   1,
   0,
   1,
   0};
   Double_t _felx3062[20] = {
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
   Double_t _fely3062[20] = {
   7.659464,
   8.103564,
   9.678282,
   11.07567,
   10.75501,
   10.42448,
   8.869521,
   9.255741,
   16.23813,
   5.80224,
   2.768432,
   1.632727,
   1.632727,
   1.29183,
   1.29183,
   0,
   0.8272524,
   0,
   0.8272524,
   0};
   Double_t _fehx3062[20] = {
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
   Double_t _fehy3062[20] = {
   8.724748,
   9.165286,
   10.72999,
   12.12087,
   11.80155,
   11.4725,
   9.925933,
   10.30981,
   17.26898,
   6.888243,
   3.94522,
   2.918242,
   2.918242,
   2.63791,
   2.63791,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3062,_fy3062,_felx3062,_fehx3062,_fely3062,_fehy3062);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3062 = new TH1F("Graph_Graph3062","",100,0,219);
   Graph_Graph3062->SetMinimum(0);
   Graph_Graph3062->SetMaximum(309.3959);
   Graph_Graph3062->SetDirectory(0);
   Graph_Graph3062->SetStats(0);
   Graph_Graph3062->SetLineStyle(0);
   Graph_Graph3062->SetMarkerStyle(20);
   Graph_Graph3062->GetXaxis()->SetLabelFont(42);
   Graph_Graph3062->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3062->GetXaxis()->SetTitleFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3062->GetYaxis()->SetTitleFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3062);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy310 = new TH1F("hframe_copy310","",1000,10,200);
   hframe_copy310->SetMinimum(0);
   hframe_copy310->SetMaximum(700.6202);
   hframe_copy310->SetDirectory(0);
   hframe_copy310->SetStats(0);
   hframe_copy310->SetLineStyle(0);
   hframe_copy310->SetMarkerStyle(20);
   hframe_copy310->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy310->GetXaxis()->SetNdivisions(506);
   hframe_copy310->GetXaxis()->SetLabelFont(42);
   hframe_copy310->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetXaxis()->SetLabelSize(0.05);
   hframe_copy310->GetXaxis()->SetTitleSize(0.06);
   hframe_copy310->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy310->GetXaxis()->SetTitleFont(42);
   hframe_copy310->GetYaxis()->SetTitle("Events");
   hframe_copy310->GetYaxis()->SetLabelFont(42);
   hframe_copy310->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetYaxis()->SetLabelSize(0.05);
   hframe_copy310->GetYaxis()->SetTitleSize(0.06);
   hframe_copy310->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy310->GetYaxis()->SetTitleFont(42);
   hframe_copy310->GetZaxis()->SetLabelFont(42);
   hframe_copy310->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetZaxis()->SetLabelSize(0.05);
   hframe_copy310->GetZaxis()->SetTitleSize(0.06);
   hframe_copy310->GetZaxis()->SetTitleFont(42);
   hframe_copy310->Draw("sameaxis");
   ccwh3l_Pre_13TeV_mllmin3l->Modified();
   ccwh3l_Pre_13TeV_mllmin3l->cd();
   ccwh3l_Pre_13TeV_mllmin3l->SetSelected(ccwh3l_Pre_13TeV_mllmin3l);
}
