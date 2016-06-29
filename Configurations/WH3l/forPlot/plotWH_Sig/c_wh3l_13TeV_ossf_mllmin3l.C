void c_wh3l_13TeV_ossf_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_mllmin3l/cc
//=========  (Wed Jun 29 01:33:56 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_mllmin3l = new TCanvas("ccwh3l_13TeV_ossf_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_mllmin3l->Range(-28,-1.58813,209.5,10.62825);
   ccwh3l_13TeV_ossf_mllmin3l->SetFillColor(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_ossf_mllmin3l->SetTickx(1);
   ccwh3l_13TeV_ossf_mllmin3l->SetTicky(1);
   ccwh3l_13TeV_ossf_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_mllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_mllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe131 = new TH1F("hframe131","",1000,10,200);
   hframe131->SetMinimum(0);
   hframe131->SetMaximum(10.01743);
   hframe131->SetDirectory(0);
   hframe131->SetStats(0);
   hframe131->SetLineStyle(0);
   hframe131->SetMarkerStyle(20);
   hframe131->GetXaxis()->SetTitle("min m_{ll} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l");
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27","thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->SetMinimum(-0.45898);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->SetMaximum(4.207323);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_27);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinContent(1,0.4355802);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinContent(2,1.918242);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinContent(3,0.8138962);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinContent(4,2.188176);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinContent(5,1.019978);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinContent(6,0.3806838);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinContent(9,-0.03771514);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinError(1,0.8945602);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinError(2,0.9027147);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinError(3,0.5878922);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinError(4,1.381027);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinError(5,0.7266675);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinError(6,0.6637901);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetBinError(9,0.03771514);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetBinContent(4,0.0285913);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetBinContent(6,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetBinError(4,0.02093881);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetBinError(6,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinContent(2,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinContent(3,0.001338787);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinContent(4,0.001125456);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinContent(5,0.001259243);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinContent(7,0.001326682);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinContent(8,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinContent(10,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinError(2,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinError(3,0.0009470446);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinError(4,0.0007219627);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinError(5,0.000890444);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinError(7,0.0009382037);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinError(8,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetBinError(10,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l134->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinContent(1,0.3820383);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinContent(2,0.3075112);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinContent(3,0.4384879);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinContent(4,0.4695703);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinContent(5,0.4647019);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinContent(6,0.5858595);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinError(1,0.1831067);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinError(2,0.2412625);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinError(3,0.2109827);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinError(4,0.2707473);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinError(5,0.2532026);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetBinError(6,0.2264765);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l135->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinContent(1,0.1184806);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinContent(2,0.0779526);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinContent(3,0.05496571);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinContent(4,0.05331504);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinContent(5,0.09574984);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinContent(6,0.09445183);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinContent(7,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinContent(9,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinError(1,0.06857912);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinError(2,0.0576159);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinError(3,0.03889657);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinError(4,0.04178168);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinError(5,0.05793301);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinError(6,0.06701456);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinError(7,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetBinError(9,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l136->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(1,1.146046);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(2,1.32871);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(3,1.437027);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(4,1.148833);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(5,0.7383369);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(6,0.7150599);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(7,0.1409531);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(8,0.1103344);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(9,0.08459242);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinContent(10,0.07048525);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(1,0.07870379);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(2,0.08484749);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(3,0.08866657);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(4,0.0793592);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(5,0.06326804);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(6,0.06246365);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(7,0.02703843);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(8,0.0242325);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(9,0.02126128);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetBinError(10,0.0198639);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(1,0.07356845);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(2,0.1231293);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(3,0.1463328);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(4,0.1173631);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(5,0.0850519);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(6,0.03994044);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(7,0.009448186);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(8,0.001023135);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinContent(9,0.00134312);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(1,0.009590768);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(2,0.01273597);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(3,0.01376935);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(4,0.01188833);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(5,0.008871671);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(6,0.00617363);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(7,0.003517434);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(8,0.0004669497);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetBinError(9,0.0006526265);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l");
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28","thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->SetMaximum(0.1681073);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_28);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(1,0.07356845);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(2,0.1231293);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(3,0.1463328);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(4,0.1173631);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(5,0.0850519);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(6,0.03994044);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(7,0.009448186);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(8,0.001023135);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinContent(9,0.00134312);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(1,0.009590768);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(2,0.01273597);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(3,0.01376935);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(4,0.01188833);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(5,0.008871671);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(6,0.00617363);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(7,0.003517434);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(8,0.0004669497);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetBinError(9,0.0006526265);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l139->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3027[20] = {
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
   Double_t _fy3027[20] = {
   2.097449,
   3.633029,
   2.745716,
   3.889611,
   2.320025,
   1.790529,
   0.1708423,
   0.1110222,
   0.0921554,
   0.08533421,
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
   Double_t _felx3027[20] = {
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
   Double_t _fely3027[20] = {
   0.8022851,
   1.454757,
   0.9748024,
   1.95203,
   1.159003,
   0.7638955,
   0.05671582,
   0.0250351,
   0.1051101,
   0.03477317,
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
   Double_t _fehx3027[20] = {
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
   Double_t _fehy3027[20] = {
   1.253173,
   1.454704,
   0.9744914,
   1.951985,
   1.158957,
   1.043507,
   0.05672151,
   0.02502269,
   0.1051103,
   0.03477089,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,219);
   Graph_Graph3027->SetMinimum(-0.5984098);
   Graph_Graph3027->SetMaximum(6.427051);
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
   Double_t _fy3028[20] = {
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
   Double_t _felx3028[20] = {
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
   Double_t _fely3028[20] = {
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
   Double_t _fehx3028[20] = {
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
   Double_t _fehy3028[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,219);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.262698);
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
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy140 = new TH1F("hframe_copy140","",1000,10,200);
   hframe_copy140->SetMinimum(0);
   hframe_copy140->SetMaximum(10.01743);
   hframe_copy140->SetDirectory(0);
   hframe_copy140->SetStats(0);
   hframe_copy140->SetLineStyle(0);
   hframe_copy140->SetMarkerStyle(20);
   hframe_copy140->GetXaxis()->SetTitle("min m_{ll} [GeV]");
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
   ccwh3l_13TeV_ossf_mllmin3l->Modified();
   ccwh3l_13TeV_ossf_mllmin3l->cd();
   ccwh3l_13TeV_ossf_mllmin3l->SetSelected(ccwh3l_13TeV_ossf_mllmin3l);
}
