#include "TAxis.h"

using namespace std;

void macroPulls(TString folder = "pulls_em_MVA",
		TString model = "", //"ZB_"
		TString massPoint = "800_300",
		TString variable = "mthBin",
		TString region = "SR" //_CR
		){

  TString fileName = folder + "/pulls_" + model + massPoint + "_" + variable + "_" + region + ".root";
  
  TFile* f = new TFile(fileName);
  TCanvas *c1 = (TCanvas*)f->Get("nuisancs");
  TGraphAsymmErrors *g1 = (TGraphAsymmErrors*)c1->GetPrimitive("prefit_fit_s");
  TGraphAsymmErrors *g2 = (TGraphAsymmErrors*)c1->GetPrimitive("prefit_fit_b");
  TH1F *g3 = (TH1F*)c1->GetPrimitive("prefit_nuisancs");
  
  Int_t nbins = g3->GetSize();
  
  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors();
  TGraphAsymmErrors *gr2 = new TGraphAsymmErrors();
  TH1F *gr3 = new TH1F("gr3","gr3",nbins,0,nbins);
  
  //Count the number of actual nuisances
  int cont = 1;
  for (int i = 0; i < g3 -> GetSize(); ++i){
    TString string = g3->GetXaxis()->GetBinLabel(i);
    if (string.Contains("monoH_"+model+"_"+massPoint) || (!string.Contains("em_monoH"))){
      // cout<<g2->Eval(i+0.6)<<endl;
      // cout<<g2->GetErrorY(i)<<endl;
      // // cout<<g2->Eval(i)<<endl;
      // cout<<g3->GetXaxis()->GetBinLabel(i)<<endl;
      // cout<<""<<endl;
      gr1->SetPoint(cont,cont+0.4,g1->Eval(i+0.4));
      gr2->SetPoint(cont,cont+0.6,g2->Eval(i+0.6));
      gr1->SetPointError(cont,0.,0.,g1->GetErrorYlow(i),g1->GetErrorYhigh(i));  //Double_t exl, Double_t exh, Double_t eyl, Double_t eyh
      gr2->SetPointError(cont,0.,0.,g2->GetErrorYlow(i),g2->GetErrorYhigh(i));  //Double_t exl, Double_t exh, Double_t eyl, Double_t eyh
      //      gr2->SetPointError(cont,abs(g2->GetErrorY(i)));
      gr3->GetXaxis()->SetBinLabel(cont,g3->GetXaxis()->GetBinLabel(i));
      // gr1->SetPoint(i,i,g1->GetBinContent(i));
      // gr1->SetPointError(i,g1->GetBinError(i));
      ++cont;
    }
  }
  gr1->Draw("APE");
  
  TH1F *oneSigmaUp = new TH1F("oneSigmaUp","oneSigmaUp",nbins,0,nbins);
  oneSigmaUp->SetFillColor(kGreen);
  oneSigmaUp->SetLineColor(kGreen);
  oneSigmaUp->SetFillStyle(3001);
  TH1F *oneSigmaDo = new TH1F("oneSigmaDo","oneSigmaDo",nbins,0,nbins);
  oneSigmaDo->SetFillColor(kGreen);
  oneSigmaDo->SetLineColor(kGreen);
  oneSigmaDo->SetFillStyle(3001);
  TH1F *twoSigmaUp = new TH1F("twoSigmaUp","twoSigmaUp",nbins,0,nbins);
  twoSigmaUp->SetFillColor(kYellow);
  twoSigmaUp->SetLineColor(kYellow);
  twoSigmaUp->SetFillStyle(3001);
  TH1F *twoSigmaDo = new TH1F("twoSigmaDo","twoSigmaDo",nbins,0,nbins);
  twoSigmaDo->SetFillColor(kYellow);
  twoSigmaDo->SetLineColor(kYellow);
  twoSigmaDo->SetFillStyle(3001);
  for (Int_t i = 1; i < nbins+1; ++i){
    oneSigmaUp->SetBinContent(i,1);
    oneSigmaDo->SetBinContent(i,-1);
    twoSigmaUp->SetBinContent(i,2);
    twoSigmaDo->SetBinContent(i,-2);
  }

  g3->SetTitle("Nuisance Parameters");

  gStyle->SetOptStat(0);

  TLegend* legend = new TLegend(0.6,0.8,0.85,0.88);
  //legend->SetHeader("The Legend Title","C");
  TLegendEntry* l1 = legend->AddEntry("gr2","B-Fit Only","lep");
  l1->SetMarkerColor(kBlue);
  TLegendEntry* l2 = legend->AddEntry("gr1","S+B Fit","lep");
  l2->SetMarkerColor(kRed);
  legend->SetLineColor(kWhite);

  TCanvas* c2 = new TCanvas("c2","c2",1200,600);
  c2->cd();

  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->Draw();
  pad1->SetBottomMargin(0.35);
  pad1->SetLeftMargin(0.05);
  pad1->SetRightMargin(0.05);
  pad1->cd();
  gr3->GetXaxis()->SetRangeUser(0.,cont-1);
  gr3->GetYaxis()->SetRangeUser(-3.,3.);
  TString title = "Pulls for mass point " + massPoint + ": Signal and Control Regions for variable " + variable ;
  if (region == "CR")
    title = "Pulls for mass point " + massPoint + ": Control Region only for variable " + variable ;
  gr3->SetTitle(title);
  gr2->SetLineColor(kBlue);
  gr1->SetLineColor(kRed);
  gr2->SetMarkerColor(kBlue);
  gr1->SetMarkerColor(kRed);
  gr1->SetMarkerStyle(8);
  gr2->SetMarkerStyle(8);
  gr3->Draw();
  twoSigmaUp->Draw("same");
  twoSigmaDo->Draw("same");
  oneSigmaUp->Draw("same");
  oneSigmaDo->Draw("same");
  if (region == "SB")
    gr1->Draw("ep,same");
  else
    gr2->Draw("ep,same");
  gr3->GetXaxis()->SetLabelSize(0.02);
  legend->Draw();
  c2->Print(folder + "/pulls_" + model + massPoint + "_" + variable + "_" + region + ".png","png");
}

