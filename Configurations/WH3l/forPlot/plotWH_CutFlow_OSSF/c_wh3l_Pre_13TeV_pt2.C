void c_wh3l_Pre_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt2/cc
//=========  (Sat Jul  2 21:43:44 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt2 = new TCanvas("ccwh3l_Pre_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt2->Range(-28,-94.30278,209.5,631.1033);
   ccwh3l_Pre_13TeV_pt2->SetFillColor(0);
   ccwh3l_Pre_13TeV_pt2->SetBorderMode(0);
   ccwh3l_Pre_13TeV_pt2->SetBorderSize(2);
   ccwh3l_Pre_13TeV_pt2->SetTickx(1);
   ccwh3l_Pre_13TeV_pt2->SetTicky(1);
   ccwh3l_Pre_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe311 = new TH1F("hframe311","",1000,10,200);
   hframe311->SetMinimum(0);
   hframe311->SetMaximum(594.833);
   hframe311->SetDirectory(0);
   hframe311->SetStats(0);
   hframe311->SetLineStyle(0);
   hframe311->SetMarkerStyle(20);
   hframe311->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe311->GetXaxis()->SetNdivisions(506);
   hframe311->GetXaxis()->SetLabelFont(42);
   hframe311->GetXaxis()->SetLabelOffset(0.007);
   hframe311->GetXaxis()->SetLabelSize(0.05);
   hframe311->GetXaxis()->SetTitleSize(0.06);
   hframe311->GetXaxis()->SetTitleOffset(0.9);
   hframe311->GetXaxis()->SetTitleFont(42);
   hframe311->GetYaxis()->SetTitle("Events");
   hframe311->GetYaxis()->SetLabelFont(42);
   hframe311->GetYaxis()->SetLabelOffset(0.007);
   hframe311->GetYaxis()->SetLabelSize(0.05);
   hframe311->GetYaxis()->SetTitleSize(0.06);
   hframe311->GetYaxis()->SetTitleOffset(1.25);
   hframe311->GetYaxis()->SetTitleFont(42);
   hframe311->GetZaxis()->SetLabelFont(42);
   hframe311->GetZaxis()->SetLabelOffset(0.007);
   hframe311->GetZaxis()->SetLabelSize(0.05);
   hframe311->GetZaxis()->SetTitleSize(0.06);
   hframe311->GetZaxis()->SetTitleFont(42);
   hframe311->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt2");
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63","thsBackground_grouped_wh3l_Pre_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetMinimum(-0.3766245);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetMaximum(215.6041);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt2_stack_63);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt2312 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt2312","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(1,9.418441);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(2,60.53166);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(3,79.20531);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(4,69.57127);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(5,37.49621);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(6,11.88822);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(7,8.766141);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(8,4.328703);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(9,2.605896);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(10,0.8027872);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(11,1.894163);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(12,1.579361);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(13,0.2967792);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(14,-0.006982401);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(15,0.2376943);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(16,-0.09314075);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(17,-0.2278806);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(18,0.3508163);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(19,-0.03482996);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(20,-0.1305403);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(21,0.2207404);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(22,-0.03333039);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(23,-0.004633672);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(25,0.1576365);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinContent(26,0.03674042);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(1,2.818982);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(2,6.84755);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(3,7.010002);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(4,6.51901);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(5,4.428106);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(6,2.309468);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(7,2.035238);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(8,1.408527);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(9,1.177042);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(10,0.6563067);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(11,0.8311673);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(12,0.6943084);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(13,0.3384406);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(14,0.22261);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(15,0.1517572);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(16,0.2328472);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(17,0.1487438);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(18,0.4444757);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(19,0.02410324);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(20,0.1835641);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(21,0.1437068);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(22,0.1064941);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(23,0.004633672);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(25,0.1114504);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetBinError(26,0.09242887);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt2312->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt2313 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt2313","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(1,0.01285941);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(2,0.01761671);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(3,0.1153166);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(4,0.05276659);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(5,0.05031073);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(6,0.05596549);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(8,0.07138938);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(12,0.01461809);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(14,0.03060151);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinContent(16,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(1,0.01285941);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(2,0.01761671);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(3,0.04345961);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(4,0.02703695);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(5,0.02591213);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(6,0.03233216);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(8,0.0325561);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(12,0.01461809);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(14,0.02185907);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetBinError(16,0.01305253);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt2313->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt2314 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt2314","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(1,0.02186787);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(2,0.2142341);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(3,0.4373412);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(4,0.5893003);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(5,0.6639199);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(6,0.586286);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(7,0.521549);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(8,0.4088144);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(9,0.2711388);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(10,0.246414);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(11,0.216337);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(12,0.1569635);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(13,0.1406214);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(14,0.1278883);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(15,0.1033245);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(16,0.07038922);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(17,0.05899586);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(18,0.04450722);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(19,0.05930599);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(20,0.01979199);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(21,0.04064998);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(22,0.03020029);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(23,0.01940034);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(24,0.03010977);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(25,0.02066271);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinContent(26,0.1098509);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(1,0.006039968);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(2,0.02076271);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(3,0.02892022);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(4,0.03292223);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(5,0.03504943);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(6,0.03227819);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(7,0.03007083);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(8,0.02921308);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(9,0.02322311);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(10,0.02175168);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(11,0.01968612);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(12,0.01767238);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(13,0.01541671);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(14,0.01623544);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(15,0.01435575);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(16,0.01183267);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(17,0.01145379);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(18,0.01022244);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(19,0.01034145);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(20,0.006425979);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(21,0.009194797);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(22,0.007104401);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(23,0.005747808);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(24,0.007514977);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(25,0.006278214);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetBinError(26,0.01419938);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt2314->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt2315 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt2315","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(1,8.105859);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(2,65.58244);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(3,71.34887);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(4,40.8087);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(5,16.56629);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(6,8.424336);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(7,4.193675);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(8,3.80808);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(9,1.723428);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(10,0.6701894);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(11,1.393468);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(12,0.7443734);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(13,0.621743);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(14,0.7144867);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(15,0.2578515);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(16,0.1271749);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(17,0.4124673);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(18,0.1555295);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(19,0.1636627);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(20,0.1104052);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(21,0.165306);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(23,-0.02066477);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(24,0.001652723);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(25,0.1050401);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinContent(26,0.3536295);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(1,1.156355);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(2,3.06474);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(3,3.338366);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(4,2.556411);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(5,1.670893);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(6,1.164673);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(7,0.9047194);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(8,0.7496632);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(9,0.58942);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(10,0.6065356);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(11,0.5157143);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(12,0.3880513);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(13,0.3843283);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(14,0.322595);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(15,0.2619001);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(16,0.1981272);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(17,0.2515956);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(18,0.1956632);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(19,0.2938051);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(20,0.1104052);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(21,0.1353518);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(23,0.07376086);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(24,0.148451);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(25,0.1050401);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetBinError(26,0.236358);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt2315->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(1,0.6003252);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(2,4.766407);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(3,6.810448);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(4,11.13223);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(5,10.03222);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(6,5.463359);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(7,3.923604);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(8,3.157308);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(9,1.930153);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(10,1.174075);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(11,0.9196554);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(12,0.7223285);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(13,0.4573897);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(14,0.4332412);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(15,0.2680131);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(16,0.4707864);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(17,0.07142666);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(18,0.164149);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(19,0.2805965);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(20,0.1150318);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(21,0.1684517);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(22,0.05926786);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(23,0.0936451);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(24,0.04326087);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(25,0.08328334);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinContent(26,0.1770544);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(1,0.1555384);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(2,0.4445757);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(3,0.5308221);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(4,0.6765591);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(5,0.6445246);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(6,0.4708346);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(7,0.4013936);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(8,0.3647275);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(9,0.2832597);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(10,0.211016);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(11,0.1888676);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(12,0.1681476);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(13,0.1401076);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(14,0.1359677);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(15,0.1036093);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(16,0.1394737);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(17,0.05454528);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(18,0.08577241);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(19,0.1013623);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(20,0.07158419);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(21,0.08450964);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(22,0.04701417);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(23,0.06653702);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(24,0.04326087);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(25,0.05889982);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetBinError(26,0.08498129);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt2316->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt2317 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt2317","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(1,3.354524);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(2,22.23949);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(3,46.7282);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(4,68.68105);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(5,67.43583);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(6,45.21286);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(7,30.94484);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(8,21.99227);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(9,15.11987);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(10,10.82974);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(11,7.912645);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(12,5.864309);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(13,4.723373);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(14,3.542116);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(15,2.644129);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(16,2.114174);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(17,1.579981);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(18,1.43016);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(19,1.078747);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(20,0.9520614);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(21,0.6984238);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(22,0.5105976);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(23,0.4572366);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(24,0.3799796);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(25,0.3171217);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinContent(26,1.905664);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(1,0.1327801);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(2,0.3491528);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(3,0.5050328);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(4,0.6102015);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(5,0.606764);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(6,0.4976144);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(7,0.411295);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(8,0.3465624);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(9,0.2874949);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(10,0.2426829);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(11,0.2078185);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(12,0.1779433);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(13,0.1593921);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(14,0.1384311);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(15,0.1191763);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(16,0.1071864);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(17,0.09245571);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(18,0.08827715);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(19,0.07572011);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(20,0.07230467);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(21,0.06209943);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(22,0.05187919);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(23,0.0492229);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(24,0.04447233);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(25,0.04154592);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetBinError(26,0.1010278);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt2317->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(1,0.06692092);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(2,0.3966583);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(3,0.6917205);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(4,0.7842187);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(5,0.7178618);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(6,0.6426246);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(7,0.4288648);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(8,0.2780233);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(9,0.2643711);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(10,0.185418);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(11,0.148872);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(12,0.1064891);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(13,0.0794978);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(14,0.04926372);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(15,0.03657709);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(16,0.03094022);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(17,0.02359153);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(18,0.01560083);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(19,0.01364367);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(20,0.007342868);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(21,0.008440688);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(22,0.004305313);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(23,0.002729171);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(24,0.006410068);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(25,0.001684553);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinContent(26,0.01508377);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(1,0.009240318);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(2,0.02138475);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(3,0.02778309);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(4,0.03027206);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(5,0.02876642);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(6,0.02695428);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(7,0.02049517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(8,0.01585842);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(9,0.01580292);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(10,0.01265672);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(11,0.01152852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(12,0.009339736);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(13,0.008261512);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(14,0.006400864);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(15,0.005383389);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(16,0.005019864);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(17,0.004377264);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(18,0.003194606);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(19,0.003564517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(20,0.00295203);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(21,0.002934286);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(22,0.001738464);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(23,0.001140249);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(24,0.002565591);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(25,0.0008356075);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetBinError(26,0.004158695);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2318->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt2,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt2");
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64","thsSignal_grouped_wh3l_Pre_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetMaximum(0.8552153);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt2_stack_64);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(1,0.06692092);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(2,0.3966583);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(3,0.6917205);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(4,0.7842187);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(5,0.7178618);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(6,0.6426246);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(7,0.4288648);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(8,0.2780233);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(9,0.2643711);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(10,0.185418);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(11,0.148872);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(12,0.1064891);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(13,0.0794978);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(14,0.04926372);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(15,0.03657709);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(16,0.03094022);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(17,0.02359153);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(18,0.01560083);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(19,0.01364367);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(20,0.007342868);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(21,0.008440688);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(22,0.004305313);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(23,0.002729171);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(24,0.006410068);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(25,0.001684553);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinContent(26,0.01508377);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(1,0.009240318);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(2,0.02138475);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(3,0.02778309);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(4,0.03027206);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(5,0.02876642);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(6,0.02695428);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(7,0.02049517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(8,0.01585842);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(9,0.01580292);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(10,0.01265672);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(11,0.01152852);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(12,0.009339736);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(13,0.008261512);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(14,0.006400864);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(15,0.005383389);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(16,0.005019864);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(17,0.004377264);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(18,0.003194606);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(19,0.003564517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(20,0.00295203);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(21,0.002934286);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(22,0.001738464);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(23,0.001140249);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(24,0.002565591);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(25,0.0008356075);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetBinError(26,0.004158695);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt2319->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt2,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3063[25] = {
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
   Double_t _fy3063[25] = {
   21.51388,
   153.3519,
   204.6455,
   190.8353,
   132.2448,
   71.63103,
   48.34981,
   33.76656,
   21.65049,
   13.72321,
   12.33627,
   9.081954,
   6.239907,
   4.841352,
   3.511012,
   2.702436,
   1.89499,
   2.145162,
   1.547482,
   1.06675,
   1.293572,
   0.5667353,
   0.5449836,
   0.455003,
   0.6837443};
   Double_t _felx3063[25] = {
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
   Double_t _fely3063[25] = {
   5.476418,
   24.21905,
   30.2937,
   26.66718,
   15.16021,
   6.231126,
   4.943669,
   3.379936,
   2.575353,
   1.801497,
   1.912675,
   1.58662,
   1.037471,
   0.8907017,
   0.6709195,
   0.6489006,
   0.5730565,
   0.7098006,
   0.3858866,
   0.4491221,
   0.4457762,
   0.2162939,
   0.201862,
   0.1021599,
   0.3292618};
   Double_t _fehx3063[25] = {
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
   Double_t _fehy3063[25] = {
   5.475372,
   24.1982,
   30.28442,
   26.65873,
   15.15774,
   6.22688,
   4.939122,
   3.376839,
   2.572579,
   1.794858,
   1.908643,
   1.582822,
   1.070062,
   0.6766566,
   0.6732625,
   0.5766594,
   0.5719846,
   0.8385507,
   0.512029,
   0.3962982,
   0.4447398,
   0.1441667,
   0.1490709,
   0.2457146,
   0.3292594};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3063,_fy3063,_felx3063,_fehx3063,_fely3063,_fehy3063);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3063 = new TH1F("Graph_Graph3063","",100,0,219);
   Graph_Graph3063->SetMinimum(0);
   Graph_Graph3063->SetMaximum(258.3886);
   Graph_Graph3063->SetDirectory(0);
   Graph_Graph3063->SetStats(0);
   Graph_Graph3063->SetLineStyle(0);
   Graph_Graph3063->SetMarkerStyle(20);
   Graph_Graph3063->GetXaxis()->SetLabelFont(42);
   Graph_Graph3063->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3063->GetXaxis()->SetTitleFont(42);
   Graph_Graph3063->GetYaxis()->SetLabelFont(42);
   Graph_Graph3063->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3063->GetYaxis()->SetTitleFont(42);
   Graph_Graph3063->GetZaxis()->SetLabelFont(42);
   Graph_Graph3063->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3063);
   
   grae->Draw("2");
   
   Double_t _fx3064[25] = {
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
   Double_t _fy3064[25] = {
   18,
   136,
   223,
   214,
   175,
   72,
   62,
   40,
   29,
   20,
   10,
   11,
   10,
   8,
   1,
   4,
   7,
   3,
   2,
   3,
   1,
   2,
   1,
   0,
   0};
   Double_t _felx3064[25] = {
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
   Double_t _fely3064[25] = {
   4.202964,
   11.64779,
   14.9223,
   14.61761,
   13.21639,
   8.465699,
   7.852869,
   6.298123,
   5.354033,
   4.43453,
   3.108748,
   3.265636,
   3.108748,
   2.768432,
   0.8272524,
   1.914367,
   2.581513,
   1.632727,
   1.29183,
   1.632727,
   0.8272524,
   1.29183,
   0.8272524,
   0,
   0};
   Double_t _fehx3064[25] = {
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
   Double_t _fehy3064[25] = {
   5.321116,
   12.69078,
   15.95586,
   15.65188,
   14.25428,
   9.524792,
   8.916552,
   7.377414,
   6.447153,
   5.546633,
   4.267035,
   4.416609,
   4.267035,
   3.94522,
   2.29957,
   3.162815,
   3.770356,
   2.918242,
   2.63791,
   2.918242,
   2.29957,
   2.63791,
   2.29957,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3064,_fy3064,_felx3064,_fehx3064,_fely3064,_fehy3064);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3064 = new TH1F("Graph_Graph3064","",100,0,219);
   Graph_Graph3064->SetMinimum(0);
   Graph_Graph3064->SetMaximum(262.8515);
   Graph_Graph3064->SetDirectory(0);
   Graph_Graph3064->SetStats(0);
   Graph_Graph3064->SetLineStyle(0);
   Graph_Graph3064->SetMarkerStyle(20);
   Graph_Graph3064->GetXaxis()->SetLabelFont(42);
   Graph_Graph3064->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3064->GetXaxis()->SetTitleFont(42);
   Graph_Graph3064->GetYaxis()->SetLabelFont(42);
   Graph_Graph3064->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3064->GetYaxis()->SetTitleFont(42);
   Graph_Graph3064->GetZaxis()->SetLabelFont(42);
   Graph_Graph3064->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3064);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy320 = new TH1F("hframe_copy320","",1000,10,200);
   hframe_copy320->SetMinimum(0);
   hframe_copy320->SetMaximum(594.833);
   hframe_copy320->SetDirectory(0);
   hframe_copy320->SetStats(0);
   hframe_copy320->SetLineStyle(0);
   hframe_copy320->SetMarkerStyle(20);
   hframe_copy320->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy320->GetXaxis()->SetNdivisions(506);
   hframe_copy320->GetXaxis()->SetLabelFont(42);
   hframe_copy320->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetXaxis()->SetLabelSize(0.05);
   hframe_copy320->GetXaxis()->SetTitleSize(0.06);
   hframe_copy320->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy320->GetXaxis()->SetTitleFont(42);
   hframe_copy320->GetYaxis()->SetTitle("Events");
   hframe_copy320->GetYaxis()->SetLabelFont(42);
   hframe_copy320->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetYaxis()->SetLabelSize(0.05);
   hframe_copy320->GetYaxis()->SetTitleSize(0.06);
   hframe_copy320->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy320->GetYaxis()->SetTitleFont(42);
   hframe_copy320->GetZaxis()->SetLabelFont(42);
   hframe_copy320->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetZaxis()->SetLabelSize(0.05);
   hframe_copy320->GetZaxis()->SetTitleSize(0.06);
   hframe_copy320->GetZaxis()->SetTitleFont(42);
   hframe_copy320->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt2->Modified();
   ccwh3l_Pre_13TeV_pt2->cd();
   ccwh3l_Pre_13TeV_pt2->SetSelected(ccwh3l_Pre_13TeV_pt2);
}
