void c_wh3l_top_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_zveto_3l/cc
//=========  (Tue Jun 28 02:22:49 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_zveto_3l = new TCanvas("ccwh3l_top_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_top_13TeV_zveto_3l->Range(-20,-7.38627,105,49.43119);
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
   
   TH1F *hframe101 = new TH1F("hframe101","",1000,0,100);
   hframe101->SetMinimum(0);
   hframe101->SetMaximum(46.59032);
   hframe101->SetDirectory(0);
   hframe101->SetStats(0);
   hframe101->SetLineStyle(0);
   hframe101->SetMarkerStyle(20);
   hframe101->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe101->GetXaxis()->SetNdivisions(506);
   hframe101->GetXaxis()->SetLabelFont(42);
   hframe101->GetXaxis()->SetLabelOffset(0.007);
   hframe101->GetXaxis()->SetLabelSize(0.05);
   hframe101->GetXaxis()->SetTitleSize(0.06);
   hframe101->GetXaxis()->SetTitleOffset(0.9);
   hframe101->GetXaxis()->SetTitleFont(42);
   hframe101->GetYaxis()->SetTitle("Events");
   hframe101->GetYaxis()->SetLabelFont(42);
   hframe101->GetYaxis()->SetLabelOffset(0.007);
   hframe101->GetYaxis()->SetLabelSize(0.05);
   hframe101->GetYaxis()->SetTitleSize(0.06);
   hframe101->GetYaxis()->SetTitleOffset(1.25);
   hframe101->GetYaxis()->SetTitleFont(42);
   hframe101->GetZaxis()->SetLabelFont(42);
   hframe101->GetZaxis()->SetLabelOffset(0.007);
   hframe101->GetZaxis()->SetLabelSize(0.05);
   hframe101->GetZaxis()->SetTitleSize(0.06);
   hframe101->GetZaxis()->SetTitleFont(42);
   hframe101->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_top_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21","thsBackground_grouped_wh3l_top_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->SetMinimum(-0.2990534);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_21->SetMaximum(20.22881);
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
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(6,3.472178);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(7,4.692435);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(8,2.988578);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(9,1.999346);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(10,1.830451);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(11,2.548271);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(12,1.196343);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(13,3.645782);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(14,-0.08277722);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(15,1.111905);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(16,0.7136861);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(17,0.1981389);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinContent(19,16.62014);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(6,1.379817);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(7,1.632768);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(8,1.128654);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(9,1.098096);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(10,1.255819);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(11,1.274364);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(12,1.122273);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(13,1.456238);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(14,0.2162761);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(15,0.8986707);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(16,0.5454392);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(17,0.1401597);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetBinError(19,2.645399);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetEntries(340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l102->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_zveto_3l103 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_zveto_3l103","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinContent(6,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinContent(7,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinContent(8,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinContent(11,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinContent(14,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinContent(19,0.0850955);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinError(6,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinError(7,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinError(8,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinError(11,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinError(14,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetBinError(19,0.03638693);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(6,0.00445033);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(7,0.003292567);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(8,0.004390822);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(9,0.002537707);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(10,0.0005854479);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(11,0.0007149234);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(13,0.001188531);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(14,0.001411548);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinContent(19,0.01260448);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(6,0.001473178);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(7,0.001366807);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(8,0.001620367);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(9,0.001223592);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(10,0.0005854479);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(11,0.001142266);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(13,0.0008454088);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(14,0.001003534);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetBinError(19,0.002835263);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetEntries(61);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l104->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(6,0.5835532);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(7,0.2250284);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(8,0.2819803);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(9,0.107174);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(10,0.2365957);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(11,0.2528148);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(12,0.4172991);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(15,0.09806048);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinContent(19,0.1807983);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(6,0.3555375);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(7,0.1713521);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(8,0.2727687);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(9,0.107174);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(10,0.153771);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(11,0.1787944);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(12,0.223516);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(15,0.09806048);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetBinError(19,0.2007494);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetEntries(44);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l105->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(6,0.1506329);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(7,0.1873229);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(8,0.1388612);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(10,0.06406219);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(11,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(12,0.08998948);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(14,0.105262);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(18,0.045406);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinContent(19,0.2077088);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(6,0.07798991);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(7,0.08863796);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(8,0.08037906);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(10,0.04841528);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(11,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(12,0.06434838);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(14,0.05784587);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(18,0.045406);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetBinError(19,0.09603769);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetEntries(28);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l106->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107","histo_ZZ",20,0,100);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(6,0.1506329);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(7,0.1873229);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(8,0.1388612);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(10,0.06406219);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(11,0.04332647);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(12,0.08998948);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(14,0.105262);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(16,0.04142581);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(18,0.045406);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinContent(19,0.2077088);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(6,0.07798991);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(7,0.08863796);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(8,0.08037906);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(10,0.04841528);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(11,0.04332647);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(12,0.06434838);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(14,0.05784587);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(16,0.04142581);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(18,0.045406);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetBinError(19,0.09603769);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetEntries(28);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l107->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(6,0.03337788);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(7,0.04111007);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(8,0.0453476);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(9,0.03247966);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(10,0.02984802);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(11,0.02313453);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(12,0.03072291);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(13,0.0272359);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(14,0.02363476);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(15,0.01326628);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(16,0.006268937);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(17,0.002108966);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(18,0.003013009);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinContent(19,0.1486475);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(6,0.005782669);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(7,0.006220506);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(8,0.006002335);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(9,0.005764388);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(10,0.005020842);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(11,0.004730562);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(12,0.005762561);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(13,0.005445222);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(14,0.005231195);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(15,0.00406773);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(16,0.002604287);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(17,0.001766684);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(18,0.002131262);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetBinError(19,0.01230993);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l108->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_top_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_top_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22","thsSignal_grouped_wh3l_top_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_zveto_3l_stack_22->SetMaximum(0.1690053);
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
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(6,0.03337788);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(7,0.04111007);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(8,0.0453476);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(9,0.03247966);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(10,0.02984802);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(11,0.02313453);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(12,0.03072291);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(13,0.0272359);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(14,0.02363476);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(15,0.01326628);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(16,0.006268937);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(17,0.002108966);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(18,0.003013009);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinContent(19,0.1486475);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(6,0.005782669);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(7,0.006220506);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(8,0.006002335);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(9,0.005764388);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(10,0.005020842);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(11,0.004730562);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(12,0.005762561);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(13,0.005445222);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(14,0.005231195);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(15,0.00406773);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(16,0.002604287);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(17,0.001766684);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(18,0.002131262);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetBinError(19,0.01230993);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetEntries(808);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_zveto_3l109->GetZaxis()->SetTitleFont(42);
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
   5.278594,
   6.168078,
   4.355229,
   2.872942,
   2.963576,
   3.528497,
   2.361686,
   4.236988,
   0.5595117,
   1.843972,
   1.248013,
   0.238694,
   0.1095412,
   18.48748,
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
   2.174187,
   2.435177,
   1.806421,
   1.406224,
   1.622851,
   1.747892,
   1.51431,
   1.866889,
   0.3475763,
   1.10622,
   0.6727644,
   0.1656479,
   0.06545848,
   5.843456,
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
   2.174189,
   2.435178,
   1.80642,
   1.406225,
   1.622851,
   1.748277,
   1.51431,
   1.86689,
   0.2146458,
   1.10622,
   0.6727644,
   0.1656479,
   0.06545848,
   5.853886,
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
   Graph_Graph3021->SetMaximum(26.7755);
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
   4,
   4,
   3,
   3,
   7,
   2,
   5,
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
   1.914367,
   1.914367,
   1.632727,
   1.632727,
   2.581513,
   1.29183,
   2.159724,
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
   3.162815,
   3.162815,
   2.918242,
   2.918242,
   3.770356,
   2.63791,
   3.382539,
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_zveto_3l","VVV","F");

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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_zveto_3l","VVV","F");

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
   
   TH1F *hframe_copy110 = new TH1F("hframe_copy110","",1000,0,100);
   hframe_copy110->SetMinimum(0);
   hframe_copy110->SetMaximum(46.59032);
   hframe_copy110->SetDirectory(0);
   hframe_copy110->SetStats(0);
   hframe_copy110->SetLineStyle(0);
   hframe_copy110->SetMarkerStyle(20);
   hframe_copy110->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy110->GetXaxis()->SetNdivisions(506);
   hframe_copy110->GetXaxis()->SetLabelFont(42);
   hframe_copy110->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetXaxis()->SetLabelSize(0.05);
   hframe_copy110->GetXaxis()->SetTitleSize(0.06);
   hframe_copy110->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy110->GetXaxis()->SetTitleFont(42);
   hframe_copy110->GetYaxis()->SetTitle("Events");
   hframe_copy110->GetYaxis()->SetLabelFont(42);
   hframe_copy110->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetYaxis()->SetLabelSize(0.05);
   hframe_copy110->GetYaxis()->SetTitleSize(0.06);
   hframe_copy110->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy110->GetYaxis()->SetTitleFont(42);
   hframe_copy110->GetZaxis()->SetLabelFont(42);
   hframe_copy110->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetZaxis()->SetLabelSize(0.05);
   hframe_copy110->GetZaxis()->SetTitleSize(0.06);
   hframe_copy110->GetZaxis()->SetTitleFont(42);
   hframe_copy110->Draw("sameaxis");
   ccwh3l_top_13TeV_zveto_3l->Modified();
   ccwh3l_top_13TeV_zveto_3l->cd();
   ccwh3l_top_13TeV_zveto_3l->SetSelected(ccwh3l_top_13TeV_zveto_3l);
}
