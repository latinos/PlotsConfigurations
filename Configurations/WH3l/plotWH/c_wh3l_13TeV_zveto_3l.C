void c_wh3l_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_zveto_3l/cc
//=========  (Fri Jun 24 14:14:18 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_zveto_3l = new TCanvas("ccwh3l_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_13TeV_zveto_3l->Range(-20,-118.0667,105,790.1388);
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
   
   TH1F *hframe1 = new TH1F("hframe1","",1000,0,100);
   hframe1->SetMinimum(0);
   hframe1->SetMaximum(744.7286);
   hframe1->SetDirectory(0);
   hframe1->SetStats(0);
   hframe1->SetLineStyle(0);
   hframe1->SetMarkerStyle(20);
   hframe1->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe1->GetXaxis()->SetNdivisions(506);
   hframe1->GetXaxis()->SetLabelFont(42);
   hframe1->GetXaxis()->SetLabelOffset(0.007);
   hframe1->GetXaxis()->SetLabelSize(0.05);
   hframe1->GetXaxis()->SetTitleSize(0.06);
   hframe1->GetXaxis()->SetTitleOffset(0.9);
   hframe1->GetXaxis()->SetTitleFont(42);
   hframe1->GetYaxis()->SetTitle("Events");
   hframe1->GetYaxis()->SetLabelFont(42);
   hframe1->GetYaxis()->SetLabelOffset(0.007);
   hframe1->GetYaxis()->SetLabelSize(0.05);
   hframe1->GetYaxis()->SetTitleSize(0.06);
   hframe1->GetYaxis()->SetTitleOffset(1.25);
   hframe1->GetYaxis()->SetTitleFont(42);
   hframe1->GetZaxis()->SetLabelFont(42);
   hframe1->GetZaxis()->SetLabelOffset(0.007);
   hframe1->GetZaxis()->SetLabelSize(0.05);
   hframe1->GetZaxis()->SetTitleSize(0.06);
   hframe1->GetZaxis()->SetTitleFont(42);
   hframe1->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1 = new TH1F("thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1","thsBackground_grouped_wh3l_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->SetMinimum(-0.5621836);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->SetMaximum(312.786);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_zveto_3l_stack_1);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_zveto_3l2 = new TH1D("new_histo_group_DY_wh3l_13TeV_zveto_3l2","histo_DY",20,0,100);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(1,96.3855);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(2,16.57139);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(3,14.29077);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(4,12.54226);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(5,11.82611);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(6,11.85672);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(7,6.188542);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(8,7.731126);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(9,9.039393);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(10,6.57115);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(11,3.136598);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(12,1.805672);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(13,1.196733);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(14,0.9327943);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(15,0.3592267);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(16,0.6607203);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(17,1.902058);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinContent(19,1.177394);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(1,10.82717);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(2,3.982187);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(3,3.411715);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(4,3.451613);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(5,3.448327);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(6,3.21236);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(7,3.324683);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(8,2.578675);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(9,2.755845);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(10,2.102282);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(11,1.431778);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(12,1.221272);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(13,1.154409);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(14,0.6932143);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(15,0.3592267);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(16,0.8602962);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(17,1.146292);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetBinError(19,1.739578);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetEntries(546);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_zveto_3l2->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_DY_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_zveto_3l3 = new TH1D("new_histo_group_top_wh3l_13TeV_zveto_3l3","histo_top",20,0,100);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(1,0.657759);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(2,0.8752217);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(3,0.4148897);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(4,0.2575789);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(5,0.3258907);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(6,0.6264149);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(7,0.4195378);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(8,0.4197532);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(9,0.2938814);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(10,0.3307154);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(11,0.2029618);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(12,0.27599);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(13,0.1679106);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(14,0.202553);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(15,0.08690139);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(16,0.04535804);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(17,0.04706357);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(18,0.04519698);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinContent(19,2.470045);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(1,0.1272675);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(2,0.1860675);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(3,0.1195471);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(4,0.1037285);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(5,0.08449245);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(6,0.1409809);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(7,0.09581691);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(8,0.09608668);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(9,0.1119138);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(10,0.08543156);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(11,0.06441676);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(12,0.09667552);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(13,0.1056369);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(14,0.06248552);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(15,0.04566895);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(16,0.0325978);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(17,0.03332799);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(18,0.03200542);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetBinError(19,0.2846005);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetEntries(377);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_zveto_3l3->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_zveto_3l3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_top_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_zveto_3l4 = new TH1D("new_histo_group_WW_wh3l_13TeV_zveto_3l4","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(1,0.02785705);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(3,0.006873474);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(4,0.02440942);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(5,0.01458724);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(7,0.01801627);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(10,0.002526849);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(11,0.01814846);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(12,0.02526565);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(13,0.01398351);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(14,0.002369701);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(15,0.04191078);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(17,0.01005404);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinContent(19,0.0992712);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(1,0.02038355);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(3,0.004865787);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(4,0.017503);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(5,0.01458724);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(7,0.01801627);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(10,0.002526849);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(11,0.01814846);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(12,0.01826074);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(13,0.01398351);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(14,0.002369701);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(15,0.02434454);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(17,0.01005404);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetBinError(19,0.03924961);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetEntries(26);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_zveto_3l4->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_zveto_3l5 = new TH1D("new_histo_group_VVV_wh3l_13TeV_zveto_3l5","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(1,0.1882221);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(2,0.02367387);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(3,0.006626765);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(4,0.005767306);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(5,0.001632875);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(6,0.002041335);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(7,0.001891576);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(8,0.001860347);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(9,0.001524559);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(10,0.0002902462);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(11,0.001041601);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(12,0.0006319344);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(14,0.000419599);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinContent(19,0.005317341);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(1,0.01149481);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(2,0.004050117);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(3,0.00202231);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(4,0.002066706);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(5,0.00103072);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(6,0.001183702);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(7,0.001474336);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(8,0.001075906);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(9,0.0009547734);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(10,0.0002902462);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(11,0.0007366481);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(12,0.0006319344);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(14,0.000419599);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetBinError(19,0.00179963);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetEntries(478);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_zveto_3l5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_zveto_3l6 = new TH1D("new_histo_group_VZ_wh3l_13TeV_zveto_3l6","histo_VZ",20,0,100);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(1,200.5507);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(2,30.57699);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(3,9.723341);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(4,5.687402);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(5,4.081606);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(6,2.778033);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(7,2.578475);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(8,2.443975);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(9,2.187772);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(10,2.158836);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(11,2.215635);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(12,1.990401);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(13,2.027686);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(14,1.558609);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(15,1.550931);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(16,1.65139);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(17,1.521959);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(18,0.4835781);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinContent(19,3.305481);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(1,1.634276);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(2,0.6556509);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(3,0.3371561);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(4,0.2604223);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(5,0.2211644);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(6,0.158171);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(7,0.1858405);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(8,0.1796996);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(9,0.1370128);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(10,0.1459638);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(11,0.1684206);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(12,0.1620565);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(13,0.1654927);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(14,0.1016826);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(15,0.1215114);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(16,0.1107035);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(17,0.09023318);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(18,0.05038033);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetBinError(19,0.1887078);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetEntries(46249);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_zveto_3l6->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_VZ_wh3l_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_zveto_3l7 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_zveto_3l7","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(1,0.08135816);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(2,0.08070117);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(3,0.06011274);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(4,0.06968894);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(5,0.07619183);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(6,0.09422247);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(7,0.07513068);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(8,0.1071716);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(9,0.08047222);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(10,0.08864165);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(11,0.05793148);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(12,0.09092402);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(13,0.05545697);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(14,0.04170297);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(15,0.03755379);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(16,0.02167653);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(17,0.01127707);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(18,0.004143051);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinContent(19,0.3834641);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(1,0.009222681);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(2,0.009520006);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(3,0.008015481);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(4,0.008407566);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(5,0.009439178);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(6,0.009969242);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(7,0.008620604);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(8,0.01083259);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(9,0.009071663);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(10,0.01006331);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(11,0.008389556);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(12,0.01109777);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(13,0.008926368);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(14,0.00737257);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(15,0.007155609);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(16,0.005335613);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(17,0.004835214);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(18,0.00225018);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetBinError(19,0.02043929);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2 = new TH1F("thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2","thsSignal_grouped_wh3l_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->SetMaximum(0.4240986);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_zveto_3l_stack_2);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_zveto_3l8 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_zveto_3l8","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(1,0.08135816);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(2,0.08070117);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(3,0.06011274);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(4,0.06968894);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(5,0.07619183);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(6,0.09422247);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(7,0.07513068);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(8,0.1071716);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(9,0.08047222);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(10,0.08864165);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(11,0.05793148);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(12,0.09092402);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(13,0.05545697);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(14,0.04170297);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(15,0.03755379);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(16,0.02167653);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(17,0.01127707);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(18,0.004143051);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinContent(19,0.3834641);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(1,0.009222681);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(2,0.009520006);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(3,0.008015481);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(4,0.008407566);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(5,0.009439178);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(6,0.009969242);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(7,0.008620604);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(8,0.01083259);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(9,0.009071663);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(10,0.01006331);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(11,0.008389556);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(12,0.01109777);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(13,0.008926368);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(14,0.00737257);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(15,0.007155609);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(16,0.005335613);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(17,0.004835214);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(18,0.00225018);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetBinError(19,0.02043929);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_zveto_3l8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3001[20] = {
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
   Double_t _fy3001[20] = {
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
   Double_t _felx3001[20] = {
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
   Double_t _fely3001[20] = {
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
   Double_t _fehx3001[20] = {
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
   Double_t _fehy3001[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,110);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1.262698);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_zveto_3l","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_zveto_3l","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_zveto_3l","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_zveto_3l","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_zveto_3l","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_zveto_3l","VZ/#gamma*/#gamma","F");

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
   leg->Draw();
   
   TH1F *hframe_copy9 = new TH1F("hframe_copy9","",1000,0,100);
   hframe_copy9->SetMinimum(0);
   hframe_copy9->SetMaximum(744.7286);
   hframe_copy9->SetDirectory(0);
   hframe_copy9->SetStats(0);
   hframe_copy9->SetLineStyle(0);
   hframe_copy9->SetMarkerStyle(20);
   hframe_copy9->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy9->GetXaxis()->SetNdivisions(506);
   hframe_copy9->GetXaxis()->SetLabelFont(42);
   hframe_copy9->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetXaxis()->SetLabelSize(0.05);
   hframe_copy9->GetXaxis()->SetTitleSize(0.06);
   hframe_copy9->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy9->GetXaxis()->SetTitleFont(42);
   hframe_copy9->GetYaxis()->SetTitle("Events");
   hframe_copy9->GetYaxis()->SetLabelFont(42);
   hframe_copy9->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetYaxis()->SetLabelSize(0.05);
   hframe_copy9->GetYaxis()->SetTitleSize(0.06);
   hframe_copy9->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy9->GetYaxis()->SetTitleFont(42);
   hframe_copy9->GetZaxis()->SetLabelFont(42);
   hframe_copy9->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetZaxis()->SetLabelSize(0.05);
   hframe_copy9->GetZaxis()->SetTitleSize(0.06);
   hframe_copy9->GetZaxis()->SetTitleFont(42);
   hframe_copy9->Draw("sameaxis");
   ccwh3l_13TeV_zveto_3l->Modified();
   ccwh3l_13TeV_zveto_3l->cd();
   ccwh3l_13TeV_zveto_3l->SetSelected(ccwh3l_13TeV_zveto_3l);
}
