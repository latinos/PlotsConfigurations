void c_wh3l_MET_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_zveto_3l/cc
//=========  (Sun Jul  3 16:19:02 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_zveto_3l = new TCanvas("ccwh3l_MET_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_MET_13TeV_zveto_3l->Range(-20,-77.84315,105,520.9503);
   ccwh3l_MET_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_MET_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_MET_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_MET_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_MET_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_MET_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe111 = new TH1F("hframe111","",1000,0,100);
   hframe111->SetMinimum(0);
   hframe111->SetMaximum(491.0106);
   hframe111->SetDirectory(0);
   hframe111->SetStats(0);
   hframe111->SetLineStyle(0);
   hframe111->SetMarkerStyle(20);
   hframe111->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe111->GetXaxis()->SetNdivisions(506);
   hframe111->GetXaxis()->SetLabelFont(42);
   hframe111->GetXaxis()->SetLabelOffset(0.007);
   hframe111->GetXaxis()->SetLabelSize(0.05);
   hframe111->GetXaxis()->SetTitleSize(0.06);
   hframe111->GetXaxis()->SetTitleOffset(0.9);
   hframe111->GetXaxis()->SetTitleFont(42);
   hframe111->GetYaxis()->SetTitle("Events");
   hframe111->GetYaxis()->SetLabelFont(42);
   hframe111->GetYaxis()->SetLabelOffset(0.007);
   hframe111->GetYaxis()->SetLabelSize(0.05);
   hframe111->GetYaxis()->SetTitleSize(0.06);
   hframe111->GetYaxis()->SetTitleOffset(1.25);
   hframe111->GetYaxis()->SetTitleFont(42);
   hframe111->GetZaxis()->SetLabelFont(42);
   hframe111->GetZaxis()->SetLabelOffset(0.007);
   hframe111->GetZaxis()->SetLabelSize(0.05);
   hframe111->GetZaxis()->SetTitleSize(0.06);
   hframe111->GetZaxis()->SetTitleFont(42);
   hframe111->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_MET_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23","thsBackground_grouped_wh3l_MET_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->SetMinimum(-0.4626484);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->SetMaximum(206.2245);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_23);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(1,17.91401);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(2,4.620129);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(3,5.155197);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(4,4.403582);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(5,5.873132);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(6,3.962114);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(7,5.353824);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(8,3.627736);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(9,2.965136);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(10,2.033485);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(11,3.346305);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(12,1.935513);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(13,2.73051);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(14,1.240542);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(15,1.009244);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(16,-0.02770332);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(17,0.2083794);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinContent(19,19.9039);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(1,4.10988);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(2,2.030807);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(3,1.632692);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(4,1.611971);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(5,1.905602);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(6,1.635379);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(7,1.67933);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(8,1.307319);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(9,1.362671);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(10,1.361235);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(11,1.495203);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(12,1.200409);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(13,1.226204);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(14,0.8249078);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(15,0.8929173);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(16,0.4349451);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(17,0.1405333);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetBinError(19,3.0005);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetEntries(1194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(1,0.05460315);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(2,0.01566606);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(5,0.04065372);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(6,0.01821101);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(7,0.03169921);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(8,0.01305253);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(11,0.03276748);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(14,0.01959378);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinContent(19,0.115694);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(1,0.02932378);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(2,0.01566606);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(5,0.0236932);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(6,0.01821101);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(7,0.02253457);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(8,0.01305253);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(11,0.02330427);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(14,0.01959378);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetBinError(19,0.04234978);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetEntries(25);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(1,2.359917);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(2,0.4026646);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(3,0.1653806);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(4,0.1382162);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(5,0.07064187);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(6,0.09020139);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(7,0.06466002);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(8,0.07959371);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(9,0.05517742);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(10,0.04155364);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(11,0.04967939);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(12,0.0331773);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(13,0.03698014);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(14,0.02194201);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(15,0.0228627);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(16,0.01303469);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(17,0.008704611);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(18,0.005070793);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinContent(19,0.4816099);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(1,0.06286418);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(2,0.02814516);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(3,0.01813845);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(4,0.01777663);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(5,0.01422366);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(6,0.01475082);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(7,0.01229867);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(8,0.01356959);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(9,0.0112651);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(10,0.01101017);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(11,0.01132972);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(12,0.009125116);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(13,0.008970762);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(14,0.007844299);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(15,0.008008282);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(16,0.006800907);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(17,0.004393871);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(18,0.003587291);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetBinError(19,0.03561881);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetEntries(3817);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(1,2.564546);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(2,0.7200069);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(3,0.5922528);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(4,1.651351);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(5,2.143511);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(6,1.410685);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(7,0.6037691);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(8,0.6623013);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(10,0.5724485);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(11,0.2145978);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(12,0.2374217);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinContent(19,0.2866472);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(1,0.6693438);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(2,0.3788789);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(3,0.3271898);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(4,0.4324514);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(5,0.5032229);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(6,0.4256353);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(7,0.2638912);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(8,0.2973767);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(10,0.2310541);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(11,0.2318407);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(12,0.1714585);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetBinError(19,0.2269456);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetEntries(194);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(1,8.652508);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(2,1.586342);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(3,0.7794235);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(4,0.2953106);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(5,0.1142928);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(6,0.1649472);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(7,0.228372);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(8,0.1782557);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(10,0.04411533);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(11,0.1138263);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(12,0.1163933);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(14,0.06125498);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(16,0.04142581);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinContent(19,0.2128607);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(1,0.5929321);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(2,0.253991);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(3,0.1982203);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(4,0.1121655);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(5,0.06728644);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(6,0.07943104);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(7,0.09894155);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(8,0.08951381);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(10,0.04411533);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(11,0.06672132);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(12,0.06955485);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(14,0.0375437);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(16,0.04142581);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetBinError(19,0.09566092);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetEntries(350);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l116->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(1,163.3311);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(2,23.86101);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(3,8.012514);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(4,4.18192);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(5,3.026344);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(6,2.11568);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(7,1.948034);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(8,1.725403);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(9,1.557151);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(10,1.51067);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(11,1.279415);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(12,1.176624);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(13,1.11101);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(14,0.8778349);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(15,0.9662715);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(16,0.8567585);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(17,0.0725158);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(18,0.1171749);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinContent(19,3.015986);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(1,0.9425539);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(2,0.3597577);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(3,0.2080566);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(4,0.1492011);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(5,0.1278668);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(6,0.1068814);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(7,0.1028852);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(8,0.09757896);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(9,0.09233176);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(10,0.09220809);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(11,0.08296229);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(12,0.0807519);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(13,0.07729743);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(14,0.06798162);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(15,0.07226024);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(16,0.06747446);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(17,0.01973707);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(18,0.02542874);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetBinError(19,0.1272061);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetEntries(45061);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(1,1.52757);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(2,0.2844782);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(3,0.1264761);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(4,0.08273132);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(5,0.0792883);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(6,0.09774076);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(7,0.08723597);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(8,0.1209708);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(9,0.0865821);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(10,0.0902157);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(11,0.06383025);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(12,0.09638895);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(13,0.06686364);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(14,0.05245923);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(15,0.0391005);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(16,0.01871884);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(17,0.004778157);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(18,0.005721125);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinContent(19,0.3913371);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(1,0.03891746);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(2,0.01705308);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(3,0.01145419);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(4,0.008779657);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(5,0.008844662);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(6,0.01058393);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(7,0.009133843);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(8,0.01102635);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(9,0.009615098);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(10,0.009682233);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(11,0.008783705);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(12,0.0110897);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(13,0.009305811);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(14,0.00804718);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(15,0.007042463);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(16,0.004325816);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(17,0.00261711);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(18,0.002747118);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetBinError(19,0.0207716);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l118->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_MET_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24","thsSignal_grouped_wh3l_MET_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->SetMaximum(1.644812);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_24);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(1,1.52757);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(2,0.2844782);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(3,0.1264761);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(4,0.08273132);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(5,0.0792883);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(6,0.09774076);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(7,0.08723597);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(8,0.1209708);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(9,0.0865821);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(10,0.0902157);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(11,0.06383025);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(12,0.09638895);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(13,0.06686364);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(14,0.05245923);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(15,0.0391005);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(16,0.01871884);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(17,0.004778157);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(18,0.005721125);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinContent(19,0.3913371);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(1,0.03891746);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(2,0.01705308);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(3,0.01145419);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(4,0.008779657);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(5,0.008844662);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(6,0.01058393);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(7,0.009133843);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(8,0.01102635);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(9,0.009615098);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(10,0.009682233);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(11,0.008783705);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(12,0.0110897);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(13,0.009305811);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(14,0.00804718);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(15,0.007042463);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(16,0.004325816);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(17,0.00261711);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(18,0.002747118);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetBinError(19,0.0207716);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l119->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3023[20] = {
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
   Double_t _fy3023[20] = {
   194.8767,
   31.20582,
   14.70477,
   10.67038,
   11.26857,
   7.761838,
   8.230358,
   6.286343,
   4.765988,
   4.212714,
   5.036591,
   3.514434,
   3.993438,
   2.221168,
   1.998379,
   0.8835157,
   0.2895998,
   0.1222457,
   24.0167,
   0};
   Double_t _felx3023[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3023[20] = {
   10.05262,
   3.547555,
   3.004096,
   2.795884,
   3.351243,
   2.673595,
   2.87658,
   2.221474,
   1.921754,
   1.891966,
   2.228863,
   1.690674,
   1.680658,
   1.052663,
   1.036641,
   0.5522012,
   0.180317,
   0.02966279,
   7.82439,
   0};
   Double_t _fehx3023[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3023[20] = {
   9.989313,
   3.538588,
   3.002899,
   2.795451,
   3.351521,
   2.673398,
   2.876458,
   2.221179,
   1.921764,
   1.891798,
   2.243325,
   1.690729,
   1.68057,
   1.052729,
   1.036559,
   0.149044,
   0.1803129,
   0.02960556,
   7.824082,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,110);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(225.3526);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t _fx3024[20] = {
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
   Double_t _fy3024[20] = {
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
   Double_t _felx3024[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3024[20] = {
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
   Double_t _fehx3024[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3024[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,110);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(1.262698);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy120 = new TH1F("hframe_copy120","",1000,0,100);
   hframe_copy120->SetMinimum(0);
   hframe_copy120->SetMaximum(491.0106);
   hframe_copy120->SetDirectory(0);
   hframe_copy120->SetStats(0);
   hframe_copy120->SetLineStyle(0);
   hframe_copy120->SetMarkerStyle(20);
   hframe_copy120->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy120->GetXaxis()->SetNdivisions(506);
   hframe_copy120->GetXaxis()->SetLabelFont(42);
   hframe_copy120->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetXaxis()->SetLabelSize(0.05);
   hframe_copy120->GetXaxis()->SetTitleSize(0.06);
   hframe_copy120->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy120->GetXaxis()->SetTitleFont(42);
   hframe_copy120->GetYaxis()->SetTitle("Events");
   hframe_copy120->GetYaxis()->SetLabelFont(42);
   hframe_copy120->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetYaxis()->SetLabelSize(0.05);
   hframe_copy120->GetYaxis()->SetTitleSize(0.06);
   hframe_copy120->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy120->GetYaxis()->SetTitleFont(42);
   hframe_copy120->GetZaxis()->SetLabelFont(42);
   hframe_copy120->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetZaxis()->SetLabelSize(0.05);
   hframe_copy120->GetZaxis()->SetTitleSize(0.06);
   hframe_copy120->GetZaxis()->SetTitleFont(42);
   hframe_copy120->Draw("sameaxis");
   ccwh3l_MET_13TeV_zveto_3l->Modified();
   ccwh3l_MET_13TeV_zveto_3l->cd();
   ccwh3l_MET_13TeV_zveto_3l->SetSelected(ccwh3l_MET_13TeV_zveto_3l);
}
