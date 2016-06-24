void c_wh3l_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_drllmin3l/cc
//=========  (Fri Jun 24 14:14:54 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_drllmin3l = new TCanvas("ccwh3l_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_drllmin3l->Range(-2,-46.08739,10.5,308.431);
   ccwh3l_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe55 = new TH1F("hframe55","",1000,0,10);
   hframe55->SetMinimum(0);
   hframe55->SetMaximum(290.7051);
   hframe55->SetDirectory(0);
   hframe55->SetStats(0);
   hframe55->SetLineStyle(0);
   hframe55->SetMarkerStyle(20);
   hframe55->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe55->GetXaxis()->SetNdivisions(506);
   hframe55->GetXaxis()->SetLabelFont(42);
   hframe55->GetXaxis()->SetLabelOffset(0.007);
   hframe55->GetXaxis()->SetLabelSize(0.05);
   hframe55->GetXaxis()->SetTitleSize(0.06);
   hframe55->GetXaxis()->SetTitleOffset(0.9);
   hframe55->GetXaxis()->SetTitleFont(42);
   hframe55->GetYaxis()->SetTitle("Events");
   hframe55->GetYaxis()->SetLabelFont(42);
   hframe55->GetYaxis()->SetLabelOffset(0.007);
   hframe55->GetYaxis()->SetLabelSize(0.05);
   hframe55->GetYaxis()->SetTitleSize(0.06);
   hframe55->GetYaxis()->SetTitleOffset(1.25);
   hframe55->GetYaxis()->SetTitleFont(42);
   hframe55->GetZaxis()->SetLabelFont(42);
   hframe55->GetZaxis()->SetLabelOffset(0.007);
   hframe55->GetZaxis()->SetLabelSize(0.05);
   hframe55->GetZaxis()->SetTitleSize(0.06);
   hframe55->GetZaxis()->SetTitleFont(42);
   hframe55->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13 = new TH1F("thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13","thsBackground_grouped_wh3l_13TeV_drllmin3l",20,0,10);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->SetMaximum(122.0961);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_13);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_drllmin3l56 = new TH1D("new_histo_group_DY_wh3l_13TeV_drllmin3l56","histo_DY",20,0,10);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinContent(1,11.31972);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinContent(2,23.52201);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinContent(3,23.90489);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinContent(4,30.50433);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinContent(5,46.79583);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinContent(6,48.24129);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinContent(7,18.92008);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinContent(8,0.9660222);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinError(1,3.994931);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinError(2,4.932436);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinError(3,5.497802);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinError(4,6.037687);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinError(5,6.595852);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinError(6,6.847251);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinError(7,4.596812);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetBinError(8,0.8010153);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetEntries(546);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_drllmin3l56->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_DY_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_drllmin3l57 = new TH1D("new_histo_group_top_wh3l_13TeV_drllmin3l57","histo_top",20,0,10);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinContent(1,0.1076249);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinContent(2,1.031797);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinContent(3,1.978966);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinContent(4,1.888417);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinContent(5,1.859227);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinContent(6,0.9744261);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinContent(7,0.2961547);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinContent(9,0.02900938);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinError(1,0.04830844);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinError(2,0.1873422);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinError(3,0.2551074);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinError(4,0.240301);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinError(5,0.2471434);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinError(6,0.1648262);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinError(7,0.0813418);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetBinError(9,0.02900938);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetEntries(377);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_drllmin3l57->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_drllmin3l57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_top_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_drllmin3l58 = new TH1D("new_histo_group_WW_wh3l_13TeV_drllmin3l58","histo_WW",20,0,10);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinContent(1,0.128481);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinContent(2,0.02103786);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinContent(3,0.05303053);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinContent(4,0.04371999);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinContent(5,0.01039133);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinContent(6,0.01818763);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinContent(7,0.01350095);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinContent(8,0.01692435);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinError(1,0.04208298);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinError(2,0.01650885);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinError(3,0.03063344);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinError(4,0.02588822);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinError(5,0.01039133);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinError(6,0.01502499);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinError(7,0.0107348);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetBinError(8,0.01692435);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetEntries(26);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l58->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_drllmin3l59 = new TH1D("new_histo_group_VVV_wh3l_13TeV_drllmin3l59","histo_VVV",20,0,10);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinContent(1,0.00495133);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinContent(2,0.04382735);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinContent(3,0.04480753);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinContent(4,0.05600668);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinContent(5,0.05623381);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinContent(6,0.02890854);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinContent(7,0.006206214);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinError(1,0.001711456);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinError(2,0.005541741);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinError(3,0.005479012);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinError(4,0.006479769);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinError(5,0.006228337);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinError(6,0.00443202);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetBinError(7,0.00199009);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetEntries(478);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l59->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_drllmin3l60 = new TH1D("new_histo_group_VZ_wh3l_13TeV_drllmin3l60","histo_VZ",20,0,10);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(1,6.499317);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(2,26.09603);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(3,46.01803);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(4,68.70367);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(5,67.39594);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(6,49.36167);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(7,13.78951);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(8,1.105012);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(9,0.08694384);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinContent(10,0.01670167);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(1,0.2728169);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(2,0.5645331);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(3,0.7784257);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(4,0.9724321);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(5,0.9320559);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(6,0.8018226);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(7,0.3999796);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(8,0.1088947);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(9,0.02135409);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetBinError(10,0.009653841);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetEntries(46249);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_drllmin3l60->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_VZ_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_drllmin3l61 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_drllmin3l61","histo_H_htt",20,0,10);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinContent(1,0.1222577);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinContent(2,0.454218);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinContent(3,0.4105266);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinContent(4,0.265648);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinContent(5,0.1644186);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinContent(6,0.09380251);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinContent(7,0.006633923);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinContent(8,0.0003162543);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinError(1,0.01358636);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinError(2,0.02459703);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinError(3,0.02199571);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinError(4,0.01567677);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinError(5,0.01136612);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinError(6,0.008820107);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinError(7,0.001237744);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetBinError(8,0.0003162543);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l61->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14 = new TH1F("thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14","thsSignal_grouped_wh3l_13TeV_drllmin3l",20,0,10);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->SetMaximum(0.5027558);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_drllmin3l62 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_drllmin3l62","histo_H_htt",20,0,10);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinContent(1,0.1222577);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinContent(2,0.454218);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinContent(3,0.4105266);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinContent(4,0.265648);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinContent(5,0.1644186);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinContent(6,0.09380251);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinContent(7,0.006633923);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinContent(8,0.0003162543);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinError(1,0.01358636);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinError(2,0.02459703);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinError(3,0.02199571);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinError(4,0.01567677);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinError(5,0.01136612);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinError(6,0.008820107);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinError(7,0.001237744);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetBinError(8,0.0003162543);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l62->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3007[20] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75,
   5.25,
   5.75,
   6.25,
   6.75,
   7.25,
   7.75,
   8.25,
   8.75,
   9.25,
   9.75};
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fely3007[20] = {
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
   Double_t _fehx3007[20] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fehy3007[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,11);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(1.262698);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_drllmin3l","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_drllmin3l","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_drllmin3l","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_drllmin3l","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_drllmin3l","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_drllmin3l","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_drllmin3l","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_drllmin3l","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy63 = new TH1F("hframe_copy63","",1000,0,10);
   hframe_copy63->SetMinimum(0);
   hframe_copy63->SetMaximum(290.7051);
   hframe_copy63->SetDirectory(0);
   hframe_copy63->SetStats(0);
   hframe_copy63->SetLineStyle(0);
   hframe_copy63->SetMarkerStyle(20);
   hframe_copy63->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy63->GetXaxis()->SetNdivisions(506);
   hframe_copy63->GetXaxis()->SetLabelFont(42);
   hframe_copy63->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetXaxis()->SetLabelSize(0.05);
   hframe_copy63->GetXaxis()->SetTitleSize(0.06);
   hframe_copy63->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy63->GetXaxis()->SetTitleFont(42);
   hframe_copy63->GetYaxis()->SetTitle("Events");
   hframe_copy63->GetYaxis()->SetLabelFont(42);
   hframe_copy63->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetYaxis()->SetLabelSize(0.05);
   hframe_copy63->GetYaxis()->SetTitleSize(0.06);
   hframe_copy63->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy63->GetYaxis()->SetTitleFont(42);
   hframe_copy63->GetZaxis()->SetLabelFont(42);
   hframe_copy63->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetZaxis()->SetLabelSize(0.05);
   hframe_copy63->GetZaxis()->SetTitleSize(0.06);
   hframe_copy63->GetZaxis()->SetTitleFont(42);
   hframe_copy63->Draw("sameaxis");
   ccwh3l_13TeV_drllmin3l->Modified();
   ccwh3l_13TeV_drllmin3l->cd();
   ccwh3l_13TeV_drllmin3l->SetSelected(ccwh3l_13TeV_drllmin3l);
}
