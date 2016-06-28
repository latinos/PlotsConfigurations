void c_wh3l_top_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_met/cc
//=========  (Tue Jun 28 02:22:51 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_met = new TCanvas("ccwh3l_top_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_met->SetHighLightColor(2);
   ccwh3l_top_13TeV_met->Range(-40,-4.291755,210,28.72174);
   ccwh3l_top_13TeV_met->SetFillColor(0);
   ccwh3l_top_13TeV_met->SetBorderMode(0);
   ccwh3l_top_13TeV_met->SetBorderSize(2);
   ccwh3l_top_13TeV_met->SetTickx(1);
   ccwh3l_top_13TeV_met->SetTicky(1);
   ccwh3l_top_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_met->SetRightMargin(0.04);
   ccwh3l_top_13TeV_met->SetTopMargin(0.05);
   ccwh3l_top_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe131 = new TH1F("hframe131","",1000,0,200);
   hframe131->SetMinimum(0);
   hframe131->SetMaximum(27.07107);
   hframe131->SetDirectory(0);
   hframe131->SetStats(0);
   hframe131->SetLineStyle(0);
   hframe131->SetMarkerStyle(20);
   hframe131->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe131->GetXaxis()->SetNdivisions(506);
   hframe131->GetXaxis()->SetLabelFont(42);
   hframe131->GetXaxis()->SetLabelOffset(0.007);
   hframe131->GetXaxis()->SetLabelSize(0.05);
   hframe131->GetXaxis()->SetTitleSize(0.06);
   hframe131->GetXaxis()->SetTitleOffset(0.9);
   hframe131->GetXaxis()->SetTitleFont(42);
   hframe131->GetYaxis()->SetTitle("Events");
   hframe131->GetYaxis()->SetLabelFont(42);
   hframe131->GetYaxis()->SetLabelOffset(0.007);
   hframe131->GetYaxis()->SetLabelSize(0.05);
   hframe131->GetYaxis()->SetTitleSize(0.06);
   hframe131->GetYaxis()->SetTitleOffset(1.25);
   hframe131->GetYaxis()->SetTitleFont(42);
   hframe131->GetZaxis()->SetLabelFont(42);
   hframe131->GetZaxis()->SetLabelOffset(0.007);
   hframe131->GetZaxis()->SetLabelSize(0.05);
   hframe131->GetZaxis()->SetTitleSize(0.06);
   hframe131->GetZaxis()->SetTitleFont(42);
   hframe131->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_met->SetName("thsBackground_grouped_wh3l_top_13TeV_met");
   thsBackground_grouped_wh3l_top_13TeV_met->SetTitle("thsBackground_grouped_wh3l_top_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_met_stack_27 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_met_stack_27","thsBackground_grouped_wh3l_top_13TeV_met",20,0,200);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->SetMinimum(-0.1706788);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->SetMaximum(7.561475);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_met_stack_27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_met_stack_27);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_met132 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_met132","histo_Fake",20,0,200);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(4,3.240642);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(5,5.307712);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(6,4.902817);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(7,4.416339);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(8,3.851363);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(9,3.264493);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(10,2.769213);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(11,0.8902388);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(12,4.146789);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(13,2.911751);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(14,2.495825);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(15,0.3338201);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(16,0.3622181);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(17,1.096632);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(18,0.1345365);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(19,0.5900977);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(20,-0.005115197);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinContent(21,0.2251023);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(4,1.387403);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(5,1.72041);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(6,1.455455);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(7,1.677691);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(8,1.464625);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(9,1.246021);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(10,1.177579);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(11,0.5096192);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(12,1.39981);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(13,1.354098);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(14,1.216733);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(15,0.504499);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(16,0.4431872);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(17,0.7280815);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(18,0.1280276);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(19,0.518373);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(20,0.005115197);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetBinError(21,0.3145376);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetEntries(340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_met132->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_met132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_Fake_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_met133 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_met133","histo_WW",20,0,200);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(5,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(8,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(9,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(10,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(11,0.0345354);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(13,0.03488018);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(15,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(20,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinContent(21,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(5,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(8,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(9,0.01761671);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(10,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(11,0.02445663);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(13,0.02485137);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(15,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(20,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetBinError(21,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_met133->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_met133->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_met133->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_met133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_WW_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_met134 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_met134","histo_VVV",20,0,200);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(4,0.001952752);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(5,0.002959152);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(6,0.001875238);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(7,0.005184204);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(8,0.00211736);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(9,0.00273231);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(10,0.001707726);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(11,0.001433623);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(12,0.001202226);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(13,0.003062064);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(14,1.262216e-05);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(15,0.001770962);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(16,0.00108268);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(18,0.001045967);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(19,0.0006398484);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinContent(21,0.003159082);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(4,0.001134127);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(5,0.001237908);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(6,0.00111025);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(7,0.001748884);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(8,0.001235936);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(9,0.001314858);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(10,0.001114346);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(11,0.001017628);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(12,0.0008693232);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(13,0.001375993);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(14,0.0008984843);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(15,0.001024004);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(16,0.0007834817);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(18,0.0006434041);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(19,0.0006398484);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetBinError(21,0.001250303);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetEntries(61);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_met134->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_met134->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_VVV_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_met135 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_met135","histo_Vg",20,0,200);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinContent(4,0.8686373);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinContent(5,1.268226);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinContent(7,-0.03979167);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinContent(8,0.1794329);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinContent(14,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinError(4,0.4206317);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinError(5,0.4199697);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinError(7,0.1251425);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinError(8,0.129513);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetBinError(14,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetEntries(44);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_met135->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_met135->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_Vg_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_met136 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_met136","histo_ZZ",20,0,200);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinContent(4,0.1323143);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinContent(5,0.279011);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinContent(6,0.2063711);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinContent(7,0.09779789);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinContent(8,0.1879805);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinContent(9,0.08447161);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinContent(11,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinContent(21,0.04400699);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinError(4,0.07723657);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinError(5,0.1045652);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinError(6,0.09100969);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinError(7,0.06134711);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinError(8,0.09412321);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinError(9,0.05999917);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinError(11,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetBinError(21,0.04400699);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetEntries(28);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_met136->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_met136->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_ZZ_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_met137 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_met137","histo_ZZ",20,0,200);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinContent(4,0.1323143);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinContent(5,0.279011);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinContent(6,0.2063711);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinContent(7,0.09779789);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinContent(8,0.1879805);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinContent(9,0.08447161);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinContent(11,0.04204432);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinContent(21,0.04400699);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinError(4,0.07723657);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinError(5,0.1045652);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinError(6,0.09100969);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinError(7,0.06134711);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinError(8,0.09412321);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinError(9,0.05999917);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinError(11,0.04204432);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetBinError(21,0.04400699);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetEntries(28);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_met137->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_met137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_WZ_wh3l_top_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_met138 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_met138","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(4,0.02683206);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(5,0.06003762);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(6,0.06099117);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(7,0.0503271);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(8,0.04866084);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(9,0.04831385);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(10,0.03447736);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(11,0.02410544);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(12,0.01679121);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(13,0.01193265);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(14,0.0139348);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(15,0.01352651);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(16,0.007028809);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(17,0.007135038);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(18,0.002089299);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(19,0.006428203);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(20,0.003236781);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinContent(21,0.02434725);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(4,0.005263731);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(5,0.007799721);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(6,0.008250957);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(7,0.007348723);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(8,0.007235892);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(9,0.00703962);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(10,0.006010505);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(11,0.004695498);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(12,0.003897009);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(13,0.003148755);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(14,0.004214866);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(15,0.003349733);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(16,0.002053409);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(17,0.002673427);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(18,0.0008328051);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(19,0.002446726);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(20,0.00103292);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetBinError(21,0.004220918);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_met->Add(new_histo_group_Higgs_wh3l_top_13TeV_met,"");
   thsBackground_grouped_wh3l_top_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_met->SetName("thsSignal_grouped_wh3l_top_13TeV_met");
   thsSignal_grouped_wh3l_top_13TeV_met->SetTitle("thsSignal_grouped_wh3l_top_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_met_stack_28 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_met_stack_28","thsSignal_grouped_wh3l_top_13TeV_met",20,0,200);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->SetMaximum(0.07270423);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_met_stack_28->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_met_stack_28);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_met139 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_met139","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(4,0.02683206);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(5,0.06003762);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(6,0.06099117);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(7,0.0503271);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(8,0.04866084);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(9,0.04831385);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(10,0.03447736);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(11,0.02410544);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(12,0.01679121);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(13,0.01193265);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(14,0.0139348);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(15,0.01352651);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(16,0.007028809);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(17,0.007135038);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(18,0.002089299);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(19,0.006428203);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(20,0.003236781);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinContent(21,0.02434725);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(4,0.005263731);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(5,0.007799721);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(6,0.008250957);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(7,0.007348723);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(8,0.007235892);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(9,0.00703962);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(10,0.006010505);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(11,0.004695498);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(12,0.003897009);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(13,0.003148755);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(14,0.004214866);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(15,0.003349733);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(16,0.002053409);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(17,0.002673427);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(18,0.0008328051);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(19,0.002446726);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(20,0.00103292);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetBinError(21,0.004220918);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_met139->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_met->Add(new_histo_group_Higgs_wh3l_top_13TeV_met,"");
   thsSignal_grouped_wh3l_top_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3027[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3027[20] = {
   0,
   0,
   0,
   5.018314,
   8.57195,
   6.447734,
   5.628288,
   5.110995,
   4.118847,
   3.313788,
   1.459466,
   4.489491,
   3.228225,
   2.862342,
   0.531203,
   0.5135335,
   1.155551,
   0.2012371,
   0.6735067,
   0.05594334};
   Double_t _felx3027[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3027[20] = {
   0,
   0,
   0,
   2.180052,
   2.837026,
   2.197169,
   2.353485,
   2.117255,
   1.699748,
   1.499788,
   0.6832106,
   1.905451,
   1.666469,
   1.553124,
   0.3934596,
   0.4062808,
   0.8153245,
   0.1519522,
   0.569026,
   0.03408389};
   Double_t _fehx3027[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3027[20] = {
   0,
   0,
   0,
   2.180052,
   2.837028,
   2.197169,
   2.283449,
   2.117256,
   1.699748,
   1.499788,
   0.6832105,
   1.90545,
   1.666469,
   1.553901,
   0.5602041,
   0.484784,
   0.8153245,
   0.1519522,
   0.5690261,
   0.03408389};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,220);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(12.54988);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineStyle(0);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2");
   
   Double_t _fx3028[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3028[20] = {
   0,
   0,
   0,
   4,
   7,
   8,
   5,
   4,
   2,
   4,
   4,
   1,
   1,
   0,
   2,
   0,
   1,
   1,
   0,
   0};
   Double_t _felx3028[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3028[20] = {
   0,
   0,
   0,
   1.914367,
   2.581513,
   2.768432,
   2.159724,
   1.914367,
   1.29183,
   1.914367,
   1.914367,
   0.8272524,
   0.8272524,
   0,
   1.29183,
   0,
   0.8272524,
   0.8272524,
   0,
   0};
   Double_t _fehx3028[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3028[20] = {
   1.147908,
   1.147908,
   1.147908,
   3.162815,
   3.770356,
   3.94522,
   3.382539,
   3.162815,
   2.63791,
   3.162815,
   3.162815,
   2.29957,
   2.29957,
   1.147908,
   2.63791,
   1.147908,
   2.29957,
   2.29957,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,220);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(13.13974);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineStyle(0);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy140 = new TH1F("hframe_copy140","",1000,0,200);
   hframe_copy140->SetMinimum(0);
   hframe_copy140->SetMaximum(27.07107);
   hframe_copy140->SetDirectory(0);
   hframe_copy140->SetStats(0);
   hframe_copy140->SetLineStyle(0);
   hframe_copy140->SetMarkerStyle(20);
   hframe_copy140->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy140->GetXaxis()->SetNdivisions(506);
   hframe_copy140->GetXaxis()->SetLabelFont(42);
   hframe_copy140->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetXaxis()->SetLabelSize(0.05);
   hframe_copy140->GetXaxis()->SetTitleSize(0.06);
   hframe_copy140->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy140->GetXaxis()->SetTitleFont(42);
   hframe_copy140->GetYaxis()->SetTitle("Events");
   hframe_copy140->GetYaxis()->SetLabelFont(42);
   hframe_copy140->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetYaxis()->SetLabelSize(0.05);
   hframe_copy140->GetYaxis()->SetTitleSize(0.06);
   hframe_copy140->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy140->GetYaxis()->SetTitleFont(42);
   hframe_copy140->GetZaxis()->SetLabelFont(42);
   hframe_copy140->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetZaxis()->SetLabelSize(0.05);
   hframe_copy140->GetZaxis()->SetTitleSize(0.06);
   hframe_copy140->GetZaxis()->SetTitleFont(42);
   hframe_copy140->Draw("sameaxis");
   ccwh3l_top_13TeV_met->Modified();
   ccwh3l_top_13TeV_met->cd();
   ccwh3l_top_13TeV_met->SetSelected(ccwh3l_top_13TeV_met);
}
