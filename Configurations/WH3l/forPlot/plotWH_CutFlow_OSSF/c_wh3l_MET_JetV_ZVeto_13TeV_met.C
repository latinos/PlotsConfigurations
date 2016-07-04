void c_wh3l_MET_JetV_ZVeto_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_met/cc
//=========  (Sat Jul  2 21:43:55 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_met = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->Range(-40,-5.216756,210,34.91214);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe451 = new TH1F("hframe451","",1000,0,200);
   hframe451->SetMinimum(0);
   hframe451->SetMaximum(32.90569);
   hframe451->SetDirectory(0);
   hframe451->SetStats(0);
   hframe451->SetLineStyle(0);
   hframe451->SetMarkerStyle(20);
   hframe451->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe451->GetXaxis()->SetNdivisions(506);
   hframe451->GetXaxis()->SetLabelFont(42);
   hframe451->GetXaxis()->SetLabelOffset(0.007);
   hframe451->GetXaxis()->SetLabelSize(0.05);
   hframe451->GetXaxis()->SetTitleSize(0.06);
   hframe451->GetXaxis()->SetTitleOffset(0.9);
   hframe451->GetXaxis()->SetTitleFont(42);
   hframe451->GetYaxis()->SetTitle("Events");
   hframe451->GetYaxis()->SetLabelFont(42);
   hframe451->GetYaxis()->SetLabelOffset(0.007);
   hframe451->GetYaxis()->SetLabelSize(0.05);
   hframe451->GetYaxis()->SetTitleSize(0.06);
   hframe451->GetYaxis()->SetTitleOffset(1.25);
   hframe451->GetYaxis()->SetTitleFont(42);
   hframe451->GetZaxis()->SetLabelFont(42);
   hframe451->GetZaxis()->SetLabelOffset(0.007);
   hframe451->GetZaxis()->SetLabelSize(0.05);
   hframe451->GetZaxis()->SetTitleSize(0.06);
   hframe451->GetZaxis()->SetTitleFont(42);
   hframe451->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->SetMinimum(-0.5832256);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->SetMaximum(4.004923);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_91);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(9,1.108145);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(10,1.153169);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(11,2.09155);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(12,0.1997881);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(13,0.5644349);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(14,-0.2047972);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(15,0.5492142);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(16,0.1541674);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(17,0.849891);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(18,-0.05269274);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(19,-0.1117942);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(20,0.5148117);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(21,-0.05545199);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(22,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinContent(37,-0.008195123);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(9,1.088978);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(10,0.8604807);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(11,0.930775);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(12,0.3211263);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(13,0.5129847);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(14,0.3784285);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(15,0.5492142);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(16,0.308726);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(17,0.6316814);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(18,0.05210733);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(19,0.2242267);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(20,0.5208186);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(21,0.05545199);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(22,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetBinError(37,0.008195123);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met452->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetBinContent(9,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetBinContent(10,0.03345312);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetBinContent(13,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetBinError(9,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetBinError(10,0.02374035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetBinError(13,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met453->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(9,0.02394089);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(10,0.01290424);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(11,0.01601447);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(12,0.02004206);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(13,0.02605689);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(14,0.01700431);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(15,0.01254832);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(16,0.02019086);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(17,0.0213952);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(18,0.02475471);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(19,0.02394142);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(20,0.0100713);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(21,0.01879782);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(22,0.007234796);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(23,0.01260781);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(24,0.005156656);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(25,0.005281865);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(26,0.004636053);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(27,0.005279412);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(29,0.006875767);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(30,-0.0003255436);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(31,3.805002e-05);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(32,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(33,-0.001224705);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(35,0.0006405607);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(36,0.002489406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(39,0.002534529);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(40,0.0005093239);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinContent(41,0.01481559);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(9,0.008172104);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(10,0.006142954);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(11,0.005880306);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(12,0.00690011);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(13,0.007906);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(14,0.00610504);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(15,0.007243224);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(16,0.007289072);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(17,0.0075897);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(18,0.007408898);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(19,0.007473992);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(20,0.005782812);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(21,0.006434477);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(22,0.004180788);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(23,0.005425855);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(24,0.003661235);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(25,0.003420695);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(26,0.003308885);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(27,0.003157812);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(29,0.003996797);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(30,0.001077625);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(31,3.805002e-05);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(32,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(33,0.003190935);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(35,0.0006405607);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(36,0.002489406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(39,0.002534529);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(40,0.0005093239);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetBinError(41,0.005768205);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met454->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetBinContent(9,0.9327583);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetBinContent(10,0.9591974);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetBinContent(11,0.4091599);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetBinContent(12,0.4529023);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetBinError(9,0.3944573);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetBinError(10,0.3172936);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetBinError(11,0.1891369);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetBinError(12,0.2100381);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met455->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinContent(9,0.1619121);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinContent(10,0.1514073);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinContent(11,0.1069809);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinContent(12,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinContent(13,0.07189054);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinContent(15,0.02711696);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinContent(24,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinError(9,0.08296664);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinError(10,0.07657922);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinError(11,0.06757283);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinError(12,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinError(13,0.05189561);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinError(15,0.02711696);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetBinError(24,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met456->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(9,1.388069);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(10,1.353747);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(11,1.133671);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(12,1.023779);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(13,0.72645);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(14,0.6175286);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(15,0.4783908);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(16,0.3711151);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(17,0.3131539);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(18,0.2606384);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(19,0.1605236);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(20,0.1439585);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(21,0.1784812);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(22,0.1375776);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(23,0.08004025);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(24,0.06810781);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(25,0.06956016);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(26,0.03543945);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(27,0.03038646);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(28,0.02112059);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(29,0.02842813);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(30,0.02346947);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(31,0.02345073);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(32,0.03072592);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(33,0.02349149);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(34,0.02155747);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(35,0.02235717);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(36,0.01123944);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(37,0.02764854);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(38,0.002637757);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(39,0.01853313);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(40,0.00634668);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinContent(41,0.1399459);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(9,0.08702268);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(10,0.08593323);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(11,0.07877971);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(12,0.07512221);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(13,0.06277733);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(14,0.05779363);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(15,0.05092581);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(16,0.04469467);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(17,0.04092107);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(18,0.03749565);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(19,0.02829997);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(20,0.02786476);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(21,0.03125799);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(22,0.02749561);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(23,0.02022515);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(24,0.01883037);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(25,0.01960446);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(26,0.01423327);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(27,0.01268113);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(28,0.01044943);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(29,0.01274425);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(30,0.01111583);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(31,0.01172718);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(32,0.01225916);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(33,0.01179292);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(34,0.009819687);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(35,0.01126499);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(36,0.007952499);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(37,0.01217217);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(38,0.002610874);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(39,0.009504185);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(40,0.00634668);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetBinError(41,0.02733008);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met457->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(9,0.07750398);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(10,0.0467157);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(11,0.05683643);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(12,0.03813961);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(13,0.04588115);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(14,0.05313868);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(15,0.03646786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(16,0.037275);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(17,0.03060697);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(18,0.02879806);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(19,0.0293155);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(20,0.01411565);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(21,0.02053347);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(22,0.01388464);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(23,0.01245599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(24,0.005598151);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(25,0.00464452);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(26,0.005454139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(27,0.003836075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(28,0.004498212);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(30,0.001308845);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(31,0.002416131);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(35,0.001133816);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(36,0.001936098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinContent(41,0.003357599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(9,0.009373822);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(10,0.007134408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(11,0.007631428);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(12,0.006434844);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(13,0.008013799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(14,0.007864311);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(15,0.006755645);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(16,0.006803834);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(17,0.006196522);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(18,0.005731769);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(19,0.006662101);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(20,0.003657898);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(21,0.005226964);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(22,0.004046723);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(23,0.004194506);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(24,0.002581744);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(25,0.002321973);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(26,0.00322481);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(27,0.002494419);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(28,0.002509928);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(30,0.00117456);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(35,0.0007658713);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(36,0.00161891);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetBinError(41,0.002377921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met458->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->SetMaximum(0.0912217);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met_stack_92);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(9,0.07750398);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(10,0.0467157);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(11,0.05683643);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(12,0.03813961);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(13,0.04588115);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(14,0.05313868);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(15,0.03646786);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(16,0.037275);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(17,0.03060697);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(18,0.02879806);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(19,0.0293155);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(20,0.01411565);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(21,0.02053347);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(22,0.01388464);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(23,0.01245599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(24,0.005598151);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(25,0.00464452);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(26,0.005454139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(27,0.003836075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(28,0.004498212);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(30,0.001308845);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(31,0.002416131);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(35,0.001133816);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(36,0.001936098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinContent(41,0.003357599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(9,0.009373822);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(10,0.007134408);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(11,0.007631428);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(12,0.006434844);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(13,0.008013799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(14,0.007864311);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(15,0.006755645);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(16,0.006803834);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(17,0.006196522);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(18,0.005731769);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(19,0.006662101);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(20,0.003657898);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(21,0.005226964);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(22,0.004046723);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(23,0.004194506);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(24,0.002581744);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(25,0.002321973);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(26,0.00322481);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(27,0.002494419);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(28,0.002509928);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(30,0.00117456);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(35,0.0007658713);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(36,0.00161891);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetBinError(41,0.002377921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met459->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3091[40] = {
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
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3091[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.629034,
   3.663877,
   3.757376,
   1.696511,
   1.403307,
   0.4297357,
   1.06727,
   0.5559153,
   1.18444,
   0.2327004,
   0.07267075,
   0.6688415,
   0.141827,
   0.9924487,
   0.09264806,
   0.101827,
   0.07484202,
   0.0400755,
   0.03566587,
   0.02112059,
   0.0353039,
   0.02314393,
   0.02348878,
   0.03265468,
   0.02226678,
   0.02155747,
   0.02299774,
   0.01372885,
   0.01945342,
   0.002637757,
   0.02106766,
   0.006856004};
   Double_t _felx3091[40] = {
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
   2.5,
   2.5};
   Double_t _fely3091[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.7235,
   1.431753,
   1.469502,
   0.5012709,
   0.6806113,
   0.4490915,
   0.6633542,
   0.2245374,
   0.7427851,
   0.1023017,
   0.2640823,
   0.5774328,
   0.09725557,
   0.9280552,
   0.02846774,
   0.0514228,
   0.02377675,
   0.01822642,
   0.01682499,
   0.01048158,
   0.01814211,
   0.01220334,
   0.01183841,
   0.01443907,
   0.01505452,
   0.009877398,
   0.01191331,
   0.01074672,
   0.020593,
   0.002611914,
   0.01236169,
   0.006894927};
   Double_t _fehx3091[40] = {
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
   2.5,
   2.5};
   Double_t _fehy3091[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.723296,
   1.431667,
   1.469393,
   0.6201928,
   0.6805596,
   0.2795954,
   0.6633486,
   0.3758187,
   0.742775,
   0.1022413,
   0.1546413,
   0.5831341,
   0.09721823,
   0.9280536,
   0.02844742,
   0.05138672,
   0.02376767,
   0.01818888,
   0.01679563,
   0.01047625,
   0.0181495,
   0.01145284,
   0.01180519,
   0.01443758,
   0.01309218,
   0.009870464,
   0.01191379,
   0.0107471,
   0.02058684,
   0.002611954,
   0.01236025,
   0.006890639};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3091,_fy3091,_felx3091,_fehx3091,_fely3091,_fehy3091);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3091 = new TH1F("Graph_Graph3091","",100,0,220);
   Graph_Graph3091->SetMinimum(-0.7457858);
   Graph_Graph3091->SetMaximum(5.906704);
   Graph_Graph3091->SetDirectory(0);
   Graph_Graph3091->SetStats(0);
   Graph_Graph3091->SetLineStyle(0);
   Graph_Graph3091->SetMarkerStyle(20);
   Graph_Graph3091->GetXaxis()->SetLabelFont(42);
   Graph_Graph3091->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3091->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3091->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3091->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3091->GetXaxis()->SetTitleFont(42);
   Graph_Graph3091->GetYaxis()->SetLabelFont(42);
   Graph_Graph3091->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3091->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3091->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3091->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3091->GetYaxis()->SetTitleFont(42);
   Graph_Graph3091->GetZaxis()->SetLabelFont(42);
   Graph_Graph3091->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3091->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3091->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3091->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3091);
   
   grae->Draw("2");
   
   Double_t _fx3092[40] = {
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
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3092[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   10,
   4,
   2,
   3,
   3,
   1,
   0,
   0,
   0,
   0,
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
   Double_t _felx3092[40] = {
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
   2.5,
   2.5};
   Double_t _fely3092[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.108748,
   1.914367,
   1.29183,
   1.632727,
   1.632727,
   0.8272524,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3092[40] = {
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
   2.5,
   2.5};
   Double_t _fehy3092[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   4.267035,
   3.162815,
   2.63791,
   2.918242,
   2.918242,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
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
   grae = new TGraphAsymmErrors(40,_fx3092,_fy3092,_felx3092,_fehx3092,_fely3092,_fehy3092);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3092 = new TH1F("Graph_Graph3092","",100,0,220);
   Graph_Graph3092->SetMinimum(0);
   Graph_Graph3092->SetMaximum(15.69374);
   Graph_Graph3092->SetDirectory(0);
   Graph_Graph3092->SetStats(0);
   Graph_Graph3092->SetLineStyle(0);
   Graph_Graph3092->SetMarkerStyle(20);
   Graph_Graph3092->GetXaxis()->SetLabelFont(42);
   Graph_Graph3092->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3092->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3092->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3092->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3092->GetXaxis()->SetTitleFont(42);
   Graph_Graph3092->GetYaxis()->SetLabelFont(42);
   Graph_Graph3092->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3092->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3092->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3092->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3092->GetYaxis()->SetTitleFont(42);
   Graph_Graph3092->GetZaxis()->SetLabelFont(42);
   Graph_Graph3092->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3092->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3092->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3092->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3092);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy460 = new TH1F("hframe_copy460","",1000,0,200);
   hframe_copy460->SetMinimum(0);
   hframe_copy460->SetMaximum(32.90569);
   hframe_copy460->SetDirectory(0);
   hframe_copy460->SetStats(0);
   hframe_copy460->SetLineStyle(0);
   hframe_copy460->SetMarkerStyle(20);
   hframe_copy460->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy460->GetXaxis()->SetNdivisions(506);
   hframe_copy460->GetXaxis()->SetLabelFont(42);
   hframe_copy460->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy460->GetXaxis()->SetLabelSize(0.05);
   hframe_copy460->GetXaxis()->SetTitleSize(0.06);
   hframe_copy460->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy460->GetXaxis()->SetTitleFont(42);
   hframe_copy460->GetYaxis()->SetTitle("Events");
   hframe_copy460->GetYaxis()->SetLabelFont(42);
   hframe_copy460->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy460->GetYaxis()->SetLabelSize(0.05);
   hframe_copy460->GetYaxis()->SetTitleSize(0.06);
   hframe_copy460->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy460->GetYaxis()->SetTitleFont(42);
   hframe_copy460->GetZaxis()->SetLabelFont(42);
   hframe_copy460->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy460->GetZaxis()->SetLabelSize(0.05);
   hframe_copy460->GetZaxis()->SetTitleSize(0.06);
   hframe_copy460->GetZaxis()->SetTitleFont(42);
   hframe_copy460->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_met->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_met->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_met->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_met);
}
