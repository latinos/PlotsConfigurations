void c_wh3l_plot_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_zveto_3l/cc
//=========  (Wed Jun 29 01:51:38 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_zveto_3l = new TCanvas("ccwh3l_plot_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_plot_13TeV_zveto_3l->Range(-20,-2.543751,105,17.02356);
   ccwh3l_plot_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_plot_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_plot_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_plot_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_plot_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_plot_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,0,100);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(16.0452);
   hframe121->SetDirectory(0);
   hframe121->SetStats(0);
   hframe121->SetLineStyle(0);
   hframe121->SetMarkerStyle(20);
   hframe121->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_plot_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25","thsBackground_grouped_wh3l_plot_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->SetMinimum(-0.5904275);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->SetMaximum(6.738983);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(7,0.584341);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(9,0.7650418);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(10,0.7963334);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(16,-0.3071204);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(17,0.01024054);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinContent(19,4.137712);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(7,0.4000869);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(9,0.8314785);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(10,0.7976046);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(16,0.283307);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(17,0.01024054);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetBinError(19,1.512693);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetEntries(118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinContent(19,0.03059851);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetBinError(19,0.02166783);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(6,0.001278693);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(7,0.002470527);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(8,0.001810379);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(9,0.001525599);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(10,0.0002902478);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(11,0.0005113052);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(12,0.0006380157);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(14,0.0004196011);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinContent(19,0.004576297);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(6,0.0009044022);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(7,0.001240684);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(8,0.001048971);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(9,0.0009554437);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(10,0.0002902478);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(11,0.0005113052);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(12,0.0006380157);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(14,0.0004196011);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetBinError(19,0.001638661);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetEntries(25);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinContent(19,0.1440144);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetBinError(19,0.07446725);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(6,1.167796);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(7,0.9791938);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(8,0.8952803);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(9,0.8430293);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(10,0.7337703);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(11,0.6508047);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(12,0.5739258);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(13,0.5461557);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(14,0.4270278);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(15,0.4293013);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(16,0.4128241);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(17,0.03667358);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(18,0.05979598);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinContent(19,1.720898);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(6,0.07931164);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(7,0.07296996);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(8,0.07027891);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(9,0.06730616);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(10,0.06424746);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(11,0.05932829);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(12,0.05567756);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(13,0.05447657);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(14,0.04748225);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(15,0.0485523);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(16,0.04700815);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(17,0.01424065);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(18,0.01763162);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetBinError(19,0.09631729);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetEntries(1945);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(6,0.06899975);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(7,0.05099779);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(8,0.07983971);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(9,0.05763549);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(10,0.0633468);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(11,0.0439497);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(12,0.07135419);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(13,0.04780221);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(14,0.03099094);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(15,0.03079793);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(16,0.01593661);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinContent(19,0.2744313);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(6,0.009105933);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(7,0.007077838);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(8,0.009468989);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(9,0.007803731);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(10,0.008466243);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(11,0.007575641);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(12,0.009778967);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(13,0.008130459);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(14,0.00631341);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(15,0.006142341);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(16,0.004137944);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetBinError(19,0.0177025);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_plot_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26","thsSignal_grouped_wh3l_plot_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->SetMaximum(0.3067405);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(6,0.06899975);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(7,0.05099779);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(8,0.07983971);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(9,0.05763549);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(10,0.0633468);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(11,0.0439497);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(12,0.07135419);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(13,0.04780221);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(14,0.03099094);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(15,0.03079793);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(16,0.01593661);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinContent(19,0.2744313);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(6,0.009105933);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(7,0.007077838);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(8,0.009468989);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(9,0.007803731);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(10,0.008466243);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(11,0.007575641);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(12,0.009778967);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(13,0.008130459);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(14,0.00631341);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(15,0.006142341);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(16,0.004137944);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetBinError(19,0.0177025);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l129->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3025[20] = {
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
   Double_t _fy3025[20] = {
   0,
   0,
   0,
   0,
   0,
   2.815123,
   2.149951,
   2.330524,
   1.79812,
   1.876689,
   1.85403,
   1.227673,
   0.9856427,
   1.750767,
   0.4293013,
   0.1057037,
   0.04691412,
   0.05979598,
   6.143648,
   0};
   Double_t _felx3025[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3025[20] = {
   0,
   0,
   0,
   0,
   0,
   0.9001286,
   0.826668,
   1.163245,
   1.018989,
   1.081256,
   1.134823,
   0.6135086,
   0.462821,
   0.9628981,
   0.05257361,
   0.3478832,
   0.02475474,
   0.01772484,
   2.320911,
   0};
   Double_t _fehx3025[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3025[20] = {
   0,
   0,
   0,
   0,
   0,
   1.370301,
   0.8265638,
   1.163208,
   1.083135,
   1.082427,
   1.23517,
   0.6134601,
   0.5372829,
   0.9628847,
   0.05221461,
   0.347875,
   0.02475779,
   0.01771457,
   2.320808,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,110);
   Graph_Graph3025->SetMinimum(-1.112843);
   Graph_Graph3025->SetMaximum(9.335119);
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
   Double_t _fy3026[20] = {
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
   Double_t _felx3026[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3026[20] = {
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
   Double_t _fehx3026[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3026[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,110);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(1.262698);
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
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy130 = new TH1F("hframe_copy130","",1000,0,100);
   hframe_copy130->SetMinimum(0);
   hframe_copy130->SetMaximum(16.0452);
   hframe_copy130->SetDirectory(0);
   hframe_copy130->SetStats(0);
   hframe_copy130->SetLineStyle(0);
   hframe_copy130->SetMarkerStyle(20);
   hframe_copy130->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
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
   ccwh3l_plot_13TeV_zveto_3l->Modified();
   ccwh3l_plot_13TeV_zveto_3l->cd();
   ccwh3l_plot_13TeV_zveto_3l->SetSelected(ccwh3l_plot_13TeV_zveto_3l);
}
