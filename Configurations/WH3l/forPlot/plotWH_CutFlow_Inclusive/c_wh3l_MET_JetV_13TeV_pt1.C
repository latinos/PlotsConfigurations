void c_wh3l_MET_JetV_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_pt1/cc
//=========  (Sun Jul  3 16:19:01 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_pt1->Range(-16,-9.887754,209,66.1719);
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
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,20,200);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(62.36891);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe91->GetXaxis()->SetNdivisions(506);
   hframe91->GetXaxis()->SetLabelFont(42);
   hframe91->GetXaxis()->SetLabelOffset(0.007);
   hframe91->GetXaxis()->SetLabelSize(0.05);
   hframe91->GetXaxis()->SetTitleSize(0.06);
   hframe91->GetXaxis()->SetTitleOffset(0.9);
   hframe91->GetXaxis()->SetTitleFont(42);
   hframe91->GetYaxis()->SetTitle("Events");
   hframe91->GetYaxis()->SetLabelFont(42);
   hframe91->GetYaxis()->SetLabelOffset(0.007);
   hframe91->GetYaxis()->SetLabelSize(0.05);
   hframe91->GetYaxis()->SetTitleSize(0.06);
   hframe91->GetYaxis()->SetTitleOffset(1.25);
   hframe91->GetYaxis()->SetTitleFont(42);
   hframe91->GetZaxis()->SetLabelFont(42);
   hframe91->GetZaxis()->SetLabelOffset(0.007);
   hframe91->GetZaxis()->SetLabelSize(0.05);
   hframe91->GetZaxis()->SetTitleSize(0.06);
   hframe91->GetZaxis()->SetTitleFont(42);
   hframe91->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19","thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1",25,20,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->SetMinimum(-1.541847);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->SetMaximum(26.19494);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192","histo_Fake",25,20,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(1,-0.4944524);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(2,0.650356);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(3,2.997105);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(4,5.927655);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(5,4.334555);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(6,-0.5252611);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(7,2.347364);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(8,0.8436185);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(9,1.21135);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(10,0.2565228);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(11,1.612165);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(12,-0.6015092);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(13,0.3424326);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(14,0.4344804);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(15,0.01251658);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(16,-0.07737703);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(17,0.03183884);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(18,-0.05816697);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(19,-0.03910978);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(20,0.5089302);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(21,0.8475362);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(22,0.5424008);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(23,-0.008787465);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(24,0.002943433);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinContent(26,-0.06009144);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(1,0.3228818);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(2,0.9452123);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(3,1.442959);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(4,1.807023);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(5,1.901062);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(6,1.016586);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(7,1.422113);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(8,1.019468);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(9,0.6625471);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(10,0.9523651);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(11,0.968046);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(12,0.3141012);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(13,0.3434291);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(14,0.3865248);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(15,0.1129378);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(16,0.06723302);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(17,0.07660328);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(18,0.05157162);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(19,0.03910978);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(20,0.5319871);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(22,0.4525668);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(23,0.008222545);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(24,0.09650926);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetBinError(26,0.1261191);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetEntries(453);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193","histo_WW",25,20,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinContent(4,0.02784318);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinContent(5,0.03235779);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinContent(6,0.03274813);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinContent(8,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinContent(9,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinContent(10,0.01092969);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinError(4,0.02029379);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinError(5,0.02304949);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinError(6,0.02329387);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinError(8,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinError(9,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinError(10,0.01092969);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194","histo_VVV",25,20,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(1,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(2,0.0131432);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(3,0.0492445);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(4,0.07045876);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(5,0.07544011);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(6,0.08823458);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(7,0.09005437);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(8,0.08442959);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(9,0.07637682);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(10,0.05864442);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(11,0.04597901);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(12,0.04512294);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(13,0.04248485);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(14,0.01957822);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(15,0.01624494);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(16,0.03650396);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(17,0.03209024);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(18,0.02282239);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(19,0.007449994);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(20,0.009013708);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(21,0.01809513);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(22,0.01039444);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(23,0.003297658);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(24,0.001780386);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(25,0.009666965);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinContent(26,0.0824725);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(1,0.002135687);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(2,0.004952278);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(3,0.01010178);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(4,0.01217674);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(5,0.01296834);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(6,0.01457504);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(7,0.01297245);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(8,0.01304729);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(9,0.01315247);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(10,0.01124439);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(11,0.009976448);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(12,0.01043855);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(13,0.009238118);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(14,0.006891667);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(15,0.00665571);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(16,0.00906202);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(17,0.008318163);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(18,0.006597088);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(19,0.005839348);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(20,0.004044343);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(21,0.006265285);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(22,0.005893768);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(23,0.002391555);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(24,0.002299427);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(25,0.004615248);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetBinError(26,0.01326342);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetEntries(806);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195","histo_Vg",25,20,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(1,0.6066957);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(2,0.921913);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(3,2.185154);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(4,1.969823);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(5,1.045506);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(6,0.3666488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(7,0.01704179);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(8,0.2493319);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(10,0.07325434);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(12,0.0928583);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinContent(22,0.1076973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(1,0.2421682);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(2,0.3739094);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(3,0.5081869);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(4,0.4767592);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(5,0.3383799);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(6,0.2454596);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(7,0.1367235);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(8,0.2270403);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(10,0.07325434);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(12,0.0928583);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetBinError(22,0.1076973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196","histo_ZZ",25,20,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(1,0.0993332);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(2,0.1761833);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(3,0.3472878);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(4,0.6524675);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(5,1.138382);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(6,1.4668);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(7,0.9141701);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(8,0.4189722);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(9,0.3509419);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(10,0.3859559);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(11,0.4280809);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(12,0.3446714);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(13,0.1523562);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(14,0.1241893);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(15,0.08419978);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(17,0.06716308);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(18,0.04317268);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(20,0.04579876);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(21,0.06278165);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinContent(26,0.1259403);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(1,0.05795013);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(2,0.0851157);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(3,0.117834);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(4,0.1627951);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(5,0.2282646);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(6,0.2438572);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(7,0.1992217);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(8,0.128828);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(9,0.1163802);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(10,0.1290135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(11,0.1298858);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(12,0.1245486);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(13,0.07979753);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(14,0.07207954);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(15,0.05986179);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(17,0.05134657);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(18,0.04317268);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(20,0.04579876);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(21,0.0473486);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetBinError(26,0.07319591);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetEntries(200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197","histo_WZ",25,20,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(1,0.8194415);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(2,2.796833);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(3,6.507444);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(4,13.84267);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(5,18.15128);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(6,15.86045);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(7,13.12682);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(8,10.425);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(9,7.670234);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(10,5.897838);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(11,4.416042);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(12,3.333339);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(13,2.74207);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(14,1.851423);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(15,1.499009);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(16,1.566852);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(17,1.126515);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(18,0.8259806);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(19,0.8127514);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(20,0.6276026);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(21,0.5770907);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(22,0.4380543);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(23,0.3875379);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(24,0.280792);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(25,0.236735);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinContent(26,2.246091);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(1,0.06702045);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(2,0.1229329);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(3,0.1875049);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(4,0.2742404);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(5,0.3144303);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(6,0.2935017);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(7,0.2669164);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(8,0.239449);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(9,0.2050689);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(10,0.1787134);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(11,0.1543307);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(12,0.134153);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(13,0.1218739);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(14,0.1001108);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(15,0.08905757);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(16,0.09193945);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(17,0.07843295);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(18,0.06790704);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(19,0.06633596);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(20,0.05746507);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(21,0.0565458);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(22,0.04905638);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(23,0.04592727);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(24,0.0384355);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(25,0.03581603);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetBinError(26,0.1101659);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetEntries(24086);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(1,0.01545363);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(2,0.06399526);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(3,0.09888945);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(4,0.1534993);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(5,0.1700473);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(6,0.1768975);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(7,0.1444488);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(8,0.1262348);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(9,0.1288334);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(10,0.1004);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(11,0.1005644);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(12,0.05825336);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(13,0.07400607);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(14,0.04925028);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(15,0.04304218);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(16,0.0435802);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(17,0.02882308);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(18,0.02486286);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(19,0.01397763);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(20,0.01581348);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(21,0.009040476);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(22,0.006365726);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(23,0.00159939);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(24,0.004210444);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(25,0.009622887);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinContent(26,0.04778994);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(1,0.004340904);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(2,0.008134372);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(3,0.01051309);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(4,0.01379357);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(5,0.01465045);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(6,0.01480782);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(7,0.01316137);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(8,0.01215626);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(9,0.01322341);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(10,0.01125747);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(11,0.01060258);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(12,0.008121814);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(13,0.008726123);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(14,0.006753772);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(15,0.006779584);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(16,0.007286385);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(17,0.005580779);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(18,0.005142819);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(19,0.003870461);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(20,0.003748933);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(21,0.002624885);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(22,0.002031589);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(23,0.0007089585);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(24,0.001834184);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(25,0.003451145);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetBinError(26,0.007208141);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20","thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1",25,20,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->SetMaximum(0.2012905);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199","histo_H_htt",25,20,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(1,0.01545363);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(2,0.06399526);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(3,0.09888945);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(4,0.1534993);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(5,0.1700473);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(6,0.1768975);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(7,0.1444488);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(8,0.1262348);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(9,0.1288334);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(10,0.1004);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(11,0.1005644);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(12,0.05825336);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(13,0.07400607);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(14,0.04925028);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(15,0.04304218);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(16,0.0435802);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(17,0.02882308);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(18,0.02486286);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(19,0.01397763);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(20,0.01581348);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(21,0.009040476);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(22,0.006365726);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(23,0.00159939);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(24,0.004210444);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(25,0.009622887);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinContent(26,0.04778994);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(1,0.004340904);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(2,0.008134372);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(3,0.01051309);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(4,0.01379357);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(5,0.01465045);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(6,0.01480782);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(7,0.01316137);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(8,0.01215626);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(9,0.01322341);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(10,0.01125747);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(11,0.01060258);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(12,0.008121814);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(13,0.008726123);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(14,0.006753772);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(15,0.006779584);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(16,0.007286385);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(17,0.005580779);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(18,0.005142819);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(19,0.003870461);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(20,0.003748933);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(21,0.002624885);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(22,0.002031589);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(23,0.0007089585);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(24,0.001834184);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(25,0.003451145);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetBinError(26,0.007208141);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3019[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3019[25] = {
   1.033154,
   4.574552,
   12.08624,
   22.49092,
   24.77752,
   17.28962,
   16.49545,
   12.03583,
   9.324206,
   6.683146,
   6.502267,
   3.228798,
   3.279343,
   2.429671,
   1.611971,
   1.525979,
   1.257607,
   0.8338087,
   0.8869405,
   1.191345,
   1.505504,
   1.098547,
   0.3820481,
   0.2855158,
   0.3809159};
   Double_t _felx3019[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3019[25] = {
   0.7183177,
   1.283467,
   2.510104,
   3.465845,
   3.221524,
   1.877238,
   2.110521,
   1.516768,
   1.114036,
   0.6845628,
   1.387855,
   0.7371886,
   0.5775268,
   0.590691,
   0.1814299,
   0.1845929,
   0.1810027,
   0.175015,
   0.2206258,
   0.6421896,
   1.003045,
   0.6441786,
   0.05884185,
   0.04416653,
   0.181623};
   Double_t _fehx3019[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3019[25] = {
   0.7180246,
   1.57236,
   2.509573,
   3.465069,
   3.220706,
   1.398286,
   2.219463,
   1.687064,
   1.113665,
   1.367632,
   1.387929,
   0.7350051,
   0.5764984,
   0.5897319,
   0.2759941,
   0.1825464,
   0.2216299,
   0.1743269,
   0.2199934,
   0.6642402,
   1.003072,
   0.644128,
   0.05856196,
   0.1375004,
   0.1816029};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,2.000001,218);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(30.77812);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t _fx3020[25] = {
   23.6,
   30.8,
   38,
   45.2,
   52.4,
   59.6,
   66.8,
   74,
   81.2,
   88.4,
   95.6,
   102.8,
   110,
   117.2,
   124.4,
   131.6,
   138.8,
   146,
   153.2,
   160.4,
   167.6,
   174.8,
   182,
   189.2,
   196.4};
   Double_t _fy3020[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3020[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fely3020[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3020[25] = {
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6,
   3.6};
   Double_t _fehy3020[25] = {
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,2.000001,218);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(1.262698);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
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
   
   TH1F *hframe_copy100 = new TH1F("hframe_copy100","",1000,20,200);
   hframe_copy100->SetMinimum(0);
   hframe_copy100->SetMaximum(62.36891);
   hframe_copy100->SetDirectory(0);
   hframe_copy100->SetStats(0);
   hframe_copy100->SetLineStyle(0);
   hframe_copy100->SetMarkerStyle(20);
   hframe_copy100->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy100->GetXaxis()->SetNdivisions(506);
   hframe_copy100->GetXaxis()->SetLabelFont(42);
   hframe_copy100->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetXaxis()->SetLabelSize(0.05);
   hframe_copy100->GetXaxis()->SetTitleSize(0.06);
   hframe_copy100->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy100->GetXaxis()->SetTitleFont(42);
   hframe_copy100->GetYaxis()->SetTitle("Events");
   hframe_copy100->GetYaxis()->SetLabelFont(42);
   hframe_copy100->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetYaxis()->SetLabelSize(0.05);
   hframe_copy100->GetYaxis()->SetTitleSize(0.06);
   hframe_copy100->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy100->GetYaxis()->SetTitleFont(42);
   hframe_copy100->GetZaxis()->SetLabelFont(42);
   hframe_copy100->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetZaxis()->SetLabelSize(0.05);
   hframe_copy100->GetZaxis()->SetTitleSize(0.06);
   hframe_copy100->GetZaxis()->SetTitleFont(42);
   hframe_copy100->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_13TeV_pt1->cd();
   ccwh3l_MET_JetV_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_13TeV_pt1);
}
