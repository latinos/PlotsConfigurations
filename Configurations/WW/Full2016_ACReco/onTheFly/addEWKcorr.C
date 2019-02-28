#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TH1F* h;

void initaddEWKcorr(TString fileName, TString histoName){

  std::cout<<histoName<<std::endl;

  TFile* f = new TFile(fileName);

  h = (TH1F*) f -> Get(histoName);

}

float addEWKcorr(float lepPt){

  return h->GetBinContent(h->FindBin(lepPt));

}
