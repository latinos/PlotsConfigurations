/*

root -l -b -q 'macroROC.C("2HDM","adapt","monoH_600_300")'
root -l -b -q 'macroROC.C("2HDM","adapt","monoH_1000_300")'
root -l -b -q 'macroROC.C("2HDM","adapt","monoH_2000_300")'
root -l -b -q 'macroROC.C("2HDM","adapt","monoH_2500_300")'

root -l -b -q 'macroROC.C("Zbar","adapt","monoH_ZB_10_1_")'
root -l -b -q 'macroROC.C("Zbar","adapt","monoH_ZB_100_1_")'
root -l -b -q 'macroROC.C("Zbar","adapt","monoH_ZB_1000_1_")'
root -l -b -q 'macroROC.C("Zbar","adapt","monoH_ZB_2000_1_")'

*/

const int nprocesses = 5;

Double_t maximum(Double_t x, Double_t y, Double_t w, Double_t z) {
  Double_t max = x;
  if (y > max) { 
    max = y;
  } 
  if (z > max) { 
    max = z;
  } 
  if (w > max) { 
    max = w;
  } 
  return max; 
} 


const int nBkg = 16;

TString bkgNames[nBkg] = {"histo_DY",
			  "histo_Fake",
			  "histo_H_htt",
			  "histo_VVV",
			  "histo_VZ",
			  "histo_Vg",
			  "histo_VgS",
			  "histo_WH_hww",
			  "histo_WW",
			  "histo_ZH_hww",
			  "histo_bbH_hww",
			  "histo_ggH_hww",
			  "histo_ggWW",
			  "histo_ggZH_hww",
			  "histo_qqH_hww",
			  "histo_top"};

using namespace std;

