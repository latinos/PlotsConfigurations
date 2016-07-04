void c_wh3l_MET_JetV_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_pt1/cc
//=========  (Sat Jul  2 21:43:32 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_pt1->Range(-28,-14.0611,209.5,94.10118);
   ccwh3l_MET_JetV_13TeV_pt1->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_pt1->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_pt1->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,10,200);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(88.69306);
   hframe121->SetDirectory(0);
   hframe121->SetStats(0);
   hframe121->SetLineStyle(0);
   hframe121->SetMarkerStyle(20);
   hframe121->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25","thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetMinimum(-0.827483);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetMaximum(27.97355);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(2,-0.4214964);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(3,0.2782012);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(4,2.653757);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(5,4.12429);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(6,4.990852);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(7,0.6164642);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(8,1.227768);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(9,0.3291996);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(10,0.7803624);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(11,0.3049455);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(12,1.256126);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(13,-0.5387643);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(14,0.8107582);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(15,0.06096897);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(16,0.01006685);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(17,-0.01611677);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(18,-0.09765524);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(19,-0.03910978);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(20,0.5089302);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(22,0.5423007);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(23,-0.008787465);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(24,-0.05804348);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(25,0.07568908);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(26,-0.06009144);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(2,0.3187247);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(3,0.6345247);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(4,1.515265);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(5,1.478597);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(6,2.016385);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(7,1.24783);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(8,1.118452);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(9,0.7979847);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(10,0.5329673);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(11,1.12226);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(12,0.7550646);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(13,0.2887187);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(14,0.5069268);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(15,0.1395545);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(16,0.01006685);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(17,0.09750125);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(18,0.05865269);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(19,0.03910978);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(20,0.5319871);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(22,0.4525668);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(23,0.008222545);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(24,0.05804348);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(25,0.07568908);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(26,0.1261191);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetEntries(425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(5,0.02784318);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(6,0.03235779);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(7,0.03274813);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(10,0.01092969);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(5,0.02029379);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(6,0.02304949);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(7,0.02329387);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(10,0.01092969);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetEntries(10);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(2,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(3,0.00726727);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(4,0.04499621);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(5,0.05285658);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(6,0.07139628);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(7,0.0880269);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(8,0.08038692);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(9,0.08599663);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(10,0.06771684);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(11,0.04953145);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(12,0.04604148);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(13,0.04061789);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(14,0.02500269);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(15,0.01744378);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(16,0.02878576);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(17,0.02681157);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(18,0.03058289);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(19,0.004428875);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(20,0.01004989);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(21,0.02417724);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(22,0.004748192);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(23,0.00677957);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(24,-0.0002164216);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(25,0.007097656);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(26,0.07505016);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(2,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(3,0.003857362);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(4,0.009564028);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(5,0.01029054);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(6,0.01270083);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(7,0.01406015);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(8,0.01201656);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(9,0.01312164);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(10,0.01228833);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(11,0.0102218);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(12,0.009545725);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(13,0.009663715);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(14,0.007012145);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(15,0.007363147);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(16,0.00741769);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(17,0.007646234);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(18,0.007506499);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(19,0.004237134);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(20,0.004195807);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(21,0.007068051);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(22,0.004647904);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(23,0.003764128);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(24,0.001140229);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(25,0.003833949);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(26,0.01263348);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetEntries(739);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(2,0.3631468);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(3,1.344557);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(4,1.498293);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(5,2.174032);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(6,1.23024);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(7,0.4854716);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(8,0.01704179);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(9,0.2493319);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(11,0.07325434);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(13,0.0928583);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(22,0.1076973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(2,0.1962641);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(3,0.3677183);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(4,0.4754317);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(5,0.5028452);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(6,0.3629933);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(7,0.2727073);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(8,0.1367235);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(9,0.2270403);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(11,0.07325434);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(13,0.0928583);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(22,0.1076973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(2,0.06379279);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(3,0.08590242);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(4,0.3549525);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(5,0.6812591);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(6,1.227747);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(7,1.424086);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(8,0.9828473);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(9,0.3944765);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(10,0.4392464);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(11,0.4444914);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(12,0.3713887);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(13,0.2457548);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(14,0.152887);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(15,0.08824559);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(16,0.08419978);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(17,0.06716308);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(18,0.04317268);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(21,0.08883265);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(22,0.01974776);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(26,0.0908035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(2,0.04577222);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(3,0.0556132);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(4,0.1210161);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(5,0.1654064);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(6,0.2364373);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(7,0.2400872);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(8,0.2063464);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(9,0.1251363);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(10,0.1325865);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(11,0.1346091);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(12,0.1241915);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(13,0.1036881);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(14,0.0800345);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(15,0.06247809);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(16,0.05986179);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(17,0.05134657);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(18,0.04317268);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(21,0.06284459);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(22,0.01974776);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(26,0.06421094);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetEntries(198);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(2,0.4028249);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(3,2.259298);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(4,5.812416);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(5,13.42631);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(6,18.94633);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(7,16.82792);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(8,13.75933);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(9,10.64711);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(10,7.816603);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(11,6.006384);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(12,4.212678);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(13,3.285722);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(14,2.50035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(15,1.758138);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(16,1.705575);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(17,1.315699);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(18,0.9863396);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(19,0.8608842);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(20,0.7054037);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(21,0.6601095);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(22,0.4998204);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(23,0.3884865);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(24,0.302197);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(25,0.2484985);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(26,2.240378);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(2,0.04672487);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(3,0.1103239);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(4,0.1777283);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(5,0.2699178);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(6,0.3211884);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(7,0.3023508);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(8,0.2729441);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(9,0.2424542);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(10,0.2068639);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(11,0.1806103);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(12,0.1504003);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(13,0.1329256);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(14,0.1166313);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(15,0.09677955);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(16,0.09629071);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(17,0.08425226);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(18,0.07361131);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(19,0.0685978);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(20,0.06109257);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(21,0.06043005);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(22,0.05208663);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(23,0.04610613);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(24,0.03991753);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(25,0.03657695);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(26,0.1100177);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetEntries(23985);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(3,0.03740374);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(4,0.08052901);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(5,0.1415278);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(6,0.1425553);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(7,0.1578468);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(8,0.1342581);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(9,0.1212264);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(10,0.1102554);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(11,0.09649825);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(12,0.08300963);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(13,0.06873177);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(14,0.05071116);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(15,0.05040537);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(16,0.04148663);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(17,0.02429242);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(18,0.02833576);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(19,0.01077469);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(20,0.01534851);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(21,0.008954858);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(22,0.005405494);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(23,0.002672021);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(24,0.004210444);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(25,0.005927963);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(26,0.0444998);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(3,0.006363567);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(4,0.009175315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(5,0.01356212);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(6,0.01358269);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(7,0.01417404);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(8,0.01263922);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(9,0.01207873);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(10,0.01193928);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(11,0.01085813);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(12,0.009634503);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(13,0.008718136);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(14,0.006979767);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(15,0.007025429);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(16,0.007254513);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(17,0.004810632);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(18,0.005612071);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(19,0.003236271);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(20,0.003840003);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(21,0.002605866);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(22,0.001972473);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(23,0.001040796);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(24,0.001834184);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(25,0.002847632);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(26,0.007149536);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26","thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetMaximum(0.1806219);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(3,0.03740374);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(4,0.08052901);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(5,0.1415278);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(6,0.1425553);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(7,0.1578468);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(8,0.1342581);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(9,0.1212264);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(10,0.1102554);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(11,0.09649825);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(12,0.08300963);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(13,0.06873177);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(14,0.05071116);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(15,0.05040537);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(16,0.04148663);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(17,0.02429242);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(18,0.02833576);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(19,0.01077469);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(20,0.01534851);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(21,0.008954858);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(22,0.005405494);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(23,0.002672021);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(24,0.004210444);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(25,0.005927963);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(26,0.0444998);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(3,0.006363567);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(4,0.009175315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(5,0.01356212);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(6,0.01358269);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(7,0.01417404);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(8,0.01263922);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(9,0.01207873);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(10,0.01193928);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(11,0.01085813);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(12,0.009634503);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(13,0.008718136);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(14,0.006979767);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(15,0.007025429);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(16,0.007254513);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(17,0.004810632);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(18,0.005612071);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(19,0.003236271);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(20,0.003840003);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(21,0.002605866);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(22,0.001972473);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(23,0.001040796);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(24,0.001834184);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(25,0.002847632);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(26,0.007149536);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3025[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3025[25] = {
   0,
   0.4104038,
   3.975225,
   10.36442,
   20.48659,
   26.49892,
   19.47472,
   16.06738,
   11.73589,
   9.114859,
   6.878607,
   5.90055,
   3.126188,
   3.488998,
   1.924796,
   1.828627,
   1.393557,
   0.9624399,
   0.9320521,
   1.224384,
   1.620756,
   1.174314,
   0.3864786,
   0.2439371,
   0.3312852};
   Double_t _felx3025[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3025[25] = {
   0,
   0.6294535,
   0.8359293,
   2.489752,
   2.862791,
   3.470344,
   1.527,
   1.714368,
   0.9980567,
   0.9569142,
   0.728401,
   1.148069,
   0.6731576,
   0.7713583,
   0.2404887,
   0.190994,
   0.2493312,
   0.1928216,
   0.221281,
   0.6020869,
   1.022635,
   0.6647899,
   0.06073987,
   0.1016598,
   0.1196267};
   Double_t _fehx3025[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3025[25] = {
   0,
   0.629374,
   1.185638,
   2.489403,
   2.861874,
   3.469275,
   2.140183,
   1.82782,
   1.45354,
   0.9563837,
   1.532592,
   1.147963,
   0.6705499,
   0.770142,
   0.3141189,
   0.1886751,
   0.1691923,
   0.1918394,
   0.2206224,
   0.6239609,
   1.022553,
   0.6647398,
   0.06044166,
   0.1006739,
   0.1195939};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,219);
   Graph_Graph3025->SetMinimum(-3.237774);
   Graph_Graph3025->SetMaximum(32.98692);
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
   
   Double_t _fx3026[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3026[25] = {
   0,
   2,
   7,
   13,
   24,
   30,
   29,
   19,
   14,
   10,
   10,
   8,
   6,
   4,
   2,
   0,
   2,
   3,
   1,
   0,
   0,
   0,
   0,
   1,
   0};
   Double_t _felx3026[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3026[25] = {
   0,
   1.29183,
   2.581513,
   3.558726,
   4.864704,
   5.446627,
   5.354033,
   4.320299,
   3.696567,
   3.108748,
   3.108748,
   2.768432,
   2.379969,
   1.914367,
   1.29183,
   0,
   1.29183,
   1.632727,
   0.8272524,
   0,
   0,
   0,
   0,
   0.8272524,
   0};
   Double_t _fehx3026[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3026[25] = {
   1.147908,
   2.63791,
   3.770356,
   4.697669,
   5.967054,
   6.538181,
   6.447153,
   5.435307,
   4.830479,
   4.267035,
   4.267035,
   3.94522,
   3.583713,
   3.162815,
   2.63791,
   1.147908,
   2.63791,
   2.918242,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,219);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(40.192);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy130 = new TH1F("hframe_copy130","",1000,10,200);
   hframe_copy130->SetMinimum(0);
   hframe_copy130->SetMaximum(88.69306);
   hframe_copy130->SetDirectory(0);
   hframe_copy130->SetStats(0);
   hframe_copy130->SetLineStyle(0);
   hframe_copy130->SetMarkerStyle(20);
   hframe_copy130->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
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
   ccwh3l_MET_JetV_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_13TeV_pt1->cd();
   ccwh3l_MET_JetV_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_13TeV_pt1);
}
