/*

root -l -b -q 'macroSignificance.C("2HDM","adapt","monoH_800_300","All_DY")'
root -l -b -q 'macroSignificance.C("Zbar","adapt","monoH_ZB_100_1_","All_DY")'

root -l -b -q 'macroSignificance.C("2HDM","adapt","monoH_1000_300","All")'
root -l -b -q 'macroSignificance.C("Zbar","adapt","monoH_ZB_100_1_","All")'

root -l -b -q 'macroSignificance.C("2HDM","adapt","monoH_2000_300","All")'
root -l -b -q 'macroSignificance.C("Zbar","adapt","monoH_ZB_1000_1_","All")'

root -l -b -q 'macroSignificance.C("2HDM","adapt","monoH_2500_300","All")'
root -l -b -q 'macroSignificance.C("Zbar","adapt","monoH_ZB_2000_1_","All")'

*/

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

void macroSignificance( TString model     = "2HDM",
			TString training  = "adapt",
			TString signal    = "monoH_600_300", //monoH_ZB_100_1_
			TString massPoint = "new" 
			){

  TH1F* hDumpBkg[nBkg];
  //muccamvaZbaradaptFull_2000_sign
  TString folder = "monoH_MVA_sf/muccamva" + model + training + "Full_" + massPoint + "_sign";

  TFile* f = new TFile("rootFile_sf/plots_monoHWW_sf_SIGN.root","read");

  TH1F* hSig = (TH1F*) f->Get(folder + "/histo_" + signal);
  TH1F* hBkg = new TH1F("hBkg","hBkg",10000,-1.,1.);
 
  TH1F* hSignificance = new TH1F("hSignificance","hSignificance",10000,-1.,1.);

  TGraph* ROC = new TGraph();

  for (int j = 0; j < nBkg; ++j){
    hDumpBkg[j] = (TH1F*) f->Get(folder + "/" + bkgNames[j]);
    hBkg -> Add(hDumpBkg[j],1);
  }

  float maxSig = -9999.;
  float MVAmax = 0.;
  float upperLimit = 10000;
  int cont = 1;
  int bestBin = 100000;
  std::vector<float> myBestBinning;

  Float_t integralSig = 0.;
  Float_t integralBkg = 0.;

  integralSig = hSig -> Integral();
  integralBkg = hBkg -> Integral();

  Float_t effSig = 0.;
  Float_t effBkg = 0.;

  // ROC Curve
  for (int b = 0; b < 10000; ++b){
    Float_t S = hSig -> Integral(b,10000);
    Float_t B = hBkg -> Integral(b,10000);
    effSig = S / integralSig;
    effBkg = B / integralBkg;
    ROC -> SetPoint(b, 1 - effBkg, effSig);
  }

  while (upperLimit > 1){
    maxSig = -9999.;
    cout<<"Round number: "<<cont<<endl;
    cout<<"Upper limit in: "<<upperLimit<<endl;
    for (int i = 1; i < upperLimit; ++i){
      Float_t S = hSig -> Integral(i,upperLimit); // signal yields
      Float_t B = hBkg -> Integral(i,upperLimit); // background yields
      if (i == 1) cout<<"Signal Integral = "<<S<<endl;
      Float_t significance = 0.;
      if (S + B != 0) significance = S / sqrt(S + B);
      hSignificance -> SetBinContent(i,significance);
      if (significance > maxSig){
	maxSig = significance;
	MVAmax = hSignificance->GetBinCenter(i);
	bestBin = i;
      }
    }
    ++cont; 
    upperLimit = bestBin;
    cout<<"Upper limit out: "<<upperLimit<<endl;
    cout<<"Significance: "<<maxSig<<endl;
    cout<<"MVA Best Cut: "<<MVAmax<<endl;
    cout<<"--------------"<<endl;
    myBestBinning.push_back(MVAmax);
  }
  
  //  'range' : ([-1,-0.80,-0.65,-0.50,-0.35,-0.20,-0.05,0.136,1.00],),
  cout<<"\'range\' : ([";
  for (int l = 0; l < myBestBinning.size(); ++l){
    cout<<myBestBinning.at(myBestBinning.size() -1 - l)<<",";
  }
  cout<<"1],),"<<endl;

  // Just repeating the first scan ( = last bin )
  maxSig = -9999.;
  MVAmax = 0.;
  upperLimit = 10000;
  
  for (int i = 1; i < upperLimit; ++i){
    Float_t S = hSig -> Integral(i,upperLimit); // signal yields
    Float_t B = hBkg -> Integral(i,upperLimit); // background yields
    Float_t significance = 0.;
    if (S + B != 0) significance = S / sqrt(S + B);
    hSignificance -> SetBinContent(i,significance);
    if (significance > maxSig){
      maxSig = significance;
      MVAmax = hSignificance->GetBinCenter(i);
    }
  }

  // Cosmetics & Drawings

  hSignificance -> SetLineColor(kGreen + 1);
  hSignificance -> SetLineWidth(4);
  hSignificance -> SetTitle(model + " model, " + training + " boost training");
  hSignificance -> GetXaxis() -> SetTitle("BDT Cut");
  hSignificance -> GetYaxis() -> SetTitle("#frac{S}{#sqrt{S + B}}");
  hSignificance -> GetYaxis() -> SetTitleOffset(2);

  gStyle -> SetOptStat(0);

  char latexString[80];
  sprintf(latexString,"Best MVA cut: %3f", MVAmax);
  char latexString2[80];
  sprintf(latexString2,"Best significance: %3f", maxSig);

  TLatex* tl = new TLatex(0.2,0.35,latexString);
  tl->SetNDC();
  tl->SetTextSize(0.03);
  TLatex* tl2 = new TLatex(0.2,0.30,latexString2);
  tl2->SetNDC();
  tl2->SetTextSize(0.03);

  TCanvas *c1 = new TCanvas("c1","c1",600,600);
  c1->cd();
  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->Draw();
  pad1->SetLeftMargin(0.15);
  pad1->cd();
  hSignificance->Draw();
  tl->Draw("same");
  tl2->Draw("same");
  TString save = "";
  save = "Significance" + model + "_" + training + ".png";
  c1->Print(save);
  TString save2 = "";
  save2 = "Significance" + model + "_" + training + ".pdf";
  c1->Print(save2);

  ROC -> Draw("APL");

}

// KEY: TH1Dhisto_DATA;1histo_DATA
// KEY: TH1Dhisto_DY;1histo_DY
// KEY: TH1Dhisto_Fake;1histo_Fake
// KEY: TH1Dhisto_H_htt;1histo_H_htt
// KEY: TH1Dhisto_VVV;1histo_VVV
// KEY: TH1Dhisto_VZ;1histo_VZ
// KEY: TH1Dhisto_Vg;1histo_Vg
// KEY: TH1Dhisto_VgS;1histo_VgS
// KEY: TH1Dhisto_WH_hww;1histo_WH_hww
// KEY: TH1Dhisto_WW;1histo_WW
// KEY: TH1Dhisto_ZH_hww;1histo_ZH_hww
// KEY: TH1Dhisto_bbH_hww;1histo_bbH_hww
// KEY: TH1Dhisto_ggH_hww;1histo_ggH_hww
// KEY: TH1Dhisto_ggWW;1histo_ggWW
// KEY: TH1Dhisto_ggZH_hww;1histo_ggZH_hww
// KEY: TH1Dhisto_qqH_hww;1histo_qqH_hww
// KEY: TH1Dhisto_top;1histo_top
