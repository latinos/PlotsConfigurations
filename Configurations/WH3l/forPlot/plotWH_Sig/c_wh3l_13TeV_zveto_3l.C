void c_wh3l_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_zveto_3l/cc
//=========  (Wed Jun 29 01:51:48 2016) by ROOT version6.02/13
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
   
   TH1F *hframe321 = new TH1F("hframe321","",1000,0,100);
   hframe321->SetMinimum(0);
   hframe321->SetMaximum(12.14783);
   hframe321->SetDirectory(0);
   hframe321->SetStats(0);
   hframe321->SetLineStyle(0);
   hframe321->SetMarkerStyle(20);
   hframe321->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe321->GetXaxis()->SetNdivisions(506);
   hframe321->GetXaxis()->SetLabelFont(42);
   hframe321->GetXaxis()->SetLabelOffset(0.007);
   hframe321->GetXaxis()->SetLabelSize(0.05);
   hframe321->GetXaxis()->SetTitleSize(0.06);
   hframe321->GetXaxis()->SetTitleOffset(0.9);
   hframe321->GetXaxis()->SetTitleFont(42);
   hframe321->GetYaxis()->SetTitle("Events");
   hframe321->GetYaxis()->SetLabelFont(42);
   hframe321->GetYaxis()->SetLabelOffset(0.007);
   hframe321->GetYaxis()->SetLabelSize(0.05);
   hframe321->GetYaxis()->SetTitleSize(0.06);
   hframe321->GetYaxis()->SetTitleOffset(1.25);
   hframe321->GetYaxis()->SetTitleFont(42);
   hframe321->GetZaxis()->SetLabelFont(42);
   hframe321->GetZaxis()->SetLabelOffset(0.007);
   hframe321->GetZaxis()->SetLabelSize(0.05);
   hframe321->GetZaxis()->SetTitleSize(0.06);
   hframe321->GetZaxis()->SetTitleFont(42);
   hframe321->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65 = new TH1F("thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65","thsBackground_grouped_wh3l_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->SetMinimum(-0.5896294);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->SetMaximum(5.241399);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_65);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_zveto_3l322 = new TH1D("new_histo_group_Fake_wh3l_13TeV_zveto_3l322","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(7,0.2729209);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(9,0.8033053);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(10,0.8009671);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(16,-0.3063235);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinContent(19,3.549345);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(7,0.2511714);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(9,0.8305977);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(10,0.7975911);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(16,0.2833059);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetBinError(19,1.442463);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_zveto_3l322->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_zveto_3l323 = new TH1D("new_histo_group_WW_wh3l_13TeV_zveto_3l323","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinContent(19,0.03059851);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetBinError(19,0.02166783);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l323->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_zveto_3l324 = new TH1D("new_histo_group_VVV_wh3l_13TeV_zveto_3l324","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinContent(6,0.001278693);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinContent(7,0.001941612);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinContent(8,0.001278049);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinContent(9,0.0008419221);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinContent(10,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinContent(19,0.002688269);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinError(6,0.0009044022);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinError(7,0.001122295);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinError(8,0.0009038618);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinError(9,0.0006674273);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinError(10,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetBinError(19,0.001354027);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l324->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_zveto_3l325 = new TH1D("new_histo_group_Vg_wh3l_13TeV_zveto_3l325","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_zveto_3l325->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_zveto_3l326 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_zveto_3l326","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinContent(19,0.1440144);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetBinError(19,0.07446725);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_zveto_3l326->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_zveto_3l327 = new TH1D("new_histo_group_WZ_wh3l_13TeV_zveto_3l327","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(6,1.003038);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(7,0.7592491);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(8,0.7267044);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(9,0.7066543);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(10,0.635128);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(11,0.5566121);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(12,0.5001476);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(13,0.4922324);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(14,0.385523);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(15,0.3529219);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(16,0.3902687);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(17,0.009517326);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(18,0.0131633);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinContent(19,0.8580563);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(6,0.07352977);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(7,0.06414133);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(8,0.0631772);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(9,0.06197327);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(10,0.05979633);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(11,0.05498297);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(12,0.05210945);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(13,0.05181482);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(14,0.04521306);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(15,0.04396975);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(16,0.04573766);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(17,0.006799546);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(18,0.009323936);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetBinError(19,0.06755072);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_zveto_3l327->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_zveto_3l328 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_zveto_3l328","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(6,0.06482374);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(7,0.05099779);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(8,0.07983971);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(9,0.05763549);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(10,0.0633468);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(11,0.0439497);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(12,0.07135419);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(13,0.04780221);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(14,0.03099094);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(15,0.02923922);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(16,0.01593661);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinContent(19,0.2744313);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(6,0.008805591);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(7,0.007077838);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(8,0.009468989);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(9,0.007803731);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(10,0.008466243);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(11,0.007575641);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(12,0.009778967);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(13,0.008130459);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(14,0.00631341);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(15,0.005941278);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(16,0.004137944);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetBinError(19,0.0177025);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l328->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66 = new TH1F("thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66","thsSignal_grouped_wh3l_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->SetMaximum(0.3067405);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_66);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_zveto_3l329 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_zveto_3l329","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(6,0.06482374);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(7,0.05099779);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(8,0.07983971);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(9,0.05763549);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(10,0.0633468);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(11,0.0439497);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(12,0.07135419);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(13,0.04780221);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(14,0.03099094);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(15,0.02923922);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(16,0.01593661);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinContent(19,0.2744313);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(6,0.008805591);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(7,0.007077838);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(8,0.009468989);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(9,0.007803731);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(10,0.008466243);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(11,0.007575641);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(12,0.009778967);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(13,0.008130459);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(14,0.00631341);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(15,0.005941278);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(16,0.004137944);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetBinError(19,0.0177025);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l329->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3065[20] = {
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
   Double_t _fy3065[20] = {
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
   Double_t _felx3065[20] = {
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
   Double_t _fely3065[20] = {
   0,
   0,
   0,
   0,
   0,
   0.8941427,
   0.6502004,
   1.15616,
   1.053878,
   1.078535,
   1.13014,
   0.6094332,
   0.4601789,
   0.9605187,
   0.04760109,
   0.3465604,
   0.006817004,
   0.009326656,
   2.031852,
   0};
   Double_t _fehx3065[20] = {
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
   Double_t _fehy3065[20] = {
   0,
   0,
   0,
   0,
   0,
   1.364371,
   0.6501371,
   1.156127,
   1.080162,
   1.078481,
   1.230461,
   0.6094012,
   0.5346309,
   0.960507,
   0.04736289,
   0.3465509,
   0.006823593,
   0.00932672,
   2.031832,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3065,_fy3065,_felx3065,_fehx3065,_fely3065,_fehy3065);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3065 = new TH1F("Graph_Graph3065","",100,0,110);
   Graph_Graph3065->SetMinimum(-0.9505301);
   Graph_Graph3065->SetMaximum(7.304449);
   Graph_Graph3065->SetDirectory(0);
   Graph_Graph3065->SetStats(0);
   Graph_Graph3065->SetLineStyle(0);
   Graph_Graph3065->SetMarkerStyle(20);
   Graph_Graph3065->GetXaxis()->SetLabelFont(42);
   Graph_Graph3065->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3065->GetXaxis()->SetTitleFont(42);
   Graph_Graph3065->GetYaxis()->SetLabelFont(42);
   Graph_Graph3065->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3065->GetYaxis()->SetTitleFont(42);
   Graph_Graph3065->GetZaxis()->SetLabelFont(42);
   Graph_Graph3065->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3065);
   
   grae->Draw("2");
   
   Double_t _fx3066[20] = {
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
   Double_t _fy3066[20] = {
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
   Double_t _felx3066[20] = {
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
   Double_t _fely3066[20] = {
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
   Double_t _fehx3066[20] = {
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
   Double_t _fehy3066[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3066,_fy3066,_felx3066,_fehx3066,_fely3066,_fehy3066);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3066 = new TH1F("Graph_Graph3066","",100,0,110);
   Graph_Graph3066->SetMinimum(0);
   Graph_Graph3066->SetMaximum(1.262698);
   Graph_Graph3066->SetDirectory(0);
   Graph_Graph3066->SetStats(0);
   Graph_Graph3066->SetLineStyle(0);
   Graph_Graph3066->SetMarkerStyle(20);
   Graph_Graph3066->GetXaxis()->SetLabelFont(42);
   Graph_Graph3066->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3066->GetXaxis()->SetTitleFont(42);
   Graph_Graph3066->GetYaxis()->SetLabelFont(42);
   Graph_Graph3066->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3066->GetYaxis()->SetTitleFont(42);
   Graph_Graph3066->GetZaxis()->SetLabelFont(42);
   Graph_Graph3066->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3066);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   TH1F *hframe_copy330 = new TH1F("hframe_copy330","",1000,0,100);
   hframe_copy330->SetMinimum(0);
   hframe_copy330->SetMaximum(12.14783);
   hframe_copy330->SetDirectory(0);
   hframe_copy330->SetStats(0);
   hframe_copy330->SetLineStyle(0);
   hframe_copy330->SetMarkerStyle(20);
   hframe_copy330->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy330->GetXaxis()->SetNdivisions(506);
   hframe_copy330->GetXaxis()->SetLabelFont(42);
   hframe_copy330->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetXaxis()->SetLabelSize(0.05);
   hframe_copy330->GetXaxis()->SetTitleSize(0.06);
   hframe_copy330->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy330->GetXaxis()->SetTitleFont(42);
   hframe_copy330->GetYaxis()->SetTitle("Events");
   hframe_copy330->GetYaxis()->SetLabelFont(42);
   hframe_copy330->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetYaxis()->SetLabelSize(0.05);
   hframe_copy330->GetYaxis()->SetTitleSize(0.06);
   hframe_copy330->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy330->GetYaxis()->SetTitleFont(42);
   hframe_copy330->GetZaxis()->SetLabelFont(42);
   hframe_copy330->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetZaxis()->SetLabelSize(0.05);
   hframe_copy330->GetZaxis()->SetTitleSize(0.06);
   hframe_copy330->GetZaxis()->SetTitleFont(42);
   hframe_copy330->Draw("sameaxis");
   ccwh3l_13TeV_zveto_3l->Modified();
   ccwh3l_13TeV_zveto_3l->cd();
   ccwh3l_13TeV_zveto_3l->SetSelected(ccwh3l_13TeV_zveto_3l);
}
