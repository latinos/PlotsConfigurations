void c_wh3l_top_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_mllmin3l/cc
//=========  (Tue Jun 28 02:22:50 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_mllmin3l = new TCanvas("ccwh3l_top_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_top_13TeV_mllmin3l->Range(-28,-5.216756,209.5,34.91214);
   ccwh3l_top_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_top_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_top_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_top_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_top_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_top_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_top_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_top_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,10,200);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(32.90569);
   hframe121->SetDirectory(0);
   hframe121->SetStats(0);
   hframe121->SetLineStyle(0);
   hframe121->SetMarkerStyle(20);
   hframe121->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe121->GetXaxis()->SetNdivisions(506);
   hframe121->GetXaxis()->SetLabelFont(42);
   hframe121->GetXaxis()->SetLabelOffset(0.007);
   hframe121->GetXaxis()->SetLabelSize(0.05);
   hframe121->GetXaxis()->SetTitleSize(0.06);
   hframe121->GetXaxis()->SetTitleOffset(0.9);
   hframe121->GetXaxis()->SetTitleFont(42);
   hframe121->GetYaxis()->SetTitle("Events");
   hframe121->GetYaxis()->SetLabelFont(42);
   hframe121->GetYaxis()->SetLabelOffset(0.007);
   hframe121->GetYaxis()->SetLabelSize(0.05);
   hframe121->GetYaxis()->SetTitleSize(0.06);
   hframe121->GetYaxis()->SetTitleOffset(1.25);
   hframe121->GetYaxis()->SetTitleFont(42);
   hframe121->GetZaxis()->SetLabelFont(42);
   hframe121->GetZaxis()->SetLabelOffset(0.007);
   hframe121->GetZaxis()->SetLabelSize(0.05);
   hframe121->GetZaxis()->SetTitleSize(0.06);
   hframe121->GetZaxis()->SetTitleFont(42);
   hframe121->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_top_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25","thsBackground_grouped_wh3l_top_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetMinimum(-0.2342904);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetMaximum(11.96359);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(1,2.730544);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(2,4.241874);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(3,9.040012);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(4,6.997862);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(5,4.518931);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(6,6.369942);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(7,0.8142849);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(8,1.253309);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(9,1.78065);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(10,0.06221746);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(11,0.6729458);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(12,0.8881438);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(13,0.4430658);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(14,0.1271613);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(15,0.04210121);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(16,0.7568247);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(17,-0.01875976);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(18,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(20,0.07030044);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinContent(21,0.01904956);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(1,1.323934);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(2,1.731016);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(3,2.353881);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(4,1.864899);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(5,1.589491);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(6,1.732231);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(7,0.4879938);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(8,0.6830737);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(9,0.8856961);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(10,0.2665608);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(11,0.4768716);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(12,0.5161626);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(13,0.2221485);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(14,0.1066825);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(15,0.0746399);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(16,0.6019755);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(17,0.01875976);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(18,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(20,0.07030044);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetBinError(21,0.08512631);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetEntries(340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_mllmin3l123 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_mllmin3l123","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinContent(1,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinContent(2,0.03488018);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinContent(4,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinContent(6,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinContent(7,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinContent(13,0.03054333);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinContent(15,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinError(1,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinError(2,0.02485137);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinError(4,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinError(6,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinError(7,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinError(13,0.02182423);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetBinError(15,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(2,0.003810872);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(3,0.003936645);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(4,0.00230689);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(5,0.004680327);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(6,0.004104746);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(7,0.00173184);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(8,0.0008486904);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(11,0.0010457);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(12,0.0002314976);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(13,0.003479492);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(14,0.0009710224);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(17,0.0007818795);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(20,0.0005599114);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinContent(21,0.00268684);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(2,0.00158464);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(3,0.001553928);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(4,0.001521136);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(5,0.001690479);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(6,0.001525811);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(7,0.001017519);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(8,0.0006283636);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(11,0.0007400568);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(12,0.000170911);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(13,0.001450136);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(14,0.0006905336);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(17,0.0007818795);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(20,0.0005599114);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetBinError(21,0.001277545);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetEntries(61);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_mllmin3l124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinContent(1,0.5643359);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinContent(2,0.2261063);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinContent(3,0.5113211);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinContent(4,0.5556944);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinContent(5,0.2986532);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinContent(6,-0.05259903);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinContent(12,0.1819414);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinContent(13,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinError(1,0.2450094);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinError(2,0.2367269);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinError(3,0.2938992);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinError(4,0.2437444);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinError(5,0.2737448);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinError(6,0.1816914);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinError(12,0.1332888);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetBinError(13,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetEntries(44);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(1,0.09214541);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(2,0.105262);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(3,0.08998948);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(4,0.08679924);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(5,0.1050518);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(6,0.1912766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(8,0.01994686);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(9,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(12,0.1352783);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(13,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(18,0.045406);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinContent(21,0.114058);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(1,0.06548722);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(2,0.05784587);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(3,0.06434838);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(4,0.06138467);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(5,0.06639606);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(6,0.08825698);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(8,0.01994686);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(9,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(12,0.07828225);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(13,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(18,0.045406);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetBinError(21,0.06954501);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetEntries(28);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127","histo_ZZ",20,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(1,0.09214541);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(2,0.105262);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(3,0.08998948);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(4,0.08679924);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(5,0.1050518);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(6,0.1912766);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(8,0.01994686);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(9,0.04332647);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(12,0.1352783);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(13,0.04545766);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(18,0.045406);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinContent(21,0.114058);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(1,0.06548722);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(2,0.05784587);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(3,0.06434838);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(4,0.06138467);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(5,0.06639606);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(6,0.08825698);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(8,0.01994686);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(9,0.04332647);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(12,0.07828225);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(13,0.04545766);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(18,0.045406);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetBinError(21,0.06954501);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetEntries(28);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(1,0.05567027);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(2,0.08454611);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(3,0.1044457);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(4,0.08710469);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(5,0.06900282);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(6,0.04243623);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(7,0.003419085);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(8,0.003190399);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(9,0.001395556);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(10,0.002014942);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(12,0.001071362);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(1,0.008231323);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(2,0.00969358);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(3,0.01010461);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(4,0.00915207);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(5,0.008160222);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(6,0.006066487);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(7,0.001160371);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(8,0.001264865);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(9,0.0007324707);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(10,0.001341457);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(12,0.0006505119);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_top_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_top_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26","thsSignal_grouped_wh3l_top_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetMaximum(0.1202778);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(1,0.05567027);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(2,0.08454611);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(3,0.1044457);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(4,0.08710469);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(5,0.06900282);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(6,0.04243623);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(7,0.003419085);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(8,0.003190399);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(9,0.001395556);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(10,0.002014942);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(12,0.001071362);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(1,0.008231323);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(2,0.00969358);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(3,0.01010461);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(4,0.00915207);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(5,0.008160222);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(6,0.006066487);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(7,0.001160371);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(8,0.001264865);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(9,0.0007324707);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(10,0.001341457);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(12,0.0006505119);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l129->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3025[20] = {
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
   Double_t _fy3025[20] = {
   4.885012,
   6.172909,
   11.09506,
   8.967493,
   5.882633,
   7.172919,
   0.9315673,
   1.377606,
   1.893955,
   0.1309315,
   0.7741799,
   1.606812,
   0.9419367,
   0.3185174,
   0.2116398,
   0.878658,
   0.0913449,
   0.1742395,
   0.1134225,
   0.122017};
   Double_t _felx3025[20] = {
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
   Double_t _fely3025[20] = {
   1.912465,
   2.483709,
   3.900113,
   3.096187,
   2.419712,
   2.823659,
   0.5814896,
   0.8190712,
   1.088786,
   0.08431073,
   0.5397372,
   0.8194095,
   0.4500689,
   0.1638777,
   0.08859928,
   0.6668391,
   0.0436425,
   0.1364471,
   0.072446,
   0.08943161};
   Double_t _fehx3025[20] = {
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
   Double_t _fehy3025[20] = {
   1.912465,
   2.492837,
   3.900115,
   3.096186,
   2.419712,
   2.730021,
   0.5814896,
   0.8190711,
   1.088786,
   0.2871693,
   0.5397372,
   0.8194093,
   0.4500688,
   0.1638776,
   0.1208943,
   0.6668391,
   0.04364249,
   0.1364471,
   0.09060474,
   0.0894316};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,219);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(16.49143);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("2");
   
   Double_t _fx3026[20] = {
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
   Double_t _fy3026[20] = {
   2,
   6,
   10,
   4,
   8,
   5,
   0,
   2,
   1,
   1,
   0,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   1,
   0};
   Double_t _felx3026[20] = {
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
   Double_t _fely3026[20] = {
   1.29183,
   2.379969,
   3.108748,
   1.914367,
   2.768432,
   2.159724,
   0,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0.8272524,
   0.8272524,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   0};
   Double_t _fehx3026[20] = {
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
   Double_t _fehy3026[20] = {
   2.63791,
   3.583713,
   4.267035,
   3.162815,
   3.94522,
   3.382539,
   1.147908,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   2.29957,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,219);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(15.69374);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineStyle(0);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy130 = new TH1F("hframe_copy130","",1000,10,200);
   hframe_copy130->SetMinimum(0);
   hframe_copy130->SetMaximum(32.90569);
   hframe_copy130->SetDirectory(0);
   hframe_copy130->SetStats(0);
   hframe_copy130->SetLineStyle(0);
   hframe_copy130->SetMarkerStyle(20);
   hframe_copy130->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy130->GetXaxis()->SetNdivisions(506);
   hframe_copy130->GetXaxis()->SetLabelFont(42);
   hframe_copy130->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetXaxis()->SetLabelSize(0.05);
   hframe_copy130->GetXaxis()->SetTitleSize(0.06);
   hframe_copy130->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy130->GetXaxis()->SetTitleFont(42);
   hframe_copy130->GetYaxis()->SetTitle("Events");
   hframe_copy130->GetYaxis()->SetLabelFont(42);
   hframe_copy130->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetYaxis()->SetLabelSize(0.05);
   hframe_copy130->GetYaxis()->SetTitleSize(0.06);
   hframe_copy130->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy130->GetYaxis()->SetTitleFont(42);
   hframe_copy130->GetZaxis()->SetLabelFont(42);
   hframe_copy130->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetZaxis()->SetLabelSize(0.05);
   hframe_copy130->GetZaxis()->SetTitleSize(0.06);
   hframe_copy130->GetZaxis()->SetTitleFont(42);
   hframe_copy130->Draw("sameaxis");
   ccwh3l_top_13TeV_mllmin3l->Modified();
   ccwh3l_top_13TeV_mllmin3l->cd();
   ccwh3l_top_13TeV_mllmin3l->SetSelected(ccwh3l_top_13TeV_mllmin3l);
}
