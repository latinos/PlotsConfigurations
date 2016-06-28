void c_wh3l_plot_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_pt1/cc
//=========  (Tue Jun 28 13:56:30 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_pt1 = new TCanvas("ccwh3l_plot_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_plot_13TeV_pt1->Range(-28,-10.75558,209.5,71.97965);
   ccwh3l_plot_13TeV_pt1->SetFillColor(0);
   ccwh3l_plot_13TeV_pt1->SetBorderMode(0);
   ccwh3l_plot_13TeV_pt1->SetBorderSize(2);
   ccwh3l_plot_13TeV_pt1->SetTickx(1);
   ccwh3l_plot_13TeV_pt1->SetTicky(1);
   ccwh3l_plot_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe351 = new TH1F("hframe351","",1000,10,200);
   hframe351->SetMinimum(0);
   hframe351->SetMaximum(67.84289);
   hframe351->SetDirectory(0);
   hframe351->SetStats(0);
   hframe351->SetLineStyle(0);
   hframe351->SetMarkerStyle(20);
   hframe351->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe351->GetXaxis()->SetNdivisions(506);
   hframe351->GetXaxis()->SetLabelFont(42);
   hframe351->GetXaxis()->SetLabelOffset(0.007);
   hframe351->GetXaxis()->SetLabelSize(0.05);
   hframe351->GetXaxis()->SetTitleSize(0.06);
   hframe351->GetXaxis()->SetTitleOffset(0.9);
   hframe351->GetXaxis()->SetTitleFont(42);
   hframe351->GetYaxis()->SetTitle("Events");
   hframe351->GetYaxis()->SetLabelFont(42);
   hframe351->GetYaxis()->SetLabelOffset(0.007);
   hframe351->GetYaxis()->SetLabelSize(0.05);
   hframe351->GetYaxis()->SetTitleSize(0.06);
   hframe351->GetYaxis()->SetTitleOffset(1.25);
   hframe351->GetYaxis()->SetTitleFont(42);
   hframe351->GetZaxis()->SetLabelFont(42);
   hframe351->GetZaxis()->SetLabelOffset(0.007);
   hframe351->GetZaxis()->SetLabelSize(0.05);
   hframe351->GetZaxis()->SetTitleSize(0.06);
   hframe351->GetZaxis()->SetTitleFont(42);
   hframe351->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_pt1->SetName("thsBackground_grouped_wh3l_plot_13TeV_pt1");
   thsBackground_grouped_wh3l_plot_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71","thsBackground_grouped_wh3l_plot_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->SetMinimum(-0.8342681);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->SetMaximum(28.49401);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_71);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_pt1352 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_pt1352","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(2,-0.4597019);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(3,0.2460475);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(4,2.666232);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(5,4.566945);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(6,5.234385);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(7,0.6083629);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(8,2.354068);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(9,0.9728365);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(10,1.244113);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(11,0.3049455);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(12,1.256126);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(13,-0.5454715);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(14,0.8107582);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(15,0.06096897);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(16,0.01006685);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(17,-0.01611677);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(18,-0.09765524);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(19,-0.03910978);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(20,0.5089302);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(22,0.5423007);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(23,-0.008787465);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(24,-0.07274565);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(25,0.210203);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinContent(26,-0.06009144);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(2,0.3210063);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(3,0.6464754);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(4,1.521793);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(5,1.567348);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(6,2.035398);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(7,1.247853);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(8,1.423669);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(9,1.025077);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(10,0.6756499);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(11,1.12226);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(12,0.7550646);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(13,0.2887966);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(14,0.5069268);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(15,0.1395545);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(16,0.01006685);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(17,0.09750125);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(18,0.05865269);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(19,0.03910978);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(20,0.5319871);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(22,0.4525668);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(23,0.008222545);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(24,0.05987653);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(25,0.1543464);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetBinError(26,0.1261191);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetEntries(455);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1352->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_Fake_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_pt1353 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_pt1353","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinContent(5,0.02784318);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinContent(6,0.03235779);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinContent(7,0.03274813);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinContent(10,0.01092969);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinContent(12,0.01431565);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinError(5,0.02029379);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinError(6,0.02304949);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinError(7,0.02329387);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinError(10,0.01092969);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetBinError(12,0.01431565);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1353->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_WW_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_pt1354 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_pt1354","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(4,0.00262699);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(5,0.007890381);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(6,0.01308837);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(7,0.01334896);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(8,0.01662061);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(9,0.01408055);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(10,0.01452782);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(11,0.02011787);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(12,0.008906914);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(13,0.007311634);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(14,0.006212184);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(15,0.006191979);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(16,0.004916396);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(17,0.004335847);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(18,0.005424285);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(19,0.001636313);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(20,0.004125228);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(21,0.003661982);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(22,0.0005959842);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(23,0.001654794);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(24,0.001876585);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(25,0.001315615);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinContent(26,0.01556002);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(4,0.001580085);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(5,0.002271271);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(6,0.002870553);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(7,0.003023737);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(8,0.00335853);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(9,0.003156875);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(10,0.002983727);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(11,0.003716866);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(12,0.002772583);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(13,0.002079588);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(14,0.002227585);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(15,0.002248412);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(16,0.001744689);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(17,0.001585126);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(18,0.00186568);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(19,0.0009707763);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(20,0.001892968);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(21,0.00147888);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(22,0.001111265);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(23,0.001247232);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(24,0.001091115);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(25,0.0009305257);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetBinError(26,0.003375909);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetEntries(351);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1354->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_VVV_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_pt1355 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_pt1355","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(2,0.3631468);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(3,1.344557);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(4,1.498293);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(5,2.174032);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(6,1.23024);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(7,0.4854716);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(8,0.01704179);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(9,0.2493319);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(11,0.09873042);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(13,0.0928583);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinContent(22,0.1076973);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(2,0.1962641);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(3,0.3677183);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(4,0.4754317);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(5,0.5028452);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(6,0.3629933);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(7,0.2727073);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(8,0.1367235);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(9,0.2270403);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(11,0.07755791);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(13,0.0928583);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetBinError(22,0.1076973);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetEntries(107);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1355->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_Vg_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_pt1356 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_pt1356","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(2,0.06379279);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(3,0.08590242);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(4,0.3648282);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(5,0.76327);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(6,1.424903);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(7,1.578474);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(8,1.150362);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(9,0.5058681);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(10,0.4793809);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(11,0.5458599);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(12,0.4704162);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(13,0.3279077);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(14,0.2413229);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(15,0.1804831);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(16,0.1251711);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(17,0.08804905);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(18,0.04317268);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(19,0.07810389);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(21,0.08883265);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(22,0.01974776);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(24,0.04165012);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinContent(26,0.3098651);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(2,0.04577222);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(3,0.0556132);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(4,0.1214184);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(5,0.1729915);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(6,0.251515);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(7,0.2509511);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(8,0.2203293);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(9,0.1396682);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(10,0.1358972);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(11,0.1488744);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(12,0.1392357);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(13,0.1188527);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(14,0.101574);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(15,0.09036411);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(16,0.07254019);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(17,0.05543189);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(18,0.04317268);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(19,0.05555928);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(21,0.06284459);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(22,0.01974776);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(24,0.04165012);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetBinError(26,0.1188106);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetEntries(250);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1356->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_pt1357 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_pt1357","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(2,0.4095075);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(3,2.31748);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(4,5.874985);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(5,13.47869);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(6,19.0214);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(7,16.88878);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(8,13.78968);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(9,10.67993);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(10,7.8297);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(11,6.011872);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(12,4.233928);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(13,3.302641);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(14,2.50035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(15,1.768818);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(16,1.729217);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(17,1.324308);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(18,0.9976019);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(19,0.8675489);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(20,0.7054037);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(21,0.6761889);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(22,0.505309);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(23,0.3985091);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(24,0.302197);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(25,0.2539291);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinContent(26,2.246091);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(2,0.04720033);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(3,0.1116731);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(4,0.1786188);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(5,0.2703926);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(6,0.3218192);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(7,0.3029481);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(8,0.273242);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(9,0.2427604);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(10,0.2070056);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(11,0.1806936);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(12,0.150829);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(13,0.1333081);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(14,0.1166313);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(15,0.09701794);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(16,0.09701462);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(17,0.08451554);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(18,0.07404083);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(19,0.0689208);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(20,0.06109257);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(21,0.06116654);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(22,0.05237502);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(23,0.04664881);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(24,0.03991753);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(25,0.03697791);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetBinError(26,0.1101659);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetEntries(24096);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1357->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_WZ_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt1358 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt1358","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(2,0.01059943);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(3,0.0479753);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(4,0.1039079);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(5,0.1708133);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(6,0.1807826);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(7,0.2047529);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(8,0.1687517);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(9,0.148435);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(10,0.138637);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(11,0.1256451);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(12,0.09624607);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(13,0.0854493);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(14,0.06701554);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(15,0.05931845);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(16,0.0507837);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(17,0.04296093);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(18,0.03761918);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(19,0.01640222);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(20,0.02272475);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(21,0.01125252);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(22,0.00811157);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(23,0.004398503);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(24,0.005857501);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(25,0.01152046);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinContent(26,0.05185169);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(2,0.003716171);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(3,0.007008971);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(4,0.01070312);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(5,0.01463463);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(6,0.01527356);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(7,0.01599811);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(8,0.01421881);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(9,0.01338776);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(10,0.01371361);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(11,0.01211278);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(12,0.01009441);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(13,0.009651811);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(14,0.008116217);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(15,0.007461144);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(16,0.007964854);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(17,0.006553204);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(18,0.006453081);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(19,0.003936006);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(20,0.004525519);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(21,0.002870432);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(22,0.002726256);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(23,0.001462804);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(24,0.002465162);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(25,0.003817299);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetBinError(26,0.007686347);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1358->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt1,"");
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_pt1->SetName("thsSignal_grouped_wh3l_plot_13TeV_pt1");
   thsSignal_grouped_wh3l_plot_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72","thsSignal_grouped_wh3l_plot_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->SetMaximum(0.2317886);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_72);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt1359 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt1359","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(2,0.01059943);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(3,0.0479753);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(4,0.1039079);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(5,0.1708133);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(6,0.1807826);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(7,0.2047529);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(8,0.1687517);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(9,0.148435);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(10,0.138637);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(11,0.1256451);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(12,0.09624607);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(13,0.0854493);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(14,0.06701554);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(15,0.05931845);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(16,0.0507837);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(17,0.04296093);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(18,0.03761918);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(19,0.01640222);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(20,0.02272475);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(21,0.01125252);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(22,0.00811157);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(23,0.004398503);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(24,0.005857501);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(25,0.01152046);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinContent(26,0.05185169);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(2,0.003716171);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(3,0.007008971);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(4,0.01070312);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(5,0.01463463);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(6,0.01527356);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(7,0.01599811);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(8,0.01421881);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(9,0.01338776);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(10,0.01371361);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(11,0.01211278);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(12,0.01009441);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(13,0.009651811);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(14,0.008116217);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(15,0.007461144);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(16,0.007964854);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(17,0.006553204);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(18,0.006453081);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(19,0.003936006);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(20,0.004525519);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(21,0.002870432);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(22,0.002726256);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(23,0.001462804);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(24,0.002465162);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(25,0.003817299);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetBinError(26,0.007686347);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1359->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt1,"");
   thsSignal_grouped_wh3l_plot_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3071[25] = {
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
   Double_t _fy3071[25] = {
   0,
   0.3767452,
   4.01011,
   10.40697,
   21.01867,
   26.95637,
   19.60718,
   17.32777,
   12.45182,
   9.57865,
   6.981525,
   5.983693,
   3.185247,
   3.558644,
   2.016462,
   1.869371,
   1.400576,
   0.9485436,
   1.014028,
   1.218459,
   1.61632,
   1.175651,
   0.3913764,
   0.272978,
   0.4654477};
   Double_t _felx3071[25] = {
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
   Double_t _fely3071[25] = {
   0,
   0.6257386,
   0.8015385,
   2.434543,
   2.883677,
   3.384831,
   1.473746,
   2.062578,
   1.632965,
   1.097942,
   0.7218345,
   1.12716,
   0.6567157,
   0.7669787,
   0.2513168,
   0.1814257,
   0.239096,
   0.1801352,
   0.2707109,
   0.5919447,
   1.005806,
   0.6535651,
   0.0561805,
   0.1442011,
   0.2023329};
   Double_t _fehx3071[25] = {
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
   Double_t _fehy3071[25] = {
   0,
   0.6257385,
   1.200513,
   2.434543,
   2.883679,
   3.384834,
   2.109461,
   2.175397,
   1.684386,
   1.097943,
   1.535935,
   1.127161,
   0.6567153,
   0.7669784,
   0.3297314,
   0.1814257,
   0.1577436,
   0.1801351,
   0.2707109,
   0.6142502,
   1.005806,
   0.6540641,
   0.05618053,
   0.1442011,
   0.2023329};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3071,_fy3071,_felx3071,_fehx3071,_fely3071,_fehy3071);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3071 = new TH1F("Graph_Graph3071","",100,0,219);
   Graph_Graph3071->SetMinimum(-3.308013);
   Graph_Graph3071->SetMaximum(33.40023);
   Graph_Graph3071->SetDirectory(0);
   Graph_Graph3071->SetStats(0);
   Graph_Graph3071->SetLineStyle(0);
   Graph_Graph3071->SetMarkerStyle(20);
   Graph_Graph3071->GetXaxis()->SetLabelFont(42);
   Graph_Graph3071->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3071->GetXaxis()->SetTitleFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3071->GetYaxis()->SetTitleFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3071);
   
   grae->Draw("2");
   
   Double_t _fx3072[25] = {
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
   Double_t _fy3072[25] = {
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
   Double_t _felx3072[25] = {
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
   Double_t _fely3072[25] = {
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
   Double_t _fehx3072[25] = {
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
   Double_t _fehy3072[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3072,_fy3072,_felx3072,_fehx3072,_fely3072,_fehy3072);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3072 = new TH1F("Graph_Graph3072","",100,0,219);
   Graph_Graph3072->SetMinimum(0);
   Graph_Graph3072->SetMaximum(1.262698);
   Graph_Graph3072->SetDirectory(0);
   Graph_Graph3072->SetStats(0);
   Graph_Graph3072->SetLineStyle(0);
   Graph_Graph3072->SetMarkerStyle(20);
   Graph_Graph3072->GetXaxis()->SetLabelFont(42);
   Graph_Graph3072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3072->GetXaxis()->SetTitleFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3072->GetYaxis()->SetTitleFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3072);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt1","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy360 = new TH1F("hframe_copy360","",1000,10,200);
   hframe_copy360->SetMinimum(0);
   hframe_copy360->SetMaximum(67.84289);
   hframe_copy360->SetDirectory(0);
   hframe_copy360->SetStats(0);
   hframe_copy360->SetLineStyle(0);
   hframe_copy360->SetMarkerStyle(20);
   hframe_copy360->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy360->GetXaxis()->SetNdivisions(506);
   hframe_copy360->GetXaxis()->SetLabelFont(42);
   hframe_copy360->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetXaxis()->SetLabelSize(0.05);
   hframe_copy360->GetXaxis()->SetTitleSize(0.06);
   hframe_copy360->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy360->GetXaxis()->SetTitleFont(42);
   hframe_copy360->GetYaxis()->SetTitle("Events");
   hframe_copy360->GetYaxis()->SetLabelFont(42);
   hframe_copy360->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetYaxis()->SetLabelSize(0.05);
   hframe_copy360->GetYaxis()->SetTitleSize(0.06);
   hframe_copy360->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy360->GetYaxis()->SetTitleFont(42);
   hframe_copy360->GetZaxis()->SetLabelFont(42);
   hframe_copy360->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetZaxis()->SetLabelSize(0.05);
   hframe_copy360->GetZaxis()->SetTitleSize(0.06);
   hframe_copy360->GetZaxis()->SetTitleFont(42);
   hframe_copy360->Draw("sameaxis");
   ccwh3l_plot_13TeV_pt1->Modified();
   ccwh3l_plot_13TeV_pt1->cd();
   ccwh3l_plot_13TeV_pt1->SetSelected(ccwh3l_plot_13TeV_pt1);
}