void macroROC( TString model     = "2HDM",
	       TString training  = "adapt",
	       TString signal    = "monoH_600_300" //monoH_ZB_100_1_
	       ){

  TString massPoint[nprocesses];
  if (model == "2HDM"){
    massPoint[0] = "600";
    massPoint[1] = "1000";
    massPoint[2] = "2000";
    massPoint[3] = "2500";
    massPoint[4] = "All_NoWeights";
  }
  else if (model == "Zbar"){
    massPoint[0] = "10";
    massPoint[1] = "100";
    massPoint[2] = "1000";
    massPoint[3] = "2000";
    massPoint[4] = "All_NoWeights";
  }

  TH1F* hDumpBkg[nBkg];

  TFile* f = new TFile("rootFile_em/plots_monoHWW_em_SIGN.root","read");
 
  TH1F* hSignificance[nprocesses]; //= new TH1F("hSignificance","hSignificance",10000,-1.,1.);

  TGraph* ROC[nprocesses];// = new TGraph();

  for (int train = 0; train < nprocesses; ++train){
    
    ROC[train] = new TGraph();
    TString folder = "monoH_MVA_em/muccamva" + model + training + "Full_" + massPoint[train] + "_sign";

    TH1F* hSig = (TH1F*) f->Get(folder + "/histo_" + signal);
    Int_t nbins = hSig -> GetSize() - 2;
    TH1F* hBkg = new TH1F("hBkg","hBkg",nbins,-1.,1.);

    for (int j = 0; j < nBkg; ++j){
      hDumpBkg[j] = (TH1F*) f->Get(folder + "/" + bkgNames[j]);
      hBkg -> Add(hDumpBkg[j],1);
    }
    
    hSignificance[train] = new TH1F("hSignificance","hSignificance",nbins,-1.,1.);

    hSig -> Rebin(10);
    hBkg -> Rebin(10);
    hSignificance[train] -> Rebin(10);

    Float_t integralSig = 0.;
    Float_t integralBkg = 0.;
    
    integralSig = hSig -> Integral();
    integralBkg = hBkg -> Integral();
    
    Float_t effSig = 0.;
    Float_t effBkg = 0.;
    
    // ROC Curve
    for (int b = 0; b < nbins; ++b){
      Float_t S = hSig -> Integral(b,nbins);
      Float_t B = hBkg -> Integral(b,nbins);
      effSig = S / integralSig;
      effBkg = B / integralBkg;
      ROC[train] -> SetPoint(b, 1 - effBkg, effSig);
    }
    
    // Significance Curve
    for (int i = 1; i < nbins; ++i){
      Float_t S = hSig -> Integral(i,nbins); // signal yields
      Float_t B = hBkg -> Integral(i,nbins); // background yields
      if (i == 1) cout<<"Signal Integral = "<<S<<endl;
      Float_t significance = 0.;
      if (S + B > 0) significance = S / sqrt(S + B);
      hSignificance[train] -> SetBinContent(i,significance);
    }
  }


  TCanvas *c1 = new TCanvas("c1","c1",600,600);
  c1 -> cd();
  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->Draw();
  pad1->SetLeftMargin(0.15);
  pad1->cd();
  TString rocTitle = "";
  rocTitle = "ROC Curve for " + signal + " Mass Point"; 
  ROC[0] -> SetTitle(rocTitle);
  ROC[0] -> GetXaxis() -> SetRangeUser(0.0,1.0);
  ROC[0] -> GetYaxis() -> SetRangeUser(0.5,1.0);
  ROC[0] -> SetLineColor(kRed);
  ROC[0] -> SetLineWidth(4);
  ROC[0] -> GetXaxis() -> SetTitle("Background Rejection");
  ROC[0] -> GetYaxis() -> SetTitle("Signal Efficiency");
  ROC[0] -> GetYaxis() -> SetTitleOffset(2);
  ROC[1] -> SetLineColor(kGreen);
  ROC[1] -> SetLineWidth(4);
  ROC[2] -> SetLineColor(kBlue);
  ROC[2] -> SetLineWidth(4);
  ROC[3] -> SetLineColor(kOrange);
  ROC[3] -> SetLineWidth(4);
  ROC[4] -> SetLineColor(kViolet);
  ROC[4] -> SetLineWidth(4);
  ROC[0] -> Draw("AL");
  ROC[1] -> Draw("Lsame");
  ROC[2] -> Draw("Lsame");
  ROC[3] -> Draw("Lsame");
  ROC[4] -> Draw("Lsame");

  TString legendLabel[nprocesses];
  if (model == "2HDM"){
    legendLabel[0] = "600 300";
    legendLabel[1] = "1000 300";
    legendLabel[2] = "2000 300";
    legendLabel[3] = "2500 300";
    legendLabel[4] = "All";
  }
  else if (model == "Zbar"){
    legendLabel[0] = "10 1";
    legendLabel[1] = "100 1";
    legendLabel[2] = "1000 1";
    legendLabel[3] = "2000 1";  
    legendLabel[4] = "All";  
  }
  TLegend* leg1 = new TLegend(0.2,0.2,0.5,0.4);
  leg1->SetHeader("Trainings:");
  TLegendEntry* l1 = leg1->AddEntry("ROC[0]",legendLabel[0],"lp");
  l1->SetMarkerColor(kRed);
  TLegendEntry* l2 = leg1->AddEntry("ROC[1]",legendLabel[1],"lp");
  l2->SetMarkerColor(kGreen);
  TLegendEntry* l3 = leg1->AddEntry("ROC[2]",legendLabel[2],"lp");
  l3->SetMarkerColor(kBlue);
  TLegendEntry* l4 = leg1->AddEntry("ROC[3]",legendLabel[3],"lp");
  l4->SetMarkerColor(kOrange);
  TLegendEntry* l5 = leg1->AddEntry("ROC[4]",legendLabel[4],"lp");
  l5->SetMarkerColor(kViolet);
  leg1->SetLineColor(kWhite);
  leg1->Draw("same");

  TString save = "";
  save = "ROC" + model + "_" + training + "_" + signal + ".png";
  c1->Print(save);
  save = "ROC" + model + "_" + training + "_" + signal + ".pdf";
  c1->Print(save);


  TCanvas *c2 = new TCanvas("c2","c2",600,600);
  c2->cd();
  TPad* pad2 = new TPad("pad2","pad2",0.,0.,1.,1.);
  pad2->Draw();
  pad2->SetLeftMargin(0.15);
  pad2->cd();
  gStyle -> SetOptStat(0);
  TString sigTitle = "";
  sigTitle = "Significance Curve for " + signal + " Mass Point";
  hSignificance[0] -> SetTitle(sigTitle);
  hSignificance[0] -> SetLineColor(kRed);
  hSignificance[0] -> SetLineWidth(4);
  hSignificance[0] -> GetXaxis() -> SetTitle("BDT output");
  hSignificance[0] -> GetYaxis() -> SetTitle("#frac{S}{#sqrt{S + B}}");
  hSignificance[0] -> GetYaxis() -> SetTitleOffset(2);
  hSignificance[0] -> GetYaxis() -> SetRangeUser(0.,1.2*maximum(hSignificance[0]->GetMaximum(),hSignificance[1]->GetMaximum(),hSignificance[2]->GetMaximum(),hSignificance[3]->GetMaximum()));
  hSignificance[1] -> SetLineColor(kGreen);
  hSignificance[1] -> SetLineWidth(4);
  hSignificance[2] -> SetLineColor(kBlue);
  hSignificance[2] -> SetLineWidth(4);
  hSignificance[3] -> SetLineColor(kOrange);
  hSignificance[3] -> SetLineWidth(4);
  hSignificance[4] -> SetLineColor(kViolet);
  hSignificance[4] -> SetLineWidth(4);
  hSignificance[0]->Draw();
  hSignificance[1]->Draw("same");
  hSignificance[2]->Draw("same");
  hSignificance[3]->Draw("same");
  hSignificance[4]->Draw("same");

  TLegend* leg2 = new TLegend(0.2,0.6,0.5,0.8);
  leg2->SetHeader("Trainings:");
  TLegendEntry* la = leg2->AddEntry("hSignificance[0]",legendLabel[0],"lp");
  la->SetMarkerColor(kRed);
  TLegendEntry* lb = leg2->AddEntry("hSignificance[1]",legendLabel[1],"lp");
  lb->SetMarkerColor(kGreen);
  TLegendEntry* lc = leg2->AddEntry("hSignificance[2]",legendLabel[2],"lp");
  lc->SetMarkerColor(kBlue);
  TLegendEntry* ld = leg2->AddEntry("hSignificance[3]",legendLabel[3],"lp");
  ld->SetMarkerColor(kOrange);
  TLegendEntry* le = leg2->AddEntry("hSignificance[4]",legendLabel[4],"lp");
  le->SetMarkerColor(kViolet);
  leg2->SetLineColor(kWhite);
  leg2->Draw("same");

  save = "Significance" + model + "_" + training + "_" + signal + ".png";
  c2->Print(save);
  save = "Significance" + model + "_" + training + "_" + signal + ".pdf";
  c2->Print(save);
}
