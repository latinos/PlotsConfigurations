void c_wh3l_top_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 20:39:40 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_zveto_3l = new TCanvas("ccwh3l_top_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_top_13TeV_zveto_3l->Range(-20,-6.957255,105,46.56009);
   ccwh3l_top_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_top_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_top_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_top_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_top_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_top_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_top_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_top_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,0,100);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(43.88423);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe91->GetXaxis()->SetNdivisions(506);
   hframe91->GetXaxis()->SetLabelFont(42);
   hframe91->GetXaxis()->SetLabelOffset(0.007);
   hframe91->GetXaxis()->SetLabelSize(0.05);
   hframe91->GetXaxis()->SetTitleSize(0.06);
   hframe91->GetXaxis()->SetTitleOffset(0.9);
   hframe91->GetXaxis()->SetTitleFont(42);
   hframe91->GetYaxis()->SetTitle("Events");
   hframe91->GetYaxis()->SetLabelFont(42);
   hframe91->GetYaxis()->SetLabelOffset(0.007);
   hframe91->GetYaxis()->SetLabelSize(0.05);
   hframe91->GetYaxis()->SetTitleSize(0.06);
   hframe91->GetYaxis()->SetTitleOffset(1.25);
   hframe91->GetYaxis()->SetTitleFont(42);
   hframe91->GetZaxis()->SetLabelFont(42);
   hframe91->GetZaxis()->SetLabelOffset(0.007);
   hframe91->GetZaxis()->SetLabelSize(0.05);
   hframe91->GetZaxis()->SetTitleSize(0.06);
   hframe91->GetZaxis()->SetTitleFont(42);
   hframe91->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_top_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21","thsBackground_grouped_wh3l_top_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->SetMinimum(-0.2990534);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->SetMaximum(19.27472);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(6,3.557818);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(7,4.769483);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(8,2.680785);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(9,2.200094);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(10,1.237152);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(11,2.322643);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(12,1.350281);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(13,2.405961);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(14,-0.08277722);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(15,1.009244);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(16,0.2794171);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(17,0.1981389);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinContent(19,15.76559);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(6,1.378303);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(7,1.630975);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(8,1.080101);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(9,1.07959);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(10,1.10308);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(11,1.225197);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(12,1.111666);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(13,1.158651);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(14,0.2162761);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(15,0.8929173);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(16,0.3300218);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(17,0.1401597);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetBinError(19,2.591285);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l92->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_zveto_3l93 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_zveto_3l93","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinContent(6,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinContent(7,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinContent(8,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinContent(11,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinContent(14,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinContent(19,0.0850955);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinError(6,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinError(7,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinError(8,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinError(11,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinError(14,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetBinError(19,0.03638693);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l93->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinContent(6,0.2671853);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinContent(7,0.1573751);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinContent(8,0.215214);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinContent(10,0.2365957);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinContent(11,0.1241958);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinContent(12,0.211252);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinContent(19,0.1807983);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinError(6,0.257937);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinError(7,0.1152831);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinError(8,0.1319596);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinError(10,0.153771);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinError(11,0.1241958);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinError(12,0.1694495);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetBinError(19,0.2007494);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l94->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(6,0.066695);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(7,0.1050282);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(8,0.1388612);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(10,0.04411533);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(11,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(12,0.08998948);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(14,0.06125498);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinContent(19,0.08973226);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(6,0.05056569);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(7,0.06637908);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(8,0.08037906);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(10,0.04411533);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(11,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(12,0.06434838);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(14,0.0375437);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetBinError(19,0.06357566);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l95->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(6,0.9505331);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(7,0.96884);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(8,0.8301231);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(9,0.7141216);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(10,0.7768993);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(11,0.6286101);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(12,0.6026987);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(13,0.5648541);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(14,0.4508072);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(15,0.5369703);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(16,0.4439344);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(17,0.03584222);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(18,0.05737896);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinContent(19,1.306251);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(6,0.07169596);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(7,0.07253099);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(8,0.06769438);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(9,0.06320629);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(10,0.06614073);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(11,0.05799047);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(12,0.05848827);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(13,0.0548379);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(14,0.04865118);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(15,0.05351838);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(16,0.04840493);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(17,0.01366587);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(18,0.01832339);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetBinError(19,0.08346682);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l96->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(6,0.03084946);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(7,0.03768989);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(8,0.04282957);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(9,0.03024626);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(10,0.02701222);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(11,0.02025365);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(12,0.02844127);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(13,0.0216279);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(14,0.02167665);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(15,0.009330303);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(16,0.004661749);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(17,0.002108966);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(18,0.003013009);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinContent(19,0.1262242);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(6,0.005686212);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(7,0.005953045);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(8,0.005746737);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(9,0.005677813);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(10,0.004699884);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(11,0.004461204);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(12,0.005569368);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(13,0.004835028);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(14,0.004994133);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(15,0.003507789);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(16,0.002049209);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(17,0.001766684);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(18,0.002131262);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetBinError(19,0.01133699);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l97->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_top_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_top_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22","thsSignal_grouped_wh3l_top_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->SetMaximum(0.1444393);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(6,0.03084946);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(7,0.03768989);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(8,0.04282957);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(9,0.03024626);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(10,0.02701222);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(11,0.02025365);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(12,0.02844127);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(13,0.0216279);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(14,0.02167665);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(15,0.009330303);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(16,0.004661749);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(17,0.002108966);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(18,0.003013009);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinContent(19,0.1262242);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(6,0.005686212);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(7,0.005953045);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(8,0.005746737);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(9,0.005677813);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(10,0.004699884);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(11,0.004461204);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(12,0.005569368);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(13,0.004835028);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(14,0.004994133);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(15,0.003507789);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(16,0.002049209);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(17,0.001766684);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(18,0.002131262);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetBinError(19,0.01133699);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l98->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3021[20] = {
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
   Double_t _fy3021[20] = {
   0,
   0,
   0,
   0,
   0,
   4.860442,
   6.018217,
   3.878036,
   2.914216,
   2.294762,
   3.133394,
   2.254221,
   2.970815,
   0.4488787,
   1.546214,
   0.7647773,
   0.2339811,
   0.05737896,
   17.42747,
   0};
   Double_t _felx3021[20] = {
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
   Double_t _fely3021[20] = {
   0,
   0,
   0,
   0,
   0,
   2.17005,
   2.531379,
   1.663738,
   1.378217,
   1.434796,
   1.676162,
   1.481971,
   1.477228,
   0.324085,
   1.010533,
   0.3824517,
   0.1687372,
   0.01838481,
   6.259885,
   0};
   Double_t _fehx3021[20] = {
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
   Double_t _fehy3021[20] = {
   0,
   0,
   0,
   0,
   0,
   2.170007,
   2.531372,
   1.663625,
   1.378204,
   1.434751,
   1.676063,
   1.482045,
   1.477232,
   0.1920228,
   1.010524,
   0.4314807,
   0.1687373,
   0.01836465,
   6.269289,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,110);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(26.06643);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineStyle(0);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("2");
   
   Double_t _fx3022[20] = {
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
   Double_t _fy3022[20] = {
   0,
   0,
   0,
   0,
   0,
   2,
   3,
   3,
   3,
   7,
   1,
   4,
   3,
   2,
   1,
   1,
   0,
   0,
   11,
   0};
   Double_t _felx3022[20] = {
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
   Double_t _fely3022[20] = {
   0,
   0,
   0,
   0,
   0,
   1.29183,
   1.632727,
   1.632727,
   1.632727,
   2.581513,
   0.8272524,
   1.914367,
   1.632727,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0,
   3.265636,
   0};
   Double_t _fehx3022[20] = {
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
   Double_t _fehy3022[20] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   2.918242,
   2.918242,
   2.918242,
   3.770356,
   2.29957,
   3.162815,
   2.918242,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   4.416609,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,110);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(16.95827);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineStyle(0);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy99 = new TH1F("hframe_copy99","",1000,0,100);
   hframe_copy99->SetMinimum(0);
   hframe_copy99->SetMaximum(43.88423);
   hframe_copy99->SetDirectory(0);
   hframe_copy99->SetStats(0);
   hframe_copy99->SetLineStyle(0);
   hframe_copy99->SetMarkerStyle(20);
   hframe_copy99->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy99->GetXaxis()->SetNdivisions(506);
   hframe_copy99->GetXaxis()->SetLabelFont(42);
   hframe_copy99->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy99->GetXaxis()->SetLabelSize(0.05);
   hframe_copy99->GetXaxis()->SetTitleSize(0.06);
   hframe_copy99->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy99->GetXaxis()->SetTitleFont(42);
   hframe_copy99->GetYaxis()->SetTitle("Events");
   hframe_copy99->GetYaxis()->SetLabelFont(42);
   hframe_copy99->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy99->GetYaxis()->SetLabelSize(0.05);
   hframe_copy99->GetYaxis()->SetTitleSize(0.06);
   hframe_copy99->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy99->GetYaxis()->SetTitleFont(42);
   hframe_copy99->GetZaxis()->SetLabelFont(42);
   hframe_copy99->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy99->GetZaxis()->SetLabelSize(0.05);
   hframe_copy99->GetZaxis()->SetTitleSize(0.06);
   hframe_copy99->GetZaxis()->SetTitleFont(42);
   hframe_copy99->Draw("sameaxis");
   ccwh3l_top_13TeV_zveto_3l->Modified();
   ccwh3l_top_13TeV_zveto_3l->cd();
   ccwh3l_top_13TeV_zveto_3l->SetSelected(ccwh3l_top_13TeV_zveto_3l);
}
