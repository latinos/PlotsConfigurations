void c_wh3l_MET_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_mllmin3l/cc
//=========  (Sun Jul  3 01:21:55 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_13TeV_mllmin3l->Range(-28,-2.328922,209.5,15.58587);
   ccwh3l_MET_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe171 = new TH1F("hframe171","",1000,10,200);
   hframe171->SetMinimum(0);
   hframe171->SetMaximum(14.69013);
   hframe171->SetDirectory(0);
   hframe171->SetStats(0);
   hframe171->SetLineStyle(0);
   hframe171->SetMarkerStyle(20);
   hframe171->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe171->GetXaxis()->SetNdivisions(506);
   hframe171->GetXaxis()->SetLabelFont(42);
   hframe171->GetXaxis()->SetLabelOffset(0.007);
   hframe171->GetXaxis()->SetLabelSize(0.05);
   hframe171->GetXaxis()->SetTitleSize(0.06);
   hframe171->GetXaxis()->SetTitleOffset(0.9);
   hframe171->GetXaxis()->SetTitleFont(42);
   hframe171->GetYaxis()->SetTitle("Events");
   hframe171->GetYaxis()->SetLabelFont(42);
   hframe171->GetYaxis()->SetLabelOffset(0.007);
   hframe171->GetYaxis()->SetLabelSize(0.05);
   hframe171->GetYaxis()->SetTitleSize(0.06);
   hframe171->GetYaxis()->SetTitleOffset(1.25);
   hframe171->GetYaxis()->SetTitleFont(42);
   hframe171->GetZaxis()->SetLabelFont(42);
   hframe171->GetZaxis()->SetLabelOffset(0.007);
   hframe171->GetZaxis()->SetLabelSize(0.05);
   hframe171->GetZaxis()->SetTitleSize(0.06);
   hframe171->GetZaxis()->SetTitleFont(42);
   hframe171->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35","thsBackground_grouped_wh3l_MET_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetMinimum(-0.5946611);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetMaximum(7.839886);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(1,-0.3529057);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(2,0.3816274);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(3,3.914804);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(4,2.650165);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(5,2.619186);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(6,5.823989);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(7,0.7922664);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(8,0.6551546);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(9,1.835439);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(10,-0.09761588);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(11,0.6729458);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(12,-0.03070307);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(13,0.2426364);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(15,0.0706914);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinContent(21,-0.005092918);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(1,0.2417554);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(2,0.3836373);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(3,1.508885);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(4,1.072959);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(5,0.9750751);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(6,1.642569);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(7,0.5025124);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(8,0.4706845);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(9,0.9051095);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(10,0.2204674);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(11,0.4768716);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(12,0.03070307);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(13,0.1886319);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(15,0.0706914);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetBinError(21,0.0178859);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinContent(1,0.004448378);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinContent(2,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinContent(6,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinContent(7,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinContent(8,0.01039136);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinContent(15,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinContent(16,0.01708511);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinError(1,0.004448378);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinError(2,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinError(6,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinError(7,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinError(8,0.01039136);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinError(15,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetBinError(16,0.01708511);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(1,0.002893069);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(2,0.006626188);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(3,0.02468435);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(4,0.04155185);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(5,0.03878454);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(6,0.02393531);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(7,0.03444368);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(8,0.02044008);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(9,0.02226216);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(10,0.01589089);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(11,0.001130541);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(12,0.01095258);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(13,0.01793836);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(14,-0.000275606);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(15,0.007696418);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(16,0.008020286);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(17,0.01052757);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(18,0.001560374);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(19,0.002590311);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(20,0.004777247);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinContent(21,0.01713282);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(1,0.003976863);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(2,0.007516963);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(3,0.0073657);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(4,0.009474214);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(5,0.01023374);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(6,0.007219461);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(7,0.008886544);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(8,0.007000344);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(9,0.009581585);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(10,0.006755897);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(11,0.005309394);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(12,0.004982543);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(13,0.00615453);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(14,0.003628448);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(15,0.004218925);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(16,0.004785279);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(17,0.004828598);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(18,0.001560374);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(19,0.002590311);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(20,0.003387675);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetBinError(21,0.006124971);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetEntries(198);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetBinContent(2,0.0522728);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetBinContent(3,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetBinContent(5,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetBinContent(6,-0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetBinError(2,0.0522728);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetBinError(3,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetBinError(5,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetBinError(6,0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetEntries(4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetBinContent(3,0.07785033);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetBinContent(5,0.04768794);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetBinError(3,0.05530859);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetBinError(5,0.04768794);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetEntries(3);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(1,0.05386018);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(2,0.0823405);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(3,0.2625582);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(4,0.3065322);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(5,0.1877114);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(6,0.07823825);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(7,0.04478504);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(8,0.03771766);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(9,0.03712829);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(10,0.01720988);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(11,0.01018415);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(12,0.01269996);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(13,0.008104143);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(14,0.005757124);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(15,0.01062165);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(16,0.003729804);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(17,0.00800097);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinContent(21,0.01969319);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(1,0.01648628);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(2,0.02134082);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(3,0.03785571);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(4,0.04199192);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(5,0.03108476);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(6,0.01958195);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(7,0.01595494);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(8,0.01485439);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(9,0.01447997);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(10,0.01008331);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(11,0.007233612);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(12,0.008137303);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(13,0.006527133);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(14,0.005757124);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(15,0.007524439);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(16,0.003729804);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(17,0.005931122);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetBinError(21,0.00999611);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetEntries(244);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(1,0.04325166);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(2,0.07380952);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(3,0.0806473);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(4,0.07205699);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(5,0.06993152);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(6,0.04005602);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(7,0.02078708);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(8,0.006490071);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(9,0.003727573);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(10,0.0007047558);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(12,0.0002088432);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinContent(13,0.0003793327);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(1,0.007552024);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(2,0.009711102);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(3,0.009438326);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(4,0.008721591);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(5,0.008289636);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(6,0.005497188);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(7,0.00447389);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(8,0.00178071);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(9,0.001367909);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(10,0.0004198774);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(12,0.0002088432);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetBinError(13,0.0003793327);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36","thsSignal_grouped_wh3l_MET_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetMaximum(0.09458991);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(1,0.04325166);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(2,0.07380952);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(3,0.0806473);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(4,0.07205699);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(5,0.06993152);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(6,0.04005602);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(7,0.02078708);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(8,0.006490071);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(9,0.003727573);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(10,0.0007047558);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(12,0.0002088432);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinContent(13,0.0003793327);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(1,0.007552024);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(2,0.009711102);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(3,0.009438326);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(4,0.008721591);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(5,0.008289636);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(6,0.005497188);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(7,0.00447389);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(8,0.00178071);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(9,0.001367909);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(10,0.0004198774);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(12,0.0002088432);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetBinError(13,0.0003793327);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3035[20] = {
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
   Double_t _fy3035[20] = {
   -0.2917041,
   0.5381532,
   4.407228,
   2.998249,
   3.016109,
   5.835995,
   0.8869637,
   0.7237037,
   1.894829,
   -0.06451511,
   0.6842605,
   -0.007050526,
   0.2686788,
   0.005481518,
   0.1053339,
   0.0288352,
   0.01852854,
   0.001560374,
   0.002590311,
   0.004777247};
   Double_t _felx3035[20] = {
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
   Double_t _fely3035[20] = {
   0.2929223,
   0.4956231,
   2.212443,
   1.458219,
   1.500158,
   2.713829,
   0.6104327,
   0.5531191,
   1.12984,
   0.2402807,
   0.5393794,
   0.04640737,
   0.219172,
   0.009390982,
   0.1021066,
   0.02684116,
   0.01507083,
   0.002207554,
   0.003664618,
   0.00585841};
   Double_t _fehx3035[20] = {
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
   Double_t _fehy3035[20] = {
   0.2939028,
   0.4983834,
   2.21244,
   1.45821,
   1.500148,
   2.71383,
   0.6104302,
   0.553117,
   1.129839,
   0.1204985,
   0.543142,
   0.04646349,
   0.2191719,
   0.006040121,
   0.1021064,
   0.02683742,
   0.0150678,
   0.002207575,
   0.003664665,
   0.005858449};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,219);
   Graph_Graph3035->SetMinimum(-1.498072);
   Graph_Graph3035->SetMaximum(9.463269);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineStyle(0);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2");
   
   Double_t _fx3036[20] = {
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
   Double_t _fy3036[20] = {
   1,
   2,
   3,
   0,
   1,
   2,
   0,
   1,
   0,
   0,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3036[20] = {
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
   Double_t _fely3036[20] = {
   0.8272524,
   1.29183,
   1.632727,
   0,
   0.8272524,
   1.29183,
   0,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3036[20] = {
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
   Double_t _fehy3036[20] = {
   2.29957,
   2.63791,
   2.918242,
   1.147908,
   2.29957,
   2.63791,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,219);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(6.510067);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineStyle(0);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,10,200);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(14.69013);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy180->GetXaxis()->SetNdivisions(506);
   hframe_copy180->GetXaxis()->SetLabelFont(42);
   hframe_copy180->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetXaxis()->SetLabelSize(0.05);
   hframe_copy180->GetXaxis()->SetTitleSize(0.06);
   hframe_copy180->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy180->GetXaxis()->SetTitleFont(42);
   hframe_copy180->GetYaxis()->SetTitle("Events");
   hframe_copy180->GetYaxis()->SetLabelFont(42);
   hframe_copy180->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetYaxis()->SetLabelSize(0.05);
   hframe_copy180->GetYaxis()->SetTitleSize(0.06);
   hframe_copy180->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy180->GetYaxis()->SetTitleFont(42);
   hframe_copy180->GetZaxis()->SetLabelFont(42);
   hframe_copy180->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetZaxis()->SetLabelSize(0.05);
   hframe_copy180->GetZaxis()->SetTitleSize(0.06);
   hframe_copy180->GetZaxis()->SetTitleFont(42);
   hframe_copy180->Draw("sameaxis");
   ccwh3l_MET_13TeV_mllmin3l->Modified();
   ccwh3l_MET_13TeV_mllmin3l->cd();
   ccwh3l_MET_13TeV_mllmin3l->SetSelected(ccwh3l_MET_13TeV_mllmin3l);
}
