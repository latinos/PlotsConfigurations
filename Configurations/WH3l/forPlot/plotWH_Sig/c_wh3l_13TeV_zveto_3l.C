void c_wh3l_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_zveto_3l/cc
//=========  (Tue Jun 28 13:56:22 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_zveto_3l = new TCanvas("ccwh3l_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_13TeV_zveto_3l->Range(-20,-1.925876,105,12.88856);
   ccwh3l_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe191 = new TH1F("hframe191","",1000,0,100);
   hframe191->SetMinimum(0);
   hframe191->SetMaximum(12.14783);
   hframe191->SetDirectory(0);
   hframe191->SetStats(0);
   hframe191->SetLineStyle(0);
   hframe191->SetMarkerStyle(20);
   hframe191->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe191->GetXaxis()->SetNdivisions(506);
   hframe191->GetXaxis()->SetLabelFont(42);
   hframe191->GetXaxis()->SetLabelOffset(0.007);
   hframe191->GetXaxis()->SetLabelSize(0.05);
   hframe191->GetXaxis()->SetTitleSize(0.06);
   hframe191->GetXaxis()->SetTitleOffset(0.9);
   hframe191->GetXaxis()->SetTitleFont(42);
   hframe191->GetYaxis()->SetTitle("Events");
   hframe191->GetYaxis()->SetLabelFont(42);
   hframe191->GetYaxis()->SetLabelOffset(0.007);
   hframe191->GetYaxis()->SetLabelSize(0.05);
   hframe191->GetYaxis()->SetTitleSize(0.06);
   hframe191->GetYaxis()->SetTitleOffset(1.25);
   hframe191->GetYaxis()->SetTitleFont(42);
   hframe191->GetZaxis()->SetLabelFont(42);
   hframe191->GetZaxis()->SetLabelOffset(0.007);
   hframe191->GetZaxis()->SetLabelSize(0.05);
   hframe191->GetZaxis()->SetTitleSize(0.06);
   hframe191->GetZaxis()->SetTitleFont(42);
   hframe191->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39 = new TH1F("thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39","thsBackground_grouped_wh3l_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->SetMinimum(-0.5896294);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->SetMaximum(5.241399);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_39);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_zveto_3l192 = new TH1D("new_histo_group_Fake_wh3l_13TeV_zveto_3l192","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(7,0.2729209);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(9,0.8033053);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(10,0.8009671);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(16,-0.3063235);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinContent(19,3.549345);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(7,0.2511714);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(9,0.8305977);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(10,0.7975911);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(16,0.2833059);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetBinError(19,1.442463);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_zveto_3l193 = new TH1D("new_histo_group_WW_wh3l_13TeV_zveto_3l193","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinContent(19,0.03059851);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetBinError(19,0.02166783);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_zveto_3l194 = new TH1D("new_histo_group_VVV_wh3l_13TeV_zveto_3l194","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinContent(6,0.001278693);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinContent(7,0.001941612);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinContent(8,0.001278049);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinContent(9,0.0008419221);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinContent(10,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinContent(19,0.002688269);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinError(6,0.0009044022);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinError(7,0.001122295);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinError(8,0.0009038618);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinError(9,0.0006674273);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinError(10,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetBinError(19,0.001354027);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_zveto_3l195 = new TH1D("new_histo_group_Vg_wh3l_13TeV_zveto_3l195","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_zveto_3l196 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_zveto_3l196","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinContent(19,0.1440144);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetBinError(19,0.07446725);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_zveto_3l197 = new TH1D("new_histo_group_WZ_wh3l_13TeV_zveto_3l197","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(6,1.003038);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(7,0.7592491);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(8,0.7267044);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(9,0.7066543);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(10,0.635128);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(11,0.5566121);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(12,0.5001476);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(13,0.4922324);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(14,0.385523);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(15,0.3529219);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(16,0.3902687);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(17,0.009517326);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(18,0.0131633);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinContent(19,0.8580563);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(6,0.07352977);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(7,0.06414133);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(8,0.0631772);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(9,0.06197327);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(10,0.05979633);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(11,0.05498297);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(12,0.05210945);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(13,0.05181482);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(14,0.04521306);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(15,0.04396975);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(16,0.04573766);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(17,0.006799546);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(18,0.009323936);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetBinError(19,0.06755072);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_zveto_3l198 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_zveto_3l198","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(6,0.06482374);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(7,0.05099779);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(8,0.07983971);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(9,0.05763549);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(10,0.0633468);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(11,0.0439497);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(12,0.07135419);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(13,0.04780221);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(14,0.03099094);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(15,0.02923922);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(16,0.01593661);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinContent(19,0.2744313);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(6,0.008805591);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(7,0.007077838);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(8,0.009468989);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(9,0.007803731);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(10,0.008466243);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(11,0.007575641);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(12,0.009778967);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(13,0.008130459);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(14,0.00631341);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(15,0.005941278);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(16,0.004137944);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetBinError(19,0.0177025);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40 = new TH1F("thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40","thsSignal_grouped_wh3l_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->SetMaximum(0.3067405);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_40);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_zveto_3l199 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_zveto_3l199","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(6,0.06482374);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(7,0.05099779);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(8,0.07983971);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(9,0.05763549);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(10,0.0633468);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(11,0.0439497);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(12,0.07135419);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(13,0.04780221);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(14,0.03099094);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(15,0.02923922);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(16,0.01593661);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinContent(19,0.2744313);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(6,0.008805591);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(7,0.007077838);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(8,0.009468989);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(9,0.007803731);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(10,0.008466243);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(11,0.007575641);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(12,0.009778967);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(13,0.008130459);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(14,0.00631341);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(15,0.005941278);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(16,0.004137944);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetBinError(19,0.0177025);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3039[20] = {
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
   Double_t _fy3039[20] = {
   0,
   0,
   0,
   0,
   0,
   2.650364,
   1.618058,
   2.161415,
   1.699325,
   1.78268,
   1.759326,
   1.153257,
   0.9317193,
   1.708842,
   0.3529219,
   0.08394526,
   0.009517326,
   0.0131633,
   4.584702,
   0};
   Double_t _felx3039[20] = {
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
   Double_t _fely3039[20] = {
   0,
   0,
   0,
   0,
   0,
   0.8875309,
   0.6467906,
   1.142456,
   1.043119,
   1.067999,
   1.114477,
   0.5992545,
   0.4551969,
   0.9302318,
   0.04396978,
   0.3416354,
   0.006799547,
   0.009323951,
   1.928184,
   0};
   Double_t _fehx3039[20] = {
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
   Double_t _fehy3039[20] = {
   0,
   0,
   0,
   0,
   0,
   1.360296,
   0.6467904,
   1.142456,
   1.069691,
   1.067999,
   1.216111,
   0.5992545,
   0.5304996,
   0.9302319,
   0.04396978,
   0.3416354,
   0.006799547,
   0.009323952,
   1.928184,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,0,110);
   Graph_Graph3039->SetMinimum(-0.9347478);
   Graph_Graph3039->SetMaximum(7.189945);
   Graph_Graph3039->SetDirectory(0);
   Graph_Graph3039->SetStats(0);
   Graph_Graph3039->SetLineStyle(0);
   Graph_Graph3039->SetMarkerStyle(20);
   Graph_Graph3039->GetXaxis()->SetLabelFont(42);
   Graph_Graph3039->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3039->GetXaxis()->SetTitleFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3039->GetYaxis()->SetTitleFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3039);
   
   grae->Draw("2");
   
   Double_t _fx3040[20] = {
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
   Double_t _fy3040[20] = {
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
   Double_t _felx3040[20] = {
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
   Double_t _fely3040[20] = {
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
   Double_t _fehx3040[20] = {
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
   Double_t _fehy3040[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","",100,0,110);
   Graph_Graph3040->SetMinimum(0);
   Graph_Graph3040->SetMaximum(1.262698);
   Graph_Graph3040->SetDirectory(0);
   Graph_Graph3040->SetStats(0);
   Graph_Graph3040->SetLineStyle(0);
   Graph_Graph3040->SetMarkerStyle(20);
   Graph_Graph3040->GetXaxis()->SetLabelFont(42);
   Graph_Graph3040->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3040->GetXaxis()->SetTitleFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3040->GetYaxis()->SetTitleFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3040);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy200 = new TH1F("hframe_copy200","",1000,0,100);
   hframe_copy200->SetMinimum(0);
   hframe_copy200->SetMaximum(12.14783);
   hframe_copy200->SetDirectory(0);
   hframe_copy200->SetStats(0);
   hframe_copy200->SetLineStyle(0);
   hframe_copy200->SetMarkerStyle(20);
   hframe_copy200->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy200->GetXaxis()->SetNdivisions(506);
   hframe_copy200->GetXaxis()->SetLabelFont(42);
   hframe_copy200->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetXaxis()->SetLabelSize(0.05);
   hframe_copy200->GetXaxis()->SetTitleSize(0.06);
   hframe_copy200->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy200->GetXaxis()->SetTitleFont(42);
   hframe_copy200->GetYaxis()->SetTitle("Events");
   hframe_copy200->GetYaxis()->SetLabelFont(42);
   hframe_copy200->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetYaxis()->SetLabelSize(0.05);
   hframe_copy200->GetYaxis()->SetTitleSize(0.06);
   hframe_copy200->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy200->GetYaxis()->SetTitleFont(42);
   hframe_copy200->GetZaxis()->SetLabelFont(42);
   hframe_copy200->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetZaxis()->SetLabelSize(0.05);
   hframe_copy200->GetZaxis()->SetTitleSize(0.06);
   hframe_copy200->GetZaxis()->SetTitleFont(42);
   hframe_copy200->Draw("sameaxis");
   ccwh3l_13TeV_zveto_3l->Modified();
   ccwh3l_13TeV_zveto_3l->cd();
   ccwh3l_13TeV_zveto_3l->SetSelected(ccwh3l_13TeV_zveto_3l);
}
