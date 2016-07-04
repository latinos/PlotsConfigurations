void c_wh3l_MET_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_pt1/cc
//=========  (Sun Jul  3 01:22:00 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_pt1 = new TCanvas("ccwh3l_MET_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_13TeV_pt1->Range(-28,-1.875508,209.5,12.55148);
   ccwh3l_MET_13TeV_pt1->SetFillColor(0);
   ccwh3l_MET_13TeV_pt1->SetBorderMode(0);
   ccwh3l_MET_13TeV_pt1->SetBorderSize(2);
   ccwh3l_MET_13TeV_pt1->SetTickx(1);
   ccwh3l_MET_13TeV_pt1->SetTicky(1);
   ccwh3l_MET_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe251 = new TH1F("hframe251","",1000,10,200);
   hframe251->SetMinimum(0);
   hframe251->SetMaximum(11.83013);
   hframe251->SetDirectory(0);
   hframe251->SetStats(0);
   hframe251->SetLineStyle(0);
   hframe251->SetMarkerStyle(20);
   hframe251->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe251->GetXaxis()->SetNdivisions(506);
   hframe251->GetXaxis()->SetLabelFont(42);
   hframe251->GetXaxis()->SetLabelOffset(0.007);
   hframe251->GetXaxis()->SetLabelSize(0.05);
   hframe251->GetXaxis()->SetTitleSize(0.06);
   hframe251->GetXaxis()->SetTitleOffset(0.9);
   hframe251->GetXaxis()->SetTitleFont(42);
   hframe251->GetYaxis()->SetTitle("Events");
   hframe251->GetYaxis()->SetLabelFont(42);
   hframe251->GetYaxis()->SetLabelOffset(0.007);
   hframe251->GetYaxis()->SetLabelSize(0.05);
   hframe251->GetYaxis()->SetTitleSize(0.06);
   hframe251->GetYaxis()->SetTitleOffset(1.25);
   hframe251->GetYaxis()->SetTitleFont(42);
   hframe251->GetZaxis()->SetLabelFont(42);
   hframe251->GetZaxis()->SetLabelOffset(0.007);
   hframe251->GetZaxis()->SetLabelSize(0.05);
   hframe251->GetZaxis()->SetTitleSize(0.06);
   hframe251->GetZaxis()->SetTitleFont(42);
   hframe251->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51","thsBackground_grouped_wh3l_MET_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->SetMinimum(-0.4268118);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->SetMaximum(5.574765);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_pt1_stack_51);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_pt1252 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_pt1252","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(2,0.3958846);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(3,1.372563);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(4,0.6217153);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(5,2.228193);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(6,1.683414);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(7,1.218339);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(8,3.870079);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(9,2.573331);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(10,0.9935435);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(11,0.1752942);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(12,0.4904303);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(13,0.7212424);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(14,1.255718);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(15,0.4582633);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(16,-0.2275675);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(17,0.4079589);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(18,-0.006113645);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(20,0.03422724);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(22,6.571058e-05);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(23,-0.005115197);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(24,0.2256032);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinContent(26,0.5510045);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(2,0.4357681);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(3,0.9002974);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(4,0.8470457);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(5,1.029401);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(6,0.8341322);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(7,0.6771123);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(8,1.439221);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(9,1.073907);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(10,0.5793123);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(11,0.1475092);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(12,0.3476264);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(13,0.5053064);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(14,0.7135046);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(15,0.372637);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(16,0.1992443);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(17,0.2448076);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(18,0.005580805);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(20,0.03799332);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(22,6.571058e-05);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(23,0.005115197);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(24,0.184343);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetBinError(26,0.4498633);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_pt1252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_pt1253 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_pt1253","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinContent(4,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinContent(5,0.01708511);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinContent(6,0.004448378);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinContent(7,0.02634241);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinContent(26,0.03179296);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinError(4,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinError(5,0.01708511);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinError(6,0.004448378);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinError(7,0.01903723);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetBinError(26,0.02248916);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_pt1253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_pt1254 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_pt1254","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(3,0.009684875);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(4,0.01108324);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(5,0.02405622);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(6,0.01761092);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(7,0.009102657);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(8,0.02427186);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(9,0.02893419);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(10,0.01600005);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(11,0.008508453);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(12,0.01751373);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(13,0.01791791);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(14,0.007473344);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(15,0.00932541);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(16,0.009431558);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(17,0.01778976);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(18,0.004932611);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(19,0.01160141);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(20,0.005047778);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(22,0.006988708);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(23,0.002177031);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(24,0.004641064);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(25,0.008998674);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinContent(26,0.04047156);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(3,0.004884113);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(4,0.004952331);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(5,0.00764533);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(6,0.007422984);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(7,0.007817089);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(8,0.006788503);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(9,0.008153226);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(10,0.007614993);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(11,0.005762597);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(12,0.006292562);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(13,0.007871437);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(14,0.004324218);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(15,0.004295352);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(16,0.004408792);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(17,0.007141106);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(18,0.006532132);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(19,0.005248276);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(20,0.004991515);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(22,0.004066517);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(23,0.001744138);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(24,0.002611001);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(25,0.004534308);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetBinError(26,0.009316798);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetEntries(198);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_pt1254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_pt1255 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_pt1255","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetBinContent(3,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetBinContent(5,-0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetBinContent(6,0.0522728);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetBinContent(7,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetBinError(3,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetBinError(5,0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetBinError(6,0.0522728);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetBinError(7,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetEntries(4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_pt1255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_pt1256 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_pt1256","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->SetBinContent(26,0.08282476);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->SetBinError(26,0.05923458);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->SetEntries(3);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_pt1256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_pt1257 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_pt1257","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(2,0.02361507);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(3,0.1010576);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(4,0.1331841);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(5,0.1445751);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(6,0.1288592);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(7,0.09338179);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(8,0.06139618);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(9,0.07621753);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(10,0.0630907);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(11,0.03140093);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(12,0.04829195);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(13,0.0510618);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(14,0.01270656);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(15,0.01774462);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(16,0.02206421);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(17,0.01447767);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(18,0.02595753);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(19,0.01305976);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(20,0.008860037);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(21,0.01791503);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(22,0.01215005);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(23,0.01618615);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(25,0.001250725);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinContent(26,0.0683682);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(2,0.01172821);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(3,0.02286956);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(4,0.02661128);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(5,0.02724036);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(6,0.02617929);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(7,0.02303882);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(8,0.01866461);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(9,0.02039524);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(10,0.0179633);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(11,0.0125334);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(12,0.01687489);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(13,0.01722366);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(14,0.008985674);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(15,0.008980777);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(16,0.01111446);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(17,0.008881111);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(18,0.01193239);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(19,0.009236587);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(20,0.006354433);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(21,0.01035438);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(22,0.008631317);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(23,0.009398223);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(25,0.001250725);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetBinError(26,0.02009697);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetEntries(244);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_pt1257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt1258 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt1258","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(2,0.002639986);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(3,0.0214034);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(4,0.04343188);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(5,0.03053151);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(6,0.04900217);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(7,0.05174878);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(8,0.03252475);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(9,0.02853358);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(10,0.02287444);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(11,0.02468815);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(12,0.01033073);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(13,0.01367743);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(14,0.01866841);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(15,0.006758257);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(16,0.007317722);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(17,0.01531093);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(18,0.007613463);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(19,0.003778784);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(20,0.00470347);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(21,0.002357847);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(22,0.0009038033);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(23,0.0008078342);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(24,0.0003098498);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinContent(26,0.008438562);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(2,0.0008850436);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(3,0.004470605);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(4,0.007118225);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(5,0.005195105);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(6,0.007178725);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(7,0.007325627);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(8,0.006122172);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(9,0.006145218);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(10,0.006069095);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(11,0.005104445);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(12,0.002775207);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(13,0.003644572);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(14,0.00434367);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(15,0.002182549);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(16,0.002819753);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(17,0.004291487);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(18,0.003326725);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(19,0.001995701);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(20,0.001667423);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(21,0.001211938);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(22,0.0004633622);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(23,0.0005731224);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(24,0.0003098498);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetBinError(26,0.002088449);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52","thsSignal_grouped_wh3l_MET_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->SetMaximum(0.06202813);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_pt1_stack_52);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_pt1259 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_pt1259","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(2,0.002639986);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(3,0.0214034);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(4,0.04343188);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(5,0.03053151);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(6,0.04900217);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(7,0.05174878);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(8,0.03252475);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(9,0.02853358);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(10,0.02287444);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(11,0.02468815);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(12,0.01033073);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(13,0.01367743);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(14,0.01866841);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(15,0.006758257);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(16,0.007317722);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(17,0.01531093);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(18,0.007613463);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(19,0.003778784);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(20,0.00470347);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(21,0.002357847);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(22,0.0009038033);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(23,0.0008078342);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(24,0.0003098498);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinContent(26,0.008438562);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(2,0.0008850436);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(3,0.004470605);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(4,0.007118225);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(5,0.005195105);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(6,0.007178725);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(7,0.007325627);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(8,0.006122172);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(9,0.006145218);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(10,0.006069095);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(11,0.005104445);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(12,0.002775207);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(13,0.003644572);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(14,0.00434367);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(15,0.002182549);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(16,0.002819753);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(17,0.004291487);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(18,0.003326725);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(19,0.001995701);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(20,0.001667423);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(21,0.001211938);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(22,0.0004633622);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(23,0.0005731224);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(24,0.0003098498);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetBinError(26,0.002088449);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_pt1259->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3051[25] = {
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
   Double_t _fy3051[25] = {
   0,
   0.4194997,
   1.610638,
   0.7812691,
   2.30779,
   1.886605,
   1.512619,
   3.955747,
   2.678483,
   1.072634,
   0.2152036,
   0.556236,
   0.790222,
   1.275898,
   0.4853333,
   -0.1960717,
   0.4402264,
   0.0247765,
   0.02466117,
   0.04813505,
   0.01791503,
   0.01920447,
   0.01324799,
   0.2302443,
   0.1447633};
   Double_t _felx3051[25] = {
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
   Double_t _fely3051[25] = {
   0,
   0.4305234,
   1.159726,
   0.7032,
   1.420888,
   1.096419,
   0.9891659,
   1.995131,
   1.423871,
   0.6979099,
   0.1769995,
   0.4089281,
   0.5876873,
   0.8493981,
   0.4179933,
   0.2292603,
   0.2978458,
   0.02309356,
   0.01858263,
   0.04739526,
   0.01036542,
   0.01457439,
   0.01650625,
   0.2029832,
   0.1482587};
   Double_t _fehx3051[25] = {
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
   Double_t _fehy3051[25] = {
   0,
   0.4684599,
   1.159727,
   0.9200857,
   1.420886,
   1.096408,
   0.9891647,
   1.995131,
   1.42387,
   0.6979071,
   0.1769976,
   0.4089253,
   0.5876848,
   0.8493979,
   0.4179932,
   0.2292571,
   0.2978453,
   0.02464533,
   0.01857699,
   0.0510256,
   0.01036211,
   0.01455813,
   0.016503,
   0.2029832,
   0.1482639};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,219);
   Graph_Graph3051->SetMinimum(-1.062953);
   Graph_Graph3051->SetMaximum(6.588499);
   Graph_Graph3051->SetDirectory(0);
   Graph_Graph3051->SetStats(0);
   Graph_Graph3051->SetLineStyle(0);
   Graph_Graph3051->SetMarkerStyle(20);
   Graph_Graph3051->GetXaxis()->SetLabelFont(42);
   Graph_Graph3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3051->GetXaxis()->SetTitleFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3051->GetYaxis()->SetTitleFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3051);
   
   grae->Draw("2");
   
   Double_t _fx3052[25] = {
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
   Double_t _fy3052[25] = {
   0,
   0,
   1,
   3,
   1,
   0,
   0,
   0,
   0,
   0,
   1,
   2,
   1,
   1,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   0};
   Double_t _felx3052[25] = {
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
   Double_t _fely3052[25] = {
   0,
   0,
   0.8272524,
   1.632727,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   0};
   Double_t _fehx3052[25] = {
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
   Double_t _fehy3052[25] = {
   1.147908,
   1.147908,
   2.29957,
   2.918242,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,219);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(6.510067);
   Graph_Graph3052->SetDirectory(0);
   Graph_Graph3052->SetStats(0);
   Graph_Graph3052->SetLineStyle(0);
   Graph_Graph3052->SetMarkerStyle(20);
   Graph_Graph3052->GetXaxis()->SetLabelFont(42);
   Graph_Graph3052->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3052->GetXaxis()->SetTitleFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3052->GetYaxis()->SetTitleFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3052);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy260 = new TH1F("hframe_copy260","",1000,10,200);
   hframe_copy260->SetMinimum(0);
   hframe_copy260->SetMaximum(11.83013);
   hframe_copy260->SetDirectory(0);
   hframe_copy260->SetStats(0);
   hframe_copy260->SetLineStyle(0);
   hframe_copy260->SetMarkerStyle(20);
   hframe_copy260->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy260->GetXaxis()->SetNdivisions(506);
   hframe_copy260->GetXaxis()->SetLabelFont(42);
   hframe_copy260->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetXaxis()->SetLabelSize(0.05);
   hframe_copy260->GetXaxis()->SetTitleSize(0.06);
   hframe_copy260->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy260->GetXaxis()->SetTitleFont(42);
   hframe_copy260->GetYaxis()->SetTitle("Events");
   hframe_copy260->GetYaxis()->SetLabelFont(42);
   hframe_copy260->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetYaxis()->SetLabelSize(0.05);
   hframe_copy260->GetYaxis()->SetTitleSize(0.06);
   hframe_copy260->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy260->GetYaxis()->SetTitleFont(42);
   hframe_copy260->GetZaxis()->SetLabelFont(42);
   hframe_copy260->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetZaxis()->SetLabelSize(0.05);
   hframe_copy260->GetZaxis()->SetTitleSize(0.06);
   hframe_copy260->GetZaxis()->SetTitleFont(42);
   hframe_copy260->Draw("sameaxis");
   ccwh3l_MET_13TeV_pt1->Modified();
   ccwh3l_MET_13TeV_pt1->cd();
   ccwh3l_MET_13TeV_pt1->SetSelected(ccwh3l_MET_13TeV_pt1);
}
