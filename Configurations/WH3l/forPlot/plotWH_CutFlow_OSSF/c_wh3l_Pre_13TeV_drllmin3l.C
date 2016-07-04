void c_wh3l_Pre_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_drllmin3l/cc
//=========  (Sat Jul  2 21:43:46 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_drllmin3l = new TCanvas("ccwh3l_Pre_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_drllmin3l->Range(-1.2,-213.9204,6.3,1431.621);
   ccwh3l_Pre_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_Pre_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_Pre_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe331 = new TH1F("hframe331","",1000,0,6);
   hframe331->SetMinimum(0);
   hframe331->SetMaximum(1349.344);
   hframe331->SetDirectory(0);
   hframe331->SetStats(0);
   hframe331->SetLineStyle(0);
   hframe331->SetMarkerStyle(20);
   hframe331->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe331->GetXaxis()->SetNdivisions(506);
   hframe331->GetXaxis()->SetLabelFont(42);
   hframe331->GetXaxis()->SetLabelOffset(0.007);
   hframe331->GetXaxis()->SetLabelSize(0.05);
   hframe331->GetXaxis()->SetTitleSize(0.06);
   hframe331->GetXaxis()->SetTitleOffset(0.9);
   hframe331->GetXaxis()->SetTitleFont(42);
   hframe331->GetYaxis()->SetTitle("Events");
   hframe331->GetYaxis()->SetLabelFont(42);
   hframe331->GetYaxis()->SetLabelOffset(0.007);
   hframe331->GetYaxis()->SetLabelSize(0.05);
   hframe331->GetYaxis()->SetTitleSize(0.06);
   hframe331->GetYaxis()->SetTitleOffset(1.25);
   hframe331->GetYaxis()->SetTitleFont(42);
   hframe331->GetZaxis()->SetLabelFont(42);
   hframe331->GetZaxis()->SetLabelOffset(0.007);
   hframe331->GetZaxis()->SetLabelSize(0.05);
   hframe331->GetZaxis()->SetTitleSize(0.06);
   hframe331->GetZaxis()->SetTitleFont(42);
   hframe331->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67","thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->SetMinimum(-0.1630802);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->SetMaximum(494.3955);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l_stack_67);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetBinContent(1,51.85235);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetBinContent(2,137.0763);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetBinContent(3,98.42778);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetBinContent(4,1.50082);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetBinError(1,5.652189);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetBinError(2,9.133179);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetBinError(3,8.069909);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetBinError(4,0.7699591);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l332->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetBinContent(1,0.1431787);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetBinContent(2,0.1764016);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetBinContent(3,0.1149167);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetBinError(1,0.04741078);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetBinError(2,0.05154736);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetBinError(3,0.04276817);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l333->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetBinContent(1,1.880152);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetBinContent(2,2.601694);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetBinContent(3,0.7270996);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetBinContent(4,0.0009197505);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetBinError(1,0.05927937);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetBinError(2,0.06966911);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetBinError(3,0.0381617);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetBinError(4,0.0009197505);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l334->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetBinContent(1,52.66849);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetBinContent(2,95.35024);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetBinContent(3,78.51444);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetBinContent(4,0.004832751);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetBinError(1,2.991409);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetBinError(2,3.954004);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetBinError(3,3.33646);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetBinError(4,0.167913);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l335->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetBinContent(1,10.61957);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetBinContent(2,30.60404);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetBinContent(3,12.10943);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetBinContent(4,0.1846628);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetBinError(1,0.6649532);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetBinError(2,1.119271);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetBinError(3,0.7069989);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetBinError(4,0.08302036);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l336->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetBinContent(1,84.82557);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetBinContent(2,202.4852);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetBinContent(3,80.59398);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetBinContent(4,0.7446983);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetBinError(1,0.6791837);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetBinError(2,1.050723);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetBinError(3,0.6630777);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetBinError(4,0.06211731);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l337->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetBinContent(1,2.027401);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetBinContent(2,2.559085);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetBinContent(3,0.4206681);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetBinError(1,0.04644398);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetBinError(2,0.05195374);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetBinError(3,0.02195667);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l338->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68","thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->SetMaximum(2.741591);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l_stack_68);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetBinContent(1,2.027401);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetBinContent(2,2.559085);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetBinContent(3,0.4206681);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetBinError(1,0.04644398);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetBinError(2,0.05195374);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetBinError(3,0.02195667);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l339->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3067[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3067[5] = {
   201.9893,
   468.2938,
   270.4877,
   2.435933,
   0};
   Double_t _felx3067[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3067[5] = {
   21.36907,
   51.22044,
   37.16962,
   1.060635,
   0};
   Double_t _fehx3067[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3067[5] = {
   21.31871,
   51.1712,
   37.15664,
   1.204937,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3067,_fy3067,_felx3067,_fehx3067,_fely3067,_fehy3067);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3067 = new TH1F("Graph_Graph3067","",100,0,6.6);
   Graph_Graph3067->SetMinimum(0);
   Graph_Graph3067->SetMaximum(571.4115);
   Graph_Graph3067->SetDirectory(0);
   Graph_Graph3067->SetStats(0);
   Graph_Graph3067->SetLineStyle(0);
   Graph_Graph3067->SetMarkerStyle(20);
   Graph_Graph3067->GetXaxis()->SetLabelFont(42);
   Graph_Graph3067->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3067->GetXaxis()->SetTitleFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelFont(42);
   Graph_Graph3067->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3067->GetYaxis()->SetTitleFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelFont(42);
   Graph_Graph3067->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3067->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3067->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3067);
   
   grae->Draw("2");
   
   Double_t _fx3068[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3068[5] = {
   227,
   517,
   308,
   2,
   0};
   Double_t _felx3068[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3068[5] = {
   15.05574,
   22.73077,
   17.54077,
   1.29183,
   0};
   Double_t _fehx3068[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3068[5] = {
   16.089,
   23.75281,
   18.56933,
   2.63791,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3068,_fy3068,_felx3068,_fehx3068,_fely3068,_fehy3068);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3068 = new TH1F("Graph_Graph3068","",100,0,6.6);
   Graph_Graph3068->SetMinimum(0);
   Graph_Graph3068->SetMaximum(594.8281);
   Graph_Graph3068->SetDirectory(0);
   Graph_Graph3068->SetStats(0);
   Graph_Graph3068->SetLineStyle(0);
   Graph_Graph3068->SetMarkerStyle(20);
   Graph_Graph3068->GetXaxis()->SetLabelFont(42);
   Graph_Graph3068->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3068->GetXaxis()->SetTitleFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelFont(42);
   Graph_Graph3068->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3068->GetYaxis()->SetTitleFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelFont(42);
   Graph_Graph3068->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3068->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3068->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3068);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy340 = new TH1F("hframe_copy340","",1000,0,6);
   hframe_copy340->SetMinimum(0);
   hframe_copy340->SetMaximum(1349.344);
   hframe_copy340->SetDirectory(0);
   hframe_copy340->SetStats(0);
   hframe_copy340->SetLineStyle(0);
   hframe_copy340->SetMarkerStyle(20);
   hframe_copy340->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy340->GetXaxis()->SetNdivisions(506);
   hframe_copy340->GetXaxis()->SetLabelFont(42);
   hframe_copy340->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetXaxis()->SetLabelSize(0.05);
   hframe_copy340->GetXaxis()->SetTitleSize(0.06);
   hframe_copy340->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy340->GetXaxis()->SetTitleFont(42);
   hframe_copy340->GetYaxis()->SetTitle("Events");
   hframe_copy340->GetYaxis()->SetLabelFont(42);
   hframe_copy340->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetYaxis()->SetLabelSize(0.05);
   hframe_copy340->GetYaxis()->SetTitleSize(0.06);
   hframe_copy340->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy340->GetYaxis()->SetTitleFont(42);
   hframe_copy340->GetZaxis()->SetLabelFont(42);
   hframe_copy340->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy340->GetZaxis()->SetLabelSize(0.05);
   hframe_copy340->GetZaxis()->SetTitleSize(0.06);
   hframe_copy340->GetZaxis()->SetTitleFont(42);
   hframe_copy340->Draw("sameaxis");
   ccwh3l_Pre_13TeV_drllmin3l->Modified();
   ccwh3l_Pre_13TeV_drllmin3l->cd();
   ccwh3l_Pre_13TeV_drllmin3l->SetSelected(ccwh3l_Pre_13TeV_drllmin3l);
}
